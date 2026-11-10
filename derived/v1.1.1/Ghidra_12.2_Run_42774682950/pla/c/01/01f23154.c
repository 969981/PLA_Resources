/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f23154; name: FUN_01f23154
 */


void FUN_01f23154(undefined8 param_1)

{
  size_t sVar1;
  char local_60 [7];
  char acStack_59 [9];
  char acStack_50 [8];
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  
  local_28 = local_60;
  local_60[0] = '\0';
  sVar1 = strlen(local_60);
  *(ulong *)(local_60 + sVar1) =
       CONCAT17(s_bin_field_env__039a5564[7],s_bin_field_env__039a5564._0_7_);
  *(ulong *)(local_60 + sVar1 + 7) =
       CONCAT71(s_bin_field_env__039a5564._8_7_,s_bin_field_env__039a5564[7]);
  sVar1 = strlen(local_60);
  *(undefined8 *)(local_60 + sVar1 + 8) = s_production_light_production_tabl_039893a3._8_8_;
  *(undefined8 *)(acStack_50 + sVar1) = s_production_light_production_tabl_039893a3._16_8_;
  *(ulong *)(auStack_48 + sVar1) =
       CONCAT26(s_production_light_production_tabl_039893a3._30_2_,
                s_production_light_production_tabl_039893a3._24_6_);
  *(ulong *)(auStack_48 + sVar1 + 6) =
       CONCAT62(s_production_light_production_tabl_039893a3._32_6_,
                s_production_light_production_tabl_039893a3._30_2_);
  *(undefined8 *)(local_60 + sVar1) = s_production_light_production_tabl_039893a3._0_8_;
  FUN_009313e8(param_1,&local_28);
  return;
}


