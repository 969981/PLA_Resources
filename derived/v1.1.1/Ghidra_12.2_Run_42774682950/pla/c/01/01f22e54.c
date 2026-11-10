/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f22e54; name: FUN_01f22e54
 */


void FUN_01f22e54(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_b0 [128];
  undefined8 local_28;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
  pcVar3 = acStack_b0 + (0x80 - (sVar1 + 0x33 & 0xfffffffffffffff0));
  local_28 = pcVar3;
  *pcVar3 = '\0';
  sVar1 = strlen(pcVar3);
  *(ulong *)(pcVar3 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(pcVar3 + sVar1 + 7) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  pcVar2 = strcat(pcVar3,pcVar2);
  sVar1 = strlen(pcVar2);
  pcVar3 = pcVar3 + sVar1;
  *(undefined8 *)pcVar3 = s__light_time_table_bin_03914b04._0_8_;
  *(ulong *)(pcVar3 + 8) =
       CONCAT26(s__light_time_table_bin_03914b04._14_2_,s__light_time_table_bin_03914b04._8_6_);
  *(ulong *)(pcVar3 + 0xe) =
       CONCAT62(s__light_time_table_bin_03914b04._16_6_,s__light_time_table_bin_03914b04._14_2_);
  FUN_009313e8(param_1,&local_28);
  return;
}


