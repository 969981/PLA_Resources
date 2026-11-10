/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e434b0; name: FUN_02e434b0
 */


undefined8 FUN_02e434b0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = DAT_0440a128;
  uVar4 = FUN_02e7d518();
  lVar5 = FUN_02e7de5c(lVar5,0x37,(uVar4 & 0xffff) + 8);
  *(undefined4 *)(lVar5 + 4) = 0;
  *(undefined8 *)(lVar5 + 8) = param_1;
  piVar1 = (int *)(DAT_0440a128 + 0x9c);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}


