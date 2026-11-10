/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c92dec; name: FUN_02c92dec
 */


void FUN_02c92dec(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  char *pcVar1;
  char acStack_c0 [128];
  char *local_38;
  
  pcVar1 = acStack_c0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) +
                    *(long *)(param_4 + 0x10) + *(long *)(param_5 + 0x10) + 0x10U &
                   0xfffffffffffffff0));
  local_38 = pcVar1;
  *pcVar1 = '\0';
  pcVar1 = strcat(pcVar1,*(char **)(param_2 + 8));
  pcVar1 = strcat(pcVar1,*(char **)(param_3 + 8));
  pcVar1 = strcat(pcVar1,*(char **)(param_4 + 8));
  strcat(pcVar1,*(char **)(param_5 + 8));
  FUN_009313e8(param_1,&local_38);
  return;
}


