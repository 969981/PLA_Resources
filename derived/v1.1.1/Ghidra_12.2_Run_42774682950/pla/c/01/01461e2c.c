/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01461e2c; name: FUN_01461e2c
 */


void FUN_01461e2c(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  char acStack_b0 [128];
  char *local_28;
  
  sVar1 = strlen(param_2);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + 0x1b & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  __s = strcat(pcVar2,param_2);
  sVar1 = strlen(__s);
  pcVar2 = pcVar2 + sVar1;
  *(undefined8 *)pcVar2 = s_switch_icon_038af177._0_8_;
  pcVar2[8] = 'c';
  pcVar2[9] = 'o';
  pcVar2[10] = 'n';
  pcVar2[0xb] = '\0';
  FUN_009313e8(param_1,&local_28);
  return;
}


