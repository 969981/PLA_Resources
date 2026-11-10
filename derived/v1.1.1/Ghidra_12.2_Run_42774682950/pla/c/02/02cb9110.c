/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb9110; name: FUN_02cb9110
 */


int FUN_02cb9110(UserHandle *param_1)

{
  int iVar1;
  AsyncNetworkServiceLicenseInfoContext aAStack_40 [32];
  
  nn::account::AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext
            (aAStack_40);
  if (DAT_044089a0 == '\0') {
    nn::account::AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext
              ((AsyncNetworkServiceLicenseInfoContext *)&DAT_044089a8,aAStack_40);
    DAT_044089a0 = '\x01';
  }
  else {
    nn::account::AsyncNetworkServiceLicenseInfoContext::operator=
              ((AsyncNetworkServiceLicenseInfoContext *)&DAT_044089a8,aAStack_40);
  }
  nn::account::AsyncContext::~AsyncContext((AsyncContext *)aAStack_40);
  iVar1 = nn::account::LoadNetworkServiceLicenseInfoAsync
                    ((AsyncNetworkServiceLicenseInfoContext *)&DAT_044089a8,param_1);
  if ((iVar1 != 0) && (DAT_044089a0 != '\0')) {
    nn::account::AsyncContext::~AsyncContext((AsyncContext *)&DAT_044089a8);
    DAT_044089a0 = '\0';
  }
  return iVar1;
}


