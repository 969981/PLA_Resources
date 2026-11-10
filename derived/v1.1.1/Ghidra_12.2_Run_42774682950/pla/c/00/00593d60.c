/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00593d60; name: FUN_00593d60
 */


undefined8
FUN_00593d60(long *param_1,byte *param_2,long param_3,long param_4,ulong param_5,undefined8 param_6,
            long param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char local_54 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar5 = (char *)FUN_002ebd50(0x28);
    *param_8 = pcVar5;
    uVar19 = s_Input_iovec_record_protocol_is_n_038a267d._24_8_;
    uVar6 = s_Input_iovec_record_protocol_is_n_038a267d._16_8_;
    uVar7 = s_Input_iovec_record_protocol_is_n_038a267d._0_8_;
    *(undefined8 *)(pcVar5 + 8) = s_Input_iovec_record_protocol_is_n_038a267d._8_8_;
    *(undefined8 *)pcVar5 = uVar7;
    *(undefined8 *)(pcVar5 + 0x18) = uVar19;
    *(undefined8 *)(pcVar5 + 0x10) = uVar6;
    *(undefined8 *)(pcVar5 + 0x20) = s_Input_iovec_record_protocol_is_n_038a267d._32_8_;
    return 3;
  }
  if ((char)param_1[3] != '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar5 = (char *)FUN_002ebd50(0x3e);
    *param_8 = pcVar5;
    uVar7 = s_Privacy_integrity_operations_are_03919d4d._46_8_;
    pcVar12 = "Privacy-integrity operations are not allowed for this object.";
    uVar6 = 9;
    *(undefined8 *)(pcVar5 + 0x36) = s_Privacy_integrity_operations_are_03919d4d._54_8_;
    *(undefined8 *)(pcVar5 + 0x2e) = uVar7;
LAB_00593db4:
    uVar19 = *(undefined8 *)(pcVar12 + 8);
    uVar7 = *(undefined8 *)pcVar12;
    uVar21 = *(undefined8 *)(pcVar12 + 0x18);
    uVar20 = *(undefined8 *)(pcVar12 + 0x10);
    uVar22 = *(undefined8 *)(pcVar12 + 0x20);
    *(undefined8 *)(pcVar5 + 0x28) = *(undefined8 *)(pcVar12 + 0x28);
    *(undefined8 *)(pcVar5 + 0x20) = uVar22;
LAB_00593dc0:
    *(undefined8 *)(pcVar5 + 8) = uVar19;
    *(undefined8 *)pcVar5 = uVar7;
    *(undefined8 *)(pcVar5 + 0x18) = uVar21;
    *(undefined8 *)(pcVar5 + 0x10) = uVar20;
    return uVar6;
  }
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar5 = (char *)FUN_002ebd50(0x36);
    *param_8 = pcVar5;
    *(ulong *)(pcVar5 + 0x2e) =
         CONCAT62(s_Unprotect_operations_are_not_all_0391179a._48_6_,
                  s_Unprotect_operations_are_not_all_0391179a._46_2_);
    uVar7 = s_Unprotect_operations_are_not_all_0391179a._32_8_;
    *(ulong *)(pcVar5 + 0x28) =
         CONCAT26(s_Unprotect_operations_are_not_all_0391179a._46_2_,
                  s_Unprotect_operations_are_not_all_0391179a._40_6_);
    *(undefined8 *)(pcVar5 + 0x20) = uVar7;
    uVar19 = s_Unprotect_operations_are_not_all_0391179a._24_8_;
    uVar6 = s_Unprotect_operations_are_not_all_0391179a._16_8_;
    uVar7 = s_Unprotect_operations_are_not_all_0391179a._0_8_;
    *(undefined8 *)(pcVar5 + 8) = s_Unprotect_operations_are_not_all_0391179a._8_8_;
    *(undefined8 *)pcVar5 = uVar7;
    *(undefined8 *)(pcVar5 + 0x18) = uVar19;
    *(undefined8 *)(pcVar5 + 0x10) = uVar6;
    return 9;
  }
  if (param_5 == 0) {
    uVar18 = 0;
    lVar15 = -param_1[2];
    if (param_1[2] != 0) goto LAB_00594000;
  }
  else {
    if (param_5 < 4) {
      uVar10 = 0;
      uVar18 = 0;
      uVar13 = 0xffffffffffffffff;
joined_r0x00593fb4:
      if ((param_5 & 1) != 0) {
        lVar15 = uVar10 * 0x10;
        uVar10 = uVar10 | 1;
        uVar18 = *(long *)(param_4 + lVar15 + 8) + uVar18;
      }
      if (uVar13 + param_5 != 0) {
        lVar15 = param_5 - uVar10;
        plVar11 = (long *)(param_4 + uVar10 * 0x10 + 0x18);
        do {
          lVar15 = lVar15 + -2;
          uVar18 = *plVar11 + plVar11[-2] + uVar18;
          plVar11 = plVar11 + 4;
        } while (lVar15 != 0);
      }
    }
    else {
      uVar10 = param_5 & 0xfffffffffffffffc;
      lVar15 = 0;
      lVar17 = 0;
      lVar16 = 0;
      lVar14 = 0;
      plVar11 = (long *)(param_4 + 0x28);
      uVar18 = uVar10;
      do {
        lVar15 = plVar11[-4] + lVar15;
        plVar1 = plVar11 + 2;
        lVar17 = plVar11[-2] + lVar17;
        lVar16 = *plVar11 + lVar16;
        plVar11 = plVar11 + 8;
        lVar14 = *plVar1 + lVar14;
        uVar18 = uVar18 - 4;
      } while (uVar18 != 0);
      uVar18 = lVar14 + lVar16 + lVar17 + lVar15;
      if (uVar10 != param_5) {
        uVar13 = ~uVar10;
        goto joined_r0x00593fb4;
      }
    }
    lVar15 = uVar18 - param_1[2];
    if (uVar18 < (ulong)param_1[2]) {
LAB_00594000:
      if (param_8 == (undefined8 *)0x0) {
        return 3;
      }
      pcVar5 = (char *)FUN_002ebd50(0x3a);
      *param_8 = pcVar5;
      uVar7 = s_Protected_data_length_should_be_m_03930672._42_8_;
      pcVar12 = "Protected data length should be more than the tag length.";
      uVar6 = 3;
      *(undefined8 *)(pcVar5 + 0x32) = s_Protected_data_length_should_be_m_03930672._50_8_;
      *(undefined8 *)(pcVar5 + 0x2a) = uVar7;
      goto LAB_00593db4;
    }
  }
  if (param_2 == (byte *)0x0) {
    if (param_8 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_002ebd50(0x13);
      *param_8 = pcVar5;
      uVar6 = s_Header_is_nullptr__039428c2._8_8_;
      uVar7 = s_Header_is_nullptr__039428c2._0_8_;
      pcVar5[0xf] = 't';
      pcVar5[0x10] = 'r';
      pcVar5[0x11] = '.';
      pcVar5[0x12] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar6;
      *(undefined8 *)pcVar5 = uVar7;
      return 3;
    }
  }
  else if (param_3 == 8) {
    if (param_7 == lVar15) {
      if (uVar18 + 4 ==
          ((ulong)param_2[3] << 0x18 | (ulong)param_2[2] << 0x10 | (ulong)param_2[1] << 8 |
          (ulong)*param_2)) {
        if (*(int *)(param_2 + 4) == 6) {
          lVar15 = param_1[1];
          uVar7 = FUN_0058f360(*param_1);
          uVar6 = FUN_0058f350(*param_1);
          iVar4 = FUN_0058f570(lVar15,uVar7,uVar6,0,0,param_4,param_5);
          if (iVar4 == 0) {
            if (uVar18 == param_1[2]) {
              if (*param_1 == 0) {
                return 9;
              }
              local_54[0] = '\0';
              uVar7 = FUN_0058f260(*param_1,local_54,param_8);
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              if (local_54[0] == '\0') {
                return 0;
              }
              if (param_8 != (undefined8 *)0x0) {
                pcVar5 = (char *)FUN_002ebd50(0x1f);
                *param_8 = pcVar5;
                uVar7 = s_Crypter_counter_is_overflowed__039117d0._0_8_;
                *(ulong *)(pcVar5 + 8) =
                     CONCAT17(s_Crypter_counter_is_overflowed__039117d0[0xf],
                              s_Crypter_counter_is_overflowed__039117d0._8_7_);
                *(undefined8 *)pcVar5 = uVar7;
                uVar7 = CONCAT71(s_Crypter_counter_is_overflowed__039117d0._16_7_,
                                 s_Crypter_counter_is_overflowed__039117d0[0xf]);
                *(undefined8 *)(pcVar5 + 0x17) = s_Crypter_counter_is_overflowed__039117d0._23_8_;
                *(undefined8 *)(pcVar5 + 0xf) = uVar7;
              }
            }
            else if (param_8 != (undefined8 *)0x0) {
              pcVar5 = (char *)FUN_002ebd50(0x44);
              *param_8 = pcVar5;
              pcVar5[0x40] = 't';
              uVar3 = s_Bytes_written_expects_to_be_prot_0390663a._56_8_;
              uVar2 = s_Bytes_written_expects_to_be_prot_0390663a._48_8_;
              uVar22 = s_Bytes_written_expects_to_be_prot_0390663a._32_8_;
              uVar21 = s_Bytes_written_expects_to_be_prot_0390663a._24_8_;
              uVar20 = s_Bytes_written_expects_to_be_prot_0390663a._16_8_;
              uVar19 = s_Bytes_written_expects_to_be_prot_0390663a._8_8_;
              uVar7 = s_Bytes_written_expects_to_be_prot_0390663a._0_8_;
              pcVar5[0x41] = 'h';
              pcVar5[0x42] = '.';
              pcVar5[0x43] = '\0';
              uVar6 = 0xd;
              *(undefined8 *)(pcVar5 + 0x28) = s_Bytes_written_expects_to_be_prot_0390663a._40_8_;
              *(undefined8 *)(pcVar5 + 0x20) = uVar22;
              *(undefined8 *)(pcVar5 + 0x38) = uVar3;
              *(undefined8 *)(pcVar5 + 0x30) = uVar2;
              goto LAB_00593dc0;
            }
          }
          else if (param_8 != (undefined8 *)0x0) {
            pcVar5 = (char *)*param_8;
            sVar8 = strlen(pcVar5);
            pvVar9 = realloc(pcVar5,(long)(int)sVar8 + 0x1a);
            *param_8 = pvVar9;
            uVar7 = s_Frame_decryption_failed__038ac5f1._0_8_;
            if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("*dst != nullptr",
                            "external/com_google_grpc_base/src/core/tsi/alts/zero_copy_frame_protector/alts_iovec_record_protocol.cc"
                            ,0x38,"maybe_append_error_msg");
            }
            uVar6 = CONCAT62(s_Frame_decryption_failed__038ac5f1._10_6_,
                             s_Frame_decryption_failed__038ac5f1._8_2_);
            uVar19 = CONCAT26(s_Frame_decryption_failed__038ac5f1._16_2_,
                              s_Frame_decryption_failed__038ac5f1._10_6_);
            pcVar5 = (char *)((long)pvVar9 + (long)(int)sVar8);
            *(undefined8 *)(pcVar5 + 0x12) = s_Frame_decryption_failed__038ac5f1._18_8_;
            *(undefined8 *)(pcVar5 + 10) = uVar19;
            *(undefined8 *)(pcVar5 + 8) = uVar6;
            *(undefined8 *)pcVar5 = uVar7;
          }
        }
        else if (param_8 != (undefined8 *)0x0) {
          pcVar5 = (char *)FUN_002ebd50(0x1a);
          *param_8 = pcVar5;
          uVar7 = s_Unsupported_message_type__03998a56._0_8_;
          *(ulong *)(pcVar5 + 8) =
               CONCAT62(s_Unsupported_message_type__03998a56._10_6_,
                        s_Unsupported_message_type__03998a56._8_2_);
          *(undefined8 *)pcVar5 = uVar7;
          uVar7 = CONCAT26(s_Unsupported_message_type__03998a56._16_2_,
                           s_Unsupported_message_type__03998a56._10_6_);
          *(undefined8 *)(pcVar5 + 0x12) = s_Unsupported_message_type__03998a56._18_8_;
          *(undefined8 *)(pcVar5 + 10) = uVar7;
        }
      }
      else if (param_8 != (undefined8 *)0x0) {
        pcVar5 = (char *)FUN_002ebd50(0x12);
        *param_8 = pcVar5;
        uVar6 = s_Bad_frame_length__038fb31e._8_8_;
        uVar7 = s_Bad_frame_length__038fb31e._0_8_;
        pcVar5[0x10] = '.';
        pcVar5[0x11] = '\0';
        *(undefined8 *)(pcVar5 + 8) = uVar6;
        *(undefined8 *)pcVar5 = uVar7;
      }
      return 0xd;
    }
    if (param_8 != (undefined8 *)0x0) {
      pcVar5 = (char *)FUN_002ebd50(0x24);
      *param_8 = pcVar5;
      uVar20 = s_Unprotected_data_size_is_incorre_03972b3f._24_8_;
      uVar19 = s_Unprotected_data_size_is_incorre_03972b3f._16_8_;
      uVar6 = s_Unprotected_data_size_is_incorre_03972b3f._8_8_;
      uVar7 = s_Unprotected_data_size_is_incorre_03972b3f._0_8_;
      pcVar5[0x20] = 'c';
      pcVar5[0x21] = 't';
      pcVar5[0x22] = '.';
      pcVar5[0x23] = '\0';
      *(undefined8 *)(pcVar5 + 8) = uVar6;
      *(undefined8 *)pcVar5 = uVar7;
      *(undefined8 *)(pcVar5 + 0x18) = uVar20;
      *(undefined8 *)(pcVar5 + 0x10) = uVar19;
    }
  }
  else if (param_8 != (undefined8 *)0x0) {
    pcVar5 = (char *)FUN_002ebd50(0x1c);
    *param_8 = pcVar5;
    uVar7 = s_Header_length_is_incorrect__03972b23._0_8_;
    *(ulong *)(pcVar5 + 8) =
         CONCAT44(s_Header_length_is_incorrect__03972b23._12_4_,
                  s_Header_length_is_incorrect__03972b23._8_4_);
    *(undefined8 *)pcVar5 = uVar7;
    uVar7 = CONCAT44(s_Header_length_is_incorrect__03972b23._16_4_,
                     s_Header_length_is_incorrect__03972b23._12_4_);
    *(undefined8 *)(pcVar5 + 0x14) = s_Header_length_is_incorrect__03972b23._20_8_;
    *(undefined8 *)(pcVar5 + 0xc) = uVar7;
    return 3;
  }
  return 3;
}


