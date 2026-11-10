/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa4180; name: FUN_02fa4180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa4180(long *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  
  if (param_4 < param_6) {
    *param_8 = 0x7f7fffee7f7fffee;
    *param_9 = 0xff7fffeeff7fffee;
    if (param_5 < param_7) {
      iVar21 = param_4 + 6;
      uVar28 = 0x7f7fffee7f7fffee;
      uVar30 = 0xff7fffeeff7fffee;
      iVar1 = param_4 + 2;
      iVar2 = param_4 + 4;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_90,auStack_74,auStack_78);
        auVar5._4_4_ = uStack_8c;
        auVar5._0_4_ = local_90;
        auVar5._8_4_ = uStack_88;
        auVar5._12_4_ = uStack_84;
        uVar27 = NEON_fminnmv(auVar5,4);
        uVar23 = NEON_fmaxnmv(auVar5,4);
        uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
        uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
        *param_8 = uVar28;
        *param_9 = uVar30;
        if (iVar1 < param_6) {
          (**(code **)(*param_1 + 0x28))(param_1,iVar1,param_5,&local_90,auStack_74,auStack_78);
          auVar6._4_4_ = uStack_8c;
          auVar6._0_4_ = local_90;
          auVar6._8_4_ = uStack_88;
          auVar6._12_4_ = uStack_84;
          uVar27 = NEON_fminnmv(auVar6,4);
          uVar23 = NEON_fmaxnmv(auVar6,4);
          uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
          uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
          *param_8 = uVar28;
          *param_9 = uVar30;
          if (iVar2 < param_6) {
            (**(code **)(*param_1 + 0x28))(param_1,iVar2,param_5,&local_90,auStack_74,auStack_78);
            auVar7._4_4_ = uStack_8c;
            auVar7._0_4_ = local_90;
            auVar7._8_4_ = uStack_88;
            auVar7._12_4_ = uStack_84;
            uVar27 = NEON_fminnmv(auVar7,4);
            uVar23 = NEON_fmaxnmv(auVar7,4);
            uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
            uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
            *param_8 = uVar28;
            *param_9 = uVar30;
            if (iVar21 < param_6) {
              (**(code **)(*param_1 + 0x28))(param_1,iVar21,param_5,&local_90,auStack_74,auStack_78)
              ;
              auVar9._4_4_ = uStack_8c;
              auVar9._0_4_ = local_90;
              auVar9._8_4_ = uStack_88;
              auVar9._12_4_ = uStack_84;
              uVar27 = NEON_fminnmv(auVar9,4);
              uVar23 = NEON_fmaxnmv(auVar9,4);
              uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
              uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
              *param_8 = uVar28;
              *param_9 = uVar30;
              iVar20 = param_4 + 8;
              iVar22 = iVar21;
              if (param_4 + 8 < param_6) {
                do {
                  iVar20 = iVar22;
                  iVar22 = iVar20 + 2;
                  (**(code **)(*param_1 + 0x28))
                            (param_1,iVar22,param_5,&local_90,auStack_74,auStack_78);
                  auVar10._4_4_ = uStack_8c;
                  auVar10._0_4_ = local_90;
                  auVar10._8_4_ = uStack_88;
                  auVar10._12_4_ = uStack_84;
                  uVar27 = NEON_fminnmv(auVar10,4);
                  uVar23 = NEON_fmaxnmv(auVar10,4);
                  uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
                  uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
                  *param_8 = uVar28;
                  *param_9 = uVar30;
                } while (iVar20 + 4 < param_6);
                iVar20 = iVar20 + 4;
              }
            }
            else {
              iVar20 = iVar21;
              iVar22 = iVar2;
            }
          }
          else {
            iVar20 = iVar2;
            iVar22 = iVar1;
          }
        }
        else {
          iVar20 = iVar1;
          iVar22 = param_4;
        }
        if (iVar20 == param_6) {
          (**(code **)(*param_1 + 0x28))(param_1,iVar22 + 1,param_5,&local_90,auStack_74,auStack_78)
          ;
          auVar8._4_4_ = uStack_8c;
          auVar8._0_4_ = local_90;
          auVar8._8_4_ = uStack_88;
          auVar8._12_4_ = uStack_84;
          uVar27 = NEON_fminnmv(auVar8,4);
          uVar23 = NEON_fmaxnmv(auVar8,4);
          uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
          uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
          *param_8 = uVar28;
          *param_9 = uVar30;
        }
        param_5 = param_5 + 2;
      } while (param_5 < param_7);
      if (param_5 != param_7) {
        return;
      }
      param_7 = param_7 + -1;
      (**(code **)(*param_1 + 0x28))(param_1,param_4,param_7,&local_90,auStack_74,auStack_78);
      auVar11._4_4_ = uStack_8c;
      auVar11._0_4_ = local_90;
      auVar11._8_4_ = uStack_88;
      auVar11._12_4_ = uStack_84;
      iVar21 = param_4 + 2;
      uVar27 = NEON_fminnmv(auVar11,4);
      uVar23 = NEON_fmaxnmv(auVar11,4);
      uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
      uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
      *param_8 = uVar28;
      *param_9 = uVar30;
      if (iVar21 < param_6) {
        (**(code **)(*param_1 + 0x28))(param_1,iVar21,param_7,&local_90,auStack_74,auStack_78);
        auVar12._4_4_ = uStack_8c;
        auVar12._0_4_ = local_90;
        auVar12._8_4_ = uStack_88;
        auVar12._12_4_ = uStack_84;
        iVar21 = param_4 + 4;
        uVar27 = NEON_fminnmv(auVar12,4);
        uVar23 = NEON_fmaxnmv(auVar12,4);
        uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
        uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
        *param_8 = uVar28;
        *param_9 = uVar30;
        while (iVar21 < param_6) {
          (**(code **)(*param_1 + 0x28))(param_1,iVar21,param_7,&local_90,auStack_74,auStack_78);
          auVar13._4_4_ = uStack_8c;
          auVar13._0_4_ = local_90;
          auVar13._8_4_ = uStack_88;
          auVar13._12_4_ = uStack_84;
          iVar21 = iVar21 + 2;
          uVar27 = NEON_fminnmv(auVar13,4);
          uVar23 = NEON_fmaxnmv(auVar13,4);
          uVar28 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
          uVar30 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
          *param_8 = uVar28;
          *param_9 = uVar30;
        }
      }
      if (iVar21 != param_6) {
        return;
      }
      (**(code **)(*param_1 + 0x28))(param_1,param_6 + -1,param_7,&local_90,auStack_74,auStack_78);
      auVar14._4_4_ = uStack_8c;
      auVar14._0_4_ = local_90;
      auVar14._8_4_ = uStack_88;
      auVar14._12_4_ = uStack_84;
      uVar27 = NEON_fminnmv(auVar14,4);
      uVar23 = NEON_fmaxnmv(auVar14,4);
      uVar25 = NEON_fmin(uVar28,CONCAT44(uVar27,uVar27),4);
      uVar28 = NEON_fmax(uVar30,CONCAT44(uVar23,uVar23),4);
      *param_8 = uVar25;
      goto LAB_02fa45a4;
    }
    uVar31 = 0x7f7fffee7f7fffee;
    uVar29 = 0xff7fffeeff7fffee;
    if (param_5 == param_3) {
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5 + -1,&local_90,auStack_74,auStack_78)
        ;
        auVar16._4_4_ = uStack_8c;
        auVar16._0_4_ = local_90;
        auVar16._8_4_ = uStack_88;
        auVar16._12_4_ = uStack_84;
        auVar26 = NEON_ext(auVar16,auVar16,8,1);
        uVar30 = auVar26._0_8_;
        uVar28 = NEON_fminp(uVar30,uVar30,4);
        uVar30 = NEON_fmaxp(uVar30,uVar30,4);
        uVar31 = NEON_fmin(uVar31,uVar28,4);
        uVar29 = NEON_fmax(uVar29,uVar30,4);
        param_4 = param_4 + 2;
        *param_8 = uVar31;
        *param_9 = uVar29;
      } while (param_4 < param_6);
      if (param_6 != param_4) {
        return;
      }
      (**(code **)(*param_1 + 0x28))
                (param_1,param_6 + -1,param_5 + -1,&local_90,auStack_74,auStack_78);
      auVar17._4_4_ = uStack_8c;
      auVar17._0_4_ = local_90;
      auVar17._8_4_ = uStack_88;
      auVar17._12_4_ = uStack_84;
      auVar26 = NEON_ext(auVar17,auVar17,8,1);
      uVar28 = auVar26._0_8_;
    }
    else {
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_90,auStack_74,auStack_78);
        uVar30 = CONCAT44(uStack_8c,local_90);
        uVar28 = NEON_fminp(uVar30,uVar30,4);
        uVar30 = NEON_fmaxp(uVar30,uVar30,4);
        uVar31 = NEON_fmin(uVar31,uVar28,4);
        uVar29 = NEON_fmax(uVar29,uVar30,4);
        param_4 = param_4 + 2;
        *param_8 = uVar31;
        *param_9 = uVar29;
      } while (param_4 < param_6);
      if (param_6 != param_4) {
        return;
      }
      (**(code **)(*param_1 + 0x28))(param_1,param_6 + -1,param_5,&local_90,auStack_74,auStack_78);
      uVar28 = CONCAT44(uStack_8c,local_90);
    }
  }
  else {
    if (param_7 <= param_5) {
      if (param_4 == param_2) {
        if (param_5 == param_3) {
          (**(code **)(*param_1 + 0x28))
                    (param_1,param_4 + -1,param_5 + -1,&local_90,auStack_74,auStack_78);
          uVar28 = CONCAT44(uStack_84,uStack_84);
        }
        else {
          (**(code **)(*param_1 + 0x28))
                    (param_1,param_4 + -1,param_5,&local_90,auStack_74,auStack_78);
          uVar28 = CONCAT44(uStack_8c,uStack_8c);
        }
      }
      else if (param_5 == param_3) {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5 + -1,&local_90,auStack_74,auStack_78)
        ;
        uVar28 = CONCAT44(uStack_88,uStack_88);
      }
      else {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_90,auStack_74,auStack_78);
        uVar28 = CONCAT44(local_90,local_90);
      }
      *param_8 = uVar28;
      goto LAB_02fa45a4;
    }
    *param_8 = 0x7f7fffee7f7fffee;
    *param_9 = 0xff7fffeeff7fffee;
    uVar24 = _UNK_03889b38;
    uVar25 = _DAT_03889b30;
    uVar30 = _UNK_03889898;
    uVar28 = _DAT_03889890;
    uVar31 = 0x7f7fffee7f7fffee;
    uVar29 = 0xff7fffeeff7fffee;
    if (param_4 == param_2) {
      param_4 = param_4 + -1;
      uStack_a8 = _UNK_03889b38;
      local_b0 = (undefined4)_DAT_03889b30;
      uStack_ac = (undefined4)((ulong)_DAT_03889b30 >> 0x20);
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_90,auStack_74,auStack_78);
        auVar15._4_4_ = uStack_8c;
        auVar15._0_4_ = local_90;
        auVar15._8_4_ = uStack_88;
        auVar15._12_4_ = uStack_84;
        param_5 = param_5 + 2;
        auVar3._8_8_ = uVar24;
        auVar3._0_8_ = uVar25;
        auVar26 = a64_TBL(ZEXT816(0),auVar15,auVar3);
        uVar30 = auVar26._0_8_;
        uVar28 = NEON_fminp(uVar30,uVar30,4);
        uVar30 = NEON_fmaxp(uVar30,uVar30,4);
        uVar31 = NEON_fmin(uVar31,uVar28,4);
        uVar29 = NEON_fmax(uVar29,uVar30,4);
        *param_8 = uVar31;
        *param_9 = uVar29;
      } while (param_5 < param_7);
    }
    else {
      uStack_a8 = _UNK_03889898;
      local_b0 = (undefined4)_DAT_03889890;
      uStack_ac = (undefined4)((ulong)_DAT_03889890 >> 0x20);
      do {
        (**(code **)(*param_1 + 0x28))(param_1,param_4,param_5,&local_90,auStack_74,auStack_78);
        auVar18._4_4_ = uStack_8c;
        auVar18._0_4_ = local_90;
        auVar18._8_4_ = uStack_88;
        auVar18._12_4_ = uStack_84;
        param_5 = param_5 + 2;
        auVar26._8_8_ = uVar30;
        auVar26._0_8_ = uVar28;
        auVar26 = a64_TBL(ZEXT816(0),auVar18,auVar26);
        uVar24 = auVar26._0_8_;
        uVar25 = NEON_fminp(uVar24,uVar24,4);
        uVar24 = NEON_fmaxp(uVar24,uVar24,4);
        uVar31 = NEON_fmin(uVar31,uVar25,4);
        uVar29 = NEON_fmax(uVar29,uVar24,4);
        *param_8 = uVar31;
        *param_9 = uVar29;
      } while (param_5 < param_7);
    }
    if (param_7 != param_5) {
      return;
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_4,param_7 + -1,&local_90,auStack_74,auStack_78);
    auVar19._4_4_ = uStack_8c;
    auVar19._0_4_ = local_90;
    auVar19._8_4_ = uStack_88;
    auVar19._12_4_ = uStack_84;
    auVar4._4_4_ = uStack_ac;
    auVar4._0_4_ = local_b0;
    auVar4._8_8_ = uStack_a8;
    auVar26 = a64_TBL(ZEXT816(0),auVar19,auVar4);
    uVar28 = auVar26._0_8_;
  }
  uVar30 = NEON_fminp(uVar28,uVar28,4);
  uVar25 = NEON_fmaxp(uVar28,uVar28,4);
  uVar28 = NEON_fmin(uVar31,uVar30,4);
  *param_8 = uVar28;
  uVar28 = NEON_fmax(uVar29,uVar25,4);
LAB_02fa45a4:
  *param_9 = uVar28;
  return;
}


