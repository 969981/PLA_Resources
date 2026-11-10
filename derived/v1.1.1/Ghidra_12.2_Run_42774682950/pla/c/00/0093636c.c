/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0093636c; name: FUN_0093636c
 */


void FUN_0093636c(undefined8 param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char acStack_b0 [128];
  undefined8 local_28;
  
  lVar1 = 0x80 - (*(long *)(param_2 + 0x10) + 0x27U & 0xfffffffffffffff0);
  __s = acStack_b0 + lVar1;
  local_28 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  pcVar3 = __s + sVar2;
  *(undefined8 *)pcVar3 = s_bin_trainer_trdata__0392755f._0_8_;
  *(undefined8 *)(pcVar3 + 8) = s_bin_trainer_trdata__0392755f._8_8_;
  pcVar3[0x10] = 't';
  pcVar3[0x11] = 'a';
  pcVar3[0x12] = '_';
  pcVar3[0x13] = '\0';
  pcVar3 = strcat(__s,*(char **)(param_2 + 8));
  sVar2 = strlen(pcVar3);
  builtin_strncpy(acStack_b0 + sVar2 + lVar1,".bin",5);
  FUN_009313e8(param_1,&local_28);
  return;
}


