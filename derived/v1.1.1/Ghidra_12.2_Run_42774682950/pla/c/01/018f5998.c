/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018f5998; name: FUN_018f5998
 */


undefined1  [16] FUN_018f5998(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long local_48;
  undefined1 auStack_38 [8];
  
  local_48 = 0;
  lVar5 = FUN_00957dc4(auStack_38,*(undefined8 *)(param_1 + 8),&local_48);
  *(ulong *)(lVar5 + 0x1e0) = *(ulong *)(lVar5 + 0x1e0) | 8;
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_018f5c80;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
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
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar5;
  local_48 = 0;
  lVar5 = FUN_00957dc4(auStack_38,*(undefined8 *)(param_1 + 8),&local_48);
  *(ulong *)(lVar5 + 0x1e0) = *(ulong *)(lVar5 + 0x1e0) | 8;
  if (lVar5 != 0) {
    lVar10 = *(long *)(lVar5 + 0x58);
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_018f5c80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar7 != (long *)0x0) {
    lVar10 = plVar7[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  lVar10 = *(long *)(param_1 + 0x68);
  *(long *)(param_1 + 0x70) = lVar5;
  pcVar8 = *(code **)(lVar10 + 0x3a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x3b0) = 0;
    *(undefined8 *)(lVar10 + 0x3b8) = 0;
    *(undefined8 *)(lVar10 + 0x3a0) = 0;
    *(undefined8 *)(lVar10 + 0x3a8) = 0;
    (*pcVar8)(lVar10 + 0x3c0);
  }
  *(undefined1 **)(lVar10 + 0x3c8) = &LAB_018f6874;
  *(long *)(lVar10 + 0x3c0) = param_1;
  *(undefined8 *)(lVar10 + 0x3d0) = 0;
  *(undefined1 **)(lVar10 + 0x3a0) = &LAB_01902520;
  *(undefined1 **)(lVar10 + 0x3a8) = &LAB_0190253c;
  *(undefined1 **)(lVar10 + 0x3b0) = &LAB_01902540;
  *(undefined1 **)(lVar10 + 0x3b8) = &LAB_01902554;
  lVar5 = *(long *)(param_1 + 0x70);
  pcVar8 = *(code **)(lVar5 + 0x3a8);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x3b0) = 0;
    *(undefined8 *)(lVar5 + 0x3b8) = 0;
    *(undefined8 *)(lVar5 + 0x3a0) = 0;
    *(undefined8 *)(lVar5 + 0x3a8) = 0;
    (*pcVar8)(lVar5 + 0x3c0);
  }
  *(long *)(lVar5 + 0x3c0) = param_1;
  *(undefined1 **)(lVar5 + 0x3c8) = &LAB_018f6878;
  *(undefined8 *)(lVar5 + 0x3d0) = 0;
  *(undefined1 **)(lVar5 + 0x3a0) = &LAB_01902520;
  *(undefined1 **)(lVar5 + 0x3a8) = &LAB_0190253c;
  *(undefined1 **)(lVar5 + 0x3b0) = &LAB_01902540;
  *(undefined1 **)(lVar5 + 0x3b8) = &LAB_01902554;
  lVar5 = *(long *)(param_1 + 0x68);
  do {
    lVar10 = lVar5;
    lVar5 = lVar10;
    if (*(long *)(lVar10 + 0x1d0) != 0) {
      lVar5 = *(long *)(lVar10 + 0x1d0);
    }
  } while (lVar5 != lVar10);
  if ((*(byte *)(lVar10 + 0x1e0) >> 4 & 1) != 0) {
    local_48 = param_1;
    if (((*(byte *)(lVar10 + 0x2b0) & 1) == 0) ||
       (lVar9 = *(long *)(lVar10 + 0x2a8), lVar5 = nn::os::GetCurrentThread(), lVar5 != lVar9)) {
      lVar5 = nn::os::GetCurrentThread();
      plVar7 = (long *)(lVar10 + 0x2a8);
      do {
        if (*plVar7 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x29c));
            while (*plVar7 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar4) {
                *plVar7 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_018f5bc4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_018f5bc4:
      FUN_01902568(lVar10 + 0x218,&local_48);
      *(undefined8 *)(lVar10 + 0x2a8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x29c));
    }
    else {
      FUN_01902568(lVar10 + 600,&local_48);
    }
  }
  return *(undefined1 (*) [16])(param_1 + 0x68);
}


