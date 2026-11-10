/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114460c; name: FUN_0114460c
 */


void FUN_0114460c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  char local_30 [4];
  uint local_2c;
  uint uStack_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    FUN_01143e80(local_30);
    if (local_30[0] != '\0') {
      *(bool *)(param_1 + 0x68) = (uStack_28 ^ local_2c) == 0x69ebdee8;
      local_30[0] = '\0';
    }
    plVar5 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011446b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x20))();
        return;
      }
    }
  }
  return;
}


