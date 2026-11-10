/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005939f0; name: FUN_005939f0
 */


undefined8
FUN_005939f0(long *param_1,long param_2,ulong param_3,undefined1 *param_4,long param_5,long *param_6
            ,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long local_60;
  char local_54 [4];
  
  if (param_1 == (long *)0x0) {
    if (param_6 == (long *)0x0) {
      return 3;
    }
    pcVar8 = (char *)FUN_002ebd50(0x28);
    *param_6 = (long)pcVar8;
    uVar14 = s_Input_iovec_record_protocol_is_n_038a267d._24_8_;
    uVar4 = s_Input_iovec_record_protocol_is_n_038a267d._16_8_;
    uVar5 = s_Input_iovec_record_protocol_is_n_038a267d._0_8_;
    *(undefined8 *)(pcVar8 + 8) = s_Input_iovec_record_protocol_is_n_038a267d._8_8_;
    *(undefined8 *)pcVar8 = uVar5;
    *(undefined8 *)(pcVar8 + 0x18) = uVar14;
    *(undefined8 *)(pcVar8 + 0x10) = uVar4;
    *(undefined8 *)(pcVar8 + 0x20) = s_Input_iovec_record_protocol_is_n_038a267d._32_8_;
    return 3;
  }
  if ((char)param_1[3] != '\0') {
    if (param_6 == (long *)0x0) {
      return 9;
    }
    puVar3 = (undefined8 *)FUN_002ebd50(0x3e);
    *param_6 = (long)puVar3;
    uVar5 = s_Privacy_integrity_operations_are_03919d4d._46_8_;
    pcVar8 = "Privacy-integrity operations are not allowed for this object.";
    uVar4 = 9;
    *(undefined8 *)((long)puVar3 + 0x36) = s_Privacy_integrity_operations_are_03919d4d._54_8_;
    *(undefined8 *)((long)puVar3 + 0x2e) = uVar5;
    goto LAB_00593a44;
  }
  if (*(char *)((long)param_1 + 0x19) == '\0') {
    if (param_6 == (long *)0x0) {
      return 9;
    }
    pcVar8 = (char *)FUN_002ebd50(0x34);
    *param_6 = (long)pcVar8;
    uVar16 = s_Protect_operations_are_not_allow_038bfd22._32_8_;
    uVar15 = s_Protect_operations_are_not_allow_038bfd22._24_8_;
    uVar14 = s_Protect_operations_are_not_allow_038bfd22._16_8_;
    uVar4 = s_Protect_operations_are_not_allow_038bfd22._8_8_;
    uVar5 = s_Protect_operations_are_not_allow_038bfd22._0_8_;
    *(undefined8 *)(pcVar8 + 0x28) = s_Protect_operations_are_not_allow_038bfd22._40_8_;
    *(undefined8 *)(pcVar8 + 0x20) = uVar16;
    *(undefined8 *)(pcVar8 + 8) = uVar4;
    *(undefined8 *)pcVar8 = uVar5;
    *(undefined8 *)(pcVar8 + 0x18) = uVar15;
    *(undefined8 *)(pcVar8 + 0x10) = uVar14;
    pcVar8[0x30] = 'c';
    pcVar8[0x31] = 't';
    pcVar8[0x32] = '.';
    pcVar8[0x33] = '\0';
    return 9;
  }
  if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 4) {
      uVar6 = 0;
      lVar13 = 0;
      uVar9 = 0xffffffffffffffff;
    }
    else {
      uVar6 = param_3 & 0xfffffffffffffffc;
      lVar10 = 0;
      lVar12 = 0;
      lVar11 = 0;
      lVar13 = 0;
      plVar7 = (long *)(param_2 + 0x28);
      uVar9 = uVar6;
      do {
        lVar10 = plVar7[-4] + lVar10;
        plVar1 = plVar7 + 2;
        lVar12 = plVar7[-2] + lVar12;
        lVar11 = *plVar7 + lVar11;
        plVar7 = plVar7 + 8;
        lVar13 = *plVar1 + lVar13;
        uVar9 = uVar9 - 4;
      } while (uVar9 != 0);
      lVar13 = lVar13 + lVar11 + lVar12 + lVar10;
      if (uVar6 == param_3) goto joined_r0x00593af8;
      uVar9 = ~uVar6;
    }
    if ((param_3 & 1) != 0) {
      lVar10 = uVar6 * 0x10;
      uVar6 = uVar6 | 1;
      lVar13 = *(long *)(param_2 + lVar10 + 8) + lVar13;
    }
    if (uVar9 + param_3 != 0) {
      lVar10 = param_3 - uVar6;
      plVar7 = (long *)(param_2 + uVar6 * 0x10 + 0x18);
      do {
        lVar10 = lVar10 + -2;
        lVar13 = *plVar7 + plVar7[-2] + lVar13;
        plVar7 = plVar7 + 4;
      } while (lVar10 != 0);
    }
  }
