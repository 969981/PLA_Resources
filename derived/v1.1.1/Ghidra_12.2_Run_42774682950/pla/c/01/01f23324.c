/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f23324; name: FUN_01f23324
 */


void FUN_01f23324(undefined8 param_1)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  char acStack_b0 [128];
  undefined8 local_28;
  
  sVar1 = strlen(s_data___0427f778);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + 0x31 & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  __s = strcat(pcVar2,s_data___0427f778);
  sVar1 = strlen(__s);
  *(ulong *)(pcVar2 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(pcVar2 + sVar1 + 7) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  sVar1 = strlen(pcVar2);
  pcVar2 = pcVar2 + sVar1;
  *(undefined8 *)pcVar2 = s_common_common_trlgt_038eb78b._0_8_;
  *(undefined8 *)(pcVar2 + 8) = s_common_common_trlgt_038eb78b._8_8_;
  pcVar2[0x10] = 'l';
  pcVar2[0x11] = 'g';
  pcVar2[0x12] = 't';
  pcVar2[0x13] = '\0';
  FUN_009313e8(param_1,&local_28);
  return;
}


