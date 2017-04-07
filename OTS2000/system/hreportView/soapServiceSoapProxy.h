/* soapServiceSoapProxy.h
   Generated by gSOAP 2.7.6c from hreport.h
   Copyright (C) 2000-2005, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapServiceSoap_H
#define soapServiceSoap_H
#include "soapH.h"
class ServiceSoap
{   public:
	struct soap *soap;
	const char *endpoint;
	ServiceSoap()
	{ soap = soap_new(); endpoint = "http://192.169.11.6:81/hreportwebservice/hreport.asmx"; if (soap && !soap->namespaces) { static const struct Namespace namespaces[] = 
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://www.w3.org/2003/05/soap-envelope", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://www.w3.org/2003/05/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns1", "http://192.168.103.21/hreportservice/", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap->namespaces = namespaces; } };
	virtual ~ServiceSoap() { if (soap) { soap_destroy(soap); soap_end(soap); soap_done(soap); free((void*)soap); } };
	virtual int __ns1__GetTemplate(_ns1__GetTemplate *ns1__GetTemplate, _ns1__GetTemplateResponse *ns1__GetTemplateResponse) { return soap ? soap_call___ns1__GetTemplate(soap, endpoint, NULL, ns1__GetTemplate, ns1__GetTemplateResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateConfig(_ns1__GetTemplateConfig *ns1__GetTemplateConfig, _ns1__GetTemplateConfigResponse *ns1__GetTemplateConfigResponse) { return soap ? soap_call___ns1__GetTemplateConfig(soap, endpoint, NULL, ns1__GetTemplateConfig, ns1__GetTemplateConfigResponse) : SOAP_EOM; };
	virtual int __ns1__Query(_ns1__Query *ns1__Query, _ns1__QueryResponse *ns1__QueryResponse) { return soap ? soap_call___ns1__Query(soap, endpoint, NULL, ns1__Query, ns1__QueryResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateTree(_ns1__GetTemplateTree *ns1__GetTemplateTree, _ns1__GetTemplateTreeResponse *ns1__GetTemplateTreeResponse) { return soap ? soap_call___ns1__GetTemplateTree(soap, endpoint, NULL, ns1__GetTemplateTree, ns1__GetTemplateTreeResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateInformation(_ns1__GetTemplateInformation *ns1__GetTemplateInformation, _ns1__GetTemplateInformationResponse *ns1__GetTemplateInformationResponse) { return soap ? soap_call___ns1__GetTemplateInformation(soap, endpoint, NULL, ns1__GetTemplateInformation, ns1__GetTemplateInformationResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplate_(_ns1__GetTemplate *ns1__GetTemplate, _ns1__GetTemplateResponse *ns1__GetTemplateResponse) { return soap ? soap_call___ns1__GetTemplate_(soap, endpoint, NULL, ns1__GetTemplate, ns1__GetTemplateResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateConfig_(_ns1__GetTemplateConfig *ns1__GetTemplateConfig, _ns1__GetTemplateConfigResponse *ns1__GetTemplateConfigResponse) { return soap ? soap_call___ns1__GetTemplateConfig_(soap, endpoint, NULL, ns1__GetTemplateConfig, ns1__GetTemplateConfigResponse) : SOAP_EOM; };
	virtual int __ns1__Query_(_ns1__Query *ns1__Query, _ns1__QueryResponse *ns1__QueryResponse) { return soap ? soap_call___ns1__Query_(soap, endpoint, NULL, ns1__Query, ns1__QueryResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateTree_(_ns1__GetTemplateTree *ns1__GetTemplateTree, _ns1__GetTemplateTreeResponse *ns1__GetTemplateTreeResponse) { return soap ? soap_call___ns1__GetTemplateTree_(soap, endpoint, NULL, ns1__GetTemplateTree, ns1__GetTemplateTreeResponse) : SOAP_EOM; };
	virtual int __ns1__GetTemplateInformation_(_ns1__GetTemplateInformation *ns1__GetTemplateInformation, _ns1__GetTemplateInformationResponse *ns1__GetTemplateInformationResponse) { return soap ? soap_call___ns1__GetTemplateInformation_(soap, endpoint, NULL, ns1__GetTemplateInformation, ns1__GetTemplateInformationResponse) : SOAP_EOM; };
};
#endif