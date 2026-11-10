/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01441474; name: FUN_01441474
 */


void FUN_01441474(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *__s;
  char acStack_b0 [128];
  undefined8 local_28;
  
  sVar2 = strlen(param_2);
  __s = acStack_b0 + (0x80 - (sVar2 + 0x21 & 0xfffffffffffffff0));
  local_28 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  pcVar1 = __s + sVar2;
  *(undefined8 *)pcVar1 = s_pane_L_vigilance__03913ecb._0_8_;
  *(undefined8 *)(pcVar1 + 8) = s_pane_L_vigilance__03913ecb._8_8_;
  pcVar1[0x10] = '_';
  pcVar1[0x11] = '\0';
  strcat(__s,param_2);
  FUN_009313e8(param_1,&local_28);
  return;
}


