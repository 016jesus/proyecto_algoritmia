package com.estudiantes.notas.model;

import jakarta.persistence.*;

@Entity
@Table(name = "estudiantes")
public class Estudiante {
    
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;
    
    @Column(nullable = false, unique = true)
    private String codigo;
    
    @Column(nullable = false)
    private Double nota1;
    
    @Column(nullable = false)
    private Double nota2;
    
    @Column(nullable = false)
    private Double nota3;
    
    // Constructor vacío
    public Estudiante() {
    }
    
    // Constructor con parámetros
    public Estudiante(String codigo, Double nota1, Double nota2, Double nota3) {
        this.codigo = codigo;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
    }
    
    // Getters y Setters
    public Long getId() {
        return id;
    }
    
    public void setId(Long id) {
        this.id = id;
    }
    
    public String getCodigo() {
        return codigo;
    }
    
    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }
    
    public Double getNota1() {
        return nota1;
    }
    
    public void setNota1(Double nota1) {
        this.nota1 = nota1;
    }
    
    public Double getNota2() {
        return nota2;
    }
    
    public void setNota2(Double nota2) {
        this.nota2 = nota2;
    }
    
    public Double getNota3() {
        return nota3;
    }
    
    public void setNota3(Double nota3) {
        this.nota3 = nota3;
    }
    
    // Método para calcular el promedio ponderado
    // Nota1: 20%, Nota2: 40%, Nota3: 40%
    public Double getPromedio() {
        return (nota1 * 0.20) + (nota2 * 0.40) + (nota3 * 0.40);
    }
}
