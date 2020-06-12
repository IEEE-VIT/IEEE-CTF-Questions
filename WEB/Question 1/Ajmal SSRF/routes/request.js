const express=require("express")
const router=express.Router()
const bparse=require("body-parser");
const http=require("http")
const fs=require("fs")


//filter
var filter=function (url){
    var regex=/127.0.0.1/g;
    var r2=/localhost/g;
    var r3=/0.0.0.0/g;
    var r4=/0251.00376.000251.0000376/g;
    var r5=/0251.0376.0251.0376/g;
    var r6=/0x7f000001/g;
    var r7=/0x7f.00.00.01/g;
    var r8=/0177.0000.0000.0001/g;
    var r9=/017700000001/g;

    var value=regex.test(url);
    var v2=r2.test(url); var v3=r3.test(url); var v4=r4.test(url); var v5=r5.test(url);var v6=r6.test(url);var v7=r7.test(url); var v8=r8.test(url); var v9=r9.test(url);

    if(value==v2==v3==v4==v5==v6==v7==v8==v9){
        return true;
    }
    else {
        return false;
    }

}

router.post("/proxy",(req,res,next)=>{
    var data = '';
    var url=req.body.url;
    
    if (filter(url)==false){
          try{
            http.get(url, (resp) => {
           
            // A chunk of data has been recieved.
            resp.on('data', (chunk) => {
              data += chunk;
            });
             //res.send(data);
        
            // The whole response has been received. Print out the result.
            
            resp.on('end', () => {
              console.log(data)
             res.send(data)
              
            
            });
            //res.send(data.body)
         }).on("error", (err) => {
             res.send("<h1> Error Fetching URL</h1>")

          });} 
          catch(err){
              console.log(err);
              res.send("<h1>PLease Make sure to enter a valid URL</h1>")
          }
          console.log("hit")
     } 
    else {
        res.send("Blocked URL")
    }
       
    
})
module.exports=router;
