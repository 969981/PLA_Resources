/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003678a0; name: FUN_003678a0
 */


void FUN_003678a0(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar3 = *(ulong *)(param_1 + 8);
    bVar1 = uVar3 < 3;
    if (uVar3 < 2) {
LAB_003678ec:
      FUN_00367994(param_1,param_2);
      return;
    }
  }
  else {
    if ((param_2 & param_2 - 1) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar3 = *(ulong *)(param_1 + 8);
    bVar1 = uVar3 <= param_2;
    if (uVar3 < param_2) goto LAB_003678ec;
  }
  if (!bVar1) {
    uVar2 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
    if ((uVar3 < 3) ||
       (uVar5 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)
                                                                              ),
                                                                      CONCAT11(POPCOUNT((char)(uVar3
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar3
                                                                                        )))))))),
       uVar4 = NEON_uaddlv(uVar5,1), 1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4))) {
      uVar2 = std::__next_prime(uVar2);
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
    }
    else {
      if (1 < uVar2) {
        uVar2 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar2 - 1) & 0x3f);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
    }
    if (uVar2 < uVar3) {
      FUN_00367994(param_1);
      return;
    }
  }
  return;
}


