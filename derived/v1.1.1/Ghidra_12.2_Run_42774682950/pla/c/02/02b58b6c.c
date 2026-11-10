/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b58b6c; name: FUN_02b58b6c
 */


void FUN_02b58b6c(undefined8 param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_30 [8];
  char *local_28;
  
  pcVar1 = *(char **)(param_2 + 8);
  pcVar3 = acStack_30 + -(*(long *)(param_2 + 0x10) + 0x1bU & 0xfffffffffffffff0);
  local_28 = pcVar3;
  *pcVar3 = '\0';
  pcVar1 = strcat(pcVar3,pcVar1);
  sVar2 = strlen(pcVar1);
  pcVar3 = pcVar3 + sVar2;
  *(undefined8 *)pcVar3 = s____Default__0398bc25._0_8_;
  pcVar3[8] = 'l';
  pcVar3[9] = 't';
  pcVar3[10] = ']';
  pcVar3[0xb] = '\0';
  FUN_009313e8(param_1,&local_28);
  return;
}


