/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b1944; name: FUN_028b1944
 */


undefined * FUN_028b1944(long param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x360);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x354));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028b19a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028b19a8:
  if (*param_2 == '\0') {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), puVar6 = PTR_DAT_0437a0d8, iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    else {
      puVar6 = PTR_DAT_0437a0d8;
    }
  }
  else {
    if ((ulong)((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) * -0x5555555555555555)
        <= (ulong)*(uint *)(param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar6 = (undefined *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_2 + 4) * 0x30 + 8);
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x354));
  return puVar6;
}


