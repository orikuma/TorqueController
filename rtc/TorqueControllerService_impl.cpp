
// -*- mode: c++; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4; -*-
#include "TorqueControllerService_impl.h"
#include "TorqueController.h"

TorqueControllerService_impl::TorqueControllerService_impl() : m_torque_controller(NULL)
{
}

TorqueControllerService_impl::~TorqueControllerService_impl()
{
}

CORBA::Boolean TorqueControllerService_impl::startTorqueControl(const char *jointName)
{
	return m_torque_controller->startTorqueControl(std::string(jointName));
}

CORBA::Boolean TorqueControllerService_impl::stopTorqueControl(const char *jointName)
{
	return m_torque_controller->stopTorqueControl(std::string(jointName));
}

CORBA::Boolean TorqueControllerService_impl::setReferenceTorque(const char *jointName, double tauRef)
{
	return m_torque_controller->setReferenceTorque(std::string(jointName), tauRef);
}

void TorqueControllerService_impl::torque_controller(TorqueController *i_torque_controller)
{
	m_torque_controller = i_torque_controller;
}

