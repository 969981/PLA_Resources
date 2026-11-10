/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005931f0; name: FUN_005931f0
 */


undefined8
FUN_005931f0(long *param_1,long param_2,ulong param_3,undefined1 *param_4,long param_5,long param_6,
            long param_7,undefined8 *param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char local_44 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar7 = (char *)FUN_002ebd50(0x28);
    *param_8 = pcVar7;
    uVar2 = s_Input_iovec_record_protocol_is_n_038a267d._24_8_;
    uVar6 = s_Input_iovec_record_protocol_is_n_038a267d._16_8_;
    uVar5 = s_Input_iovec_record_protocol_is_n_038a267d._0_8_;
    *(undefined8 *)(pcVar7 + 8) = s_Input_iovec_record_protocol_is_n_038a267d._8_8_;
    *(undefined8 *)pcVar7 = uVar5;
    *(undefined8 *)(pcVar7 + 0x18) = uVar2;
    *(undefined8 *)(pcVar7 + 0x10) = uVar6;
    *(undefined8 *)(pcVar7 + 0x20) = s_Input_iovec_record_protocol_is_n_038a267d._32_8_;
    return 3;
  }
  if ((char)param_1[3] == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar7 = (char *)FUN_002ebd50(0x3b);
    *param_8 = pcVar7;
    uVar5 = CONCAT35(s_Integrity_only_operations_are_no_0394b7bc._48_3_,
                     s_Integrity_only_operations_are_no_0394b7bc._43_5_);
    *(undefined8 *)(pcVar7 + 0x33) = s_Integrity_only_operations_are_no_0394b7bc._51_8_;
    *(undefined8 *)(pcVar7 + 0x2b) = uVar5;
    uVar4 = s_Integrity_only_operations_are_no_0394b7bc._32_8_;
    uVar3 = s_Integrity_only_operations_are_no_0394b7bc._16_8_;
    uVar2 = s_Integrity_only_operations_are_no_0394b7bc._8_8_;
    uVar6 = s_Integrity_only_operations_are_no_0394b7bc._0_8_;
    uVar5 = CONCAT53(s_Integrity_only_operations_are_no_0394b7bc._43_5_,
                     s_Integrity_only_operations_are_no_0394b7bc._40_3_);
    *(undefined8 *)(pcVar7 + 0x18) = s_Integrity_only_operations_are_no_0394b7bc._24_8_;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    *(undefined8 *)(pcVar7 + 0x28) = uVar5;
    *(undefined8 *)(pcVar7 + 0x20) = uVar4;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar6;
    return 9;
  }
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    if (param_8 == (undefined8 *)0x0) {
      return 9;
    }
    pcVar7 = (char *)FUN_002ebd50(0x34);
    *param_8 = pcVar7;
    uVar4 = s_Protect_operations_are_not_allow_038bfd22._32_8_;
    uVar3 = s_Protect_operations_are_not_allow_038bfd22._24_8_;
    uVar2 = s_Protect_operations_are_not_allow_038bfd22._16_8_;
    uVar6 = s_Protect_operations_are_not_allow_038bfd22._8_8_;
    uVar5 = s_Protect_operations_are_not_allow_038bfd22._0_8_;
    *(undefined8 *)(pcVar7 + 0x28) = s_Protect_operations_are_not_allow_038bfd22._40_8_;
    *(undefined8 *)(pcVar7 + 0x20) = uVar4;
    *(undefined8 *)(pcVar7 + 8) = uVar6;
    *(undefined8 *)pcVar7 = uVar5;
    *(undefined8 *)(pcVar7 + 0x18) = uVar3;
    *(undefined8 *)(pcVar7 + 0x10) = uVar2;
    pcVar7[0x30] = 'c';
    pcVar7[0x31] = 't';
    pcVar7[0x32] = '.';
    pcVar7[0x33] = '\0';
    return 9;
  }
  if (param_4 == (undefined1 *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar7 = (char *)FUN_002ebd50(0x13);
    *param_8 = pcVar7;
    uVar6 = s_Header_is_nullptr__039428c2._8_8_;
    uVar5 = s_Header_is_nullptr__039428c2._0_8_;
    builtin_strncpy(pcVar7 + 0xf,"tr.",4);
  }
  else {
    if (param_5 != 8) {
      if (param_8 == (undefined8 *)0x0) {
        return 3;
      }
      pcVar7 = (char *)FUN_002ebd50(0x1c);
      *param_8 = pcVar7;
      uVar5 = s_Header_length_is_incorrect__03972b23._0_8_;
      *(ulong *)(pcVar7 + 8) =
           CONCAT44(s_Header_length_is_incorrect__03972b23._12_4_,
                    s_Header_length_is_incorrect__03972b23._8_4_);
      *(undefined8 *)pcVar7 = uVar5;
      uVar5 = CONCAT44(s_Header_length_is_incorrect__03972b23._16_4_,
                       s_Header_length_is_incorrect__03972b23._12_4_);
      *(undefined8 *)(pcVar7 + 0x14) = s_Header_length_is_incorrect__03972b23._20_8_;
      *(undefined8 *)(pcVar7 + 0xc) = uVar5;
      return 3;
    }
    if (param_6 != 0) {
      if (param_7 != param_1[2]) {
        if (param_8 == (undefined8 *)0x0) {
          return 3;
        }
        pcVar7 = (char *)FUN_002ebd50(0x19);
        *param_8 = pcVar7;
        uVar5 = s_Tag_length_is_incorrect__0394b813._0_8_;
        *(ulong *)(pcVar7 + 8) =
             CONCAT71(s_Tag_length_is_incorrect__0394b813._9_7_,
                      s_Tag_length_is_incorrect__0394b813[8]);
        *(undefined8 *)pcVar7 = uVar5;
        uVar5 = CONCAT17(s_Tag_length_is_incorrect__0394b813[0x10],
                         s_Tag_length_is_incorrect__0394b813._9_7_);
        *(undefined8 *)(pcVar7 + 0x11) = s_Tag_length_is_incorrect__0394b813._17_8_;
        *(undefined8 *)(pcVar7 + 9) = uVar5;
        return 3;
      }
      if (param_3 == 0) {
        iVar10 = 0;
      }
      else {
        if (param_3 < 4) {
          uVar8 = 0;
          lVar11 = 0;
          uVar12 = 0xffffffffffffffff;
        }
        else {
          uVar8 = param_3 & 0xfffffffffffffffc;
          lVar14 = 0;
          lVar15 = 0;
          lVar13 = 0;
          lVar11 = 0;
          plVar9 = (long *)(param_2 + 0x28);
          uVar12 = uVar8;
          do {
            lVar14 = plVar9[-4] + lVar14;
            plVar1 = plVar9 + 2;
            lVar15 = plVar9[-2] + lVar15;
            lVar13 = *plVar9 + lVar13;
            plVar9 = plVar9 + 8;
            lVar11 = *plVar1 + lVar11;
            uVar12 = uVar12 - 4;
          } while (uVar12 != 0);
          lVar11 = lVar11 + lVar13 + lVar15 + lVar14;
          iVar10 = (int)lVar11;
          if (uVar8 == param_3) goto LAB_00593474;
          uVar12 = ~uVar8;
        }
        if ((param_3 & 1) != 0) {
          lVar14 = uVar8 * 0x10;
          uVar8 = uVar8 | 1;
          lVar11 = *(long *)(param_2 + lVar14 + 8) + lVar11;
        }
        iVar10 = (int)lVar11;
        if (uVar12 + param_3 != 0) {
          lVar14 = param_3 - uVar8;
          plVar9 = (long *)(param_2 + uVar8 * 0x10 + 0x18);
          do {
            lVar14 = lVar14 + -2;
            lVar11 = *plVar9 + plVar9[-2] + lVar11;
            iVar10 = (int)lVar11;
            plVar9 = plVar9 + 4;
          } while (lVar14 != 0);
        }
      }
LAB_00593474:
      iVar10 = (int)param_7 + iVar10 + 4;
      param_4[3] = (char)((uint)iVar10 >> 0x18);
      param_4[2] = (char)((uint)iVar10 >> 0x10);
      *param_4 = (char)iVar10;
      param_4[1] = (char)((uint)iVar10 >> 8);
      *(undefined4 *)(param_4 + 4) = 6;
      lVar14 = param_1[1];
      uVar5 = FUN_0058f360(*param_1);
      uVar6 = FUN_0058f350(*param_1);
      uVar5 = FUN_0058f450(lVar14,uVar5,uVar6,param_2,param_3,0,0);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (param_1[2] == 0) {
        if (*param_1 == 0) {
          return 9;
        }
        local_44[0] = '\0';
        uVar5 = FUN_0058f260(*param_1,local_44,param_8);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (local_44[0] == '\0') {
          return 0;
        }
        if (param_8 != (undefined8 *)0x0) {
          pcVar7 = (char *)FUN_002ebd50(0x1f);
          *param_8 = pcVar7;
          uVar5 = s_Crypter_counter_is_overflowed__039117d0._0_8_;
          *(ulong *)(pcVar7 + 8) =
               CONCAT17(s_Crypter_counter_is_overflowed__039117d0[0xf],
                        s_Crypter_counter_is_overflowed__039117d0._8_7_);
          *(undefined8 *)pcVar7 = uVar5;
          uVar5 = CONCAT71(s_Crypter_counter_is_overflowed__039117d0._16_7_,
                           s_Crypter_counter_is_overflowed__039117d0[0xf]);
          *(undefined8 *)(pcVar7 + 0x17) = s_Crypter_counter_is_overflowed__039117d0._23_8_;
          *(undefined8 *)(pcVar7 + 0xf) = uVar5;
        }
      }
      else if (param_8 != (undefined8 *)0x0) {
        pcVar7 = (char *)FUN_002ebd50(0x34);
        *param_8 = pcVar7;
        uVar4 = s_Bytes_written_expects_to_be_the_s_0397b5b7._32_8_;
        uVar3 = s_Bytes_written_expects_to_be_the_s_0397b5b7._24_8_;
        uVar2 = s_Bytes_written_expects_to_be_the_s_0397b5b7._16_8_;
        uVar6 = s_Bytes_written_expects_to_be_the_s_0397b5b7._8_8_;
        uVar5 = s_Bytes_written_expects_to_be_the_s_0397b5b7._0_8_;
        *(undefined8 *)(pcVar7 + 0x28) = s_Bytes_written_expects_to_be_the_s_0397b5b7._40_8_;
        *(undefined8 *)(pcVar7 + 0x20) = uVar4;
        *(undefined8 *)(pcVar7 + 8) = uVar6;
        *(undefined8 *)pcVar7 = uVar5;
        *(undefined8 *)(pcVar7 + 0x18) = uVar3;
        *(undefined8 *)(pcVar7 + 0x10) = uVar2;
        pcVar7[0x30] = 't';
        pcVar7[0x31] = 'h';
        pcVar7[0x32] = '.';
        pcVar7[0x33] = '\0';
      }
      return 0xd;
    }
    if (param_8 == (undefined8 *)0x0) {
      return 3;
    }
    pcVar7 = (char *)FUN_002ebd50(0x10);
    uVar6 = s_Tag_is_nullptr__039b29c7._8_8_;
    uVar5 = s_Tag_is_nullptr__039b29c7._0_8_;
    *param_8 = pcVar7;
  }
  *(undefined8 *)(pcVar7 + 8) = uVar6;
  *(undefined8 *)pcVar7 = uVar5;
  return 3;
}


