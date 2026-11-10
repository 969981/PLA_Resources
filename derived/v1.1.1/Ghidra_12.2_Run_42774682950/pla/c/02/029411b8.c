/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029411b8; name: FUN_029411b8
 */


void FUN_029411b8(long param_1,char param_2,byte param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x60);
  if ((((*pcVar1 == param_2) || (pcVar1 = (char *)(param_1 + 0x74), *pcVar1 == param_2)) ||
      (pcVar1 = (char *)(param_1 + 0x88), *pcVar1 == param_2)) ||
     (((pcVar1 = (char *)(param_1 + 0x9c), *pcVar1 == param_2 ||
       (pcVar1 = (char *)(param_1 + 0xb0), *pcVar1 == param_2)) ||
      (pcVar1 = (char *)(param_1 + 0xc4), *pcVar1 == param_2)))) {
    pcVar1[0x11] = param_3 & 1;
    return;
  }
  return;
}


