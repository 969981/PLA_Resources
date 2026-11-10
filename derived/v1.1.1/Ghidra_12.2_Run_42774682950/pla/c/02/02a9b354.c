/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9b354; name: FUN_02a9b354
 */


undefined8 * FUN_02a9b354(long param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x210);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x204));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02a9b3b8;
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
LAB_02a9b3b8:
  uVar7 = (ulong)param_2;
  if (uVar7 < *(ulong *)(param_1 + 0x270)) {
    puVar8 = *(undefined8 **)(param_1 + 0x248);
    if (0 < param_2) {
      uVar9 = uVar7 - 1;
      for (uVar2 = uVar7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        puVar8 = (undefined8 *)*puVar8;
        uVar7 = uVar7 - 1;
      }
      if (2 < uVar9) {
        do {
          uVar7 = uVar7 - 4;
          puVar8 = *(undefined8 **)**(undefined8 **)*puVar8;
        } while (0 < (long)uVar7);
      }
    }
    puVar8 = puVar8 + 2;
  }
  else if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
          (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), puVar8 = (undefined8 *)PTR_DAT_0437a0d8,
          iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  else {
    puVar8 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x204));
  return puVar8;
}


