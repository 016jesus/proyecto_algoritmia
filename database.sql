-- Script para crear la base de datos PostgreSQL
-- Ejecutar este script antes de iniciar la aplicación

-- Crear la base de datos
CREATE DATABASE estudiantes_db;

-- Conectarse a la base de datos
\c estudiantes_db;

-- La tabla se creará automáticamente por Hibernate
-- pero aquí está la estructura para referencia:

-- CREATE TABLE estudiantes (
--     id BIGSERIAL PRIMARY KEY,
--     codigo VARCHAR(255) NOT NULL UNIQUE,
--     nota1 DOUBLE PRECISION NOT NULL,
--     nota2 DOUBLE PRECISION NOT NULL,
--     nota3 DOUBLE PRECISION NOT NULL
-- );

-- Datos de ejemplo (opcional)
-- INSERT INTO estudiantes (codigo, nota1, nota2, nota3) VALUES 
-- ('EST001', 4.5, 4.8, 4.7),
-- ('EST002', 3.2, 4.0, 3.8),
-- ('EST003', 5.0, 4.5, 4.9);
