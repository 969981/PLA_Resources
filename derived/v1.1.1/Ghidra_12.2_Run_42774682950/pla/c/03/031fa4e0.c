/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031fa4e0; name: FUN_031fa4e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_031fa4e0(undefined8 *param_1,long param_2)

{
  short *psVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  
  lVar15 = tpidr_el0;
  lVar14 = *(long *)(lVar15 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar14;
    lVar18 = *(long *)(lVar14 + 0x10);
  }
  else {
    lVar18 = *(long *)(lVar14 + 0x10);
  }
  if (lVar18 != 0) {
    puVar10 = *(undefined8 **)(lVar18 + 8);
    uVar16 = (long)puVar10 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar16, puVar10 != (undefined8 *)0x0)) {
      *puVar10 = "TthkaiWorldProcessingTasks::makeFinalProcessingTaskGraph";
      uVar11 = nn::os::GetSystemTick();
      puVar10[1] = uVar11;
      lVar14 = *(long *)(lVar15 + 0x38d490);
    }
  }
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar14;
  }
  plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x4c8,0);
  *puVar10 = &PTR_LAB_04350ee8;
  puVar10[1] = 0xffffffff;
  puVar10[2] = 1;
  puVar10[3] = puVar10 + 5;
  puVar10[0x65] = puVar10 + 0x67;
  puVar10[4] = 0x8000002000000000;
  puVar10[0x66] = 0x8000002000000000;
  puVar10[0x77] = puVar10 + 0x79;
  puVar10[0x78] = 0x8000002000000000;
  *param_1 = puVar10;
  if (*(char *)(param_2 + 0x28) == '\0') {
    sVar6 = -1;
    cVar4 = *(char *)(param_2 + 0x4c);
  }
  else {
    if (*(char *)(param_2 + 0xa8) == '\0') {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = FUN_03202d90(puVar10,*(undefined8 *)(param_2 + 0x88),0xffff);
    }
    sVar6 = FUN_03202fa0(puVar10,*(undefined8 *)(param_2 + 0x88),uVar8);
    cVar4 = *(char *)(param_2 + 0x4c);
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)(param_2 + 0x70);
  }
  else {
    sVar6 = FUN_0320ca40(puVar10,*(undefined8 *)(param_2 + 0x90),sVar6);
    cVar4 = *(char *)(param_2 + 0x70);
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)(param_2 + 0x80);
  }
  else {
    sVar6 = FUN_0320fb60(puVar10,*(undefined8 *)(param_2 + 0x98),sVar6);
    cVar4 = *(char *)(param_2 + 0x80);
  }
  if (cVar4 != '\0') {
    sVar6 = FUN_03213860(puVar10,*(undefined8 *)(param_2 + 0xa0),sVar6);
  }
  puVar3 = (uint *)((long)puVar10 + 0x334);
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (*(long *)(param_2 + 0x20) != *(long *)(*(long *)(param_2 + 0x18) + 0x250))) {
    lVar14 = *(long *)(lVar15 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar14;
    }
    plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,0);
    plVar9[1] = 0xffffffff;
    plVar19 = plVar9 + 2;
    *plVar19 = 1;
    *plVar9 = (long)&PTR_LAB_042f1208;
    plVar9[4] = (long)&PTR_LAB_042f1248;
    plVar9[5] = param_2;
    sVar7 = FUN_0333b6e8(puVar10,plVar9,0x40);
    uVar13 = *(uint *)((long)puVar10 + 0x334);
    iVar17 = *(int *)(puVar10 + 0x66);
    uVar2 = iVar17 + 1;
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = puVar10[0x65];
    }
    else {
      uVar11 = puVar10[0x65];
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar2);
        uVar13 = *puVar3;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar12 = uVar2;
      if ((int)uVar2 <= (int)uVar13) {
        uVar12 = uVar13;
      }
      lVar14 = FUN_032bd1d4(PTR_PTR_0434a080,uVar12,4,uVar11,iVar17,puVar3);
      iVar17 = *(int *)(puVar10 + 0x66);
      puVar10[0x65] = lVar14;
    }
    psVar1 = (short *)(lVar14 + (long)iVar17 * 4);
    *(uint *)(puVar10 + 0x66) = uVar2;
    *psVar1 = sVar6;
    psVar1[1] = sVar7;
    sVar6 = sVar7;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      do {
        lVar14 = *plVar19;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *plVar19 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
    }
  }
  lVar14 = *(long *)(lVar15 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar14;
  }
  plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,0);
  plVar9[1] = 0xffffffff;
  plVar19 = plVar9 + 2;
  *plVar19 = 1;
  *plVar9 = (long)&PTR_LAB_042f12a8;
  plVar9[4] = (long)&PTR_LAB_042f12e8;
  plVar9[5] = param_2;
  sVar7 = FUN_0333b6e8(puVar10,plVar9,0x40);
  if ((sVar6 != -1) && (sVar7 != -1)) {
    uVar13 = *(uint *)((long)puVar10 + 0x334);
    iVar17 = *(int *)(puVar10 + 0x66);
    uVar2 = iVar17 + 1;
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar15 = puVar10[0x65];
    }
    else {
      uVar11 = puVar10[0x65];
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar2);
        uVar13 = *puVar3;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar12 = uVar2;
      if ((int)uVar2 <= (int)uVar13) {
        uVar12 = uVar13;
      }
      lVar15 = FUN_032bd1d4(PTR_PTR_0434a080,uVar12,4,uVar11,iVar17,puVar3);
      iVar17 = *(int *)(puVar10 + 0x66);
      puVar10[0x65] = lVar15;
    }
    psVar1 = (short *)(lVar15 + (long)iVar17 * 4);
    *(uint *)(puVar10 + 0x66) = uVar2;
    *psVar1 = sVar6;
    psVar1[1] = sVar7;
  }
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    do {
      lVar15 = *plVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *plVar19 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  if (lVar18 != 0) {
    puVar10 = *(undefined8 **)(lVar18 + 8);
    uVar16 = (long)puVar10 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= *(ulong *)(lVar18 + 0x10)) &&
       (*(ulong *)(lVar18 + 8) = uVar16, puVar10 != (undefined8 *)0x0)) {
      *puVar10 = &DAT_0390f40e;
      uVar11 = nn::os::GetSystemTick();
      puVar10[1] = uVar11;
    }
  }
  return;
}


