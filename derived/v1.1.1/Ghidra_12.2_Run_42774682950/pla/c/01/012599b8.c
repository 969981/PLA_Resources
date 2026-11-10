/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012599b8; name: FUN_012599b8
 */


void FUN_012599b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar4 = FUN_02bcf6a4();
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar4 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01259a30;
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
LAB_01259a30:
  if (0xff < DAT_043f1fb0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_043f17b0)[DAT_043f1fb0] = param_1;
  DAT_043f1fb0 = DAT_043f1fb0 + 1;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 4));
  param_1[4] = 0;
  *param_1 = (long)&PTR_LAB_041ff3f8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  DAT_043bf948 = param_1;
  return;
}


