/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e56b70; name: FUN_01e56b70
 */


void FUN_01e56b70(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *param_2;
  lVar6 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar11 + 0x208);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x1fc));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e56bd8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar5) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e56bd8:
  lVar9 = *(long *)(*(long *)(param_1 + 0xd0) + 0x78);
  lVar6 = lVar9;
  if (*(long *)(lVar9 + 0x1d0) != 0) {
    lVar6 = *(long *)(lVar9 + 0x1d0);
  }
  if (*(long *)(lVar9 + 0x1d8) != 0) {
    lVar9 = *(long *)(lVar9 + 0x1d8);
  }
  if (lVar6 == lVar9) {
LAB_01e56dd0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar11);
  plVar7 = *(long **)(param_1 + 0x148);
  if (plVar7 == (long *)0x0) {
    uVar10 = *(ulong *)(param_1 + 0x118);
    if (uVar10 == 0) {
      FUN_01e5fdac(param_1 + 0xd8);
      uVar10 = *(ulong *)(param_1 + 0x118);
    }
    plVar7 = (long *)(*(long *)(param_1 + 0xe0) + (uVar10 >> 6 & 0x3fffffffffffff8));
    lVar9 = *plVar7;
    lVar6 = 0;
    if (*(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xe0)) {
      lVar6 = lVar9 + (uVar10 & 0x1ff) * 8;
    }
    if (lVar6 == lVar9) {
      lVar6 = plVar7[-1] + 0x1000;
    }
    FUN_01e5fc84(param_1 + 0x128,lVar6 + -8,param_2);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + -1;
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
  }
  else {
    (**(code **)(*plVar7 + 0x40))(plVar7,0);
    uVar10 = *(ulong *)(param_1 + 0x118);
    if (uVar10 == 0) {
      FUN_01e5fdac(param_1 + 0xd8);
      uVar10 = *(ulong *)(param_1 + 0x118);
    }
    plVar7 = (long *)(*(long *)(param_1 + 0xe0) + (uVar10 >> 6 & 0x3fffffffffffff8));
    lVar6 = *plVar7;
    if (*(long *)(param_1 + 0xe8) == *(long *)(param_1 + 0xe0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar6 + (uVar10 & 0x1ff) * 8;
    }
    plVar1 = (long *)(param_1 + 0x148);
    if (lVar9 == lVar6) {
      lVar9 = plVar7[-1] + 0x1000;
    }
    FUN_01e5fc84(param_1 + 0x128,lVar9 + -8,plVar1);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + -1;
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
    lVar6 = *param_2;
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_01e56dd0;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar7 = (long *)*plVar1;
    *plVar1 = lVar6;
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0xb];
      piVar2 = (int *)(lVar6 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    (**(code **)(*(long *)*plVar1 + 0x48))((long *)*plVar1,0);
  }
  *(undefined8 *)(lVar11 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x1fc));
  return;
}


