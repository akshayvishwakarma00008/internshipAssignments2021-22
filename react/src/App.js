import Home from "./components/Home";
import Navbar from "./components/Navbar";
import { useState } from "react";


function App() {

  const [theme, settheme] = useState("lightMode");
  //console.log(theme);

  const themeClickEvent = ()=>{
    if (theme == "lightMode") {
      settheme("darkMode");
      document.body.style = 'background: white;';
      
    }else{
      settheme("lightMode")
      document.body.style = 'background: black;';
    }

  }

  
  

  return (
    <>
      
      <div >
      <Navbar themeClickEvent={themeClickEvent} theme={theme}></Navbar>
      <Home></Home>
      </div>

    </>
  );
}

export default App;