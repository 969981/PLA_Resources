/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060fb2c; name: FUN_0060fb2c
 */


void FUN_0060fb2c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_043753d8;
  param_1[2] = (long)(param_1 + 1);
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  param_1[3] = *param_2;
  lVar5 = param_2[1];
  param_1[4] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


