/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce0650; name: FUN_00ce0650
 */


void FUN_00ce0650(long param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0x98);
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8c));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00ce06ac;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00ce06ac:
  uVar7 = *param_2;
  uVar6 = *param_3;
  plVar8 = (long *)(param_1 + 0x58);
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) goto LAB_00ce07c8;
  if ((ulong)plVar9[4] < uVar7) {
LAB_00ce06e4:
    plVar9 = plVar9 + 1;
    plVar5 = plVar8;
LAB_00ce06ec:
    plVar10 = (long *)*plVar9;
    plVar9 = plVar5;
  }
  else {
    if ((ulong)plVar9[4] <= uVar7) {
      plVar5 = plVar9;
      if ((ulong)plVar9[5] < uVar6) goto LAB_00ce06e4;
      goto LAB_00ce06ec;
    }
    plVar10 = (long *)*plVar9;
  }
  plVar5 = plVar9;
  if (plVar10 != (long *)0x0) {
    if ((ulong)plVar10[4] < uVar7) {
LAB_00ce0718:
      plVar10 = plVar10 + 1;
      plVar5 = plVar9;
LAB_00ce0720:
      plVar10 = (long *)*plVar10;
    }
    else {
      plVar5 = plVar10;
      if ((ulong)plVar10[4] <= uVar7) {
        if ((ulong)plVar10[5] < uVar6) goto LAB_00ce0718;
        goto LAB_00ce0720;
      }
      plVar10 = (long *)*plVar10;
    }
    if (plVar10 != (long *)0x0) {
      if ((ulong)plVar10[4] < uVar7) {
LAB_00ce074c:
        plVar10 = plVar10 + 1;
        plVar9 = plVar5;
LAB_00ce0754:
        plVar11 = (long *)*plVar10;
        plVar10 = plVar9;
      }
      else {
        if ((ulong)plVar10[4] <= uVar7) {
          plVar9 = plVar10;
          if ((ulong)plVar10[5] < uVar6) goto LAB_00ce074c;
          goto LAB_00ce0754;
        }
        plVar11 = (long *)*plVar10;
      }
      if (plVar11 == (long *)0x0) {
        plVar5 = plVar10;
      }
      else {
        do {
          if (((ulong)plVar11[4] < uVar7) ||
             ((plVar9 = plVar11, (ulong)plVar11[4] <= uVar7 && ((ulong)plVar11[5] < uVar6)))) {
            plVar11 = plVar11 + 1;
            plVar9 = plVar10;
          }
          plVar10 = plVar9;
          plVar11 = (long *)*plVar11;
          plVar5 = plVar10;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  if ((((plVar5 != plVar8) && ((ulong)plVar5[4] <= uVar7)) &&
      (((ulong)plVar5[4] < uVar7 || ((ulong)plVar5[5] <= uVar6)))) &&
     (lVar4 = plVar5[7], iVar3 = (int)lVar4 + -1, *(int *)(plVar5 + 7) = iVar3,
     iVar3 == 0 || (int)lVar4 < 1)) {
    FUN_00ce0d98(param_1 + 0x50);
  }
LAB_00ce07c8:
  *(undefined8 *)(param_1 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8c));
  return;
}


