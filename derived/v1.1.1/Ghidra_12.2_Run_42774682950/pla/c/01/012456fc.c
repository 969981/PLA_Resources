/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012456fc; name: FUN_012456fc
 */


void FUN_012456fc(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  
  FUN_01232f94(param_1 + 0x90);
  uVar1 = *(uint *)(param_1 + 0x1a0);
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (iVar2 == 0) {
    pbVar6 = *(byte **)(param_1 + 0x128);
    lVar5 = *(long *)(param_1 + 0x130) - (long)pbVar6;
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if (uVar1 == *pbVar6 && pbVar6[1] == 0) {
LAB_01245834:
          bVar4 = pbVar6[0x35];
          uVar3 = *(undefined4 *)(pbVar6 + 0x38);
          *(byte *)(param_1 + 0x1a9) = pbVar6[0x34] & 1;
          *(byte *)(param_1 + 0x1aa) = bVar4 & 1;
          *(undefined4 *)(param_1 + 0x1ac) = uVar3;
          return;
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 0x40;
      } while (uVar7 < (ulong)(lVar5 >> 6));
    }
  }
  else if (iVar2 == 1) {
    pbVar6 = *(byte **)(param_1 + 0x128);
    lVar5 = *(long *)(param_1 + 0x130) - (long)pbVar6;
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if (uVar1 == *pbVar6 && pbVar6[1] == 1) goto LAB_01245834;
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 0x40;
      } while (uVar7 < (ulong)(lVar5 >> 6));
    }
  }
  else if (iVar2 == 2) {
    pbVar6 = *(byte **)(param_1 + 0x128);
    lVar5 = *(long *)(param_1 + 0x130) - (long)pbVar6;
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if (uVar1 == *pbVar6 && pbVar6[1] == 2) goto LAB_01245834;
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 0x40;
      } while (uVar7 < (ulong)(lVar5 >> 6));
    }
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x128);
    lVar5 = *(long *)(param_1 + 0x130) - (long)pbVar6;
    if (lVar5 != 0) {
      uVar7 = 0;
      do {
        if (uVar1 == *pbVar6 && pbVar6[1] == 3) goto LAB_01245834;
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 0x40;
      } while (uVar7 < (ulong)(lVar5 >> 6));
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


