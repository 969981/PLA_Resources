/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058ee80; name: FUN_0058ee80
 */


undefined8 FUN_0058ee80(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_002ebd50(0x22);
      *param_4 = pcVar5;
      uVar4 = s_alts_crypter_instance_is_nullptr_038f0a11._24_8_;
      uVar3 = s_alts_crypter_instance_is_nullptr_038f0a11._16_8_;
      uVar2 = s_alts_crypter_instance_is_nullptr_038f0a11._8_8_;
      uVar1 = s_alts_crypter_instance_is_nullptr_038f0a11._0_8_;
      pcVar5[0x20] = '.';
      pcVar5[0x21] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      *(undefined8 *)(pcVar5 + 0x18) = uVar4;
      *(undefined8 *)(pcVar5 + 0x10) = uVar3;
      return 3;
    }
  }
  else if (param_2 == 0) {
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_002ebd50(0x11);
      *param_4 = pcVar5;
      uVar2 = s_data_is_nullptr__039bbcee._8_8_;
      uVar1 = s_data_is_nullptr__039bbcee._0_8_;
      pcVar5[0x10] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      return 3;
    }
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_002ebd50(0x18);
      uVar2 = s_output_size_is_nullptr__039a23fd._8_8_;
      uVar1 = s_output_size_is_nullptr__039a23fd._0_8_;
      *param_4 = pcVar5;
      *(undefined8 *)(pcVar5 + 8) = uVar2;
      *(undefined8 *)pcVar5 = uVar1;
      *(undefined8 *)(pcVar5 + 0x10) = s_output_size_is_nullptr__039a23fd._16_8_;
    }
  }
  return 3;
}


