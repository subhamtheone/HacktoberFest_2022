import axios from 'axios'

const BASE_URL = "https://jsonplaceholder.typicode.com/photos"

function getRandomNumber() {
    return Math.floor(Math.random() * 5000);
  }
fetch(`${BASE_URL}/${getRandomNumber()}`)
.then(response => response.json())
.then(data => console.log(data));