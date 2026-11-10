/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028715c4; name: FUN_028715c4
 */


void FUN_028715c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar5 = FUN_02bcf6a4();
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0287163c;
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
LAB_0287163c:
  if (0xff < DAT_043f1fb0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (&DAT_043f17b0)[DAT_043f1fb0] = param_1;
  DAT_043f1fb0 = DAT_043f1fb0 + 1;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  puVar4 = PTR_DAT_04387eb0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0;
  *(long **)PTR_DAT_0437e6f0 = param_1;
  return;
}


