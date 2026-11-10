/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039fa8c; name: FUN_0039fa8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0039fa8c(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong local_40;
  undefined8 uStack_38;
  char *local_30;
  
  bVar9 = *(byte *)(param_1 + 0x70);
  uVar10 = (uint)bVar9;
  if ((param_2 & 1) == 0) {
    while (uVar10 - 0x30 < 10) {
      FUN_0039f350(param_1);
      bVar9 = *(byte *)(param_1 + 0x70);
      uVar10 = (uint)bVar9;
    }
    if ((param_3 & 1) == 0) {
LAB_0039fb78:
      if (bVar9 == 0x2e) {
        FUN_0039f350(param_1);
        bVar9 = *(byte *)(param_1 + 0x70);
        while (bVar9 - 0x30 < 10) {
          FUN_0039f350(param_1);
          bVar9 = *(byte *)(param_1 + 0x70);
        }
        goto LAB_0039fcb4;
      }
      bVar3 = false;
    }
    else {
LAB_0039fcb4:
      bVar3 = true;
    }
    if ((bVar9 | 0x20) == 0x65) {
      FUN_0039f350(param_1);
      bVar9 = *(byte *)(param_1 + 0x70);
      if ((bVar9 == 0x2d) || (bVar9 == 0x2b)) {
        FUN_0039f350(param_1);
      }
      if (*(byte *)(param_1 + 0x70) - 0x30 < 10) {
        do {
          FUN_0039f350(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      else {
        local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
        uStack_38 = _UNK_03889b68;
        local_40 = _DAT_03889b60;
        local_30[0x20] = '.';
        uVar4 = s__e__must_be_followed_by_exponent_039371ef._24_8_;
        uVar2 = s__e__must_be_followed_by_exponent_039371ef._16_8_;
        uVar1 = s__e__must_be_followed_by_exponent_039371ef._0_8_;
        *(undefined8 *)(local_30 + 8) = s__e__must_be_followed_by_exponent_039371ef._8_8_;
        *(undefined8 *)local_30 = uVar1;
        *(undefined8 *)(local_30 + 0x18) = uVar4;
        *(undefined8 *)(local_30 + 0x10) = uVar2;
        local_30[0x21] = '\0';
                    /* try { // try from 0039fd60 to 0039fd67 has its CatchHandler @ 0039ffbc */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_40);
        if ((local_40 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_30);
        }
      }
      bVar3 = true;
    }
    if ((*(char *)(param_1 + 0xa4) != '\0') &&
       ((*(char *)(param_1 + 0x70) == 'F' || (*(char *)(param_1 + 0x70) == 'f')))) {
      FUN_0039f350(param_1);
      bVar3 = true;
    }
LAB_0039fdac:
    bVar9 = *(byte *)(param_1 + 0x70);
    if (bVar9 - 0x61 < 0x1a) goto LAB_0039fdbc;
LAB_0039fb30:
    if ((bVar9 == 0x5f) || ((byte)(bVar9 + 0xbf) < 0x1a)) goto LAB_0039fdbc;
LAB_0039fe1c:
    if (bVar9 != 0x2e) goto LAB_0039feec;
    if (bVar3) {
      local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
      uVar8 = s_Already_saw_decimal_point_or_exp_03967b23._32_8_;
      uVar7 = s_Already_saw_decimal_point_or_exp_03967b23._24_8_;
      uVar6 = s_Already_saw_decimal_point_or_exp_03967b23._16_8_;
      uVar5 = s_Already_saw_decimal_point_or_exp_03967b23._8_8_;
      uVar4 = s_Already_saw_decimal_point_or_exp_03967b23._0_8_;
      uVar1 = CONCAT26(s_Already_saw_decimal_point_or_exp_03967b23._46_2_,
                       s_Already_saw_decimal_point_or_exp_03967b23._40_6_);
      uVar2 = CONCAT62(s_Already_saw_decimal_point_or_exp_03967b23._48_6_,
                       s_Already_saw_decimal_point_or_exp_03967b23._46_2_);
      uStack_38 = _UNK_038898c8;
      local_40 = _DAT_038898c0;
      *(undefined8 *)(local_30 + 0x36) = s_Already_saw_decimal_point_or_exp_03967b23._54_8_;
      *(undefined8 *)(local_30 + 0x2e) = uVar2;
      *(undefined8 *)(local_30 + 0x18) = uVar7;
      *(undefined8 *)(local_30 + 0x10) = uVar6;
      *(undefined8 *)(local_30 + 0x28) = uVar1;
      *(undefined8 *)(local_30 + 0x20) = uVar8;
      local_30[0x3e] = '\0';
      *(undefined8 *)(local_30 + 8) = uVar5;
      *(undefined8 *)local_30 = uVar4;
                    /* try { // try from 0039fe7c to 0039fe83 has its CatchHandler @ 0039ffac */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
    }
    else {
      local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      uVar4 = s_Hex_and_octal_numbers_must_be_in_039b12d8._16_8_;
      uVar2 = s_Hex_and_octal_numbers_must_be_in_039b12d8._0_8_;
      uStack_38 = _UNK_03889b88;
      local_40 = _DAT_03889b80;
      uVar1 = CONCAT17(s_Hex_and_octal_numbers_must_be_in_039b12d8[0x1f],
                       s_Hex_and_octal_numbers_must_be_in_039b12d8._24_7_);
      *(undefined8 *)(local_30 + 8) = s_Hex_and_octal_numbers_must_be_in_039b12d8._8_8_;
      *(undefined8 *)local_30 = uVar2;
      *(undefined8 *)(local_30 + 0x18) = uVar1;
      *(undefined8 *)(local_30 + 0x10) = uVar4;
      *(ulong *)(local_30 + 0x1f) =
           CONCAT71(s_Hex_and_octal_numbers_must_be_in_039b12d8._32_7_,
                    s_Hex_and_octal_numbers_must_be_in_039b12d8[0x1f]);
      local_30[0x27] = '\0';
                    /* try { // try from 0039fecc to 0039fed3 has its CatchHandler @ 0039ff9c */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
    }
  }
  else {
    if ((uVar10 | 0x20) != 0x78) {
      if (9 < uVar10 - 0x30) {
        if ((param_3 & 1) == 0) goto LAB_0039fb78;
        goto LAB_0039fcb4;
      }
      if ((uVar10 & 0xf8) == 0x30) {
        do {
          FUN_0039f350(param_1);
        } while ((*(byte *)(param_1 + 0x70) & 0xf8) == 0x30);
        if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_0039fb1c;
      }
      local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
      uStack_38 = _UNK_03888fd8;
      local_40 = _DAT_03888fd0;
      local_30[0x30] = 't';
      uVar7 = s_Numbers_starting_with_leading_ze_03967aee._40_8_;
      uVar6 = s_Numbers_starting_with_leading_ze_03967aee._32_8_;
      uVar5 = s_Numbers_starting_with_leading_ze_03967aee._24_8_;
      uVar4 = s_Numbers_starting_with_leading_ze_03967aee._16_8_;
      uVar2 = s_Numbers_starting_with_leading_ze_03967aee._8_8_;
      uVar1 = s_Numbers_starting_with_leading_ze_03967aee._0_8_;
      local_30[0x31] = 'a';
      local_30[0x32] = 'l';
      local_30[0x33] = '.';
      local_30[0x34] = '\0';
      *(undefined8 *)(local_30 + 0x18) = uVar5;
      *(undefined8 *)(local_30 + 0x10) = uVar4;
      *(undefined8 *)(local_30 + 0x28) = uVar7;
      *(undefined8 *)(local_30 + 0x20) = uVar6;
      *(undefined8 *)(local_30 + 8) = uVar2;
      *(undefined8 *)local_30 = uVar1;
                    /* try { // try from 0039fc48 to 0039fc4f has its CatchHandler @ 0039ff8c */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
      if ((local_40 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_30);
      }
      if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_0039fb1c;
      do {
        FUN_0039f350(param_1);
        bVar3 = false;
      } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      goto LAB_0039fdac;
    }
    FUN_0039f350(param_1);
    if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
       ((uVar10 = *(byte *)(param_1 + 0x70) - 0x41, uVar10 < 0x26 &&
        ((1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0)))) {
      do {
        do {
          FUN_0039f350(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
        uVar10 = *(byte *)(param_1 + 0x70) - 0x41;
      } while (uVar10 < 0x26 && (1L << ((ulong)uVar10 & 0x3f) & 0x3f0000003fU) != 0);
    }
    else {
      local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      uStack_38 = _UNK_03889548;
      local_40 = _DAT_03889540;
      local_30[0x20] = 'i';
      uVar4 = s__0x__must_be_followed_by_hex_dig_0390fea0._24_8_;
      uVar2 = s__0x__must_be_followed_by_hex_dig_0390fea0._16_8_;
      uVar1 = s__0x__must_be_followed_by_hex_dig_0390fea0._0_8_;
      local_30[0x21] = 't';
      local_30[0x22] = 's';
      local_30[0x23] = '.';
      *(undefined8 *)(local_30 + 8) = s__0x__must_be_followed_by_hex_dig_0390fea0._8_8_;
      *(undefined8 *)local_30 = uVar1;
      *(undefined8 *)(local_30 + 0x18) = uVar4;
      *(undefined8 *)(local_30 + 0x10) = uVar2;
      local_30[0x24] = '\0';
                    /* try { // try from 0039ff58 to 0039ff5f has its CatchHandler @ 0039ff7c */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_40);
      if ((local_40 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_30);
      }
    }
LAB_0039fb1c:
    bVar3 = false;
    bVar9 = *(byte *)(param_1 + 0x70);
    if (0x19 < bVar9 - 0x61) goto LAB_0039fb30;
LAB_0039fdbc:
    if (*(char *)(param_1 + 0xac) == '\0') goto LAB_0039fe1c;
    local_30 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uVar4 = s_Need_space_between_number_and_id_038d0c54._16_8_;
    uVar2 = s_Need_space_between_number_and_id_038d0c54._0_8_;
    uStack_38 = _UNK_03889e98;
    local_40 = _DAT_03889e90;
    uVar1 = CONCAT71(s_Need_space_between_number_and_id_038d0c54._25_7_,
                     s_Need_space_between_number_and_id_038d0c54[0x18]);
    *(undefined8 *)(local_30 + 8) = s_Need_space_between_number_and_id_038d0c54._8_8_;
    *(undefined8 *)local_30 = uVar2;
    *(undefined8 *)(local_30 + 0x18) = uVar1;
    *(undefined8 *)(local_30 + 0x10) = uVar4;
    uVar1 = CONCAT17(s_Need_space_between_number_and_id_038d0c54[0x20],
                     s_Need_space_between_number_and_id_038d0c54._25_7_);
    *(undefined8 *)(local_30 + 0x21) = s_Need_space_between_number_and_id_038d0c54._33_8_;
    *(undefined8 *)(local_30 + 0x19) = uVar1;
    local_30[0x29] = '\0';
                    /* try { // try from 0039fe10 to 0039fe17 has its CatchHandler @ 0039ffcc */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),&local_40);
  }
  if ((local_40 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_30);
  }
LAB_0039feec:
  uVar11 = 3;
  if (bVar3) {
    uVar11 = 4;
  }
  return uVar11;
}


