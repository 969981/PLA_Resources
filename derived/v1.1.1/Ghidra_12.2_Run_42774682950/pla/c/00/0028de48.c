/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028de48; name: FUN_0028de48
 */


void FUN_0028de48(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar1 != 0) {
    lVar4 = 0;
    pcVar3 = *(char **)(param_1 + 0x38);
    cVar2 = *pcVar3;
    while( true ) {
      if (cVar2 != '\0') {
        FUN_0087cc48(pcVar3 + lVar4,param_2);
        FUN_0087cb98(pcVar3 + lVar4);
      }
      if ((ulong)bVar1 * 0x78 == lVar4 + 0x78) break;
      lVar4 = lVar4 + 0x78;
      pcVar3 = *(char **)(param_1 + 0x38);
      cVar2 = pcVar3[lVar4];
    }
  }
  return;
}


