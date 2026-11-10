/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399f70; name: FUN_03399f70
 */


undefined8 FUN_03399f70(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  int iVar6;
  
  pcVar3 = *(char **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40);
  uVar5 = (ulong)*(uint *)(param_1 + 0x48);
  iVar1 = 0;
  while( true ) {
    iVar6 = iVar1;
    pcVar4 = pcVar3;
    if ((char *)(lVar2 + (int)uVar5) <= pcVar3) {
      FUN_0339a7b4(param_1 + 0x18,0x100);
      pcVar4 = *(char **)(param_1 + 0x38);
      lVar2 = *(long *)(param_1 + 0x40);
      uVar5 = (ulong)*(int *)(param_1 + 0x48);
      if ((char *)(lVar2 + uVar5) <= pcVar4) {
        return 0xc;
      }
    }
    pcVar3 = pcVar4 + 1;
    *(char **)(param_1 + 0x38) = pcVar3;
    if (*pcVar4 == '\0') break;
    iVar1 = 0;
    if (((&DAT_038d00a5)[iVar6] == *pcVar4) && (iVar1 = iVar6 + 1, iVar1 == 3)) {
      return 4;
    }
  }
  return 0xc;
}


