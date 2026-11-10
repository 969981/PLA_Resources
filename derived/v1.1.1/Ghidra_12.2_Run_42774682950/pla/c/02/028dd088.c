/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dd088; name: FUN_028dd088
 */


void FUN_028dd088(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar4 = (long *)(param_1 + 0x78);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028dd0e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028dd0e4:
  if (*(undefined8 **)(param_1 + 0xa8) == *(undefined8 **)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar4 = (long *)**(undefined8 **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
                    /* WARNING: Could not recover jumptable at 0x028dd124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x70))(plVar4);
  return;
}


