/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d168fc; name: FUN_02d168fc
 */


void FUN_02d168fc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_28;
  
  plVar10 = (long *)param_1[0x1e];
  *param_1 = (long)&PTR_FUN_042975b8;
  param_1[9] = (long)&PTR_LAB_04297610;
  param_1[10] = (long)&PTR_LAB_04297658;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = (long *)param_1[0x1c];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((char)param_1[0x18] != '\0') {
    plVar10 = (long *)param_1[0x1a];
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  plVar10 = (long *)param_1[0x15];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[0x12] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  plVar10 = (long *)param_1[0x10];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = (long *)param_1[0xe];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
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
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar9 = (undefined8 *)param_1[0xb];
  if (puVar9 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar9 + 1);
    do {
      iVar7 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  return;
}


