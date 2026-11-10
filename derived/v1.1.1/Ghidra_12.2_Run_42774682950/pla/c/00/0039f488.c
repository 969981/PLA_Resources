/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039f488; name: FUN_0039f488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039f488(long param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  char cVar20;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  
  puVar19 = PTR_LAB_04373088;
  puVar18 = PTR_FUN_04373078;
  uVar12 = _UNK_03889a08;
  uVar11 = _DAT_03889a00;
  uVar10 = _UNK_03889358;
  uVar9 = _DAT_03889350;
  uVar6 = _UNK_03888ea8;
  uVar8 = _DAT_03888ea0;
  uVar5 = _UNK_03888d38;
  uVar7 = _DAT_03888d30;
  cVar20 = *(char *)(param_1 + 0x70);
  if (cVar20 != '\n') goto LAB_0039f540;
LAB_0039f524:
  if (*(char *)(param_1 + 0xad) == '\0') {
    local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uVar10 = s_String_literals_cannot_cross_lin_03979d4d._16_8_;
    uVar6 = s_String_literals_cannot_cross_lin_03979d4d._0_8_;
    uStack_78 = _UNK_03889fe8;
    local_80 = _DAT_03889fe0;
    uVar5 = CONCAT35(s_String_literals_cannot_cross_lin_03979d4d._29_3_,
                     s_String_literals_cannot_cross_lin_03979d4d._24_5_);
    *(undefined8 *)(local_70 + 8) = s_String_literals_cannot_cross_lin_03979d4d._8_8_;
    *(undefined8 *)local_70 = uVar6;
    *(undefined8 *)(local_70 + 0x18) = uVar5;
    *(undefined8 *)(local_70 + 0x10) = uVar10;
    uVar5 = CONCAT53(s_String_literals_cannot_cross_lin_03979d4d._32_5_,
                     s_String_literals_cannot_cross_lin_03979d4d._29_3_);
    *(undefined8 *)(local_70 + 0x25) = s_String_literals_cannot_cross_lin_03979d4d._37_8_;
    *(undefined8 *)(local_70 + 0x1d) = uVar5;
    local_70[0x2d] = '\0';
                    /* try { // try from 0039f9d8 to 0039f9df has its CatchHandler @ 0039fa58 */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),&local_80);
LAB_0039f9e0:
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    return;
  }
switchD_0039f584_caseD_22:
  FUN_0039f350(param_1);
