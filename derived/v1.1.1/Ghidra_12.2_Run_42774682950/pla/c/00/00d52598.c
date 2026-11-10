/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52598; name: FUN_00d52598
 */


long * FUN_00d52598(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar9 = *(long **)(param_1 + 0x2c8);
  if (plVar9 != (long *)0x0) {
    plVar11 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)plVar9[0x29];
  lVar2 = plVar9[0x2a];
  lVar12 = (&DAT_043ab858)[(long)param_2 * 0x28];
  plVar10 = (long *)(&DAT_043ab870)[(long)param_2 * 0x28];
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar5 = plVar11;
  if ((lVar2 != 0) && (*plVar11 != lVar12)) {
    lVar8 = lVar2 * 0x30;
    plVar7 = plVar11 + lVar2 * 6;
    do {
      lVar8 = lVar8 + -0x30;
      plVar5 = plVar7;
      if (lVar8 == 0) break;
      plVar1 = plVar11 + 6;
      plVar11 = plVar11 + 6;
      plVar5 = plVar11;
    } while (*plVar1 != lVar12);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
  if (plVar5 == (long *)(plVar9[0x29] + plVar9[0x2a] * 0x30)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)plVar5[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar6 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar11 != (long *)0x0) {
    for (plVar10 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_043729f0) goto LAB_00d52698;
    }
    plVar11 = (long *)0x0;
  }
LAB_00d52698:
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  return plVar11;
}


