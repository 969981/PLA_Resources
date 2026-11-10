/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e66b7c; name: FUN_02e66b7c
 */


bool FUN_02e66b7c(long param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 != 0) {
    pcVar3 = *(char **)(param_1 + 0x18);
    uVar4 = (ulong)uVar2;
    do {
      if (*pcVar3 == param_2) {
        if (1 < uVar2) {
          *pcVar3 = (*(char **)(param_1 + 0x18))[(ulong)uVar2 - 1];
          uVar2 = *(uint *)(param_1 + 0x20);
        }
        *(uint *)(param_1 + 0x20) = uVar2 - 1;
        break;
      }
      pcVar3 = pcVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar1 = *(int *)(param_1 + 8) + -1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1 == 0;
}


