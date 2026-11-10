/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f140; name: FUN_0058f140
 */


undefined8 FUN_0058f140(ulong param_1,ulong param_2,ulong param_3,long *param_4,undefined8 *param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x19);
      *param_5 = pcVar3;
      uVar2 = s_counter_size_is_invalid__039a2415._0_8_;
      *(ulong *)(pcVar3 + 8) =
           CONCAT71(s_counter_size_is_invalid__039a2415._9_7_,s_counter_size_is_invalid__039a2415[8]
                   );
      *(undefined8 *)pcVar3 = uVar2;
      uVar2 = CONCAT17(s_counter_size_is_invalid__039a2415[0x10],
                       s_counter_size_is_invalid__039a2415._9_7_);
      *(undefined8 *)(pcVar3 + 0x11) = s_counter_size_is_invalid__039a2415._17_8_;
      *(undefined8 *)(pcVar3 + 9) = uVar2;
    }
  }
  else if ((param_3 == 0) || (param_2 <= param_3)) {
    if (param_5 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x1a);
      *param_5 = pcVar3;
      uVar2 = s_overflow_size_is_invalid__038c9c39._0_8_;
      *(ulong *)(pcVar3 + 8) =
           CONCAT62(s_overflow_size_is_invalid__038c9c39._10_6_,
                    s_overflow_size_is_invalid__038c9c39._8_2_);
      *(undefined8 *)pcVar3 = uVar2;
      uVar2 = CONCAT26(s_overflow_size_is_invalid__038c9c39._16_2_,
                       s_overflow_size_is_invalid__038c9c39._10_6_);
      *(undefined8 *)(pcVar3 + 0x12) = s_overflow_size_is_invalid__038c9c39._18_8_;
      *(undefined8 *)(pcVar3 + 10) = uVar2;
    }
  }
  else {
    if (param_4 != (long *)0x0) {
      puVar1 = (ulong *)FUN_002ebd50(0x18);
      *param_4 = (long)puVar1;
      *puVar1 = param_2;
      puVar1[1] = param_3;
      uVar2 = FUN_002ebd80(param_2);
      *(undefined8 *)(*param_4 + 0x10) = uVar2;
      if ((param_1 & 1) != 0) {
        *(undefined1 *)(param_2 + *(long *)(*param_4 + 0x10) + -1) = 0x80;
      }
      return 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      pcVar3 = (char *)FUN_002ebd50(0x1c);
      *param_5 = pcVar3;
      uVar2 = s_crypter_counter_is_nullptr__038bfc79._0_8_;
      *(ulong *)(pcVar3 + 8) =
           CONCAT44(s_crypter_counter_is_nullptr__038bfc79._12_4_,
                    s_crypter_counter_is_nullptr__038bfc79._8_4_);
      *(undefined8 *)pcVar3 = uVar2;
      uVar2 = CONCAT44(s_crypter_counter_is_nullptr__038bfc79._16_4_,
                       s_crypter_counter_is_nullptr__038bfc79._12_4_);
      *(undefined8 *)(pcVar3 + 0x14) = s_crypter_counter_is_nullptr__038bfc79._20_8_;
      *(undefined8 *)(pcVar3 + 0xc) = uVar2;
    }
  }
  return 3;
}


