import React from 'react'
import Desc from './Description'
import vehical from './api';
import { useState } from 'react';
import Navbar from "./Navbar";

export default function Home() {
    //console.log(vehical);
    const [data, setdata] = useState(vehical);

    const [update, setupdate] = useState("");

    const [toggle, settoggle] = useState(0);

    const submitHandler = (upData) => {
        setupdate(upData);
        settoggle(1);
        //console.log(update);
    }

    function backclick() {
        settoggle(0);
    }

    if (toggle===0) {
        return (
            <>
                <div>
                    
                </div>
                <div className="row 4">
                    {
                        data.map((data, index) => {
                            return (
                                <>
                                    <div className="col s12 m3" key={data.id}>
                                        <div className="card medium">
                                            <div className="card-image">
                                                <img src={data.image} alt="" />
                                                <span className="card-title" style={{color:'smoke',fontWeight:'bolder'}}>{data.name}</span>
                                            </div>
                                            <div className="card-content">
                                                <p>{data.description}</p>
                                            </div>
                                            <div className="card-action">
                                                <button className="btn waves-effect red" type="submit" name="action" onClick={() => submitHandler(data)}>View Details</button>
                                            </div>
                                        </div>
                                    </div>
                                </>
                            )
                        })

                    }
                </div>
            </>
        )
    }
    if (toggle === 1) {
        return (
            <>
                <Desc carDetails={update} backclick={backclick}></Desc>
            </>
        )
    }

}
