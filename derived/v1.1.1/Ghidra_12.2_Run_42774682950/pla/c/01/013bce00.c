/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bce00; name: FUN_013bce00
 */


void FUN_013bce00(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  ulong local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  lVar3 = param_1[4];
  local_d8 = param_1[5];
  lVar16 = param_1[6];
  lVar4 = *param_1;
  lVar7 = param_1[1];
  lVar5 = param_1[2];
  lVar8 = param_1[3];
  uVar6 = param_1[7];
  local_b8 = param_1[9];
  lStack_b0 = param_1[10];
  local_c8 = uVar6;
  uVar6 = local_c8;
  local_c0 = param_1[8];
  uVar13 = local_c0;
  local_98 = param_1[0xd];
  lStack_90 = param_1[0xe];
  local_a8 = param_1[0xb];
  lStack_a0 = param_1[0xc];
  local_78 = param_1[0x11];
  lStack_70 = param_1[0x12];
  local_88 = param_1[0xf];
  lStack_80 = param_1[0x10];
  if (lVar4 == 0) {
    return;
  }
  if (lVar7 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  uStack_d0._4_1_ = (undefined1)((ulong)lVar16 >> 0x20);
  local_c8._0_2_ = (short)uVar6;
  uStack_d0 = lVar16;
  local_c8 = uVar6;
  switch(uStack_d0._4_1_) {
  case 0:
    FUN_02c3041c(lVar4);
    return;
  case 1:
    local_c0._6_1_ = (char)((ulong)param_1[8] >> 0x30);
    local_c0 = uVar13;
    if (local_c0._6_1_ == '\0') {
      thunk_FUN_02c36a60(lVar5,5,uVar6 & 0xffff);
      puVar14 = (ulong *)&DAT_03a7b5f0;
    }
    else {
      puVar14 = (ulong *)&DAT_03a7b5e8;
    }
    break;
  case 2:
    if ((short)local_c8 == 0) {
LAB_013bcf9c:
      uVar15 = 0;
      local_c8._4_2_ = (short)(uVar6 >> 0x20);
      sVar11 = local_c8._4_2_;
    }
    else {
      local_c8._2_2_ = (short)(uVar6 >> 0x10);
      sVar11 = local_c8._2_2_;
      if (local_c8._2_2_ == 0) goto LAB_013bcf9c;
      uVar15 = 1;
      FUN_02c3865c(lVar5,5,uVar6 & 0xffff,1);
      FUN_02c395d0(lVar5,6,sVar11,3,0,1);
      uVar6 = local_c8;
      sVar11 = local_c8._4_2_;
    }
    local_c8 = uVar6;
    if (sVar11 != 0) {
      local_c8._6_2_ = (short)(uVar6 >> 0x30);
      sVar12 = local_c8._6_2_;
      bVar1 = local_c8._6_2_ != 0;
      if (bVar1) {
        FUN_02c3865c(lVar5,uVar15 << 1 | 5,sVar11,1);
        FUN_02c395d0(lVar5,uVar15 * 2 + 6,sVar12,3,0,1);
        uVar15 = uVar15 + 1;
      }
    }
    if ((short)local_c0 != 0) {
      sVar11 = local_c0._2_2_;
      if (local_c0._2_2_ != 0) {
        FUN_02c3865c(lVar5,uVar15 * 2 + 5,local_c0 & 0xffff,1);
        FUN_02c395d0(lVar5,uVar15 * 2 + 6,sVar11,3,0,1);
        uVar15 = uVar15 + 1;
      }
    }
    if (local_c0._4_2_ != 0) {
      sVar11 = local_c0._6_2_;
      if (local_c0._6_2_ != 0) {
        FUN_02c3865c(lVar5,uVar15 * 2 + 5,local_c0._4_2_,1);
        FUN_02c395d0(lVar5,uVar15 * 2 + 6,sVar11,3,0,1);
        uVar15 = uVar15 + 1;
      }
    }
    if ((short)local_b8 != 0) {
      sVar11 = local_b8._2_2_;
      if (local_b8._2_2_ != 0) {
        FUN_02c3865c(lVar5,uVar15 * 2 + 5,local_b8 & 0xffff,1);
        FUN_02c395d0(lVar5,uVar15 * 2 + 6,sVar11,3,0,1);
        uVar15 = uVar15 + 1;
      }
    }
    if (local_b8._4_2_ != 0) {
      sVar11 = local_b8._6_2_;
      if (local_b8._6_2_ != 0) {
        FUN_02c3865c(lVar5,uVar15 * 2 + 5,local_b8._4_2_,1);
        FUN_02c395d0(lVar5,uVar15 * 2 + 6,sVar11,3,0,1);
        uVar15 = uVar15 + 1;
      }
    }
    if (uVar15 == 1) {
      if (local_c8._2_2_ == 1) {
        puVar14 = (ulong *)&DAT_03a7b5f8;
        break;
      }
    }
    else {
      local_108[2] = DAT_03a7b598;
      local_108[3] = DAT_03a7b5a0;
      local_e8 = DAT_03a7b5a8;
      uStack_e0 = DAT_03a7b5b0;
      local_108[0] = DAT_03a7b588;
      local_108[1] = DAT_03a7b590;
      if (uVar15 == 0) {
LAB_013bd254:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    uStack_e0 = DAT_03a7b5b0;
    local_e8 = DAT_03a7b5a8;
    local_108[3] = DAT_03a7b5a0;
    local_108[2] = DAT_03a7b598;
    local_108[1] = DAT_03a7b590;
    local_108[0] = DAT_03a7b588;
    if (5 < uVar15) {
      uVar15 = 6;
    }
    puVar14 = local_108 + (uVar15 - 1);
    break;
  case 3:
    iVar9 = (int)param_1[0x13];
    plVar2 = &local_c8;
    if (iVar9 != 0) {
      plVar2 = &local_98;
    }
    lVar16 = 0;
    uVar15 = 0;
    do {
      iVar10 = *(int *)((long)plVar2 + lVar16 + 4);
      if (iVar10 != -1) {
        FUN_013bd270(local_108,*(undefined4 *)((long)plVar2 + lVar16),iVar10,iVar9 == 0);
        if ((char)local_108[0] != '\0') {
          FUN_02c2e7d0(lVar3,local_108 + 1,lVar7);
          FUN_02c36128(lVar5,uVar15 + 5,lVar7,iVar9 != 0,0);
          uVar15 = uVar15 + 1;
          if ((char)local_108[0] != '\0') {
            local_108[0] = local_108[0] & 0xffffffffffffff00;
          }
        }
      }
      lVar16 = lVar16 + 8;
    } while (lVar16 != 0x30);
    local_108[2] = DAT_03a7b5c8;
    local_108[3] = DAT_03a7b5d0;
    local_e8 = DAT_03a7b5d8;
    uStack_e0 = DAT_03a7b5e0;
    local_108[0] = DAT_03a7b5b8;
    local_108[1] = DAT_03a7b5c0;
    if (((int)uVar15 < 1) || (6 < uVar15)) goto LAB_013bd254;
    puVar14 = local_108 + (uVar15 - 1);
    break;
  case 4:
    FUN_02c395d0(lVar5,5,uVar6 & 0xffffffff,7,0,1);
    puVar14 = (ulong *)&DAT_03a7b600;
    break;
  default:
    goto switchD_013bce98_default;
  }
  FUN_02c2e7d0(lVar8,puVar14,lVar7);
  FUN_02c333a8(lVar5,lVar4,lVar7);
switchD_013bce98_default:
  return;
}


