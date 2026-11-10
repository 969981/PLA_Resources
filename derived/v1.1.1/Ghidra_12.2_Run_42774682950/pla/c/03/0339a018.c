/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a018; name: FUN_0339a018
 */


undefined8 FUN_0339a018(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = *(char **)(param_1 + 0x38);
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = (ulong)*(uint *)(param_1 + 0x48);
  while( true ) {
    pcVar4 = pcVar3;
    if ((char *)(lVar1 + (int)uVar2) <= pcVar3) {
      FUN_0339a7b4(param_1 + 0x18,0x100);
      pcVar4 = *(char **)(param_1 + 0x38);
      lVar1 = *(long *)(param_1 + 0x40);
      uVar2 = (ulong)*(int *)(param_1 + 0x48);
      if ((char *)(lVar1 + uVar2) <= pcVar4) {
        return 0xc;
      }
    }
    pcVar3 = pcVar4 + 1;
    *(char **)(param_1 + 0x38) = pcVar3;
    if (*pcVar4 == '\0') break;
    if (*pcVar4 == '\"') {
      return 10;
    }
  }
  return 0xc;
}


