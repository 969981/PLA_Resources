/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c38e0; name: FUN_004c38e0
 */


int FUN_004c38e0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_8 [2];
  
  if (param_3 < 0) {
    FUN_004014b0(0x14,0xdf,0x10f,"external/openssl/ssl/ssl_lib.c",0x6e2);
    return -1;
  }
  iVar1 = FUN_004c3660(param_1,param_2,(long)param_3,local_8);
  if (iVar1 < 1) {
    local_8[0] = iVar1;
  }
  return local_8[0];
}


