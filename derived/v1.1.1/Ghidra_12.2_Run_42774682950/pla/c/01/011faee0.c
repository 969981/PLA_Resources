/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011faee0; name: FUN_011faee0
 */


void FUN_011faee0(long param_1,undefined8 param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  undefined8 uVar10;
  
  uVar2 = FUN_02c5dee0(param_2,0);
  uVar3 = FUN_02c5dee0(param_2,1);
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = FUN_02c5dee0(param_2,2);
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_02c5dee0(param_2,3);
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  uVar2 = FUN_02c5dee0(param_2,4);
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_02c5dee0(param_2,5);
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  iVar4 = FUN_011f11e0(*(undefined8 *)(param_1 + 0x138),0,uVar3);
  iVar5 = FUN_011f11e0(*(undefined8 *)(param_1 + 0x138),1,0);
  uVar10 = *(undefined8 *)(param_1 + 0x138);
  iVar6 = FUN_02c5fb2c(param_2);
  uVar7 = FUN_02c628dc(param_2);
  if ((uVar7 & 1) == 0) {
    iVar5 = 0;
  }
  sVar1 = FUN_011f142c(uVar10,iVar6 + iVar4 + iVar5);
  if (sVar1 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x140) == 0) {
    lVar8 = 0;
    psVar9 = (short *)(param_1 + 0x140);
LAB_011fb004:
    *psVar9 = sVar1;
    *(undefined2 *)(param_1 + lVar8 * 4 + 0x142) = 1;
  }
  else {
    if (*(short *)(param_1 + 0x140) == sVar1) {
      lVar8 = 0;
    }
    else {
      if (*(short *)(param_1 + 0x144) == 0) {
        psVar9 = (short *)(param_1 + 0x144);
        lVar8 = 1;
        goto LAB_011fb004;
      }
      if (*(short *)(param_1 + 0x144) == sVar1) {
        lVar8 = 1;
      }
      else {
        if (*(short *)(param_1 + 0x148) == 0) {
          psVar9 = (short *)(param_1 + 0x148);
          lVar8 = 2;
          goto LAB_011fb004;
        }
        if (*(short *)(param_1 + 0x148) == sVar1) {
          lVar8 = 2;
        }
        else {
          if (*(short *)(param_1 + 0x14c) == 0) {
            psVar9 = (short *)(param_1 + 0x14c);
            lVar8 = 3;
            goto LAB_011fb004;
          }
          if (*(short *)(param_1 + 0x14c) != sVar1) {
            return;
          }
          lVar8 = 3;
        }
      }
    }
    param_1 = param_1 + lVar8 * 4;
    sVar1 = *(short *)(param_1 + 0x142);
    if (sVar1 != 999) {
      *(short *)(param_1 + 0x142) = sVar1 + 1;
    }
  }
  return;
}


