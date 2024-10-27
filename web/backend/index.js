//const app = require("express");
import express from "express";

const app = express();
// By default port for http
const port = 8080;
// By default port for https
//const port = 4434


// To start a server
app.listen(port, () => {
    // Ideally DB connections check kr lete hai idhar
    console.log(`Listening on port : ${port}`);
})


// To make a get request
app.get('/', (req, res) => {
    res.send("hello");
})
