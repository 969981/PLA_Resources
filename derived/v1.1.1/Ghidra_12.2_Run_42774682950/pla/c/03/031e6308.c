/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e6308; name: FUN_031e6308
 */


void FUN_031e6308(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &DAT_042f1020;
  FUN_0318b964(param_1[4],param_1 + 5);
  iVar5 = *(int *)(param_1 + 8) + -1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      piVar4 = (int *)(param_1[7] + (long)iVar5 * 0x18);
      FUN_0318b964(*(undefined8 *)(*(long *)(param_1[2] + 0x38) + (long)*piVar4 * 0xf0),piVar4 + 2);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  FUN_032c20d0(param_1 + 0xd);
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar2,param_1[0xb],4,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  FUN_032c20d0(param_1 + 9);
  puVar3 = PTR_PTR_0434a090;
  if (*(int *)(param_1 + 8) != 0) {
    lVar6 = param_1[7];
    lVar7 = (long)*(int *)(param_1 + 8) * 0x18;
    do {
      lVar1 = lVar6 + lVar7;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        FUN_032cf244(puVar3,*(long *)(lVar1 + -0x10),8,*(uint *)(lVar1 + -4) & 0x3fffffff);
      }
      lVar7 = lVar7 + -0x18;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],0x18,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (lVar7 = param_1[5], lVar7 != 0)) {
    FUN_032cf244(PTR_PTR_0434a090,lVar7,8,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  return;
}


