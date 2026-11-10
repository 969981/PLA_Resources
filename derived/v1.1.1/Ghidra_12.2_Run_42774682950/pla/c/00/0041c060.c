/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041c060; name: thunk_FUN_0041bcd0
 */


undefined8 thunk_FUN_0041bcd0(long *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0x94;
    uVar4 = 0x192;
LAB_0041bd28:
    FUN_004014b0(6,0x7f,uVar3,"external/openssl/crypto/evp/evp_enc.c",uVar4);
    return 0;
  }
  lVar5 = *param_1;
  if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
    uVar2 = (**(code **)(lVar5 + 0x20))(param_1,param_2,0,0);
    if ((int)uVar2 < 0) {
      return 0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *(uint *)(lVar5 + 4);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("assertion failed: b <= sizeof(ctx->buf)","external/openssl/crypto/evp/evp_enc.c",
                 0x1a0);
  }
  if (uVar2 != 1) {
    uVar1 = *(uint *)((long)param_1 + 0x14);
    if ((*(byte *)((long)param_1 + 0x71) & 1) == 0) {
      if (uVar1 < uVar2) {
        memset((void *)((long)param_1 + (ulong)uVar1 + 0x38),uVar2 - uVar1,
               (ulong)(uVar2 + ~uVar1) + 1);
      }
      uVar3 = (**(code **)(lVar5 + 0x20))(param_1,param_2,param_1 + 7,uVar2);
      if ((int)uVar3 != 0) {
        *param_3 = uVar2;
      }
      return uVar3;
    }
    if (uVar1 != 0) {
      uVar3 = 0x8a;
      uVar4 = 0x1a9;
      goto LAB_0041bd28;
    }
  }
  *param_3 = 0;
  return 1;
}


