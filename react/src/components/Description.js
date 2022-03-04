import React from 'react'

export default function Description({ carDetails,backclick }) {
  //console.log(carDetails);

  if (!carDetails) {
    return (
      <>
      </>
    )
  }
  else {
    return (
        <div className="row 4" style={{marginTop:"5px"}}>
          <div className="col m10 m5" key={carDetails.id}>
          <i class="material-icons" onClick={backclick} style={{cursor:'pointer'}}>arrow_back</i>
            <div className="card large" style={{height:'100%',width:'80%',marginLeft:'190px',marginTop:'-30px'}}>
              <div className="card-image">
                <img src={carDetails.image} alt="" />
                <span className="card-title" style={{ fontSize: '40px',fontWeight:'bolder'}}>{carDetails.name}</span>
              </div>
              <div className="card-content">
                <p style={{ fontWeight: 'bolder', fontSize: 'large', marginTop:'-15px' }}>Description :</p>{carDetails.description}
                <p style={{ fontWeight: 'bolder', fontSize: 'large' }}>Price : </p>{carDetails.cost}
                <p style={{ fontWeight: 'bolder', fontSize: 'large' }}>Company : </p>{carDetails.company}
                <p style={{ fontWeight: 'bolder', fontSize: 'large' }}>Rating : </p>{carDetails.rating}
              </div>
              <div className="card-content">
              </div>
            </div>
          </div>
        </div>

    )


  }
}
