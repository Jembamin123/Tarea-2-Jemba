# Tarea 2 (individual o en pareja)

## Objetivos

● Uso de listas y mapas ordenados en el lenguaje de programación C.
● Proponer una solución eficiente para el problema planteado.

## Actividad

Luis está desarrollando una aplicación para gestionar la información turística de una ciudad. La aplicación debe permitir registrar puntos de interés turístico, mostrar sus datos, eliminar sitios, y manejar una lista de turistas con sus respectivas listas de lugares favoritos.

Cada punto de interés turístico contiene: nombre, tipo (museo, parque, monumento, etc.), dirección, horario, y una breve descripción.

Cada turista está identificado por su número de pasaporte y contiene: nombre, país de origen, y una lista de lugares favoritos que ha visitado o desea visitar.

Se propone el siguiente menú para la aplicación:

1. **Registrar punto de interés** (char* nombre, char* tipo, char* dirección, char* horario, char* descripción): El usuario ingresa los datos del lugar y la aplicación los almacena. La validación de los datos debe asegurar que ningún campo char* tenga un largo mayor a 100 caracteres.
2. **Mostrar datos de punto de interés** (char* nombre): El usuario ingresa el nombre del lugar y la aplicación muestra sus datos. Si no existe, se muestra un aviso.
3. **Eliminar punto de interés** (char* nombre): El usuario ingresa el nombre del lugar y la aplicación lo elimina. Si no existe, se muestra un aviso.
4. **Registrar turista** (char* pasaporte, char* nombre, char* país): El usuario ingresa los datos del turista y la aplicación los almacena.
5. **Agregar lugar favorito a turista** (char* pasaporte, char* nombre_lugar): El usuario ingresa el pasaporte del turista y el nombre del lugar favorito, y la aplicación lo agrega a la lista de lugares favoritos del turista.
6. **Mostrar turistas por país** (char* país): La aplicación muestra todos los turistas de un país específico (ordenados por su número de pasaporte) y sus listas de lugares favoritos.
7. **Mostrar todos los puntos de interés de un tipo** (char* tipo): La aplicación muestra todos los lugares de un tipo específico (por ejemplo, todos los museos).
8. **Importar puntos de interés y turistas desde archivos CSV** (char* nombre_archivo_puntos, char* nombre_archivo_turistas): El usuario ingresa los nombres de archivo y la aplicación carga todos los puntos de interés y turistas, incluyendo las listas de lugares favoritos.
9. **Exportar puntos de interés y turistas a archivos CSV** (char* nombre_archivo_puntos, char* nombre_archivo_turistas): La aplicación exporta todos los puntos de interés y turistas, sus datos y las listas de lugares favoritos a archivos CSV indicados por el usuario.