/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c820; name: FUN_0041c820
 */


uint FUN_0041c820(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x40) != (code *)0x0) {
    uVar1 = (**(code **)(lVar3 + 0x40))(param_1);
    if (0 < (int)uVar1) {
      return uVar1;
    }
    if (uVar1 != 0xfffffffe) {
      FUN_004014b0(6,0xcc,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x51);
      if ((int)uVar1 < -1) {
        return 0xffffffff;
      }
      return uVar1;
    }
    goto LAB_0041c8f0;
  }
  if (((uint)*(ulong *)(lVar3 + 0x10) >> 0xc & 1) == 0) {
LAB_0041c864:
    uVar1 = 0xffffffff;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 0x10) & 0xf0007;
    if (uVar4 < 0x10002) {
      if (uVar4 - 6 < 2 || uVar4 == 0x10001) {
LAB_0041c8f0:
        FUN_004014b0(6,0xcc,0x6b,"external/openssl/crypto/evp/evp_lib.c",0x51);
        return 0xffffffff;
      }
    }
    else {
      if (uVar4 == 0x10002) {
        return 1;
      }
      if (uVar4 == 0x10003) goto LAB_0041c8f0;
    }
    if (param_2 != 0) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if (0x10 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("assertion failed: l <= sizeof(c->iv)","external/openssl/crypto/evp/evp_lib.c",
                     0x5e);
      }
      uVar2 = FUN_0041ce30(param_2,param_1 + 3,uVar1);
      if (uVar2 != uVar1) goto LAB_0041c864;
      if (0 < (int)uVar1) {
        memcpy(param_1 + 5,param_1 + 3,(ulong)uVar1);
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  FUN_004014b0(6,0xcc,0x7a,"external/openssl/crypto/evp/evp_lib.c",0x51);
  return uVar1;
}


