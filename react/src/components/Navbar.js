import React from 'react'

export default function ({themeClickEvent,theme}) {
    console.log(theme);
  return (
    <>
    <nav>
    <div className="nav-wrapper">
      <a href="#" className="brand-logo">CarWorld</a>
      {/*<ul id="nav-mobile" className="right hide-on-med-and-down">
        <li style={{cursor:'pointer',fontWeight:'bold',fontSize:"25px"}} onClick={themeClickEvent}>{theme === 'lightMode'?'darkMode':'lightMode'}</li>
  </ul>*/}
    </div>
  </nav>
    </>
  )
}
