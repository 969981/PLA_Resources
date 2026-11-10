/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f585b0; name: FUN_02f585b0
 */


void FUN_02f585b0(int param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6
                 )

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    param_2 = param_2 + (int)param_4 * -8;
    param_5 = *(long *)(&DAT_0442c138 + (long)param_1 * 0x820) + param_5;
  }
  (**(code **)(&DAT_0442c0f0 + (long)param_1 * 0x820))(param_2,param_3,param_6,param_5);
  plVar1 = (long *)(&DAT_0442c8f8 + (long)param_1 * 0x820);
  do {
    lVar4 = *plVar1;
    while (*plVar1 == lVar4) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 - param_3;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


