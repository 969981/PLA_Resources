/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f22fd0; name: FUN_01f22fd0
 */


void FUN_01f22fd0(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char acStack_b0 [128];
  undefined8 local_28;
  
  pcVar2 = (char *)*param_2;
  sVar1 = strlen(pcVar2);
  pcVar3 = acStack_b0 + (0x80 - (sVar1 + 0x36 & 0xfffffffffffffff0));
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
  pcVar3[0x18] = '\0';
  *(undefined8 *)pcVar3 = s__light_weather_table_bin_0392a356._0_8_;
  *(undefined8 *)(pcVar3 + 8) = s__light_weather_table_bin_0392a356._8_8_;
  *(undefined8 *)(pcVar3 + 0x10) = s__light_weather_table_bin_0392a356._16_8_;
  FUN_009313e8(param_1,&local_28);
  return;
}


