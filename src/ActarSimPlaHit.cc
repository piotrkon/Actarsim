/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez Pol
//*-- Date: 04/2008
//*-- Last Update: 16/12/14 by Hector Alvarez
// --------------------------------------------------------------
// Description:
//   A plastic (scintillator) hit
//
// --------------------------------------------------------------
// Comments:
//
//
/////////////////////////////////////////////////////////////////

#include "ActarSimPlaHit.hh"
#include "G4ios.hh"
#include "globals.hh"

ClassImp(ActarSimPlaHit)

ActarSimPlaHit::ActarSimPlaHit(){
  //
  // Constructor with initialization to zero
  //
	
	detectorID = 0;
	xpos=0;
	ypos=0;
	zpos=0;
  time = 0.;
  energy = 0.;
  eBeforePla = 0.;
  eAfterPla = 0.;
  eventID = 0;
  runID = 0;
	trackID=0;

  particleID=0;
  particleCharge=0.;
  particleMass=0.;

  stepsContributing = 0; 
}

ActarSimPlaHit::~ActarSimPlaHit(){
  //
  // Destructor, nothing to do
  //
}


void ActarSimPlaHit::print(void){
  //
  // Printing data information
  //
   
}


