/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005935b0; name: FUN_005935b0
 */


undefined8
FUN_005935b0(long *param_1,long param_2,ulong param_3,byte *param_4,long param_5,long param_6,
            long param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_50;
  long local_48;
  char local_34 [4];
  
  local_50 = param_6;
  local_48 = param_7;
  if (param_1 == (long *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_002ebd50(0x28);
    *param_8 = pcVar6;
    uVar2 = s_Input_iovec_record_protocol_is_n_038a267d._24_8_;
    uVar8 = s_Input_iovec_record_protocol_is_n_038a267d._16_8_;
    uVar7 = s_Input_iovec_record_protocol_is_n_038a267d._0_8_;
    *(undefined8 *)(pcVar6 + 8) = s_Input_iovec_record_protocol_is_n_038a267d._8_8_;
    *(undefined8 *)pcVar6 = uVar7;
    *(undefined8 *)(pcVar6 + 0x18) = uVar2;
    *(undefined8 *)(pcVar6 + 0x10) = uVar8;
    *(undefined8 *)(pcVar6 + 0x20) = s_Input_iovec_record_protocol_is_n_038a267d._32_8_;
    return 3;
  }
  if ((char)param_1[3] == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar6 = (char *)FUN_002ebd50(0x3b);
    *param_8 = pcVar6;
    uVar7 = CONCAT35(s_Integrity_only_operations_are_no_0394b7bc._48_3_,
                     s_Integrity_only_operations_are_no_0394b7bc._43_5_);
    *(undefined8 *)(pcVar6 + 0x33) = s_Integrity_only_operations_are_no_0394b7bc._51_8_;
    *(undefined8 *)(pcVar6 + 0x2b) = uVar7;
    uVar4 = s_Integrity_only_operations_are_no_0394b7bc._32_8_;
    uVar3 = s_Integrity_only_operations_are_no_0394b7bc._16_8_;
    uVar2 = s_Integrity_only_operations_are_no_0394b7bc._8_8_;
    uVar8 = s_Integrity_only_operations_are_no_0394b7bc._0_8_;
    uVar7 = CONCAT53(s_Integrity_only_operations_are_no_0394b7bc._43_5_,
                     s_Integrity_only_operations_are_no_0394b7bc._40_3_);
    *(undefined8 *)(pcVar6 + 0x18) = s_Integrity_only_operations_are_no_0394b7bc._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar7;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar8;
    return 9;
  }
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar6 = (char *)FUN_002ebd50(0x36);
    *param_8 = pcVar6;
    *(ulong *)(pcVar6 + 0x2e) =
         CONCAT62(s_Unprotect_operations_are_not_all_0391179a._48_6_,
                  s_Unprotect_operations_are_not_all_0391179a._46_2_);
    uVar7 = s_Unprotect_operations_are_not_all_0391179a._32_8_;
    *(ulong *)(pcVar6 + 0x28) =
         CONCAT26(s_Unprotect_operations_are_not_all_0391179a._46_2_,
                  s_Unprotect_operations_are_not_all_0391179a._40_6_);
    *(undefined8 *)(pcVar6 + 0x20) = uVar7;
    uVar2 = s_Unprotect_operations_are_not_all_0391179a._24_8_;
    uVar8 = s_Unprotect_operations_are_not_all_0391179a._16_8_;
    uVar7 = s_Unprotect_operations_are_not_all_0391179a._0_8_;
    *(undefined8 *)(pcVar6 + 8) = s_Unprotect_operations_are_not_all_0391179a._8_8_;
    *(undefined8 *)pcVar6 = uVar7;
    *(undefined8 *)(pcVar6 + 0x18) = uVar2;
    *(undefined8 *)(pcVar6 + 0x10) = uVar8;
    return 9;
  }
  if (param_4 == (byte *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_002ebd50(0x13);
    *param_8 = pcVar6;
    uVar8 = s_Header_is_nullptr__039428c2._8_8_;
    uVar7 = s_Header_is_nullptr__039428c2._0_8_;
    builtin_strncpy(pcVar6 + 0xf,"tr.",4);
LAB_00593744:
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)pcVar6 = uVar7;
    return 3;
  }
  if (param_5 != 8) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_002ebd50(0x1c);
    *param_8 = pcVar6;
    uVar7 = s_Header_length_is_incorrect__03972b23._0_8_;
    *(ulong *)(pcVar6 + 8) =
         CONCAT44(s_Header_length_is_incorrect__03972b23._12_4_,
                  s_Header_length_is_incorrect__03972b23._8_4_);
    *(undefined8 *)pcVar6 = uVar7;
    uVar7 = CONCAT44(s_Header_length_is_incorrect__03972b23._16_4_,
                     s_Header_length_is_incorrect__03972b23._12_4_);
    *(undefined8 *)(pcVar6 + 0x14) = s_Header_length_is_incorrect__03972b23._20_8_;
    *(undefined8 *)(pcVar6 + 0xc) = uVar7;
    return 3;
  }
  if (param_6 == 0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_002ebd50(0x10);
    uVar8 = s_Tag_is_nullptr__039b29c7._8_8_;
    uVar7 = s_Tag_is_nullptr__039b29c7._0_8_;
    *param_8 = pcVar6;
    goto LAB_00593744;
  }
  if (param_7 != param_1[2]) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar6 = (char *)FUN_002ebd50(0x19);
    *param_8 = pcVar6;
    uVar7 = s_Tag_length_is_incorrect__0394b813._0_8_;
    *(ulong *)(pcVar6 + 8) =
         CONCAT71(s_Tag_length_is_incorrect__0394b813._9_7_,s_Tag_length_is_incorrect__0394b813[8]);
    *(undefined8 *)pcVar6 = uVar7;
    uVar7 = CONCAT17(s_Tag_length_is_incorrect__0394b813[0x10],
                     s_Tag_length_is_incorrect__0394b813._9_7_);
    *(undefined8 *)(pcVar6 + 0x11) = s_Tag_length_is_incorrect__0394b813._17_8_;
    *(undefined8 *)(pcVar6 + 9) = uVar7;
    return 3;
  }
  if (param_3 == 0) {
    lVar13 = 4;
    goto LAB_0059382c;
  }
  if (param_3 < 4) {
    uVar11 = 0;
    lVar13 = 0;
    uVar14 = 0xffffffffffffffff;
joined_r0x005937e8:
    if ((param_3 & 1) != 0) {
      lVar16 = uVar11 * 0x10;
      uVar11 = uVar11 | 1;
      lVar13 = *(long *)(param_2 + lVar16 + 8) + lVar13;
    }
    if (uVar14 + param_3 != 0) {
      lVar16 = param_3 - uVar11;
      plVar12 = (long *)(param_2 + uVar11 * 0x10 + 0x18);
      do {
        lVar16 = lVar16 + -2;
        lVar13 = *plVar12 + plVar12[-2] + lVar13;
        plVar12 = plVar12 + 4;
      } while (lVar16 != 0);
    }
  }
  else {
    uVar11 = param_3 & 0xfffffffffffffffc;
    lVar16 = 0;
    lVar17 = 0;
    lVar15 = 0;
    lVar13 = 0;
    plVar12 = (long *)(param_2 + 0x28);
    uVar14 = uVar11;
    do {
      lVar16 = plVar12[-4] + lVar16;
      plVar1 = plVar12 + 2;
      lVar17 = plVar12[-2] + lVar17;
      lVar15 = *plVar12 + lVar15;
      plVar12 = plVar12 + 8;
      lVar13 = *plVar1 + lVar13;
      uVar14 = uVar14 - 4;
    } while (uVar14 != 0);
    lVar13 = lVar13 + lVar15 + lVar17 + lVar16;
    if (uVar11 != param_3) {
      uVar14 = ~uVar11;
      goto joined_r0x005937e8;
    }
  }
  lVar13 = lVar13 + 4;
