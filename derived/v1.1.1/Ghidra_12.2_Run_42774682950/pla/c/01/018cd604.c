/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cd604; name: FUN_018cd604
 */


void FUN_018cd604(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 local_48;
  
  local_60[0] = (undefined8 *)0x0;
  lVar6 = FUN_00957dc4(&local_48,*(undefined8 *)(param_1 + 8),local_60);
  *(ulong *)(lVar6 + 0x1e0) = *(ulong *)(lVar6 + 0x1e0) | 8;
  if (lVar6 != 0) {
    lVar11 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_018cd8ac;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar8 != (long *)0x0) {
    lVar11 = plVar8[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar6;
  pcVar9 = *(code **)(lVar6 + 0x3a8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x3b0) = 0;
    *(undefined8 *)(lVar6 + 0x3b8) = 0;
    *(undefined8 *)(lVar6 + 0x3a0) = 0;
    *(undefined8 *)(lVar6 + 0x3a8) = 0;
    (*pcVar9)(lVar6 + 0x3c0);
  }
  *(undefined1 **)(lVar6 + 0x3c8) = &LAB_018cd8f8;
  *(undefined1 **)(lVar6 + 0x3a0) = &LAB_018cf2a8;
  *(undefined1 **)(lVar6 + 0x3a8) = &LAB_018cf2c4;
  *(long *)(lVar6 + 0x3c0) = param_1;
  *(undefined8 *)(lVar6 + 0x3d0) = 0;
  *(undefined1 **)(lVar6 + 0x3b0) = &LAB_018cf2c8;
  *(undefined1 **)(lVar6 + 0x3b8) = &LAB_018cf2dc;
  lVar11 = *(long *)(param_1 + 0x68);
  lVar6 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar11 + 0x208);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_018cd748;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_018cd748:
  lVar10 = *(long *)(param_2 + 0x18);
  lVar6 = lVar10;
  if (*(long *)(lVar10 + 0x1d0) != 0) {
    lVar6 = *(long *)(lVar10 + 0x1d0);
  }
  if (*(long *)(lVar10 + 0x1d8) != 0) {
    lVar10 = *(long *)(lVar10 + 0x1d8);
  }
  if (lVar6 != lVar10) {
    FUN_02a70230(lVar11);
    *(undefined8 *)(lVar11 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
    FUN_00cf9b38(param_1 + 0x70,param_2 + 0x80);
    if ((*(long *)(param_1 + 0x70) != 0) && (FUN_00cfac20(&local_50), local_50 != (long *)0x0)) {
      FUN_01aef888(local_60);
      FUN_018cf2f0(param_1 + 0x80,local_60);
      puVar4 = local_60[0];
      if (local_60[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_60[0] + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_60[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_48 = *puVar4;
          FUN_02a44274(lVar6 + 0xd8,&local_48);
        }
      }
      if (local_50 != (long *)0x0) {
        lVar6 = local_50[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
    return;
  }
LAB_018cd8ac:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


