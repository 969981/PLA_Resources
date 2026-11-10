/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031476a0; name: FUN_031476a0
 */


void FUN_031476a0(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  plVar6 = (long *)param_1[0xe];
  *param_1 = (long)&PTR_LAB_042dad20;
  while( true ) {
    iVar2 = *(int *)((long)plVar6 + 0x14);
    if (iVar2 == 0) break;
    iVar3 = *(int *)((long)plVar6 + 0xc);
    uVar8 = *(undefined8 *)(*plVar6 + (long)iVar3 * 8);
    iVar1 = 0;
    if (iVar3 + 1 != (int)plVar6[1]) {
      iVar1 = iVar3 + 1;
    }
    *(int *)((long)plVar6 + 0xc) = iVar1;
    *(int *)((long)plVar6 + 0x14) = iVar2 + -1;
    lVar4 = (long)(int)param_1[7];
    if (0 < (int)param_1[7]) {
      do {
        lVar7 = lVar4 + -1;
        plVar6 = *(long **)(param_1[6] + lVar4 * 8 + -8);
        (**(code **)(*plVar6 + 0x28))(plVar6,uVar8,0);
        lVar4 = lVar7;
      } while (0 < lVar7);
    }
    plVar6 = (long *)param_1[0xe];
  }
  if (plVar6 != (long *)0x0) {
    *(undefined8 *)((long)plVar6 + 0xc) = 0;
    *(int *)((long)plVar6 + 0x14) = 0;
    FUN_03147e3c(plVar6);
    FUN_032cf640(plVar6,0x18);
  }
  lVar4 = param_1[0x10];
  param_1[0x10] = 0;
  if ((lVar4 != 0) && (FUN_032d647c(), param_1[0x10] != 0)) {
    FUN_032d647c();
  }
  *param_1 = (long)&PTR_LAB_042dadc0;
  if ((int)param_1[7] != 0) {
    lVar5 = param_1[6];
    lVar4 = (long)(int)param_1[7] * 8;
    lVar7 = *(long *)(lVar5 + -8 + lVar4);
    while( true ) {
      if (lVar7 != 0) {
        FUN_032d647c();
      }
      if (lVar4 == 8) break;
      lVar4 = lVar4 + -8;
      lVar7 = *(long *)(lVar5 + -8 + lVar4);
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  FUN_032c7b9c(param_1 + 4);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


