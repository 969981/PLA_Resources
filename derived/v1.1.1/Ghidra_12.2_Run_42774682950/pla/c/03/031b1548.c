/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b1548; name: FUN_031b1548
 */


void FUN_031b1548(undefined8 *param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  uVar1 = *param_3;
  if (*param_2 == 0) {
    uVar4 = *(uint *)((long)param_1 + 0x24);
    if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
      uVar6 = param_1[3];
      uVar2 = *(undefined4 *)(param_1 + 4);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar4 = *(uint *)((long)param_1 + 0x24);
      }
      uVar4 = (uVar4 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        uVar3 = uVar4;
      }
      uVar6 = FUN_032bd1d4(PTR_PTR_0434a090,uVar3,1,uVar6,uVar2);
      param_1[3] = uVar6;
    }
    if ((*(int *)(param_1 + 4) < (int)uVar1) || ((int)uVar1 < *(int *)(param_1 + 4))) {
      *(uint *)(param_1 + 4) = uVar1;
    }
  }
  else {
    param_1[3] = *param_2;
    *(undefined4 *)(param_1 + 4) = 0;
    *(uint *)((long)param_1 + 0x24) = uVar1 | 0x80000000;
  }
  uVar1 = param_3[1];
  if (param_2[1] == 0) {
    puVar5 = (uint *)((long)param_1 + 0x34);
    uVar4 = *puVar5;
    if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
      uVar6 = param_1[5];
      uVar2 = *(undefined4 *)(param_1 + 6);
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar4 = *puVar5;
      }
      uVar4 = (uVar4 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar4) {
        uVar3 = uVar4;
      }
      uVar6 = FUN_032bd1d4(PTR_PTR_0434a090,uVar3,1,uVar6,uVar2,puVar5);
      param_1[5] = uVar6;
    }
    if ((*(int *)(param_1 + 6) < (int)uVar1) || ((int)uVar1 < *(int *)(param_1 + 6))) {
      *(uint *)(param_1 + 6) = uVar1;
    }
  }
  else {
    param_1[5] = param_2[1];
    *(undefined4 *)(param_1 + 6) = 0;
    *(uint *)((long)param_1 + 0x34) = uVar1 | 0x80000000;
  }
  *param_1 = param_1[3];
  param_1[1] = param_1[5];
  *(uint *)(param_1 + 2) = *(uint *)((long)param_1 + 0x24) & 0x3fffffff;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x34) & 0x3fffffff;
  return;
}


