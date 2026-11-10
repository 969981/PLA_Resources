/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f23080; name: FUN_01f23080
 */


void FUN_01f23080(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_40 [7];
  char cStack_39;
  undefined8 local_38;
  
  sVar1 = strlen(s_data___0427f778);
  sVar2 = strlen((char *)*param_2);
  pcVar4 = acStack_40 + -(sVar1 + sVar2 + 0x36 & 0xfffffffffffffff0);
  local_38 = pcVar4;
  *pcVar4 = '\0';
  pcVar3 = strcat(pcVar4,s_data___0427f778);
  sVar1 = strlen(pcVar3);
  *(ulong *)(pcVar4 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(pcVar4 + sVar1 + 7) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  pcVar3 = strcat(pcVar4,(char *)*param_2);
  sVar1 = strlen(pcVar3);
  pcVar4 = pcVar4 + sVar1;
  pcVar4[0x18] = '\0';
  *(undefined8 *)pcVar4 = s__light_weather_table_bin_0392a356._0_8_;
  *(undefined8 *)(pcVar4 + 8) = s__light_weather_table_bin_0392a356._8_8_;
  *(undefined8 *)(pcVar4 + 0x10) = s__light_weather_table_bin_0392a356._16_8_;
  FUN_009313e8(param_1,&local_38);
  return;
}


