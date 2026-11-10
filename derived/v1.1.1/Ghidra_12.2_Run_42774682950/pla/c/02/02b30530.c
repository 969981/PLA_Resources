/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b30530; name: FUN_02b30530
 */


void FUN_02b30530(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *local_40;
  undefined1 auStack_38 [8];
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar10;
  if (plVar7 != (long *)0x0) {
    plVar14 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  lVar10 = *(long *)(param_1 + 0x68);
  pcVar8 = (char *)(**(code **)(*DAT_043ef740 + 0x20))(DAT_043ef740,1);
  if (*pcVar8 == '\0') {
    local_40 = (long *)FUN_00938550();
    if (local_40 == (long *)0x0) goto LAB_02b305e8;
    (**(code **)(*local_40 + 0x18))(local_40);
    if (local_40 == (long *)0x0) goto LAB_02b3086c;
LAB_02b305ec:
    uVar15 = local_40[0xb];
    plVar7 = local_40;
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar9;
    FUN_02a47cd8(&local_40,uVar9,pcVar8);
LAB_02b305e8:
    if (local_40 != (long *)0x0) goto LAB_02b305ec;
LAB_02b3086c:
    uVar15 = *(ulong *)PTR_DAT_04379c88;
    plVar7 = local_40;
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar11 = *(ulong *)(lVar10 + 0xd0);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar15;
    }
    else {
      uVar13 = uVar15;
      if (uVar11 <= uVar15) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar15 / uVar11;
        }
        uVar13 = uVar15 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar10 + 200) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar15) {
            if (plVar14[2] == uVar15) goto LAB_02b307d8;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar15) {
            if (plVar14[2] == uVar15) goto LAB_02b307d8;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar5 = 0;
              if (uVar11 != 0) {
                uVar5 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar5 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  local_40 = (long *)0x0;
LAB_02b306f8:
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  plVar7 = (long *)FUN_02ab8084(auStack_38,*(undefined8 *)(param_1 + 8),&local_40);
  if (plVar7 == (long *)0x0) {
    lVar10 = *(long *)(param_1 + 0x60);
  }
  else {
    plVar14 = plVar7 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = *(long *)(param_1 + 0x60);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = *(long **)(lVar10 + 0xa0);
  *(long **)(lVar10 + 0xa0) = plVar7;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar14 = plVar7 + 10;
    do {
      iVar6 = (int)*plVar14 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if (local_40 != (long *)0x0) {
    plVar7 = local_40 + 10;
    do {
      iVar6 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
LAB_02b307d8:
  local_40 = (long *)plVar14[6];
  if (local_40 != (long *)0x0) {
    plVar14 = local_40 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  goto LAB_02b306f8;
}


