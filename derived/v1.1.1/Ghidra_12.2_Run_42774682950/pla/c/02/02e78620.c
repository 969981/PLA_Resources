/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78620; name: FUN_02e78620
 */


void FUN_02e78620(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar4 = FUN_02e7d500();
  lVar5 = FUN_02e7de5c(DAT_0440a128,0x1b,uVar4);
  *(undefined8 *)(lVar5 + 4) = param_1;
  piVar1 = (int *)(DAT_0440a128 + 0x9c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


