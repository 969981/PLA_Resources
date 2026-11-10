/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8670; name: FUN_032c8670
 */


undefined8
FUN_032c8670(long *param_1,long param_2,undefined4 param_3,long param_4,undefined4 param_5,
            long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_4 == 0) {
    return 0x80040200;
  }
  if (param_2 == param_4) {
    iVar3 = (int)param_1[1];
    lVar6 = (long)iVar3;
    lVar5 = *param_1;
    iVar2 = iVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
      lVar5 = FUN_032c8bec(PTR_PTR_0434a080,iVar2);
      iVar3 = (int)param_1[1];
      *param_1 = lVar5;
    }
    FUN_032f979c(lVar5 + (long)iVar3 * 0x38);
    *(int *)(param_1 + 1) = iVar2;
    plVar7 = (long *)(*param_1 + lVar6 * 0x38);
  }
  else {
    lVar5 = FUN_032e21f4(param_2);
    lVar6 = FUN_032e21f4(param_4);
    if (lVar5 == 0) {
      return 0x80040200;
    }
    if (lVar6 == 0) {
      return 0x80040200;
    }
    if (*(short *)(lVar5 + 8) == 0) {
      return 0x80040200;
    }
    if (*(short *)(lVar6 + 8) == 0) {
      return 0x80040200;
    }
    if (**(char **)(lVar5 + 0x18) != 'v') {
      return 0x80040200;
    }
    if (**(char **)(lVar6 + 0x18) != 'v') {
      return 0x80040200;
    }
    if (*(long *)(lVar5 + 0x10) != *(long *)(lVar6 + 0x10)) {
      return 0x80040200;
    }
    iVar2 = FUN_032e2120(param_2);
    iVar3 = FUN_032e2120(param_4);
    if (iVar2 != iVar3) {
      if (iVar2 <= iVar3) {
        iVar1 = iVar2 + 3;
        if (-1 < iVar2) {
          iVar1 = iVar2;
        }
        iVar2 = iVar3 + 7;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        if ((iVar2 >> 3) * 2 + -1 != iVar1 >> 2) {
          return 0x80040200;
        }
        iVar3 = (int)param_1[1];
        lVar6 = (long)iVar3;
        lVar5 = *param_1;
        iVar2 = iVar3 + 1;
        if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
          lVar5 = FUN_032c8bec(PTR_PTR_0434a080,iVar2);
          iVar3 = (int)param_1[1];
          *param_1 = lVar5;
        }
        FUN_032f979c(lVar5 + (long)iVar3 * 0x38);
        *(int *)(param_1 + 1) = iVar2;
        plVar7 = (long *)(*param_1 + lVar6 * 0x38);
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN_032f9330(plVar7,6,param_3,param_2,param_5,param_4);
        *plVar7 = (long)&PTR_LAB_0434d6b8;
        plVar7[5] = (long)&LAB_032c8b30;
        return 0;
      }
      iVar1 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar2 = iVar3;
      }
      if ((iVar1 >> 3) * 2 + -1 != iVar2 >> 2) {
        return 0x80040200;
      }
      iVar3 = (int)param_1[1];
      lVar6 = (long)iVar3;
      lVar5 = *param_1;
      iVar2 = iVar3 + 1;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
        lVar5 = FUN_032c8bec(PTR_PTR_0434a080,iVar2);
        iVar3 = (int)param_1[1];
        *param_1 = lVar5;
      }
      FUN_032f979c(lVar5 + (long)iVar3 * 0x38);
      *(int *)(param_1 + 1) = iVar2;
      plVar7 = (long *)(*param_1 + lVar6 * 0x38);
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN_032f9330(plVar7,6,param_3,param_2,param_5,param_4);
      *plVar7 = (long)&PTR_LAB_0434d6b8;
      plVar7[5] = param_6;
      return 0;
    }
    iVar3 = (int)param_1[1];
    lVar6 = (long)iVar3;
    lVar5 = *param_1;
    iVar2 = iVar3 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar3) {
      lVar5 = FUN_032c8bec(PTR_PTR_0434a080,iVar2);
      iVar3 = (int)param_1[1];
      *param_1 = lVar5;
    }
    FUN_032f979c(lVar5 + (long)iVar3 * 0x38);
    *(int *)(param_1 + 1) = iVar2;
    plVar7 = (long *)(*param_1 + lVar6 * 0x38);
    param_4 = param_2;
  }
  uVar4 = FUN_032e2120(param_4);
  (**(code **)(*plVar7 + 8))(plVar7);
  FUN_032f95f0(plVar7,param_3,param_5,uVar4);
  return 0;
}


