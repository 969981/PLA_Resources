/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8f804; name: FUN_02c8f804
 */


void FUN_02c8f804(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (((*PTR_DAT_0437b6f0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b6f0);
  }
  lVar6 = *(long *)PTR_DAT_0437b6f8;
  *(long *)PTR_DAT_0437b700 = lVar6;
  uVar2 = *(uint *)(param_1 + 0x68);
  lVar7 = *(long *)(lVar6 + 0x58);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar7 + 0x7e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x7d4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02c8f894;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02c8f894:
  FUN_00282fe0(*(undefined8 *)(lVar7 + 0x80),uVar2);
  if (0x3f < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_02c9fc40();
  }
  *(ulong *)(lVar7 + 0x8d8) = *(ulong *)(lVar7 + 0x8d8) | 1L << ((long)(int)uVar2 & 0x3fU);
  *(undefined8 *)(lVar7 + 0x7e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x7d4));
  return;
}


