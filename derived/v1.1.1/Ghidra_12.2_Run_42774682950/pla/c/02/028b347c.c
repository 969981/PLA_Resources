/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b347c; name: FUN_028b347c
 */


undefined1 FUN_028b347c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x360);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x354));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028b34e0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028b34e0:
  if ((ulong)((*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 4) * -0x5555555555555555)
      <= (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x118) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 0x28);
  *(undefined8 *)(param_1 + 0x360) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x354));
  return uVar2;
}


