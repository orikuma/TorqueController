// -*- mode: c++; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4; -*-
#ifndef __NULL_SERVICE_H__
#define __NULL_SERVICE_H__

#include "TorqueControllerService.hh"

using namespace OpenHRP;

class TorqueController;

class TorqueControllerService_impl
	: public virtual POA_OpenHRP::TorqueControllerService,
	  public virtual PortableServer::RefCountServantBase
{
public:
	TorqueControllerService_impl();
	virtual ~TorqueControllerService_impl();

	CORBA::Boolean startTorqueControl(const char *jointName);
	CORBA::Boolean stopTorqueControl(const char *jointName);
	CORBA::Boolean setReferenceTorque(const char *jointName, double tauRef);
	
	void torque_controller(TorqueController *i_torque_controller);
private:
	TorqueController *m_torque_controller;
};

#endif
