/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c620; name: FUN_0041c620
 */


int FUN_0041c620(undefined8 *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  if (*(code **)(piVar2 + 0xe) == (code *)0x0) {
    if (((uint)*(ulong *)(piVar2 + 4) >> 0xc & 1) == 0) {
      iVar1 = -1;
LAB_0041c67c:
      FUN_004014b0(6,0xcd,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x2e);
      return iVar1;
    }
    uVar3 = *(ulong *)(piVar2 + 4) & 0xf0007;
    if (uVar3 < 0x10002) {
      if (uVar3 - 6 < 2 || uVar3 == 0x10001) goto LAB_0041c724;
    }
    else {
      if (uVar3 == 0x10003) goto LAB_0041c724;
      if (uVar3 == 0x10002) {
        if (*piVar2 == 0xf6) {
          FUN_0041ec80(param_2,5,0);
          return 1;
        }
        return 1;
      }
    }
    if (param_2 == 0) {
      iVar1 = 0;
      goto LAB_0041c67c;
    }
    if (0x10 < (uint)piVar2[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("assertion failed: j <= sizeof(c->iv)","external/openssl/crypto/evp/evp_lib.c",
                   0x6f);
    }
    iVar1 = FUN_0041cdb0(param_2,param_1 + 3);
  }
  else {
    iVar1 = (**(code **)(piVar2 + 0xe))();
  }
  if (0 < iVar1) {
    return iVar1;
  }
  if (iVar1 != -2) {
    FUN_004014b0(6,0xcd,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x2e);
    if (iVar1 < -1) {
      return -1;
    }
    return iVar1;
  }
LAB_0041c724:
  FUN_004014b0(6,0xcd,0xe4,"external/openssl/crypto/evp/evp_lib.c",0x2e);
  return -1;
}


