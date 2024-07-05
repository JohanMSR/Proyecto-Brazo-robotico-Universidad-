## Aportando a este Readme

Este readme utiliza un sistema de colaboración único. Por favor, asegúrate de seguir estas reglas al realizar aportaciones:

### Reglas de Colaboración:

1. **Comentarios en lugar de sobrescritura:** No se debe modificar el código existente. En su lugar, se debe agregar un comentario al código con la nueva información.
2. **Escala de Voltaje:** Todos los valores de voltaje deben expresarse en una escala de 0 a 10, donde 0 representa el voltaje mínimo y 10 el voltaje máximo.
3. **Secciones Predefinidas:** Se deben agregar los comentarios en las secciones predefinidas del código. 

### Ejemplo:

**Código Original:**

```C
//Función para calcular la corriente
float calcular_corriente(float voltaje, float resistencia) {
  return voltaje / resistencia;
}
```

**Aportación:**

Se necesita agregar un comentario sobre el rango de voltaje permitido para la función.

**Código con Comentario:**

```python
// Función para calcular la corriente
float calcular_corriente(float voltaje, float resistencia) {
  // Rango de voltaje válido: 2 - 8 (escala 0-10)
  return voltaje / resistencia;
}
```

### Resumen de las Secciones Predefinidas:

* **Rango de Voltaje:** Especifica el rango de voltaje válido para la sección de código.
* **Descripción:** Describe la función o el bloque de código.
* **Notas:** Se utiliza para agregar comentarios adicionales o advertencias.


### Cómo realizar una aportación:

1. **Crea una rama (branch) nueva:** Usa `git checkout -b nueva-característica` para crear una nueva rama para tu cambio.
2. **Agrega tus comentarios:** Edita el archivo y agrega tus comentarios en las secciones predefinidas.
3. **Crea un commit:** Guarda tus cambios con `git commit -m "Mensaje del commit"`.
4. **Envía tus cambios:** Usa `git push origin nueva-característica` para enviar tus cambios a la rama.
5. **Crea una solicitud de extracción (Pull Request):** En la plataforma de gestión de código (por ejemplo, GitHub), crea una solicitud de extracción para que tus cambios sean revisados.

### Sugerencias:

* Es importante que los comentarios sean claros y concisos.
* Utiliza un lenguaje técnico adecuado.
* Asegúrate de que tus cambios no rompen el código existente.

### Preguntas Frecuentes:

* **¿Por qué no se permite sobrescribir el código?**  Este sistema de colaboración asegura la transparencia y la trazabilidad de los cambios. 
* **¿Qué pasa si necesito hacer un cambio importante en el código?**  Es mejor crear una nueva función o módulo para evitar modificar el código existente.
* **¿Puedo agregar más secciones predefinidas?** Si es necesario, puedes solicitar la adición de nuevas secciones.

Esperamos que esta guía te sea útil para realizar aportaciones al repositorio. ¡Gracias por tu contribución!

