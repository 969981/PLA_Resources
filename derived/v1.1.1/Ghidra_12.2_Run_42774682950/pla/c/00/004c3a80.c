/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3a80; name: FUN_004c3a80
 */


int FUN_004c3a80(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_8 [2];
  
  if (param_3 < 0) {
    FUN_004014b0(0x14,0xd0,0x10f,"external/openssl/ssl/ssl_lib.c",0x7a1);
    return -1;
  }
  iVar1 = FUN_004c3930(param_1,param_2,(long)param_3,local_8);
  if (iVar1 < 1) {
    local_8[0] = iVar1;
  }
  return local_8[0];
}


