/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d176c; name: FUN_029d176c
 */


void FUN_029d176c(long param_1,uint *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  plVar7 = (long *)*param_3;
  iVar1 = (int)plVar7[1];
  if (iVar1 == 8) {
    uVar8 = 0;
    goto LAB_029d1850;
  }
  if (iVar1 == 0) {
    uVar8 = 0x5402000;
    goto LAB_029d1850;
  }
  bVar3 = *(byte *)(param_3 + 1);
  uVar8 = 0x1400000;
  switch(iVar1) {
  default:
switchD_029d17e0_caseD_1:
    uVar8 = 0x400000;
    break;
  case 2:
    uVar8 = 0x1000000;
    break;
  case 3:
    break;
  case 4:
    if ((**(int **)(*(long *)(param_1 + 8) + 0x58) == 0) &&
       (*(char *)((long)plVar7 + 0x5c) == '\x01')) goto switchD_029d17e0_caseD_1;
    uVar8 = 0x1800000;
  }
  uVar2 = *(uint *)((long)param_3 + 0xc);
  lVar9 = *plVar7;
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_0296eaa8(*(undefined8 *)(param_1 + 0x38));
    uVar4 = FUN_0296ed7c(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar9 + 0x7d),uVar4);
    uVar5 = FUN_02977520(*(undefined8 *)(param_1 + 0x38),lVar9,1,uVar4);
    plVar7 = (long *)*param_3;
    uVar5 = uVar5 & 0x1fff;
  }
  uVar6 = FUN_029d1898(param_1,plVar7);
  uVar8 = uVar8 | (bVar3 & 7) << 0x19 | (uVar2 & 7) << 0xd | uVar5 | (uVar6 & 0x3f) << 0x10;
LAB_029d1850:
  *param_2 = uVar8;
  return;
}


