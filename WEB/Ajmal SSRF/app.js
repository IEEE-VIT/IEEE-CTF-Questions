const express=require("express")
const app=express();
const bparser=require("body-parser")
const path=require('path')
const needle=require("needle")
const proxy=require("./routes/request");
var json=bparser.json();

app.use(bparser.urlencoded({ extended: true }));
app.use("/",proxy)


//variables
const port =2640
//index route
app.get("/",(req,res)=>{
    res.sendFile(path.join(__dirname+"/index.html"))

})
app.get('/flag',(req,res)=>{
    res.send("<h2>I seek a few highly intelligent people. I engrain hints and codes in my puzzles. Some have broken the three puzzles I have created. But none have decoded my music, yet...Prepare for Epiphany</h2>")
})

//post route



//server listiner 
app.listen(port,()=>{
    console.log("server started")
})