LAB_0039f534:
  do {
    cVar20 = *(char *)(param_1 + 0x70);
    while( true ) {
      if (cVar20 == '\n') goto LAB_0039f524;
LAB_0039f540:
      if (cVar20 != '\\') break;
      FUN_0039f350(param_1);
      bVar1 = *(byte *)(param_1 + 0x70);
      switch(bVar1) {
      case 0x22:
      case 0x27:
      case 0x3f:
      case 0x5c:
      case 0x61:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
      case 0x76:
        goto switchD_0039f584_caseD_22;
      }
      if ((bVar1 & 0xf8) == 0x30) goto switchD_0039f584_caseD_22;
      if (bVar1 == 0x55) {
        FUN_0039f350(param_1);
        if (((*(char *)(param_1 + 0x70) == '0') &&
            (FUN_0039f350(param_1), *(char *)(param_1 + 0x70) == '0')) &&
           (FUN_0039f350(param_1), (*(byte *)(param_1 + 0x70) & 0xfe) == 0x30)) {
          FUN_0039f350(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
              ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_0039f350(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_0039f350(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                  ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
                FUN_0039f350(param_1);
                if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                   ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                    ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
                  FUN_0039f350(param_1);
                  if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                     ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                      ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0))))
                  goto switchD_0039f584_caseD_22;
                }
              }
            }
          }
        }
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (char *)0x0;
        local_70 = (char *)FUN_002e2e80(puVar18,0x40);
        uVar17 = s_Expected_eight_hex_digits_up_to_1_03924e91._32_8_;
        uVar16 = s_Expected_eight_hex_digits_up_to_1_03924e91._24_8_;
        uVar15 = s_Expected_eight_hex_digits_up_to_1_03924e91._16_8_;
        uVar14 = s_Expected_eight_hex_digits_up_to_1_03924e91._8_8_;
        uVar13 = s_Expected_eight_hex_digits_up_to_1_03924e91._0_8_;
        uVar3 = CONCAT35(s_Expected_eight_hex_digits_up_to_1_03924e91._45_3_,
                         s_Expected_eight_hex_digits_up_to_1_03924e91._40_5_);
        uStack_78 = uVar5;
        local_80 = uVar7;
        uVar4 = CONCAT53(s_Expected_eight_hex_digits_up_to_1_03924e91._48_5_,
                         s_Expected_eight_hex_digits_up_to_1_03924e91._45_3_);
        *(undefined8 *)(local_70 + 0x35) = s_Expected_eight_hex_digits_up_to_1_03924e91._53_8_;
        *(undefined8 *)(local_70 + 0x2d) = uVar4;
        *(undefined8 *)(local_70 + 0x18) = uVar16;
        *(undefined8 *)(local_70 + 0x10) = uVar15;
        *(undefined8 *)(local_70 + 0x28) = uVar3;
        *(undefined8 *)(local_70 + 0x20) = uVar17;
        local_70[0x3d] = '\0';
        *(undefined8 *)(local_70 + 8) = uVar14;
        *(undefined8 *)local_70 = uVar13;
                    /* try { // try from 0039f7a8 to 0039f7af has its CatchHandler @ 0039fa38 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else if (bVar1 == 0x75) {
        FUN_0039f350(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
            ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_0039f350(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
              ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_0039f350(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_0039f350(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
                  ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0))))
              goto switchD_0039f584_caseD_22;
            }
          }
        }
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (char *)0x0;
        local_70 = (char *)FUN_002e2e80(puVar18,0x40);
        uVar15 = s_Expected_four_hex_digits_for__u_e_03904b95._32_8_;
        uVar14 = s_Expected_four_hex_digits_for__u_e_03904b95._24_8_;
        uVar13 = s_Expected_four_hex_digits_for__u_e_03904b95._16_8_;
        uVar4 = s_Expected_four_hex_digits_for__u_e_03904b95._8_8_;
        uVar3 = s_Expected_four_hex_digits_for__u_e_03904b95._0_8_;
        uStack_78 = uVar10;
        local_80 = uVar9;
        *(undefined8 *)(local_70 + 0x28) = s_Expected_four_hex_digits_for__u_e_03904b95._40_8_;
        *(undefined8 *)(local_70 + 0x20) = uVar15;
        *(undefined8 *)(local_70 + 8) = uVar4;
        *(undefined8 *)local_70 = uVar3;
        *(undefined8 *)(local_70 + 0x18) = uVar14;
        *(undefined8 *)(local_70 + 0x10) = uVar13;
        local_70[0x30] = '\0';
                    /* try { // try from 0039f8b8 to 0039f8bf has its CatchHandler @ 0039fa28 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else if (bVar1 == 0x78) {
        FUN_0039f350(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar2 = *(byte *)(param_1 + 0x70) - 0x41, uVar2 < 0x26 &&
            ((1L << ((ulong)uVar2 & 0x3f) & 0x3f0000003fU) != 0)))) goto switchD_0039f584_caseD_22;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (char *)0x0;
        local_70 = (char *)FUN_002e2e80(puVar18,0x30);
        uVar13 = s_Expected_hex_digits_for_escape_s_03949cd1._24_8_;
        uVar4 = s_Expected_hex_digits_for_escape_s_03949cd1._16_8_;
        uVar3 = s_Expected_hex_digits_for_escape_s_03949cd1._0_8_;
        uStack_78 = uVar6;
        local_80 = uVar8;
        *(undefined8 *)(local_70 + 8) = s_Expected_hex_digits_for_escape_s_03949cd1._8_8_;
        *(undefined8 *)local_70 = uVar3;
        *(undefined8 *)(local_70 + 0x18) = uVar13;
        *(undefined8 *)(local_70 + 0x10) = uVar4;
        *(undefined8 *)(local_70 + 0x20) = s_Expected_hex_digits_for_escape_s_03949cd1._32_8_;
        local_70[0x28] = '\0';
                    /* try { // try from 0039f620 to 0039f627 has its CatchHandler @ 0039fa18 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      else {
        local_80 = 0;
        uStack_78 = 0;
        local_70 = (char *)0x0;
        local_70 = (char *)FUN_002e2e80(puVar18,0x30);
        uVar13 = s_Invalid_escape_sequence_in_strin_03953926._16_8_;
        uVar4 = s_Invalid_escape_sequence_in_strin_03953926._0_8_;
        uStack_78 = uVar12;
        local_80 = uVar11;
        uVar3 = CONCAT62(s_Invalid_escape_sequence_in_strin_03953926._26_6_,
                         s_Invalid_escape_sequence_in_strin_03953926._24_2_);
        *(undefined8 *)(local_70 + 8) = s_Invalid_escape_sequence_in_strin_03953926._8_8_;
        *(undefined8 *)local_70 = uVar4;
        *(undefined8 *)(local_70 + 0x18) = uVar3;
        *(undefined8 *)(local_70 + 0x10) = uVar13;
        uVar3 = CONCAT26(s_Invalid_escape_sequence_in_strin_03953926._32_2_,
                         s_Invalid_escape_sequence_in_strin_03953926._26_6_);
        *(undefined8 *)(local_70 + 0x22) = s_Invalid_escape_sequence_in_strin_03953926._34_8_;
        *(undefined8 *)(local_70 + 0x1a) = uVar3;
        local_70[0x2a] = '\0';
                    /* try { // try from 0039f908 to 0039f90f has its CatchHandler @ 0039fa48 */
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_80);
      }
      if ((local_80 & 1) == 0) goto LAB_0039f534;
      FUN_002e2ea0(puVar19,local_70);
      cVar20 = *(char *)(param_1 + 0x70);
    }
    if (cVar20 == '\0') {
      local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
      uVar10 = s_Unexpected_end_of_string__039ba20e._0_8_;
      uVar6 = CONCAT17(s_Unexpected_end_of_string__039ba20e[0x10],
                       s_Unexpected_end_of_string__039ba20e._9_7_);
      uStack_78 = _UNK_03888e88;
      local_80 = _DAT_03888e80;
      uVar5 = CONCAT71(s_Unexpected_end_of_string__039ba20e._9_7_,
                       s_Unexpected_end_of_string__039ba20e[8]);
      *(undefined8 *)(local_70 + 0x11) = s_Unexpected_end_of_string__039ba20e._17_8_;
      *(undefined8 *)(local_70 + 9) = uVar6;
      *(undefined8 *)(local_70 + 8) = uVar5;
      *(undefined8 *)local_70 = uVar10;
      local_70[0x19] = '\0';
                    /* try { // try from 0039f980 to 0039f987 has its CatchHandler @ 0039fa68 */
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_80);
      goto LAB_0039f9e0;
    }
    FUN_0039f350(param_1);
    if (cVar20 == param_2) {
      return;
    }
  } while( true );
}


