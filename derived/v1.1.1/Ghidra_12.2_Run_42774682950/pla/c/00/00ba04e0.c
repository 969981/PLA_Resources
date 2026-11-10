/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ba04e0; name: FUN_00ba04e0
 */


bool FUN_00ba04e0(long param_1)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *local_18;
  
  FUN_00b5f458(&local_18,*(undefined8 *)(param_1 + 0xa0));
  pcVar6 = (char *)FUN_00b8605c(local_18[0xb],&DAT_03a77b08);
  cVar2 = *pcVar6;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return cVar2 != '\0';
}


