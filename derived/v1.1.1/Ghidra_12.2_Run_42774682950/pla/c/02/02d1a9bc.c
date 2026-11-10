/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d1a9bc; name: FUN_02d1a9bc
 */


void FUN_02d1a9bc(long *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_28;
  
  plVar9 = (long *)param_1[0x12];
  *param_1 = (long)&PTR_FUN_04297908;
  param_1[9] = (long)&PTR_LAB_04297960;
  param_1[10] = (long)&PTR_LAB_042979a8;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar10 = (undefined8 *)param_1[0xf];
  if (puVar10 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  puVar3 = PTR_DAT_04388328 + 0x68;
  puVar4 = PTR_DAT_04388328 + 0xb0;
  *param_1 = (long)(PTR_DAT_04388328 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  if ((char)param_1[0xd] != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  puVar3 = PTR_DAT_04379610 + 0x58;
  puVar4 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar10;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  return;
}


