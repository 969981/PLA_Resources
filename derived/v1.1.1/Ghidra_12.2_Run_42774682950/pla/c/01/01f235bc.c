/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f235bc; name: FUN_01f235bc
 */


void FUN_01f235bc(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  char acStack_40 [7];
  char cStack_39;
  char *local_38;
  
  sVar1 = strlen(s_data___0427f778);
  sVar2 = strlen((char *)*param_2);
  pcVar4 = acStack_40 + -(sVar1 + sVar2 + 0x29 & 0xfffffffffffffff0);
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
  *(undefined8 *)pcVar4 = s__area_trlgt_03962ad6._0_8_;
  pcVar4[8] = 'l';
  pcVar4[9] = 'g';
  pcVar4[10] = 't';
  pcVar4[0xb] = '\0';
  FUN_009313e8(param_1,&local_38);
  return;
}


