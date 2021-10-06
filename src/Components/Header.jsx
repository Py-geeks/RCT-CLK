import React from "react";

function Header(){

    return (
        <nav class="navbar navbar-expand-lg navbar-light bg-info">
      <div class="container-fluid">
        <div class="collapse navbar-collapse" id="navbarNav">
          <ul class="navbar-nav">
            <li class="nav-item">
              <a class="nav-link active" aria-current="page" href="#">Home</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#">Gallery</a>
            </li>
            <li class="nav-item">
              <a class="nav-link" href="#">About</a>
            </li>
            <li class="nav-item">
              <a class="nav-link disabled">Contact Us</a>
            </li>
          </ul>
        </div>
      </div>
    </nav>
    );
}

export default Header;