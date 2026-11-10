/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305b9dc; name: FUN_0305b9dc
 */


void FUN_0305b9dc(undefined4 *param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  iVar7 = param_2;
  if (0x1d5 < param_2) {
    iVar7 = 0x1d6;
  }
  iVar4 = iVar7;
  if (iVar7 < 2) {
    iVar4 = 1;
  }
  uVar1 = iVar4 * 4 + 0x28;
  uVar3 = uVar1 & 0x7ffffff0;
  if ((int)(*(int *)(param_3 + 0x18) + uVar3) < 0xee1) {
    lVar6 = *(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20;
  }
  else {
    lVar6 = FUN_032bf82c(param_3);
  }
  *(char *)(lVar6 + 9) = (char)(uVar1 >> 4);
  *(undefined1 *)(lVar6 + 8) = 8;
  *(undefined4 *)(lVar6 + 10) = 0;
  *(undefined1 *)(lVar6 + 0xf) = 8;
  *(int *)(lVar6 + 0x10) = iVar7;
  *(int *)(lVar6 + 0x14) = iVar7;
  if ((((0 < param_2) && (*(undefined4 *)(lVar6 + 0x18) = *param_1, 1 < iVar7)) &&
      (*(undefined4 *)(lVar6 + 0x1c) = param_1[1], 2 < iVar7)) &&
     ((*(undefined4 *)(lVar6 + 0x20) = param_1[2], 3 < iVar7 &&
      (*(undefined4 *)(lVar6 + 0x24) = param_1[3], 4 < iVar7)))) {
    lVar8 = 0;
    do {
      lVar9 = lVar8 * 4;
      lVar5 = lVar8 + 4;
      lVar2 = lVar8 + 5;
      lVar8 = lVar8 + 1;
      *(undefined4 *)(lVar6 + 0x28 + lVar9) = param_1[lVar5];
    } while (lVar2 < iVar7);
  }
  *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + uVar3;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  return;
}


