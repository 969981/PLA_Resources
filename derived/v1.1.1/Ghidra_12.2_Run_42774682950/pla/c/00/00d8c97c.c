/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8c97c; name: FUN_00d8c97c
 */


void FUN_00d8c97c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x208);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x1fc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d8c9e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d8c9e4:
  lVar5 = *(long *)(param_1 + 0x58);
  lVar4 = lVar5;
  if (*(long *)(lVar5 + 0x1d0) != 0) {
    lVar4 = *(long *)(lVar5 + 0x1d0);
  }
  if (*(long *)(lVar5 + 0x1d8) != 0) {
    lVar5 = *(long *)(lVar5 + 0x1d8);
  }
  if (lVar4 == lVar5) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_02a70230(lVar6);
  FUN_00d8ca50(param_1 + 0x138,param_2);
  *(undefined8 *)(lVar6 + 0x208) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x1fc));
  return;
}


