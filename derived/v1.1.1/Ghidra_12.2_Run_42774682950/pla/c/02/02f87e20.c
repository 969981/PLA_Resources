/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f87e20; name: FUN_02f87e20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f87e20(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long local_90;
  undefined8 local_88;
  long local_80;
  int local_78;
  long local_70;
  
  lVar17 = tpidr_el0;
  if (*(long *)(lVar17 + 0x38d490) == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar27;
    local_70 = *(long *)(lVar27 + 0x10);
  }
  else {
    local_70 = *(long *)(*(long *)(lVar17 + 0x38d490) + 0x10);
  }
  if (local_70 != 0) {
    FUN_032d5af0(local_70,"TtCalcMassProperties",0x14);
  }
  uVar3 = *(uint *)(param_3 + 1);
  iVar19 = uVar3 + (int)param_3[2];
  uVar4 = iVar19 * 0x20;
  uVar2 = iVar19 * 0x20 | 3;
  uVar24 = uVar2;
  if (-1 < (int)uVar4) {
    uVar24 = uVar4;
  }
  iVar19 = (int)uVar24 >> 2;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  local_78 = iVar19;
  if (uVar2 < 7) {
    lVar27 = 0;
    goto LAB_02f87f28;
  }
  lVar27 = *(long *)(lVar17 + 0x38d490);
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar27;
  }
  lVar16 = *(long *)(lVar27 + 8);
  if (*(ulong *)(lVar16 + 0x10) < (ulong)(long)(iVar19 * 0x50)) {
LAB_02f87fdc:
    lVar27 = FUN_032ce670();
  }
  else {
    lVar27 = *(long *)(lVar16 + 0x18);
    uVar23 = lVar27 + iVar19 * 0x50;
    if (*(ulong *)(lVar16 + 0x20) < uVar23) goto LAB_02f87fdc;
    *(ulong *)(lVar16 + 0x18) = uVar23;
  }
  uVar3 = *(uint *)(param_3 + 1);
