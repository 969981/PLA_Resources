/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135d2e4; name: FUN_0135d2e4
 */


void FUN_0135d2e4(long *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_2 + 0x80);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x74));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0135d34c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0135d34c:
  puVar6 = PTR_DAT_0437ef60;
  puVar5 = PTR_DAT_0437ef58;
  plVar12 = *(long **)(param_2 + 0xf0);
  plVar2 = *(long **)(param_2 + 0xf8);
  if (plVar12 != plVar2) {
    do {
      plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar10 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar6) goto LAB_0135d3a4;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    plVar12 = plVar2;
  }
LAB_0135d3a4:
  if (plVar12 == *(long **)(param_2 + 0xf8)) {
    plVar12 = *(long **)(param_2 + 0xb8);
    plVar2 = *(long **)(param_2 + 0xc0);
    if (plVar12 != plVar2) {
      do {
        plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar6) goto LAB_0135d44c;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar2);
      plVar12 = plVar2;
    }
LAB_0135d44c:
    if (plVar12 == *(long **)(param_2 + 0xc0)) {
      *param_1 = 0;
    }
    else {
      lVar11 = *plVar12;
      lVar8 = 0;
      if (lVar11 != 0) {
        lVar8 = lVar11 + -0x48;
      }
      *param_1 = lVar8;
      if (lVar11 != 0) {
        lVar8 = *(long *)(lVar8 + 0x58);
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_0135d53c;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  else {
    lVar11 = *plVar12;
    lVar8 = 0;
    if (lVar11 != 0) {
      lVar8 = lVar11 + -0x48;
    }
    *param_1 = lVar8;
    if (lVar11 != 0) {
      lVar8 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_0135d53c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x74));
  return;
}


