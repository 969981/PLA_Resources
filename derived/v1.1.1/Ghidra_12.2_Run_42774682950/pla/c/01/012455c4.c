/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012455c4; name: FUN_012455c4
 */


undefined4 FUN_012455c4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1a0);
  if (param_2 == 0) {
    pbVar3 = *(byte **)(param_1 + 0x128);
    lVar2 = *(long *)(param_1 + 0x130) - (long)pbVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 == *pbVar3 && pbVar3[1] == 0) {
LAB_012456e8:
          return *(undefined4 *)(pbVar3 + 0x30);
        }
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 0x40;
      } while (uVar4 < (ulong)(lVar2 >> 6));
    }
  }
  else if (param_2 == 1) {
    pbVar3 = *(byte **)(param_1 + 0x128);
    lVar2 = *(long *)(param_1 + 0x130) - (long)pbVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 == *pbVar3 && pbVar3[1] == 1) goto LAB_012456e8;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 0x40;
      } while (uVar4 < (ulong)(lVar2 >> 6));
    }
  }
  else if (param_2 == 2) {
    pbVar3 = *(byte **)(param_1 + 0x128);
    lVar2 = *(long *)(param_1 + 0x130) - (long)pbVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 == *pbVar3 && pbVar3[1] == 2) goto LAB_012456e8;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 0x40;
      } while (uVar4 < (ulong)(lVar2 >> 6));
    }
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x128);
    lVar2 = *(long *)(param_1 + 0x130) - (long)pbVar3;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 == *pbVar3 && pbVar3[1] == 3) goto LAB_012456e8;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 0x40;
      } while (uVar4 < (ulong)(lVar2 >> 6));
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