joined_r0x00593af8:
  if (param_4 == (undefined1 *)0x0) {
    if (param_6 != (long *)0x0) {
      pcVar8 = (char *)FUN_002ebd50(0x1c);
      *param_6 = (long)pcVar8;
      uVar5 = s_Protected_frame_is_nullptr__0394b7f7._0_8_;
      *(ulong *)(pcVar8 + 8) =
           CONCAT44(s_Protected_frame_is_nullptr__0394b7f7._12_4_,
                    s_Protected_frame_is_nullptr__0394b7f7._8_4_);
      *(undefined8 *)pcVar8 = uVar5;
      uVar5 = CONCAT44(s_Protected_frame_is_nullptr__0394b7f7._16_4_,
                       s_Protected_frame_is_nullptr__0394b7f7._12_4_);
      *(undefined8 *)(pcVar8 + 0x14) = s_Protected_frame_is_nullptr__0394b7f7._20_8_;
      *(undefined8 *)(pcVar8 + 0xc) = uVar5;
      return 3;
    }
  }
  else {
    if (param_5 == param_1[2] + lVar13 + 8) {
      iVar2 = (int)(param_1[2] + lVar13) + 4;
      *(undefined4 *)(param_4 + 4) = 6;
      param_4[3] = (char)((uint)iVar2 >> 0x18);
      *param_4 = (char)iVar2;
      param_4[2] = (char)((uint)iVar2 >> 0x10);
      param_4[1] = (char)((uint)iVar2 >> 8);
      lVar10 = param_1[1];
      lVar12 = param_1[2];
      local_60 = 0;
      uVar5 = FUN_0058f360(*param_1);
      uVar4 = FUN_0058f350(*param_1);
      uVar5 = FUN_0058f450(lVar10,uVar5,uVar4,0,0,param_2,param_3,param_8,param_4 + 8,
                           lVar12 + lVar13,&local_60,param_6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (local_60 == param_1[2] + lVar13) {
        if (*param_1 == 0) {
          return 9;
        }
        local_54[0] = '\0';
        uVar5 = FUN_0058f260(*param_1,local_54,param_6);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (local_54[0] == '\0') {
          return 0;
        }
        if (param_6 == (long *)0x0) {
          return 0xd;
        }
        pcVar8 = (char *)FUN_002ebd50(0x1f);
        *param_6 = (long)pcVar8;
        uVar5 = s_Crypter_counter_is_overflowed__039117d0._0_8_;
        *(ulong *)(pcVar8 + 8) =
             CONCAT17(s_Crypter_counter_is_overflowed__039117d0[0xf],
                      s_Crypter_counter_is_overflowed__039117d0._8_7_);
        *(undefined8 *)pcVar8 = uVar5;
        uVar5 = CONCAT71(s_Crypter_counter_is_overflowed__039117d0._16_7_,
                         s_Crypter_counter_is_overflowed__039117d0[0xf]);
        *(undefined8 *)(pcVar8 + 0x17) = s_Crypter_counter_is_overflowed__039117d0._23_8_;
        *(undefined8 *)(pcVar8 + 0xf) = uVar5;
        return 0xd;
      }
      if (param_6 == (long *)0x0) {
        return 0xd;
      }
      puVar3 = (undefined8 *)FUN_002ebd50(0x39);
      *param_6 = (long)puVar3;
      uVar5 = s_Bytes_written_expects_to_be_data_038a26a5._41_8_;
      pcVar8 = "Bytes written expects to be data length plus tag length.";
      uVar4 = 0xd;
      *(undefined8 *)((long)puVar3 + 0x31) = s_Bytes_written_expects_to_be_data_038a26a5._49_8_;
      *(undefined8 *)((long)puVar3 + 0x29) = uVar5;
LAB_00593a44:
      uVar14 = *(undefined8 *)(pcVar8 + 8);
      uVar5 = *(undefined8 *)pcVar8;
      uVar15 = *(undefined8 *)(pcVar8 + 0x10);
      uVar17 = *(undefined8 *)(pcVar8 + 0x28);
      uVar16 = *(undefined8 *)(pcVar8 + 0x20);
      puVar3[3] = *(undefined8 *)(pcVar8 + 0x18);
      puVar3[2] = uVar15;
      puVar3[5] = uVar17;
      puVar3[4] = uVar16;
      puVar3[1] = uVar14;
      *puVar3 = uVar5;
      return uVar4;
    }
    if (param_6 != (long *)0x0) {
      pcVar8 = (char *)FUN_002ebd50(0x23);
      *param_6 = (long)pcVar8;
      pcVar8[0x1f] = 'c';
      uVar14 = s_Protected_frame_size_is_incorrec_039b29a4._24_8_;
      uVar4 = s_Protected_frame_size_is_incorrec_039b29a4._16_8_;
      uVar5 = s_Protected_frame_size_is_incorrec_039b29a4._0_8_;
      pcVar8[0x20] = 't';
      pcVar8[0x21] = '.';
      pcVar8[0x22] = '\0';
      *(undefined8 *)(pcVar8 + 8) = s_Protected_frame_size_is_incorrec_039b29a4._8_8_;
      *(undefined8 *)pcVar8 = uVar5;
      *(undefined8 *)(pcVar8 + 0x18) = uVar14;
      *(undefined8 *)(pcVar8 + 0x10) = uVar4;
    }
  }
  return 3;
}


