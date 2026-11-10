/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058ef40; name: FUN_0058ef40
 */


undefined8 FUN_0058ef40(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char local_14 [4];
  
  local_14[0] = '\0';
  uVar5 = FUN_0058f260(*(undefined8 *)(param_1 + 0x10),local_14,param_2);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (local_14[0] == '\0') {
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0xd;
  }
  pcVar6 = (char *)FUN_002ebd50(0x5a);
  *param_2 = pcVar6;
  uVar4 = s_crypter_counter_is_wrapped__The_c_038dc87f._64_8_;
  uVar3 = s_crypter_counter_is_wrapped__The_c_038dc87f._24_8_;
  uVar2 = s_crypter_counter_is_wrapped__The_c_038dc87f._16_8_;
  uVar1 = s_crypter_counter_is_wrapped__The_c_038dc87f._0_8_;
  uVar5 = CONCAT62(s_crypter_counter_is_wrapped__The_c_038dc87f._74_6_,
                   s_crypter_counter_is_wrapped__The_c_038dc87f._72_2_);
  *(undefined8 *)(pcVar6 + 8) = s_crypter_counter_is_wrapped__The_c_038dc87f._8_8_;
  *(undefined8 *)pcVar6 = uVar1;
  *(undefined8 *)(pcVar6 + 0x18) = uVar3;
  *(undefined8 *)(pcVar6 + 0x10) = uVar2;
  uVar1 = CONCAT26(s_crypter_counter_is_wrapped__The_c_038dc87f._80_2_,
                   s_crypter_counter_is_wrapped__The_c_038dc87f._74_6_);
  *(undefined8 *)(pcVar6 + 0x52) = s_crypter_counter_is_wrapped__The_c_038dc87f._82_8_;
  *(undefined8 *)(pcVar6 + 0x4a) = uVar1;
  *(undefined8 *)(pcVar6 + 0x48) = uVar5;
  *(undefined8 *)(pcVar6 + 0x40) = uVar4;
  uVar2 = s_crypter_counter_is_wrapped__The_c_038dc87f._56_8_;
  uVar1 = s_crypter_counter_is_wrapped__The_c_038dc87f._48_8_;
  uVar5 = s_crypter_counter_is_wrapped__The_c_038dc87f._32_8_;
  *(undefined8 *)(pcVar6 + 0x28) = s_crypter_counter_is_wrapped__The_c_038dc87f._40_8_;
  *(undefined8 *)(pcVar6 + 0x20) = uVar5;
  *(undefined8 *)(pcVar6 + 0x38) = uVar2;
  *(undefined8 *)(pcVar6 + 0x30) = uVar1;
  return 0xd;
}


