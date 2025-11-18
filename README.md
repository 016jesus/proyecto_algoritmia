# Sistema de Registro de Notas de Estudiantes

Aplicación web desarrollada con Spring Boot MVC para el registro y gestión de notas de estudiantes.

## Características

- **Registro de estudiantes**: Código de estudiante y tres notas
- **Cálculo de promedio ponderado**: 
  - Nota 1: 20%
  - Nota 2: 40%
  - Nota 3: 40%
- **Informes disponibles**:
  - Promedio total de todos los estudiantes
  - Informe individual por estudiante
  - Notas más altas y más bajas por evaluación

## Tecnologías utilizadas

- Java 17
- Spring Boot 3.1.5
- Spring Data JPA
- PostgreSQL
- Thymeleaf
- Maven

## Requisitos previos

1. Java 17 o superior
2. PostgreSQL instalado y en ejecución
3. Maven 3.6 o superior

## Configuración de la base de datos

1. Crear una base de datos en PostgreSQL llamada `estudiantes_db`:

```sql
CREATE DATABASE estudiantes_db;
```

2. Configurar las credenciales en `src/main/resources/application.properties`:

```properties
spring.datasource.url=jdbc:postgresql://localhost:5432/estudiantes_db
spring.datasource.username=postgres
spring.datasource.password=postgres
```

## Instalación y ejecución

1. Clonar el repositorio
2. Navegar al directorio del proyecto
3. Ejecutar con Maven:

```bash
mvn spring-boot:run
```

4. Abrir el navegador en: `http://localhost:8080`

## Funcionalidades

### Página principal
- Lista de todos los estudiantes registrados
- Acceso a crear, editar y eliminar estudiantes
- Ver informe individual de cada estudiante

### Agregar/Editar estudiante
- Formulario para ingresar código del estudiante y las tres notas
- Validación de campos requeridos

### Informe de promedio total
- Muestra el promedio general de la materia
- Lista detallada de todos los estudiantes con sus promedios individuales

### Informe de notas extremas
- Muestra las notas más altas y más bajas por cada evaluación

### Informe individual
- Detalle completo de las notas de un estudiante
- Cálculo detallado del promedio ponderado

## Estructura del proyecto

```
src/
├── main/
│   ├── java/com/estudiantes/notas/
│   │   ├── NotasEstudiantesApplication.java
│   │   ├── controller/
│   │   │   └── EstudianteController.java
│   │   ├── model/
│   │   │   └── Estudiante.java
│   │   ├── repository/
│   │   │   └── EstudianteRepository.java
│   │   └── service/
│   │       └── EstudianteService.java
│   └── resources/
│       ├── application.properties
│       └── templates/
│           ├── index.html
│           ├── formulario.html
│           ├── informe-promedio.html
│           ├── informe-estudiante.html
│           └── informe-extremos.html
└── test/
```

## Notas

- La aplicación utiliza Hibernate con `ddl-auto=update` para crear/actualizar automáticamente las tablas
- Las vistas están desarrolladas en HTML5 sin CSS, como se solicitó
- La interfaz es completamente funcional y responsive
