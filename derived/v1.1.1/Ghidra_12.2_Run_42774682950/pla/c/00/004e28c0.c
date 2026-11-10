/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e28c0; name: FUN_004e28c0
 */


int FUN_004e28c0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_28;
  void *local_18;
  
  local_18 = (void *)0x0;
  local_28 = (void *)0x0;
  uVar1 = FUN_0044abd0(param_1,&local_18);
  uVar2 = FUN_0044abd0(param_2,&local_28);
  if ((int)(uVar2 | uVar1) < 0) {
    iVar3 = -2;
  }
  else {
    iVar3 = uVar1 - uVar2;
    if (iVar3 == 0) {
      iVar3 = memcmp(local_18,local_28,(long)(int)uVar1);
    }
  }
  FUN_00400420(local_18,"external/openssl/ssl/ssl_cert.c",0x24f);
  FUN_00400420(local_28,"external/openssl/ssl/ssl_cert.c",0x250);
  return iVar3;
}


