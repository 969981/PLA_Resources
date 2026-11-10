/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d4430; name: FUN_018d4430
 */


void FUN_018d4430(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x778);
  lVar9 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar9) {
    bVar6 = false;
    lVar7 = 0;
    cVar5 = *(char *)(param_1 + 0x780);
  }
  else {
    lVar7 = param_1 + 0x768;
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x76c));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_018d44d0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_018d44d0:
    bVar6 = true;
    cVar5 = *(char *)(param_1 + 0x780);
  }
  if ((cVar5 != '\0') && (*(char *)(param_1 + 0x689) != '\0')) {
    if (*(long *)(param_1 + 0x5a0) == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_018e3920(&local_38);
      if (local_38 != (long *)0x0) {
        uVar8 = FUN_01c35a88();
        if (local_38 != (long *)0x0) {
          lVar9 = local_38[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar3 = *piVar2;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
        if ((uVar8 & 1) != 0) {
          FUN_016c24d0(&local_38,param_1 + 0x748);
          if ((local_38 != (long *)0x0) &&
             (FUN_015916d0(local_38,1,0x10000,0), local_38 != (long *)0x0)) {
            lVar9 = local_38[0xb];
            piVar2 = (int *)(lVar9 + 0xc);
            do {
              iVar3 = *piVar2;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
              (**(code **)(*local_38 + 0x20))();
              *(undefined1 *)(param_1 + 0x780) = 0;
              goto joined_r0x018d45c4;
            }
          }
          *(undefined1 *)(param_1 + 0x780) = 0;
        }
      }
    }
  }
joined_r0x018d45c4:
  if (bVar6) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  }
  return;
}


