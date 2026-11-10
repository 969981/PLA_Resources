/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5ca68; name: FUN_02a5ca68
 */


void FUN_02a5ca68(long param_1,int param_2,int param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int local_38;
  int local_34;
  
  local_38 = param_3;
  local_34 = param_2;
  if (param_3 != param_2) {
    lVar8 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0xc0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb4));
          while (*plVar1 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02a5cad4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02a5cad4:
    iVar4 = local_38;
    uVar2 = *(long *)(param_1 + 0x1e8) + (long)local_38;
    uVar3 = *(long *)(param_1 + 0x1e8) + (long)local_34;
    lVar8 = *(long *)(*(long *)(param_1 + 0x1b0) + (uVar2 >> 2 & 0x3ffffffffffffff8)) +
            (uVar2 & 0x1f) * 0x80;
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x1b0) + (uVar3 >> 2 & 0x3ffffffffffffff8)) +
                     (uVar3 & 0x1f) * 0x80);
    puVar9 = (undefined8 *)(lVar8 + 0x38);
    piVar12 = (int *)*puVar9;
    piVar10 = *(int **)(lVar8 + 0x40);
    if ((piVar12 != piVar10) && (*piVar12 != local_34)) {
      do {
        piVar12 = piVar12 + 1;
        if (piVar10 == piVar12) goto LAB_02a5cba0;
      } while (*piVar12 != local_34);
    }
    if (piVar10 == piVar12) {
LAB_02a5cba0:
      FUN_02a5c420(puVar9,&local_34);
      piVar10 = (int *)*plVar1;
      piVar12 = (int *)plVar1[1];
      piVar11 = piVar10;
      if (piVar10 != piVar12) {
        iVar5 = *piVar10;
        while (piVar11 = piVar10, iVar5 != iVar4) {
          piVar10 = piVar10 + 1;
          piVar11 = piVar12;
          if (piVar12 == piVar10) break;
          iVar5 = *piVar10;
        }
      }
      if (piVar12 == piVar11) {
        FUN_02a5c420(plVar1,&local_38);
        FUN_02a5bf68(param_1,local_34);
        *(undefined1 *)(param_1 + 0x2f4) = 1;
        goto LAB_02a5cc28;
      }
    }
    else {
      piVar10 = (int *)*plVar1;
      piVar12 = (int *)plVar1[1];
      piVar11 = piVar10;
      if (piVar10 != piVar12) {
        iVar4 = *piVar10;
        while (piVar11 = piVar10, iVar4 != local_38) {
          piVar10 = piVar10 + 1;
          piVar11 = piVar12;
          if (piVar12 == piVar10) break;
          iVar4 = *piVar10;
        }
      }
      if (piVar12 != piVar11) {
LAB_02a5cc28:
        *(undefined8 *)(param_1 + 0xc0) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb4));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


