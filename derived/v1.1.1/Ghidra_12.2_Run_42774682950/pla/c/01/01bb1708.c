/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb1708; name: FUN_01bb1708
 */


long * FUN_01bb1708(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_58;
  
  plVar13 = *(long **)(param_1 + 8);
  plVar15 = param_2 + 2;
  plVar12 = param_2;
  if (plVar15 != plVar13) {
    plVar15 = param_2;
    do {
      plVar12 = plVar15 + 2;
      FUN_00b5fc1c(plVar15,plVar12);
      plVar2 = plVar15 + 4;
      plVar15 = plVar12;
    } while (plVar2 != plVar13);
    plVar15 = *(long **)(param_1 + 8);
    if (plVar15 == plVar12) goto LAB_01bb180c;
  }
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  plVar15 = plVar15 + -2;
  puVar14 = (undefined8 *)*plVar15;
  puVar5 = PTR_LAB_04379590;
  puVar9 = PTR_LAB_04379590;
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5 = PTR_LAB_04379590;
    puVar9 = PTR_LAB_04379590;
    if (iVar10 + -1 == 0) {
      puVar14[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar7;
      *(long *)puVar8 = lVar11;
      local_58 = *puVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
      puVar5 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
    }
  }
  while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar5,
        plVar15 != plVar12) {
    plVar15 = plVar15 + -2;
    puVar14 = (undefined8 *)*plVar15;
    if (puVar14 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar14 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar5 = PTR_LAB_04379590;
      if (iVar10 + -1 == 0) {
        puVar14[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar11 = *(long *)puVar7;
        *(long *)puVar8 = lVar11;
        local_58 = *puVar14;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
        puVar5 = PTR_LAB_04379590;
      }
    }
  }
LAB_01bb180c:
  *(long **)(param_1 + 8) = plVar12;
  return param_2;
}


