/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028eb84; name: FUN_0028eb84
 */


void FUN_0028eb84(long param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  
  if (((*(byte *)(param_1 + 4) >> 3 & 1) == 0) &&
     (bVar1 = *(byte *)(param_1 + 0x5b), (ulong)bVar1 != 0)) {
    lVar3 = 0;
    do {
      pcVar2 = *(char **)(*(long *)(param_1 + 0x18) + lVar3 + 0x10);
      if (*pcVar2 != '\0') {
        FUN_008773a4(pcVar2,param_2);
        FUN_008772bc(pcVar2);
      }
      lVar3 = lVar3 + 0x38;
    } while ((ulong)bVar1 * 0x38 != lVar3);
  }
  return;
}


