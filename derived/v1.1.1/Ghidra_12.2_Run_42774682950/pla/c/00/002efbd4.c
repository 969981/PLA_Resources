/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002efbd4; name: FUN_002efbd4
 */


void FUN_002efbd4(void)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  
  pcVar6 = *(char **)PTR_DAT_04373860;
  lVar5 = *(long *)(pcVar6 + 0x48);
  plVar1 = (long *)(pcVar6 + 0x48);
  pcVar2 = pcVar6 + 8;
  do {
    while (lVar5 < 2) {
      FUN_002ef750(pcVar2);
      if (*plVar1 < 2) {
        cVar3 = *pcVar6;
        while (cVar3 == '\0') {
          auVar7 = FUN_002eefd0(1);
          FUN_002ef8a0(pcVar6 + 0x28,pcVar2,auVar7._0_8_,auVar7._8_8_);
          cVar3 = *pcVar6;
        }
      }
      FUN_002ef790(pcVar2);
      lVar5 = *plVar1;
    }
    while (*plVar1 == lVar5) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
    lVar5 = *plVar1;
  } while( true );
}


