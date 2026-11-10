/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c027c; name: FUN_031c027c
 */


void FUN_031c027c(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  
  uVar4 = param_2 >> 0x16 & 0x3ff;
  iVar3 = (int)uVar4;
  if ((int)param_1[0xc] == iVar3) {
    lVar1 = param_1[10];
  }
  else {
    lVar1 = *(long *)(*(long *)(*param_1 + 0x38) + uVar4 * 0xf0 + 8);
    param_1[10] = lVar1;
    *(int *)(param_1 + 0xc) = iVar3;
  }
  plVar5 = (long *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x18) + (param_2 & 0x3fffff) * 0x18);
  uVar7 = *(undefined8 *)((long)plVar5 + 6);
  plVar2 = param_1 + 0xd;
  *plVar2 = *plVar5;
  *(undefined8 *)((long)param_1 + 0x6e) = uVar7;
  *(int *)(param_1 + 0xf) = (int)plVar5[2];
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)((long)plVar5 + 0x14);
  lVar6 = *(long *)(lVar1 + 0x20);
  if ((*(int *)(lVar6 + 0x48) == 0) ||
     (iVar3 = *(int *)(*(long *)(lVar6 + 0x40) + (param_2 & 0x3fffff) * 4), iVar3 == -1)) {
    lVar6 = 0xffffffff;
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x50) + (long)iVar3 * 8);
  }
  param_1[0x10] = lVar6;
  param_1[0x17] = (long)plVar2;
  *(int *)(param_1 + 0x16) = (int)param_2;
  FUN_03159b7c(lVar1,plVar2,param_1 + 0x1a);
  if ((int)param_1[6] == (int)param_2) {
    lVar6 = param_1[5];
    lVar1 = param_1[4];
  }
  else {
    lVar1 = CONCAT44(((float)((ulong)param_1[0x1a] >> 0x20) + (float)((ulong)param_1[0x1c] >> 0x20))
                     * 0.5,((float)param_1[0x1a] + (float)param_1[0x1c]) * 0.5);
    lVar6 = CONCAT44(((float)((ulong)param_1[0x1b] >> 0x20) + (float)((ulong)param_1[0x1d] >> 0x20))
                     * 0.5,((float)param_1[0x1b] + (float)param_1[0x1d]) * 0.5);
  }
  piVar8 = (int *)param_1[9];
  param_1[0x19] = lVar6;
  param_1[0x18] = lVar1;
  uVar7 = FUN_031befdc(piVar8,param_2 & 0xffffffff);
  *(undefined8 *)(piVar8 + 0x12) = uVar7;
  *(undefined8 *)(piVar8 + 0x14) = uVar7;
  piVar8[0x10] = ((int)uVar7 - *piVar8) * 0x1000 >> 0x10;
  return;
}


