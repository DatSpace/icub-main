/*
 * Copyright (C) 2007-2009 Arjan Gijsberts @ Italian Institute of Technology
 * CopyPolicy: Released under the terms of the GNU GPL v2.0.
 *
 * The standard event listener class for predict events.
 *
 */

#ifndef __ICUB_TRAINEVENTLISTENER__
#define __ICUB_TRAINEVENTLISTENER__

#include "iCub/IEventListener.h"
#include "iCub/TrainEvent.h"

namespace iCub {
namespace contrib {
namespace learningmachine {

/**
 * 
 * \see iCub::contrib::learningmachine::IEventListener
 * 
 * \author Arjan Gijsberts
 */

class TrainEventListener : virtual public IEventListener {
protected:

public:

    /**
     * Constructor
     */
    TrainEventListener(std::string name = "train");

    /**
     * Destructor
     */
    virtual ~TrainEventListener();

    /*
     * Inherited from EventListener.
     */
    void handle(TrainEvent& e) {
    }

    /*
     * Inherited from IEventListener.
     */
    IEventListener* create() {
        return new TrainEventListener(this->getName());
    }

};

} // learningmachine
} // contrib
} // iCub

#endif
