/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58710; name: FUN_02f58710
 */


void * FUN_02f58710(undefined8 param_1)

{
  int iVar1;
  ulong *puVar2;
  uint *puVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar12 = (long)(int)param_1 * 0x820;
  lVar13 = (long)(int)param_1;
  puVar2 = (ulong *)(&DAT_0442c8e8 + lVar12);
  puVar3 = (uint *)(&DAT_0442c8f0 + lVar12);
  while( true ) {
    uVar10 = *puVar2;
    pvVar9 = (void *)(uVar10 & 0xfffffffffffffe00);
    if (pvVar9 == (void *)0x0) break;
    uVar11 = *(ulong *)((long)pvVar9 + 0x908);
    do {
      uVar6 = *puVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar8) {
        *puVar3 = uVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    while (*puVar2 == uVar10) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *puVar2 = uVar11 | uVar6 + 1 & 0x1ff;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        return pvVar9;
      }
    }
    ClearExclusiveLocal();
  }
  local_28 = 0;
  local_38 = 0;
  pvVar9 = (void *)FUN_02f58f80(param_1,((0x928UL >>
                                         (*(ulong *)(&DAT_0442c128 + lVar13 * 0x820) & 0x3f)) + 1) *
                                        *(long *)(&DAT_0442c120 + lVar13 * 0x820),&local_28,
                                &local_38);
  if (pvVar9 == (void *)0x0) {
    return (void *)0x0;
  }
  memset(pvVar9,0,0x928);
  *(undefined8 *)((long)pvVar9 + 0x910) = local_28;
  piVar4 = (int *)(&DAT_0442c560 + lVar13 * 0x820);
  *(undefined8 *)((long)pvVar9 + 0x918) = local_38;
LAB_02f58804:
  do {
    do {
      iVar1 = *piVar4 + 1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar8) {
        *piVar4 = iVar1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    *(int *)((long)pvVar9 + 0x920) = iVar1;
    lVar12 = *(long *)(&DAT_0442c770 + lVar13 * 0x820 + (ulong)(uint)(iVar1 % 0x2f) * 8);
    if (lVar12 == 0) {
LAB_02f5885c:
      if (lVar12 != 0) {
        *(undefined4 *)((long)pvVar9 + 0x920) = 0;
        goto LAB_02f58804;
      }
    }
    else {
      do {
        if (*(int *)(lVar12 + 0x920) == iVar1) goto LAB_02f5885c;
        lVar12 = *(long *)(lVar12 + 0x900);
      } while (lVar12 != 0);
    }
    if (*(int *)((long)pvVar9 + 0x920) != 0) {
      plVar5 = (long *)(&DAT_0442c770 +
                       lVar13 * 0x820 + (long)(*(int *)((long)pvVar9 + 0x920) % 0x2f) * 8);
      do {
        lVar12 = *plVar5;
        *(long *)((long)pvVar9 + 0x900) = lVar12;
        while (*plVar5 == lVar12) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar8) {
            *plVar5 = (long)pvVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            return pvVar9;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  } while( true );
}


