/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#include "AddDamperAction.h"
#include "FEProblem.h"

template <>
InputParameters
validParams<AddDamperAction>()
{
  return validParams<MooseObjectAction>();
}

AddDamperAction::AddDamperAction(InputParameters params) : MooseObjectAction(params) {}

void
AddDamperAction::act()
{
  _problem->addDamper(_type, _name, _moose_object_pars);
}
