/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a59ad4; name: FUN_01a59ad4
 */


void FUN_01a59ad4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *local_48;
  
  puVar5 = PTR_DAT_0437a558;
  puVar4 = PTR_DAT_0437a550;
  lVar13 = *(long *)(param_1 + 0x8a8);
  if (lVar13 == 0) {
    return;
  }
  if (*(int *)(lVar13 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar13 + 0xc);
  iVar7 = *(int *)(lVar13 + 0xc);
  do {
    plVar14 = *(long **)(lVar13 + 0x10);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar10 = FUN_00aa0310();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(puVar4);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) {
        return;
      }
      if (plVar14 == (long *)puVar5) break;
      plVar14 = (long *)*plVar14;
    }
    iVar6 = *piVar1;
    if (iVar6 == iVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) {
          return;
        }
        FUN_00b08e00(&local_48,lVar13 + 0x1a0);
        if (local_48 == (long *)0x0) goto LAB_01a59d40;
        plVar14 = (long *)local_48[0x4a];
        plVar12 = (long *)local_48[0x4b];
        if (plVar14 != plVar12) break;
        goto LAB_01a59bc4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar6;
    if (iVar6 == 0) {
      return;
    }
  } while( true );
  while (plVar14 = plVar14 + 1, plVar12 != plVar14) {
    if (*(undefined1 **)(*plVar14 + 0x158) == &DAT_afc4d6c05abef19e) goto LAB_01a59bc4;
  }
  goto joined_r0x01a59d20;
LAB_01a59bc4:
  if ((plVar14 == plVar12) || (lVar11 = *plVar14, lVar11 == 0)) goto joined_r0x01a59d20;
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(lVar11 + 0x80);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x74));
        while (*plVar14 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01a59c1c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar3) {
      *plVar14 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01a59c1c:
  puVar5 = PTR_DAT_04382490;
  puVar4 = PTR_DAT_04382488;
  plVar14 = *(long **)(lVar11 + 0xf0);
  plVar12 = *(long **)(lVar11 + 0xf8);
  if (plVar14 != plVar12) {
    do {
      plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar14 + 8))();
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar10 = FUN_009cdcc0();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) goto LAB_01a59c78;
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar12);
    plVar14 = plVar12;
  }
LAB_01a59c78:
  if (plVar14 == *(long **)(lVar11 + 0xf8)) {
    plVar14 = *(long **)(lVar11 + 0xb8);
    plVar12 = *(long **)(lVar11 + 0xc0);
    if (plVar14 != plVar12) {
      do {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar14 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar5) goto LAB_01a59cd0;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar12);
      plVar14 = plVar12;
    }
LAB_01a59cd0:
    if ((plVar14 == *(long **)(lVar11 + 0xc0)) || (lVar8 = *plVar14, lVar8 == 0)) {
LAB_01a59cdc:
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(lVar8 + -0x48);
      lVar8 = *(long *)(lVar8 + 0x10);
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01a59eb0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    lVar8 = *plVar14;
    if (lVar8 == 0) goto LAB_01a59cdc;
    plVar14 = (long *)(lVar8 + -0x48);
    lVar8 = *(long *)(lVar8 + 0x10);
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_01a59eb0;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 *)(lVar11 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x74));
  if (plVar14 != (long *)0x0) {
    *(undefined1 *)((long)plVar14 + 0x2601) = 0;
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    *(undefined1 *)((long)plVar14 + 0x8e) = 0;
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
joined_r0x01a59d20:
  if (local_48 != (long *)0x0) {
    lVar11 = local_48[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
LAB_01a59d40:
  lVar11 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
  }
  return;
}


