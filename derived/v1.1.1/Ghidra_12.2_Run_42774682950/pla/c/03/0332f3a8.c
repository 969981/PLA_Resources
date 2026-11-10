/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332f3a8; name: FUN_0332f3a8
 */


void FUN_0332f3a8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_LAB_0435e778;
  param_1[3] = (long)&PTR_LAB_0435e850;
  (*(code *)PTR_FUN_0435e7a8)();
  iVar5 = (int)param_1[9];
  if (0 < iVar5) {
    lVar7 = 0;
    plVar4 = param_1 + 10;
    plVar3 = (long *)*plVar4;
    while( true ) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        iVar5 = (int)param_1[9];
      }
      plVar4[lVar7] = 0;
      lVar7 = lVar7 + 1;
      if (iVar5 <= lVar7) break;
      plVar3 = (long *)plVar4[lVar7];
    }
  }
  lVar7 = param_1[5];
  if (lVar7 != 0) {
    FUN_0332f530(lVar7);
    lVar1 = tpidr_el0;
    lVar6 = *(long *)(lVar1 + 0x38d490);
    if (lVar6 == 0) {
      lVar6 = FUN_0333d16c(0,1);
      *(long *)(lVar1 + 0x38d490) = lVar6;
    }
    plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar7,0x30);
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  param_1[4] = 0;
  puVar2 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x25c)) && (param_1[0x4a] != 0)) {
    FUN_032cf244(puVar2,param_1[0x4a],4,*(uint *)((long)param_1 + 0x25c) & 0x3fffffff);
  }
  param_1[0x4a] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],0x10,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


