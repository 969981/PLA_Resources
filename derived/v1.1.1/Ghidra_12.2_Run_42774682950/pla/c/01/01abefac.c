/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abefac; name: FUN_01abefac
 */


undefined8 FUN_01abefac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long local_40;
  long *local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = (long *)(param_1 + 0x388);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x37c));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01abf00c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01abf00c:
  if (*(char *)(param_1 + 0x294) == '\0') {
    if (*(char *)(param_1 + 0x370) == '\0') {
LAB_01abf0f4:
      if (*(char *)(param_1 + 0x372) == '\0') {
        uVar6 = 1;
        *(undefined1 *)(param_1 + 0x372) = 1;
        goto LAB_01abf104;
      }
    }
  }
  else {
    FUN_016c24d0(&local_38,param_1 + 0x208);
    if (local_38 == (long *)0x0) {
LAB_01abf1b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    local_40 = local_38[0x3e];
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar5 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar5;
    plVar8 = *(long **)(lVar5 + 0x270);
    if (plVar8 == (long *)0x0) goto LAB_01abf1b8;
    lVar5 = plVar8[0xb];
    if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_01abf1b8;
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = FUN_010faf9c(plVar8,&DAT_03a78e90,&local_40);
    lVar5 = plVar8[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if ((uVar7 & 1) == 0) goto LAB_01abf0f4;
  }
  uVar6 = 0;
LAB_01abf104:
  *(undefined8 *)(param_1 + 0x388) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x37c));
  return uVar6;
}


