/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f231e4; name: FUN_01f231e4
 */


void FUN_01f231e4(undefined8 param_1)

{
  size_t sVar1;
  char *__s;
  char *pcVar2;
  char acStack_b0 [128];
  undefined8 local_28;
  
  sVar1 = strlen(s_data___0427f778);
  pcVar2 = acStack_b0 + (0x80 - (sVar1 + 0x43 & 0xfffffffffffffff0));
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
  *(ulong *)(pcVar2 + 0x1e) =
       CONCAT62(s_production_light_production_tabl_039893a3._32_6_,
                s_production_light_production_tabl_039893a3._30_2_);
  *(undefined8 *)pcVar2 = s_production_light_production_tabl_039893a3._0_8_;
  *(undefined8 *)(pcVar2 + 8) = s_production_light_production_tabl_039893a3._8_8_;
  *(undefined8 *)(pcVar2 + 0x10) = s_production_light_production_tabl_039893a3._16_8_;
  *(ulong *)(pcVar2 + 0x18) =
       CONCAT26(s_production_light_production_tabl_039893a3._30_2_,
                s_production_light_production_tabl_039893a3._24_6_);
  FUN_009313e8(param_1,&local_28);
  return;
}


