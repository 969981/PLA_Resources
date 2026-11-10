/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813750; name: FUN_01813750
 */


void FUN_01813750(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_0437f498;
  puVar4 = PTR_DAT_0437f490;
  lVar9 = *(long *)(param_2 + 0x1f0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar11 = *(int *)(lVar9 + 0xc);
    do {
      plVar12 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar7 = FUN_01443f54();
        *(undefined8 *)puVar5 = uVar7;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar12 == (long *)0x0) goto LAB_01813770;
        if (plVar12 == (long *)puVar5) break;
        plVar12 = (long *)*plVar12;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x1a0);
            if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) goto LAB_0181380c;
            piVar1 = (int *)(lVar10 + 0xc);
            iVar11 = *(int *)(lVar10 + 0xc);
            goto LAB_018138b0;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01813770:
  *param_1 = 0;
  return;
LAB_0181380c:
  lVar8 = 0;
  goto LAB_01813810;
  while( true ) {
    lVar8 = 0;
    iVar11 = iVar6;
    if (iVar6 == 0) break;
LAB_018138b0:
    plVar13 = *(long **)(lVar10 + 0x10);
    plVar12 = (long *)FUN_01091efc();
    if (plVar13 == (long *)0x0) goto LAB_0181380c;
    while (plVar13 != plVar12) {
      plVar13 = (long *)*plVar13;
      lVar8 = 0;
      if (plVar13 == (long *)0x0) goto LAB_01813810;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar11) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar8 = 0;
        if (*(long *)(lVar10 + 0x18) != 0) {
          lVar8 = *(long *)(lVar10 + 0x18) + -0x50;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
LAB_01813810:
  *param_1 = lVar8;
  lVar10 = *(long *)(lVar9 + 8);
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar11 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar11 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01813854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar9 + -0x50) + 0x20))((long *)(lVar9 + -0x50));
    return;
  }
  return;
}


