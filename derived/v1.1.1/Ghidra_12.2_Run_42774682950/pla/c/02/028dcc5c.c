/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dcc5c; name: FUN_028dcc5c
 */


ulong FUN_028dcc5c(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0x78);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028dccc0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028dccc0:
  lVar4 = *(long *)(param_1 + 0xa0);
  lVar3 = *(long *)(param_1 + 0xa8) - lVar4;
  if (lVar3 == 0) {
    uVar7 = 0;
LAB_028dcd34:
    uVar6 = 0;
LAB_028dcd38:
    *(undefined8 *)(param_1 + 0x78) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
    return uVar6 | uVar7 << 0x20;
  }
  if (*(long *)(param_1 + 0xa8) != lVar4) {
    uVar7 = 0;
    uVar6 = 1;
    do {
      plVar5 = (long *)(**(code **)(**(long **)(lVar4 + uVar7 * 0x20) + 0x40))();
      if (*plVar5 == *param_2) goto LAB_028dcd38;
      uVar7 = (ulong)((int)uVar7 + 1);
      if ((ulong)(lVar3 >> 5) <= uVar7) goto LAB_028dcd34;
      lVar4 = *(long *)(param_1 + 0xa0);
    } while (uVar7 < (ulong)(*(long *)(param_1 + 0xa8) - lVar4 >> 5));
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