LAB_0059382c:
  if (lVar13 + param_7 ==
      ((ulong)param_4[3] << 0x18 | (ulong)param_4[2] << 0x10 | (ulong)param_4[1] << 8 |
      (ulong)*param_4)) {
    if (*(int *)(param_4 + 4) == 6) {
      lVar13 = param_1[1];
      uVar7 = FUN_0058f360(*param_1);
      uVar8 = FUN_0058f350(*param_1);
      iVar5 = FUN_0058f570(lVar13,uVar7,uVar8,param_2,param_3,&local_50,1);
      if (iVar5 == 0) {
        if (*param_1 == 0) {
          return 9;
        }
        local_34[0] = '\0';
        uVar7 = FUN_0058f260(*param_1,local_34,param_8);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (local_34[0] == '\0') {
          return 0;
        }
        if (param_8 != (undefined8 *)0x0) {
          pcVar6 = (char *)FUN_002ebd50(0x1f);
          *param_8 = pcVar6;
          uVar7 = s_Crypter_counter_is_overflowed__039117d0._0_8_;
          *(ulong *)(pcVar6 + 8) =
               CONCAT17(s_Crypter_counter_is_overflowed__039117d0[0xf],
                        s_Crypter_counter_is_overflowed__039117d0._8_7_);
          *(undefined8 *)pcVar6 = uVar7;
          uVar7 = CONCAT71(s_Crypter_counter_is_overflowed__039117d0._16_7_,
                           s_Crypter_counter_is_overflowed__039117d0[0xf]);
          *(undefined8 *)(pcVar6 + 0x17) = s_Crypter_counter_is_overflowed__039117d0._23_8_;
          *(undefined8 *)(pcVar6 + 0xf) = uVar7;
        }
      }
      else if (param_8 != (undefined8 *)0x0) {
        pcVar6 = (char *)*param_8;
        sVar9 = strlen(pcVar6);
        pvVar10 = realloc(pcVar6,(long)(int)sVar9 + 0x20);
        *param_8 = pvVar10;
        uVar2 = s_Frame_tag_verification_failed__039b2984._24_8_;
        uVar8 = s_Frame_tag_verification_failed__039b2984._16_8_;
        uVar7 = s_Frame_tag_verification_failed__039b2984._0_8_;
        if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("*dst != nullptr",
                        "external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_iovec_record_protocol.cc"
                        ,0x38,"maybe_append_error_msg");
        }
        pcVar6 = (char *)((long)pvVar10 + (long)(int)sVar9);
        *(undefined8 *)(pcVar6 + 8) = s_Frame_tag_verification_failed__039b2984._8_8_;
        *(undefined8 *)pcVar6 = uVar7;
        *(undefined8 *)(pcVar6 + 0x18) = uVar2;
        *(undefined8 *)(pcVar6 + 0x10) = uVar8;
      }
    }
    else if (param_8 != (undefined8 *)0x0) {
      pcVar6 = (char *)FUN_002ebd50(0x1a);
      *param_8 = pcVar6;
      uVar7 = s_Unsupported_message_type__03998a56._0_8_;
      *(ulong *)(pcVar6 + 8) =
           CONCAT62(s_Unsupported_message_type__03998a56._10_6_,
                    s_Unsupported_message_type__03998a56._8_2_);
      *(undefined8 *)pcVar6 = uVar7;
      uVar7 = CONCAT26(s_Unsupported_message_type__03998a56._16_2_,
                       s_Unsupported_message_type__03998a56._10_6_);
      *(undefined8 *)(pcVar6 + 0x12) = s_Unsupported_message_type__03998a56._18_8_;
      *(undefined8 *)(pcVar6 + 10) = uVar7;
    }
  }
  else if (param_8 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_002ebd50(0x12);
    *param_8 = pcVar6;
    uVar8 = s_Bad_frame_length__038fb31e._8_8_;
    uVar7 = s_Bad_frame_length__038fb31e._0_8_;
    pcVar6[0x10] = '.';
    pcVar6[0x11] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar8;
    *(undefined8 *)pcVar6 = uVar7;
  }
  return 0xd;
}