LAB_02f87f28:
  puVar14 = PTR_PTR_0434a080;
  uVar13 = DAT_0388a148;
  uVar12 = DAT_0388a140;
  uVar11 = _UNK_0388a138;
  uVar10 = _DAT_0388a130;
  uVar9 = _UNK_03889a88;
  uVar8 = _DAT_03889a80;
  uVar7 = _UNK_03888d18;
  uVar6 = _DAT_03888d10;
  local_88 = CONCAT44(iVar19,(int)local_88) | 0x8000000000000000;
  lVar16 = 0;
  if (*param_3 != 0) {
    lVar16 = *param_3 + (long)param_3;
  }
  local_90 = lVar27;
  local_80 = lVar27;
  if (0 < (int)uVar3) {
    lVar20 = (long)&local_88 + 4;
    iVar19 = 0;
    uVar23 = 0;
    lVar25 = param_1 + 0x38;
    do {
      lVar26 = (long)(int)param_3[2] + (long)(int)uVar23;
      uVar2 = *(uint *)(lVar16 + uVar23 * 4);
      if (uVar2 == 0xffffffff) {
        iVar5 = iVar19 + 1;
        lVar21 = *(long *)(param_1 + 0x18);
        if ((int)(local_88._4_4_ & 0x3fffffff) <= iVar19) {
          lVar27 = FUN_02f88524(puVar14,iVar5,lVar27,iVar19,lVar20);
          local_90 = lVar27;
          iVar19 = (int)local_88;
        }
        puVar18 = (undefined8 *)(lVar27 + (long)iVar19 * 0x50);
        local_88 = CONCAT44(local_88._4_4_,iVar5);
        *puVar18 = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        puVar18[4] = 0;
        puVar18[5] = 0;
        puVar18[6] = 0;
        puVar18[7] = 0;
        puVar18[8] = 0;
        puVar18[9] = 0;
        FUN_0328ec08(param_1 + 0x18 + lVar26 * 0x20 + lVar21);
        iVar19 = iVar5;
      }
      else if (uVar2 != 0) {
        iVar5 = (int)lVar26 * 8;
        lVar26 = 0;
        uVar24 = 0xf;
        do {
          if ((uVar24 & uVar2) == uVar24) {
            lVar21 = *(long *)(param_1 + 0x28);
            iVar1 = iVar19 + 1;
            if ((int)(local_88._4_4_ & 0x3fffffff) <= iVar19) {
              lVar27 = FUN_02f88524(puVar14,iVar1,lVar27,iVar19,lVar20);
              local_90 = lVar27;
              iVar19 = (int)local_88;
            }
            puVar18 = (undefined8 *)(lVar27 + (long)iVar19 * 0x50);
            local_88 = CONCAT44(local_88._4_4_,iVar1);
            *puVar18 = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[4] = 0;
            puVar18[5] = 0;
            puVar18[6] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar18[9] = 0;
            FUN_0328ec08(param_1 + 0x28 + (lVar26 + iVar5) * 0x20 + lVar21);
            iVar19 = iVar1;
          }
          else if ((uVar24 & uVar2) != 0) {
            uVar4 = ((int)lVar26 + iVar5) * 4;
            local_2d8 = -0x7ffffffc00000000;
            local_2e0 = &local_2d0;
            if ((1 << (ulong)(uVar4 & 0x1c) & uVar2) != 0) {
              local_2d8 = -0x7ffffffbffffffff;
              local_2d0 = 0;
              local_2c0 = 0;
              uStack_2b8 = 0;
              local_2b0 = 0;
              uStack_2a8 = 0;
              local_2a0 = 0;
              uStack_298 = 0;
              local_290 = 0;
              uStack_288 = 0;
              local_280 = uVar8;
              uStack_278 = uVar9;
              uStack_270 = uVar12;
              uStack_268 = uVar13;
              local_260 = uVar6;
              uStack_258 = uVar7;
              uStack_250 = uVar10;
              uStack_248 = uVar11;
              (**(code **)(*param_2 + 0x18))(param_2,uVar4,lVar25);
            }
            if ((1 << (ulong)(uVar4 & 0x1d | 1) & uVar2) != 0) {
              lVar27 = (long)(int)local_2d8;
              local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_2d8 + 1);
              puVar22 = local_2e0 + lVar27 * 0x12;
              puVar18 = puVar22 + 0x12;
              do {
                *puVar22 = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar22[4] = 0;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[7] = 0;
                puVar22[8] = 0;
                puVar22[9] = 0;
                puVar22[0xb] = uVar9;
                puVar22[10] = uVar8;
                puVar22[0xd] = uVar13;
                puVar22[0xc] = uVar12;
                puVar22[0xf] = uVar7;
                puVar22[0xe] = uVar6;
                puVar22[0x11] = uVar11;
                puVar22[0x10] = uVar10;
                puVar22 = puVar22 + 0x12;
              } while (puVar22 != puVar18);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 1,lVar25);
            }
            if ((1 << (ulong)(uVar4 & 0x1e | 2) & uVar2) != 0) {
              lVar27 = (long)(int)local_2d8;
              local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_2d8 + 1);
              puVar22 = local_2e0 + lVar27 * 0x12;
              puVar18 = puVar22 + 0x12;
              do {
                *puVar22 = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar22[4] = 0;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[7] = 0;
                puVar22[8] = 0;
                puVar22[9] = 0;
                puVar22[0xb] = uVar9;
                puVar22[10] = uVar8;
                puVar22[0xd] = uVar13;
                puVar22[0xc] = uVar12;
                puVar22[0xf] = uVar7;
                puVar22[0xe] = uVar6;
                puVar22[0x11] = uVar11;
                puVar22[0x10] = uVar10;
                puVar22 = puVar22 + 0x12;
              } while (puVar22 != puVar18);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 2,lVar25);
            }
            if ((1 << (ulong)(uVar4 & 0x1f | 3) & uVar2) != 0) {
              lVar27 = (long)(int)local_2d8;
              local_2d8 = CONCAT44(local_2d8._4_4_,(int)local_2d8 + 1);
              puVar22 = local_2e0 + lVar27 * 0x12;
              puVar18 = puVar22 + 0x12;
              do {
                *puVar22 = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar22[4] = 0;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[7] = 0;
                puVar22[8] = 0;
                puVar22[9] = 0;
                puVar22[0xb] = uVar9;
                puVar22[10] = uVar8;
                puVar22[0xd] = uVar13;
                puVar22[0xc] = uVar12;
                puVar22[0xf] = uVar7;
                puVar22[0xe] = uVar6;
                puVar22[0x11] = uVar11;
                puVar22[0x10] = uVar10;
                puVar22 = puVar22 + 0x12;
              } while (puVar22 != puVar18);
              (**(code **)(*param_2 + 0x18))(param_2,uVar4 | 3,lVar25);
            }
            iVar19 = (int)local_88 + 1;
            if ((int)(local_88._4_4_ & 0x3fffffff) <= (int)local_88) {
              local_90 = FUN_02f88524(puVar14,iVar19,local_90,local_88 & 0xffffffff,lVar20);
            }
            lVar27 = local_90;
            puVar18 = (undefined8 *)(local_90 + (long)(int)local_88 * 0x50);
            local_88 = CONCAT44(local_88._4_4_,iVar19);
            *puVar18 = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[4] = 0;
            puVar18[5] = 0;
            puVar18[6] = 0;
            puVar18[7] = 0;
            puVar18[8] = 0;
            puVar18[9] = 0;
            FUN_03290038(&local_2e0);
            lVar21 = local_2d8;
            uVar4 = local_2d8._4_4_;
            local_2d8 = (ulong)local_2d8._4_4_ << 0x20;
            if ((-1 < lVar21) && (local_2e0 != (undefined8 *)0x0)) {
              FUN_032cf244(puVar14,local_2e0,0x90,uVar4 & 0x3fffffff);
            }
          }
          lVar26 = lVar26 + 1;
          uVar24 = uVar24 << 4;
        } while (lVar26 != 8);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar3);
  }
  lVar16 = local_80;
  local_2e0 = (undefined8 *)0x0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  FUN_02f87cb0(&local_90,&local_2e0);
  FUN_0328ed90(param_4,&local_2e0);
  if (lVar16 == lVar27) {
    local_88 = local_88 & 0xffffffff00000000;
  }
  lVar25 = (long)local_78;
  lVar20 = *(long *)(lVar17 + 0x38d490);
  if (lVar20 == 0) {
    lVar20 = FUN_0333d16c(0,1);
    *(long *)(lVar17 + 0x38d490) = lVar20;
  }
  lVar17 = *(long *)(lVar20 + 8);
  uVar23 = lVar25 * 0x50 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar17 + 0x10) < uVar23) || (*(long *)(lVar17 + 0x18) != uVar23 + lVar16)) ||
     (*(long *)(lVar17 + 0x28) == lVar16)) {
    FUN_032cedf0(lVar17,lVar16);
  }
  else {
    *(long *)(lVar17 + 0x18) = lVar16;
  }
  uVar15 = local_88;
  uVar23 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((lVar27 != 0) && (-1 < (long)uVar15)) {
    FUN_032cf244(PTR_PTR_0434a080,lVar27,0x50,(uint)uVar23 & 0x3fffffff);
  }
  if (local_70 != 0) {
    FUN_032d5b34(local_70,&DAT_0390f40e);
  }
  return;
}


