package com.estudiantes.notas.service;

import com.estudiantes.notas.model.Estudiante;
import com.estudiantes.notas.repository.EstudianteRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Optional;

@Service
public class EstudianteService {
    
    @Autowired
    private EstudianteRepository estudianteRepository;
    
    public List<Estudiante> obtenerTodos() {
        return estudianteRepository.findAll();
    }
    
    public Optional<Estudiante> obtenerPorId(Long id) {
        return estudianteRepository.findById(id);
    }
    
    public Optional<Estudiante> obtenerPorCodigo(String codigo) {
        return estudianteRepository.findByCodigo(codigo);
    }
    
    public Estudiante guardar(Estudiante estudiante) {
        return estudianteRepository.save(estudiante);
    }
    
    public void eliminar(Long id) {
        estudianteRepository.deleteById(id);
    }
    
    // Calcular el promedio total de todos los estudiantes
    public Double calcularPromedioTotal() {
        List<Estudiante> estudiantes = estudianteRepository.findAll();
        if (estudiantes.isEmpty()) {
            return 0.0;
        }
        double suma = estudiantes.stream()
                .mapToDouble(Estudiante::getPromedio)
                .sum();
        return suma / estudiantes.size();
    }
    
    // Obtener la nota más alta en cada evaluación
    public Double obtenerNotaMasAltaNota1() {
        Double max = estudianteRepository.findMaxNota1();
        return max != null ? max : 0.0;
    }
    
    public Double obtenerNotaMasAltaNota2() {
        Double max = estudianteRepository.findMaxNota2();
        return max != null ? max : 0.0;
    }
    
    public Double obtenerNotaMasAltaNota3() {
        Double max = estudianteRepository.findMaxNota3();
        return max != null ? max : 0.0;
    }
    
    // Obtener la nota más baja en cada evaluación
    public Double obtenerNotaMasBajaNota1() {
        Double min = estudianteRepository.findMinNota1();
        return min != null ? min : 0.0;
    }
    
    public Double obtenerNotaMasBajaNota2() {
        Double min = estudianteRepository.findMinNota2();
        return min != null ? min : 0.0;
    }
    
    public Double obtenerNotaMasBajaNota3() {
        Double min = estudianteRepository.findMinNota3();
        return min != null ? min : 0.0;
    }
}
