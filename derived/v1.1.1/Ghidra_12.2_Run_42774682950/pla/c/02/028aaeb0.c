/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aaeb0; name: FUN_028aaeb0
 */


undefined * FUN_028aaeb0(long param_1,long *param_2,char *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x394));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028aaf18;
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
LAB_028aaf18:
  if (*param_3 == '\0') {
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
    if ((ulong)((param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3) <= (ulong)*(uint *)(param_3 + 4))
    {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar6 = (undefined *)(*param_2 + (ulong)*(uint *)(param_3 + 4) * 0x58);
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x394));
  return puVar6;
}


