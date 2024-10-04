<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Datos del formulario
    $name = htmlspecialchars(trim($_POST['name']));
    $email = htmlspecialchars(trim($_POST['email']));
    $message = htmlspecialchars(trim($_POST['message']));

    // Configuración de la dirección de correo electrónico donde se enviará el mensaje
    $to = "carlosivanoteroespinosa@gmail.com"; // Correo de la empresa
    $subject = "Nuevo mensaje de contacto de $name";

    // El mensaje que se enviará por correo
    $body = "Nombre: $name\n";
    $body .= "Correo Electrónico: $email\n";
    $body .= "Mensaje:\n$message";

    // Encabezados para que el correo se vea como enviado desde el correo del usuario
    $headers = "From: $email\r\n";
    $headers .= "Reply-To: $email\r\n";
    
    // Envía el correo
    if (mail($to, $subject, $body, $headers)) {
        echo "Mensaje enviado con éxito.";
    } else {
        echo "Hubo un error al enviar el mensaje. Inténtalo de nuevo.";
    }
}
?>
