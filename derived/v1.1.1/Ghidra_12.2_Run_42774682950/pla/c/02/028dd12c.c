/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dd12c; name: FUN_028dd12c
 */


void FUN_028dd12c(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_2 + 4);
  lVar4 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0x78);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028dd190;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028dd190:
  if ((ulong)(*(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 5) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0xa0) + (ulong)uVar1 * 0x20);
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
                    /* WARNING: Could not recover jumptable at 0x028dd1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x70))(plVar5);
  return;
}


