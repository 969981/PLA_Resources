/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86960; name: FUN_02e86960
 */


void FUN_02e86960(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = FUN_02e7de5c(DAT_0440a128,0x36,0x14);
  uVar2 = param_2[1];
  *(undefined8 *)(lVar5 + 4) = *param_2;
  piVar1 = (int *)(param_1 + 0x9c);
  *(undefined8 *)(lVar5 + 0xc) = uVar2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


