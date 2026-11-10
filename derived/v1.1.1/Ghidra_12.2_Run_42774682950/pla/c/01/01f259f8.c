/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f259f8; name: FUN_01f259f8
 */


void FUN_01f259f8(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar6 = (long *)nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x88);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = (long)plVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01f25a60;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = (long)plVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01f25a60:
  uVar8 = *(ulong *)(param_1 + 0x98);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar10 = uVar7 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x90) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar6 = (long *)*plVar11, plVar6 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            if (plVar6[2] == uVar7) goto LAB_01f25b54;
          }
          else if ((plVar6[1] & uVar8 - 1) != uVar10) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar6[1];
          if (uVar9 == uVar7) {
            if (plVar6[2] == uVar7) goto LAB_01f25b54;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  FUN_01f28040();
LAB_01f25b54:
  plVar11 = (long *)plVar6[3];
  plVar2 = (long *)plVar6[4];
  if ((plVar11 != plVar2) && (*plVar11 != *param_3)) {
    do {
      if (plVar2 + -2 == plVar11) goto LAB_01f25b98;
      plVar1 = plVar11 + 2;
      plVar11 = plVar11 + 2;
    } while (*plVar1 != *param_3);
  }
  if (plVar2 != plVar11) {
    __n = (long)plVar2 - (long)(plVar11 + 2);
    if (__n != 0) {
      memmove(plVar11,plVar11 + 2,__n);
    }
    plVar6[4] = (long)(plVar11 + ((long)__n >> 4) * 2);
  }
LAB_01f25b98:
  *(undefined8 *)(param_1 + 0x88) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7c));
  return;
}


