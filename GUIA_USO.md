# Guía de Uso - Sistema de Registro de Notas

## Configuración Inicial

### 1. Requisitos
- Java 17 o superior instalado
- PostgreSQL instalado y en ejecución
- Maven instalado (opcional, se puede usar el wrapper incluido)

### 2. Configurar la base de datos

Opción A - Usando psql (línea de comandos):
```bash
psql -U postgres
CREATE DATABASE estudiantes_db;
\q
```

Opción B - Usando pgAdmin:
1. Abrir pgAdmin
2. Conectarse al servidor PostgreSQL
3. Click derecho en "Databases" → "Create" → "Database"
4. Nombre: `estudiantes_db`
5. Click "Save"

### 3. Configurar credenciales (si son diferentes)

Editar el archivo `src/main/resources/application.properties`:
```properties
spring.datasource.username=tu_usuario
spring.datasource.password=tu_contraseña
```

### 4. Ejecutar la aplicación

Opción A - Con Maven:
```bash
mvn spring-boot:run
```

Opción B - Con el JAR:
```bash
mvn package -DskipTests
java -jar target/notas-estudiantes-1.0.0.jar
```

### 5. Acceder a la aplicación

Abrir el navegador en: http://localhost:8080

## Uso de la Aplicación

### Página Principal
- Muestra la lista de todos los estudiantes registrados
- Tabla con: código, notas 1-3, y promedio calculado
- Botones de acción para cada estudiante

### Agregar Nuevo Estudiante
1. Click en "Agregar Estudiante" en el menú
2. Completar el formulario:
   - Código del estudiante (único)
   - Nota 1 (0-5): vale 20%
   - Nota 2 (0-5): vale 40%
   - Nota 3 (0-5): vale 40%
3. Click "Guardar"

### Editar Estudiante
1. En la lista, click "Editar" junto al estudiante deseado
2. Modificar los datos necesarios
3. Click "Guardar"

### Ver Informe Individual
1. En la lista, click "Ver Informe" junto al estudiante
2. Se mostrará:
   - Todas las notas del estudiante
   - Cálculo detallado del promedio ponderado
   - Promedio final

### Informe de Promedio Total
1. Click en "Informe Promedio Total" en el menú
2. Se muestra:
   - Promedio general de toda la materia
   - Tabla con todos los estudiantes y sus promedios

### Informe de Notas Extremas
1. Click en "Informe Notas Extremas" en el menú
2. Se muestran para cada evaluación:
   - Nota más alta obtenida
   - Nota más baja obtenida

### Eliminar Estudiante
1. En la lista, click "Eliminar" junto al estudiante
2. Confirmar la eliminación

## Cálculo del Promedio

El promedio se calcula con la siguiente fórmula:

**Promedio = (Nota1 × 0.20) + (Nota2 × 0.40) + (Nota3 × 0.40)**

Ejemplo:
- Nota 1: 4.5
- Nota 2: 4.0
- Nota 3: 4.8

Promedio = (4.5 × 0.20) + (4.0 × 0.40) + (4.8 × 0.40)
Promedio = 0.9 + 1.6 + 1.92
Promedio = 4.42

## Solución de Problemas

### Error: No se puede conectar a la base de datos
- Verificar que PostgreSQL esté en ejecución
- Verificar que la base de datos `estudiantes_db` exista
- Verificar usuario y contraseña en `application.properties`

### Error: Puerto 8080 ya está en uso
Cambiar el puerto en `application.properties`:
```properties
server.port=8081
```

### Error: No se encuentra Java
Verificar la instalación de Java:
```bash
java -version
```
Debe mostrar Java 17 o superior.

## Características Técnicas

- **Framework**: Spring Boot 3.1.5
- **Base de datos**: PostgreSQL con JPA/Hibernate
- **Template engine**: Thymeleaf
- **Arquitectura**: MVC (Model-View-Controller)
- **Persistencia**: Spring Data JPA
- **Build tool**: Maven

## Estructura de la Base de Datos

La tabla `estudiantes` se crea automáticamente con la siguiente estructura:

```sql
CREATE TABLE estudiantes (
    id BIGSERIAL PRIMARY KEY,
    codigo VARCHAR(255) NOT NULL UNIQUE,
    nota1 DOUBLE PRECISION NOT NULL,
    nota2 DOUBLE PRECISION NOT NULL,
    nota3 DOUBLE PRECISION NOT NULL
);
```

## Notas Adicionales

- Las notas deben estar en el rango de 0 a 5
- El código del estudiante debe ser único
- Todos los campos son obligatorios
- Los promedios se muestran con 2 decimales
- La interfaz es HTML5 puro sin estilos CSS
