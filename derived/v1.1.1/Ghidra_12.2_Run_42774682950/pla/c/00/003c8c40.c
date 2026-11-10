/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8c40; name: FUN_003c8c40
 */


long FUN_003c8c40(long param_1,int param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  
  puVar4 = *(ulong **)(param_1 + 0x10);
  do {
    uVar6 = *puVar4;
    uVar1 = uVar6 + ((ulong)(param_2 + 0xf) & 0xfffffff0);
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar3) {
      *puVar4 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar4[1] < uVar1) {
    lVar5 = FUN_003f5a34();
    return lVar5;
  }
  return (long)puVar4 + uVar6 + 0x20;
}


