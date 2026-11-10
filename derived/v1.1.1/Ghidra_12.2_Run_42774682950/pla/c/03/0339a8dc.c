/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a8dc; name: FUN_0339a8dc
 */


void FUN_0339a8dc(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x20);
  pcVar2 = (char *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x1c));
  if (pcVar2 < pcVar1) {
    do {
      if (*pcVar2 == '\r' || *pcVar2 == '\n') {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      pcVar2 = pcVar2 + 1;
    } while (pcVar1 != pcVar2);
  }
  *(int *)(param_1 + 0x1c) = (int)pcVar1 - (int)*(long *)(param_1 + 0x28);
  return;
}


