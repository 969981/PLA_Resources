/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009768e0; name: FUN_009768e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009768e0(long param_1,int param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined1 uVar13;
  long *local_168;
  long *local_160 [31];
  undefined4 local_68;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_160[0] = (long *)0x0;
  }
  else {
    FUN_00931034(local_160);
  }
  if (param_2 == 0) {
    FUN_011d89a4(local_160[0][0xd1] + 0x5b0);
  }
  if (local_160[0] != (long *)0x0) {
    lVar12 = local_160[0][0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_160[0] + 0x20))();
    }
  }
  FUN_00931034(local_160,*(undefined8 *)(param_1 + 0x58));
  uVar6 = param_2 - 1;
  if (uVar6 < 5) {
    lVar12 = local_160[0][0xd2];
    switch(uVar6) {
    case 0:
      lVar12 = lVar12 + 0x5b0;
      break;
    case 1:
      lVar12 = lVar12 + 0x5f8;
      break;
    case 2:
      lVar12 = lVar12 + 0x640;
      break;
    case 3:
      lVar12 = lVar12 + 0x688;
      break;
    case 4:
      lVar12 = lVar12 + 0x6d0;
    }
    FUN_011d89a4(lVar12);
  }
  if (local_160[0] != (long *)0x0) {
    lVar12 = local_160[0][0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_160[0] + 0x20))();
    }
  }
  puVar9 = PTR_DAT_04379588;
  puVar8 = PTR_DAT_04379580;
  puVar7 = PTR_DAT_04379578;
  if (param_2 != 0x15) {
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar12 = *(long *)puVar8;
    *(long *)puVar9 = lVar12;
    plVar11 = *(long **)(lVar12 + 0xb0);
    if (plVar11 == (long *)0x0) {
      lVar12 = _DAT_000000e0;
    }
    else {
      plVar2 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = plVar11[0x1c];
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    for (plVar11 = *(long **)(*(long *)(lVar12 + 0x28) + 0x98); plVar11 != (long *)0x0;
        plVar11 = (long *)*plVar11) {
      if (*(int *)(plVar11 + 4) == param_2) {
        uVar13 = *(undefined1 *)(plVar11 + 2);
        bVar3 = *puVar7;
        goto joined_r0x00976a3c;
      }
    }
    uVar13 = 0x1f;
    bVar3 = *puVar7;
joined_r0x00976a3c:
    if (((bVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar12 = *(long *)puVar8;
    *(long *)puVar9 = lVar12;
    plVar11 = *(long **)(lVar12 + 0xb0);
    if (plVar11 == (long *)0x0) {
      lVar12 = _DAT_000000e0;
    }
    else {
      plVar2 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar12 = plVar11[0x1c];
      do {
        iVar10 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    lVar12 = FUN_00933eec(*(undefined8 *)(lVar12 + 0xd0),uVar13);
    if ((lVar12 != 0) &&
       (((param_3 & 1) != 0 ||
        (iVar10 = FUN_029506a8(*(undefined8 *)(lVar12 + 0x70),0xd), iVar10 == 0)))) {
      FUN_00931034(local_160,*(undefined8 *)(param_1 + 0x58));
      if (uVar6 < 5) {
        lVar12 = local_160[0][0xd1];
        switch(uVar6) {
        case 0:
          lVar12 = lVar12 + 0x678;
          break;
        case 1:
          lVar12 = lVar12 + 0x690;
          break;
        case 2:
          lVar12 = lVar12 + 0x6a8;
          break;
        case 3:
          lVar12 = lVar12 + 0x6c0;
          break;
        case 4:
          lVar12 = lVar12 + 0x6d8;
        }
        FUN_011d5f38(lVar12);
      }
      if (local_160[0] != (long *)0x0) {
        lVar12 = local_160[0][0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_160[0] + 0x20))();
        }
      }
    }
  }
  local_58 = 0x501000001;
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  plVar11 = *(long **)(lVar12 + 0xb0);
  if (plVar11 == (long *)0x0) {
    lVar12 = _DAT_000000e0;
  }
  else {
    plVar2 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = plVar11[0x1c];
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  FUN_009346d8(local_160,*(undefined8 *)(lVar12 + 0xd0),&local_58);
  FUN_00931034(&local_168,*(undefined8 *)(param_1 + 0x58));
  FUN_011dd854(local_168[0xd1],local_68);
  if (local_168 != (long *)0x0) {
    lVar12 = local_168[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
    }
  }
  return;
}


