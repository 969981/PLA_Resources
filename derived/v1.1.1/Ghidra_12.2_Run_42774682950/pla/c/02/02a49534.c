/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a49534; name: FUN_02a49534
 */


void FUN_02a49534(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x5e;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x2e4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02a495ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02a495ac:
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    if (param_1 == (long *)0x0) goto LAB_02a49614;
  }
  else if (*(long **)(lVar6 + 0x88) == param_1) goto LAB_02a49614;
  if ((*(byte *)((long)param_1 + 0x301) & 1) == 0) {
    nn::os::WaitThread((ThreadType *)(param_1 + 0x20));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x20));
    *(byte *)((long)param_1 + 0x301) = 1;
  }
LAB_02a49614:
  param_1[0x5e] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x2e4));
  return;
}


