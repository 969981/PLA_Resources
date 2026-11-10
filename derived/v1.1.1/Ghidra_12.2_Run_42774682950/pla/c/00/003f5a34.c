/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f5a34; name: FUN_003f5a34
 */


undefined8 * FUN_003f5a34(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)FUN_002ebe00(param_2 + 0x10,0x10);
  plVar1 = (long *)(param_1 + 0x10);
  *puVar4 = 0;
  lVar5 = *plVar1;
  do {
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *puVar4 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x18) = puVar4;
        *(undefined8 *)(param_1 + 0x10) = 0;
        return puVar4 + 2;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    lVar5 = *plVar1;
  } while( true );
}


