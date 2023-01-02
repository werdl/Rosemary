<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
    <title>Rosemary</title>
    <style>
        body {
            font-family: 'Courier New', Courier, monospace;
            background: black !important;
            margin:0 !important;
            text-align: center;
        }
        .nav {
            display:flex;
            flex-direction: row;
            list-style:none;
            font-size:2.25vh;
            overflow: hidden;
            background-color: rgb(90 90 90);
            margin: 0;
            padding: 0;
            
            border-bottom-right-radius: 10px;
            height:7vh;
            justify-content: right;
        }
        p {
            margin-left:20px;
            float:right;
        }

        a {
            color:white;
            text-decoration: none;
        }
        a:hover {
            color: black;
        }
        .c1 {
            margin-right:1vw
        }
        img#logo {
            float:left;
        }
        img#logo {
            background-color: rgb(90 90 90);
            border-bottom-left-radius: 10px;
            height:7vh
        }
        h1,h2,h3 {
            color:white;
        }
        img.lang {
            height:7.5vh;
            width: auto;
        }
        .flex-container {
            display: grid;
        }
        .githublink {
            color:white
        }
        .githublink:hover {
            color:grey
        }
    </style>
</head>
<body>
    <div id="logo">
    <a href="index.html">
    <img id="logo" src="rsmy.svg" alt="logo" height="75vh">
    </a>
    </div>
    <header class="nav">
        <div class="bob">
            <nav>
    <p class="c1"><a href="download.html">Download</a></p>
    <p><a href="about.html">About Us</a></p>
    <p><a href="src/cpp/tab.cpp">Code</a></p>
    <p class=""><a href="http://gonerogueproductions.github.io/rosemary"><i class="fa fa-github"></i>GitHub</a></p>
</div>
</nav>
    </header>
    <h1>A GoneRogue Project</h1>
    <h2>Written in C++ by <a class="githublink" href="http://github.com/werdl">werdl</a></h2>
    <h3>Our goal is to make programming easier and faster.
        We took syntax from several poular languages and made our own.
        Originally written in Python, it is now mainly C++.
    </h3>
    <h3>The id</h3>
</body>
</html>