body {
    font-family: 'Arial', sans-serif;
    background: linear-gradient(135deg, #ff9a9e, #fad0c4);
    color: #333;
    margin: 0;
    padding: 0;
    text-align: center;
}

header {
    background: linear-gradient(135deg, #667eea, #764ba2);
    color: #fff;
    padding: 20px;
    border-bottom: 5px solid #6c5ce7;
    box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
}

header h1 {
    font-size: 2.5em;
    margin: 0;
    text-transform: uppercase;
    letter-spacing: 2px;
}

main {
    padding: 20px;
}

section {
    background: rgba(255, 255, 255, 0.9);
    margin: 20px 0;
    padding: 20px;
    border-radius: 20px;
    box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);
    transform: scale(0.95);
    transition: transform 0.5s ease-in-out;
}

section:hover {
    transform: scale(1);
}

section h2 {
    background: linear-gradient(135deg, #ff9a9e, #fad0c4);
    color: #333;
    padding: 10px;
    border-radius: 10px;
    text-transform: uppercase;
    letter-spacing: 1px;
    font-size: 1.5em;
}

.character p {
    max-width: 600px;
    font-size: 1.2em;
    background: #ffeb3b;
    padding: 20px;
    border-radius: 20px;
    border: 2px solid #3399ff;
    box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
    margin: 0 auto; /* Centra il testo */
}

.contact form {
    display: flex;
    flex-direction: column;
    align-items: center;
}

.contact label, .contact input, .contact textarea {
    width: 100%;
    max-width: 500px;
    margin-bottom: 10px;
}

.contact input, .contact textarea {
    padding: 10px;
    border-radius: 10px;
    border: 2px solid #3399ff;
    font-size: 1em;
}

.contact input[type="submit"] {
    background-color: #3399ff;
    color: white;
    border: none;
    cursor: pointer;
    padding: 10px 20px;
    font-size: 1.2em;
    border-radius: 10px;
    transition: background-color 0.3s;
}

.contact input[type="submit"]:hover {
    background-color: #0066cc;
}
