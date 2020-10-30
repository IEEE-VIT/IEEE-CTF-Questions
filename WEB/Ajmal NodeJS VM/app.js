const express=require("express")
const app=express();
const path=require("path")
const bparser=require("body-parser");
const { error } = require("console");
const port=2640;
app.use(bparser.urlencoded({extended:true}));
console.log(__dirname)


app.get("/",(req,res)=>{
  res.sendFile(path.join(__dirname+"/index.html"))
})
app.post("/add",(req,res)=>{
    var v1=req.body.v1;
    var v2=req.body.v2;
    
    // console.log(typeof(v1));

    const vm=require("vm");
    //try {
      const ajmal=123;
      var value=vm.runInNewContext(v1+v2);
     // if(!error){
       // throw error;
     // }
      //else {
        // console.log(value);
        // console.log(typeof(value))
        var va1=JSON.stringify(value);
        // console.log(typeof(va1))
        res.send(va1);
     // }
    //}
    //catch(err){
    //  return res.send("<h1>Eval IS EVil But Not In This CASE")
    //}
   // res.send(value.toString());
});



//listiner
app.listen(port,()=>{
    console.log("Started")
})


