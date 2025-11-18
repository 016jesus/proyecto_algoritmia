package com.estudiantes.notas.repository;

import com.estudiantes.notas.model.Estudiante;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

import java.util.Optional;

@Repository
public interface EstudianteRepository extends JpaRepository<Estudiante, Long> {
    
    Optional<Estudiante> findByCodigo(String codigo);
    
    @Query("SELECT MAX(e.nota1) FROM Estudiante e")
    Double findMaxNota1();
    
    @Query("SELECT MAX(e.nota2) FROM Estudiante e")
    Double findMaxNota2();
    
    @Query("SELECT MAX(e.nota3) FROM Estudiante e")
    Double findMaxNota3();
    
    @Query("SELECT MIN(e.nota1) FROM Estudiante e")
    Double findMinNota1();
    
    @Query("SELECT MIN(e.nota2) FROM Estudiante e")
    Double findMinNota2();
    
    @Query("SELECT MIN(e.nota3) FROM Estudiante e")
    Double findMinNota3();
}
