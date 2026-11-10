/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5cc64; name: FUN_02a5cc64
 */


void FUN_02a5cc64(long param_1,int param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0xc0);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb4));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a5cccc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02a5cccc:
  uVar2 = *(long *)(param_1 + 0x1e8) + (long)param_3;
  lVar7 = *(long *)(*(long *)(param_1 + 0x1b0) + (uVar2 >> 2 & 0x3ffffffffffffff8)) +
          (uVar2 & 0x1f) * 0x80;
  plVar11 = (long *)(lVar7 + 0x40);
  piVar8 = (int *)*plVar11;
  piVar10 = *(int **)(lVar7 + 0x38);
  piVar6 = piVar10;
  if ((piVar10 != piVar8) && (*piVar10 != param_2)) {
    do {
      piVar6 = piVar8;
      if (piVar8 + -1 == piVar10) break;
      piVar1 = piVar10 + 1;
      piVar10 = piVar10 + 1;
      piVar6 = piVar10;
    } while (*piVar1 != param_2);
  }
  if (piVar8 != piVar6) {
    sVar5 = (long)piVar8 - (long)(piVar6 + 1);
    if (sVar5 != 0) {
      memmove(piVar6,piVar6 + 1,sVar5);
    }
    *plVar11 = (long)(piVar6 + ((long)sVar5 >> 2));
    uVar2 = *(long *)(param_1 + 0x1e8) + (long)param_2;
    lVar7 = (uVar2 & 0x1f) * 0x80;
    lVar9 = *(long *)(*(long *)(param_1 + 0x1b0) + (uVar2 >> 2 & 0x3ffffffffffffff8));
    piVar10 = *(int **)(lVar9 + lVar7);
    plVar11 = (long *)(lVar9 + lVar7 + 8);
    piVar8 = (int *)*plVar11;
    piVar6 = piVar10;
    if ((piVar10 != piVar8) && (*piVar10 != param_3)) {
      do {
        piVar6 = piVar8;
        if (piVar8 + -1 == piVar10) break;
        piVar1 = piVar10 + 1;
        piVar10 = piVar10 + 1;
        piVar6 = piVar10;
      } while (*piVar1 != param_3);
    }
    if (piVar8 != piVar6) {
      sVar5 = (long)piVar8 - (long)(piVar6 + 1);
      if (sVar5 != 0) {
        memmove(piVar6,piVar6 + 1,sVar5);
      }
      *plVar11 = (long)(piVar6 + ((long)sVar5 >> 2));
      FUN_02a5bf68(param_1,param_2);
      *(undefined1 *)(param_1 + 0x2f4) = 1;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb4));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


