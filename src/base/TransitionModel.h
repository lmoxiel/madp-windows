/**\file TransitionModel.h
 *
 * Authors:
 * Frans Oliehoek <faolieho@science.uva.nl>
 * Matthijs Spaan <mtjspaan@isr.ist.utl.pt>
 *
 * Copyright 2008 Universiteit van Amsterdam, Instituto Superior Tecnico
 *
 * This file is part of MultiAgentDecisionProcess.
 *
 * MultiAgentDecisionProcess is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * MultiAgentDecisionProcess is distributed in the hope that it will
 * be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiAgentDecisionProcess.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * $Id: TransitionModel.h 4016 2010-03-11 16:56:02Z mtjspaan $
 */

/* Only include this header file once. */
#ifndef _TRANSITIONMODEL_H_
#define _TRANSITIONMODEL_H_ 1

/* the include directives */

#include <iostream>
#include <string>
#include "Globals.h"

/// TransitionModel represents the transition model in a decision process.
class TransitionModel
{
private:
    
protected:
    
public:

    /// default Constructor
    TransitionModel(){};

    /// Destructor.
    virtual ~TransitionModel(){}
    
    /// Returns a pointer to a copy of this class.
    virtual TransitionModel* Clone() const = 0;

    virtual std::string SoftPrint() const = 0;
    void Print() const
        { std::cout << SoftPrint();}
};

#endif /* !_TRANSITIONMODEL_H_ */


// Local Variables: ***
// mode:c++ ***
// End: ***
