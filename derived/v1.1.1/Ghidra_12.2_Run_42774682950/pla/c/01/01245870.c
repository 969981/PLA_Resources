/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01245870; name: FUN_01245870
 */


void FUN_01245870(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *(int *)(param_1 + 0x1a4) = param_2;
  lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x1a0);
  if (param_2 == 0) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 0) goto LAB_01245990;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else if (param_2 == 1) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 1) goto LAB_01245990;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else if (param_2 == 2) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 2) goto LAB_01245990;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 3) goto LAB_01245990;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  goto LAB_012459dc;
LAB_01245990:
  uVar7 = *(undefined8 *)(pbVar5 + 0x10);
  *(undefined8 *)(lVar4 + 0x338) = *(undefined8 *)(pbVar5 + 0x18);
  *(undefined8 *)(lVar4 + 0x330) = uVar7;
  iVar2 = *(int *)(param_1 + 0x1a4);
  uVar1 = *(uint *)(param_1 + 0x1a0);
  if (iVar2 == 0) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 0) {
LAB_01245ab8:
          uVar7 = *(undefined8 *)(pbVar5 + 0x20);
          *(undefined8 *)(lVar4 + 0x328) = *(undefined8 *)(pbVar5 + 0x28);
          *(undefined8 *)(lVar4 + 800) = uVar7;
          return;
        }
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else if (iVar2 == 1) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 1) goto LAB_01245ab8;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else if (iVar2 == 2) {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 2) goto LAB_01245ab8;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
  else {
    pbVar5 = *(byte **)(param_1 + 0x128);
    lVar3 = *(long *)(param_1 + 0x130) - (long)pbVar5;
    if (lVar3 != 0) {
      uVar6 = 0;
      do {
        if (uVar1 == *pbVar5 && pbVar5[1] == 3) goto LAB_01245ab8;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x40;
      } while (uVar6 < (ulong)(lVar3 >> 6));
    }
  }
LAB_012459dc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


