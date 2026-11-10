/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2329c; name: FUN_01f2329c
 */


void FUN_01f2329c(undefined8 param_1)

{
  size_t sVar1;
  char local_50 [7];
  char acStack_49 [9];
  undefined4 auStack_40 [6];
  undefined1 *local_28;
  
  local_28 = local_50;
  local_50[0] = '\0';
  sVar1 = strlen(local_50);
  *(ulong *)(local_50 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(local_50 + sVar1 + 7) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  sVar1 = strlen(local_50);
  *(undefined4 *)((long)auStack_40 + sVar1) = 0x74676c;
  *(undefined8 *)(local_50 + sVar1) = s_common_common_trlgt_038eb78b._0_8_;
  *(undefined8 *)(local_50 + sVar1 + 8) = s_common_common_trlgt_038eb78b._8_8_;
  FUN_009313e8(param_1,&local_28);
  return;
}


