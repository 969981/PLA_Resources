/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c43e18; name: FUN_02c43e18
 */


ulong FUN_02c43e18(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  
  if (*(uint *)(param_1 + 0x278) != 0) {
    uVar1 = 0;
    pcVar2 = (char *)(*(long *)(param_1 + 600) + 8);
    do {
      if (*pcVar2 == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x48;
    } while (*(uint *)(param_1 + 0x278) != uVar1);
  }
  return 0xffff;
}


