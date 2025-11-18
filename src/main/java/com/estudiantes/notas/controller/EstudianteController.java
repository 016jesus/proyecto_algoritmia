package com.estudiantes.notas.controller;

import com.estudiantes.notas.model.Estudiante;
import com.estudiantes.notas.service.EstudianteService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.Optional;

@Controller
public class EstudianteController {
    
    @Autowired
    private EstudianteService estudianteService;
    
    // Página principal - lista de estudiantes
    @GetMapping("/")
    public String listarEstudiantes(Model model) {
        List<Estudiante> estudiantes = estudianteService.obtenerTodos();
        model.addAttribute("estudiantes", estudiantes);
        return "index";
    }
    
    // Formulario para agregar nuevo estudiante
    @GetMapping("/nuevo")
    public String mostrarFormularioNuevo(Model model) {
        model.addAttribute("estudiante", new Estudiante());
        return "formulario";
    }
    
    // Guardar nuevo estudiante
    @PostMapping("/guardar")
    public String guardarEstudiante(@ModelAttribute Estudiante estudiante) {
        estudianteService.guardar(estudiante);
        return "redirect:/";
    }
    
    // Formulario para editar estudiante
    @GetMapping("/editar/{id}")
    public String mostrarFormularioEditar(@PathVariable Long id, Model model) {
        Optional<Estudiante> estudiante = estudianteService.obtenerPorId(id);
        if (estudiante.isPresent()) {
            model.addAttribute("estudiante", estudiante.get());
            return "formulario";
        }
        return "redirect:/";
    }
    
    // Eliminar estudiante
    @GetMapping("/eliminar/{id}")
    public String eliminarEstudiante(@PathVariable Long id) {
        estudianteService.eliminar(id);
        return "redirect:/";
    }
    
    // Informe de promedio total
    @GetMapping("/informe-promedio")
    public String informePromedioTotal(Model model) {
        Double promedioTotal = estudianteService.calcularPromedioTotal();
        List<Estudiante> estudiantes = estudianteService.obtenerTodos();
        model.addAttribute("promedioTotal", promedioTotal);
        model.addAttribute("estudiantes", estudiantes);
        return "informe-promedio";
    }
    
    // Informe por estudiante
    @GetMapping("/informe-estudiante/{id}")
    public String informeEstudiante(@PathVariable Long id, Model model) {
        Optional<Estudiante> estudiante = estudianteService.obtenerPorId(id);
        if (estudiante.isPresent()) {
            model.addAttribute("estudiante", estudiante.get());
            return "informe-estudiante";
        }
        return "redirect:/";
    }
    
    // Informe de notas más altas y más bajas
    @GetMapping("/informe-extremos")
    public String informeExtremos(Model model) {
        model.addAttribute("maxNota1", estudianteService.obtenerNotaMasAltaNota1());
        model.addAttribute("maxNota2", estudianteService.obtenerNotaMasAltaNota2());
        model.addAttribute("maxNota3", estudianteService.obtenerNotaMasAltaNota3());
        model.addAttribute("minNota1", estudianteService.obtenerNotaMasBajaNota1());
        model.addAttribute("minNota2", estudianteService.obtenerNotaMasBajaNota2());
        model.addAttribute("minNota3", estudianteService.obtenerNotaMasBajaNota3());
        return "informe-extremos";
    }
}
