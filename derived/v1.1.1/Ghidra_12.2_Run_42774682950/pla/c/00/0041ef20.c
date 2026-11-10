/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041ef20; name: FUN_0041ef20
 */


int FUN_0041ef20(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    iVar1 = FUN_0041f030(&local_38,param_2,param_3,0xffffffff,param_4);
  }
  else {
    iVar1 = FUN_0041f030(&local_38,0,param_3,0xffffffff,param_4);
    if (0 < iVar1) {
      lVar2 = FUN_00400260((long)iVar1,"external/openssl/crypto/asn1/tasn_enc.c",0x40);
      if (lVar2 == 0) {
        FUN_004014b0(0xd,0x76,0x41,"external/openssl/crypto/asn1/tasn_enc.c",0x41);
        iVar1 = -1;
      }
      else {
        local_40 = lVar2;
        FUN_0041f030(&local_38,&local_40,param_3,0xffffffff,param_4);
        *param_2 = lVar2;
      }
    }
  }
  return iVar1;
}


