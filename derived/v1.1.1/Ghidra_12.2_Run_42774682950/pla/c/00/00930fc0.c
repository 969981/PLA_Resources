/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00930fc0; name: FUN_00930fc0
 */


void FUN_00930fc0(undefined8 param_1,long param_2,long param_3)

{
  char *pcVar1;
  char acStack_b0 [128];
  char *local_28;
  
  pcVar1 = acStack_b0 +
           (0x80 - (*(long *)(param_2 + 0x10) + *(long *)(param_3 + 0x10) + 0x10U &
                   0xfffffffffffffff0));
  local_28 = pcVar1;
  *pcVar1 = '\0';
  pcVar1 = strcat(pcVar1,*(char **)(param_2 + 8));
  strcat(pcVar1,*(char **)(param_3 + 8));
  FUN_009313e8(param_1,&local_28);
  return;
}


