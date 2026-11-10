/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2345c; name: FUN_01f2345c
 */


void FUN_01f2345c(undefined8 param_1)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  char acStack_b0 [128];
  undefined8 local_28;
  
  sVar1 = strlen(s_data___0427f778);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + 0x33 & 0xfffffffffffffff0));
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
  *(undefined8 *)pcVar2 = s_special_special_trlgt_038afdd6._0_8_;
  *(ulong *)(pcVar2 + 8) =
       CONCAT26(s_special_special_trlgt_038afdd6._14_2_,s_special_special_trlgt_038afdd6._8_6_);
  *(ulong *)(pcVar2 + 0xe) =
       CONCAT62(s_special_special_trlgt_038afdd6._16_6_,s_special_special_trlgt_038afdd6._14_2_);
  FUN_009313e8(param_1,&local_28);
  return;
}


