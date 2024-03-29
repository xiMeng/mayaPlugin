//
// Copyright (C) syntax 
// 
// File: pluginMain.cpp
//
// Author: Maya Plug-in Wizard 2.0
//

#include <maya/MFnPlugin.h>
#include "syntax.h"

MStatus initializePlugin( MObject obj )
//
//	Description:
//		this method is called when the plug-in is loaded into Maya.  It 
//		registers all of the services that this plug-in provides with 
//		Maya.
//
//	Arguments:
//		obj - a handle to the plug-in object (use MFnPlugin to access it)
//
{ 
	MStatus   status;
	MFnPlugin plugin( obj, "syntax", "2018", "Any");
	plugin.registerCommand("syntax", syntax::creator);
	MGlobal::displayInfo("插件加载成功");

	// Add plug-in feature registration here
	//

	return status;
}

MStatus uninitializePlugin( MObject obj )
//
//	Description:
//		this method is called when the plug-in is unloaded from Maya. It 
//		deregisters all of the services that it was providing.
//
//	Arguments:
//		obj - a handle to the plug-in object (use MFnPlugin to access it)
//
{
	MStatus   status;
	MFnPlugin plugin( obj );
	plugin.deregisterCommand("syntax");
	MGlobal::displayInfo("插件卸载成功");
	// Add plug-in feature deregistration here
	//

	return status;
}
