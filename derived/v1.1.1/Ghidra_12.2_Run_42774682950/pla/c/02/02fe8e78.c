/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe8e78; name: FUN_02fe8e78
 */


void FUN_02fe8e78(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  *param_1 = (long)&PTR_LAB_042bab10;
  FUN_02f6e6bc(param_1 + 0xf,param_1);
  lVar9 = param_1[8];
  if (((lVar9 != 0) && (plVar8 = (long *)(lVar9 + (long)(param_1 + 8)), plVar8 != (long *)0x0)) &&
     (plVar8[1] != 0)) {
    plVar12 = plVar8 + 2;
    do {
      lVar9 = *plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  cVar5 = DAT_0444b3c8;
  if (DAT_0444b3c8 != '\0') {
    plVar8 = (long *)(param_1[0xf] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xf] & 3U) == 0) {
        param_1[0xf] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xf] = 0;
        cVar5 = DAT_0444b3c8;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
      if (cVar5 == '\0') goto LAB_02fe8efc;
    }
    plVar8 = (long *)(param_1[0xe] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xe] & 3U) == 0) {
        param_1[0xe] = (ulong)plVar8 | 1;
        do {
          lVar9 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar9 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xe] = 0;
      }
      else {
        do {
          plVar12 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar12 | 1;
          plVar8 = plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_02fe8efc:
  *param_1 = (long)&PTR_LAB_042bb140;
  plVar8 = param_1 + 6;
  iVar4 = (int)param_1[7];
  if (0 < iVar4) {
    lVar9 = 0;
    if (*plVar8 != 0) {
      lVar9 = *plVar8 + (long)plVar8;
    }
    plVar12 = (long *)(lVar9 + (long)iVar4 * 8);
    iVar11 = 0;
    do {
      plVar12 = plVar12 + -1;
      if (((*plVar12 != 0) && (plVar2 = (long *)(*plVar12 + (long)plVar12), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar9 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
  }
  if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
    uVar3 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
    if ((int)uVar3 <= (int)*(uint *)(param_1 + 7)) {
      uVar3 = *(uint *)(param_1 + 7);
    }
    lVar9 = 0;
    if (param_1[6] != 0) {
      lVar9 = param_1[6] + (long)plVar8;
    }
    lVar7 = tpidr_el0;
    lVar10 = *(long *)(lVar7 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1,(ulong)uVar3 << 3);
      *(long *)(lVar7 + 0x38d490) = lVar10;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,(ulong)uVar3 << 3);
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


