/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f233d8; name: FUN_01f233d8
 */


void FUN_01f233d8(undefined8 param_1)

{
  size_t sVar1;
  char local_50 [7];
  undefined1 auStack_49 [7];
  undefined8 auStack_42 [3];
  undefined1 *local_28;
  
  local_28 = local_50;
  local_50[0] = '\0';
  sVar1 = strlen(local_50);
  *(ulong *)(local_50 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(auStack_49 + sVar1) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  sVar1 = strlen(local_50);
  *(undefined8 *)(local_50 + sVar1) = s_special_special_trlgt_038afdd6._0_8_;
  *(ulong *)(auStack_49 + sVar1 + 1) =
       CONCAT26(s_special_special_trlgt_038afdd6._14_2_,s_special_special_trlgt_038afdd6._8_6_);
  *(ulong *)((long)auStack_42 + sVar1) =
       CONCAT62(s_special_special_trlgt_038afdd6._16_6_,s_special_special_trlgt_038afdd6._14_2_);
  FUN_009313e8(param_1,&local_28);
  return;
}


