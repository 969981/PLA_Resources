/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d81884; name: FUN_00d81884
 */


void FUN_00d81884(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar1 = (long *)(param_2 + 0x220);
  lVar8 = *plVar1;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    bVar5 = false;
    lVar6 = 0;
  }
  else {
    lVar6 = param_2 + 0x210;
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x214));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00d81904;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00d81904:
    bVar5 = true;
  }
  if ((ulong)param_3 < (ulong)(*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 4)) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x228) + (ulong)param_3 * 0x10 + 8);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar3) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    *param_1 = 0;
  }
  if (bVar5) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
    return;
  }
  return;
}


