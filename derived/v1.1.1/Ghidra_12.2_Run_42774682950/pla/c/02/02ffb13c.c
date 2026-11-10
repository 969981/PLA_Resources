/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffb13c; name: FUN_02ffb13c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ffb13c(long param_1,long *param_2,long param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined2 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long local_1278;
  uint local_1270;
  uint local_126c;
  undefined8 local_1268;
  byte local_1260;
  uint local_1258 [255];
  int local_e5c;
  int local_e58;
  int local_e54;
  undefined6 uStack_e50;
  undefined2 local_e4a;
  undefined6 uStack_e48;
  undefined8 *local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 local_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  long local_df0;
  long local_de8;
  long local_de0;
  long local_dd8;
  long local_dd0;
  long local_dc8;
  undefined8 **local_dc0;
  long local_db8;
  undefined8 local_db0;
  long local_da8;
  undefined4 local_da0 [68];
  undefined8 *local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  long local_c40;
  undefined2 local_c38;
  long local_c30;
  int local_c28;
  undefined8 local_c20;
  undefined8 local_c00 [25];
  uint local_b38;
  ulong local_b30;
  undefined8 local_b20;
  undefined8 uStack_b18;
  long local_b10;
  undefined *local_b00;
  long *local_af8;
  undefined1 *local_af0;
  undefined4 local_ae8;
  undefined1 auStack_ae0 [2632];
  undefined2 local_98;
  uint local_78 [6];
  
  lVar28 = ((long *)*param_2)[5];
  if (1 < *(byte *)(lVar28 + 0x19) - 1) {
    if (*(byte *)(lVar28 + 0x19) != 3) {
      FUN_0331fefc(&local_1278,&local_c90,0x200);
      FUN_0332448c(&local_1278,"Unhandled query shape dispatch type");
      iVar10 = FUN_03320b30(0xf034cdff,&local_c90,
                            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Physics/Physics/Collide/Shape/hknpShapeUtil.cpp"
                            ,0x171);
      if (iVar10 != 0) {
        CallSupervisor(0x26);
      }
      FUN_0331ff7c(&local_1278);
      return;
    }
    bVar4 = *(byte *)(param_2 + 1);
    uVar9 = (uint)bVar4 << 0x1d | 0x1fffffff;
    bVar8 = *(char *)(*(long *)(*(long *)*param_2 + 0x78) + 0x18) != '\x15';
    if (bVar8) {
      uVar9 = 0xffffffff;
    }
    uVar16 = 3;
    if (bVar8) {
      uVar16 = 0;
    }
    FUN_02fd9898(local_da0);
    plVar20 = (long *)*param_2;
    local_df0 = *plVar20;
    local_de8 = plVar20[1];
    local_de0 = plVar20[2];
    local_dd8 = plVar20[3];
    local_dd0 = plVar20[4];
    local_dc8 = plVar20[5];
    local_dc0 = (undefined8 **)plVar20[6];
    local_db8 = plVar20[7];
    local_db0 = plVar20[8];
    local_da8 = plVar20[9];
    puVar14 = (undefined8 *)plVar20[6];
    local_e40 = (undefined8 *)*puVar14;
    uStack_e38 = puVar14[1];
    local_e30 = puVar14[2];
    local_e28 = puVar14[3];
    local_e20 = puVar14[4];
    uStack_e18 = puVar14[5];
    local_e10 = puVar14[6];
    uStack_e08 = puVar14[7];
    local_e00 = puVar14[8];
    uStack_df8 = puVar14[9];
    lVar5 = plVar20[7];
    local_af0 = auStack_ae0;
    local_af8 = (long *)0x0;
    local_ae8 = 0x800;
    local_b00 = PTR_DAT_043724f8 + 0x10;
    local_b30 = 0xd;
    local_b10 = 0;
    local_c40 = 0;
    local_b38 = 0;
    uStack_e48 = (undefined6)((ulong)plVar20[8] >> 0x10);
    uStack_c88 = _UNK_03889a88;
    local_c90 = _DAT_03889a80;
    uStack_c78 = DAT_0388a148;
    uStack_c80 = DAT_0388a140;
    uStack_e50 = (undefined6)*(undefined8 *)((long)plVar20 + 0x3a);
    local_e4a = (undefined2)((ulong)*(undefined8 *)((long)plVar20 + 0x3a) >> 0x30);
    uStack_c68 = _UNK_03888d18;
    local_c70 = _DAT_03888d10;
    uStack_c58 = _UNK_0388a138;
    uStack_c60 = _DAT_0388a130;
    auVar30 = NEON_fmov(0x3f800000,4);
    uStack_c48 = 0;
    local_c50 = 0;
    local_98 = 0xffff;
    local_1268 = 0;
    local_1258[0] = 0xffffffff;
    local_1278 = lVar28;
    local_1270 = uVar9;
    local_126c = uVar16;
    local_1260 = bVar4;
    local_b20 = auVar30._0_8_;
    uStack_b18 = auVar30._8_8_;
    local_e58 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar28 + 0x18) * 0x200 + 0xb0))
                          (lVar28,local_1258,0x100);
    uVar9 = DAT_03aa74b0;
    local_e54 = 0;
    if (0 < local_e58) {
      do {
        local_b30 = 8;
        local_c40 = 0;
        local_b38 = 0;
        local_b10 = 0;
        uStack_c88 = uStack_e38;
        local_c90 = local_e40;
        uStack_c78 = local_e28;
        uStack_c80 = local_e30;
        local_78[0] = 0x34000000;
        uStack_c68 = uStack_e18;
        local_c70 = local_e20;
        uStack_c58 = uStack_e08;
        uStack_c60 = local_e10;
        uStack_c48 = uStack_df8;
        local_c50 = local_e00;
        local_b20 = auVar30._0_8_;
        uStack_b18 = auVar30._8_8_;
        uVar27 = FUN_032c91c4(&local_e40,&DAT_03aae430,local_78);
        uVar25 = local_b30;
        if ((uVar27 & 1) != 0) {
          local_b30 = local_b30 | 4;
          if (ABS((float)uStack_e08) <= 1.1920929e-07 &&
              (ABS((float)local_e10) <= 1.1920929e-07 && ABS(local_e10._4_4_) <= 1.1920929e-07)) {
            local_b30 = uVar25 | 5;
          }
        }
        local_98 = 0xffff;
        local_78[0] = local_1258[local_e54];
        (**(code **)(DAT_0442d3b0 +
                     (ulong)*(byte *)(*(long *)(*(long *)*param_2 + 0x78) + 0x18) * 0x200 + 0xb8))
                  (*(long *)(*(long *)*param_2 + 0x78),local_78,1,&local_c90);
        if (((byte)local_b30 >> 4 & 1) == 0) {
          lVar28 = local_b10;
        }
        else {
          lVar28 = FUN_02fed7a0(&local_c90,0,local_da0);
        }
        uVar7 = local_78[0];
        uVar6 = local_98;
        uVar16 = local_b38;
        lVar17 = local_c40;
        local_dc0 = &local_c90;
        local_db8 = CONCAT62((int6)((ulong)local_db8 >> 0x10),(short)lVar5);
        local_da8 = local_c40;
        local_db0._0_4_ = (undefined4)((ulong)*(undefined8 *)((ulong)&uStack_e50 | 2) >> 0x20);
        local_dd0 = *(long *)(local_df0 + 0x78);
        local_dd8 = CONCAT44(local_dd8._4_4_,local_78[0]);
        if (*(char *)(local_dd0 + 0x18) == '\x15') {
          plVar20 = (long *)(local_dd0 + ((ulong)(local_78[0] >> 0x1a) & 0x38) + 0x48);
          local_dd0 = *plVar20;
          if (local_dd0 == 0) {
            local_dd0 = 0;
          }
          else {
            local_dd0 = local_dd0 + (long)plVar20;
          }
        }
        plVar20 = (long *)param_2[4];
        lVar11 = *(long *)*param_2;
        uVar25 = (ulong)local_b38;
        uVar21 = *(undefined8 *)(lVar11 + 0x78);
        local_dc8 = lVar28;
        if (0 < (int)local_b38) {
          uVar27 = (ulong)*(byte *)(local_c30 + 0x1c);
          uVar24 = (local_c28 + 1 << (ulong)(-(uint)*(byte *)(local_c30 + 0x1c) & 0x1f)) - 1U |
                   uVar9;
          (**(code **)(*plVar20 + 0x40))
                    (plVar20,local_c38,6,lVar11,uVar21,local_c30,uVar24,local_c20,&local_db8);
          if (uVar16 != 1) {
            lVar12 = uVar25 - 1;
            puVar14 = local_c00;
            do {
              puVar1 = &DAT_03aa74b0 + uVar27;
              uVar16 = (int)uVar27 + (uint)*(byte *)(puVar14[-2] + 0x1c);
              uVar27 = (ulong)uVar16;
              uVar24 = (*(int *)(puVar14 + -1) + 1 << (ulong)(-uVar16 & 0x1f)) - 1U |
                       *puVar1 & uVar24;
              (**(code **)(*plVar20 + 0x40))
                        (plVar20,*(undefined2 *)(puVar14 + -3),6,lVar11,uVar21,puVar14[-2],uVar24,
                         *puVar14,&local_db8);
              lVar12 = lVar12 + -1;
              puVar14 = puVar14 + 4;
            } while (lVar12 != 0);
          }
        }
        (**(code **)(*plVar20 + 0x40))(plVar20,uVar6,6,lVar11,uVar21,lVar17,uVar7,lVar28,&local_db8)
        ;
        *param_2 = (long)&local_df0;
        (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf8))
                  (param_1,param_2,param_3);
        iVar10 = local_e54 + 1;
        bVar8 = 0xfe < local_e54;
        local_e54 = iVar10;
        if ((bVar8) && (local_e58 == 0x100)) {
          local_1258[0] = 0xffffffff;
          local_e58 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_1278 + 0x18) * 0x200 + 0xb0
                                  ))(local_1278,local_1258,0x100,
                                     local_e5c << (ulong)(local_126c & 0x1f) |
                                     -1 << (ulong)(local_126c & 0x1f) ^ 0xffffffffU,&local_1270);
          local_e54 = 0;
        }
      } while (local_e54 < local_e58);
    }
    local_b00 = PTR_DAT_043724f0 + 0x10;
    if (local_af8 != (long *)0x0) {
      (**(code **)(*local_af8 + 8))();
    }
    FUN_02fd9ab8(local_da0);
    return;
  }
  uVar9 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar28 + 0x18) * 0x200 + 0x58))(lVar28);
  lVar5 = tpidr_el0;
  lVar17 = *(long *)(lVar5 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar17;
  }
  lVar11 = *(long *)(lVar17 + 8);
  uVar25 = (ulong)(int)(uVar9 * 0xc + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar25) {
LAB_02ffb604:
    lVar12 = FUN_032ce670(lVar11,uVar25);
    lVar17 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    lVar12 = *(long *)(lVar11 + 0x18);
    if (*(ulong *)(lVar11 + 0x20) < lVar12 + uVar25) goto LAB_02ffb604;
    *(ulong *)(lVar11 + 0x18) = lVar12 + uVar25;
  }
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar17;
  }
  lVar11 = *(long *)(lVar17 + 8);
  uVar27 = (ulong)(int)(uVar9 * 0x10 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar27) {
LAB_02ffb650:
    lVar13 = FUN_032ce670(lVar11,uVar27);
    lVar17 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    lVar13 = *(long *)(lVar11 + 0x18);
    if (*(ulong *)(lVar11 + 0x20) < lVar13 + uVar27) goto LAB_02ffb650;
    *(ulong *)(lVar11 + 0x18) = lVar13 + uVar27;
  }
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar17;
  }
  lVar17 = *(long *)(lVar17 + 8);
  uVar29 = (ulong)(int)(uVar9 * 0x60 + 0x7f & 0xffffff80);
  if (uVar29 <= *(ulong *)(lVar17 + 0x10)) {
    puVar14 = *(undefined8 **)(lVar17 + 0x18);
    if ((long)puVar14 + uVar29 <= *(ulong *)(lVar17 + 0x20)) {
      *(ulong *)(lVar17 + 0x18) = (long)puVar14 + uVar29;
      goto LAB_02ffb270;
    }
  }
  puVar14 = (undefined8 *)FUN_032ce670(lVar17,uVar29);
LAB_02ffb270:
  lVar17 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar28 + 0x18) * 0x200 + 0x60))
                     (lVar28,lVar12,uVar9,local_da0);
  pauVar18 = *(undefined1 (**) [16])(*param_2 + 0x30);
  auVar30 = *pauVar18;
  uVar31 = *(undefined8 *)(pauVar18[1] + 8);
  uVar21 = *(undefined8 *)pauVar18[1];
  uVar33 = *(undefined8 *)(pauVar18[2] + 8);
  uVar32 = *(undefined8 *)pauVar18[2];
  uVar35 = *(undefined8 *)(pauVar18[3] + 8);
  uVar34 = *(undefined8 *)pauVar18[3];
  pfVar19 = (float *)(lVar17 + (long)(int)uVar9 * 0xc + -4);
  lVar17 = (long)(int)uVar9;
  do {
    fVar36 = (float)*(undefined8 *)(pfVar19 + -2);
    fVar37 = (float)((ulong)*(undefined8 *)(pfVar19 + -2) >> 0x20);
    lVar11 = lVar13 + lVar17 * 0x10;
    fVar38 = *pfVar19;
    lVar17 = lVar17 + -1;
    *(ulong *)(lVar11 + -8) =
         CONCAT44((float)((ulong)uVar35 >> 0x20) +
                  auVar30._12_4_ * fVar36 + (float)((ulong)uVar31 >> 0x20) * fVar37 +
                  (float)((ulong)uVar33 >> 0x20) * fVar38,
                  (float)uVar35 +
                  auVar30._8_4_ * fVar36 + (float)uVar31 * fVar37 + (float)uVar33 * fVar38);
    *(ulong *)(lVar11 + -0x10) =
         CONCAT44((float)((ulong)uVar34 >> 0x20) +
                  auVar30._4_4_ * fVar36 + (float)((ulong)uVar21 >> 0x20) * fVar37 +
                  (float)((ulong)uVar32 >> 0x20) * fVar38,
                  (float)uVar34 +
                  auVar30._0_4_ * fVar36 + (float)uVar21 * fVar37 + (float)uVar32 * fVar38);
    pfVar19 = pfVar19 + -3;
  } while (0 < lVar17);
  local_126c = local_da0[0];
  local_1268 = CONCAT44(local_1268._4_4_,0x7f7fffee);
  uVar21 = local_1268;
  local_1268._0_6_ = CONCAT15((*(ushort *)(param_2[2] + 10) & 0x180) != 0,(int5)uVar21);
  local_1278 = lVar13;
  local_1270 = uVar9;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0xf0))
            (param_1,&local_1278,puVar14);
  local_c90 = &uStack_c80;
  uStack_c88 = -0x7fffffe000000000;
  uVar16 = (uint)*(byte *)(param_2 + 5);
  if (*(byte *)(param_2 + 5) != 0) {
    if (((*(ushort *)(lVar28 + 0x1a) ^ 0xffff) & 0x802) == 0) {
      FUN_02ffa710(param_1,lVar28,puVar14,lVar13,param_2,&local_c90);
      uVar16 = (uint)uStack_c88;
    }
    else {
      uVar16 = 0;
    }
  }
  if (0 < (int)(uVar16 + uVar9)) {
    uVar22 = 0;
    puVar26 = puVar14;
    do {
      puVar23 = puVar26;
      if ((long)(int)uVar9 <= (long)uVar22) {
        puVar23 = local_c90 + (long)(int)((int)uVar22 - uVar9) * 0xc;
      }
      if (*(float *)(puVar23 + 6) <= *(float *)(param_2 + 3)) {
        if (*(int *)(param_3 + 0x18) < 0xe81) {
          puVar15 = (undefined8 *)
                    (*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20);
        }
        else {
          puVar15 = (undefined8 *)FUN_032bf82c(param_3);
        }
        uVar2 = *(undefined4 *)(puVar23 + 1);
        uVar3 = *(undefined4 *)((long)puVar23 + 0xc);
        *puVar15 = *puVar23;
        *(undefined4 *)(puVar15 + 1) = uVar2;
        *(undefined4 *)((long)puVar15 + 0xc) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 3);
        uVar3 = *(undefined4 *)((long)puVar23 + 0x1c);
        puVar15[2] = puVar23[2];
        *(undefined4 *)(puVar15 + 3) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x1c) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 5);
        uVar3 = *(undefined4 *)((long)puVar23 + 0x2c);
        puVar15[4] = puVar23[4];
        *(undefined4 *)(puVar15 + 5) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x2c) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 7);
        uVar3 = *(undefined4 *)((long)puVar23 + 0x3c);
        puVar15[6] = puVar23[6];
        *(undefined4 *)(puVar15 + 7) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x3c) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 9);
        uVar3 = *(undefined4 *)((long)puVar23 + 0x4c);
        puVar15[8] = puVar23[8];
        *(undefined4 *)(puVar15 + 9) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x4c) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 0xb);
        uVar3 = *(undefined4 *)((long)puVar23 + 0x5c);
        puVar15[10] = puVar23[10];
        *(undefined4 *)(puVar15 + 0xb) = uVar2;
        *(undefined4 *)((long)puVar15 + 0x5c) = uVar3;
        uVar2 = *(undefined4 *)(puVar23 + 6);
        *(undefined2 *)((long)puVar15 + 0x34) = *(undefined2 *)((long)puVar23 + 0x34);
        *(undefined4 *)(puVar15 + 7) = *(undefined4 *)(*param_2 + 0x18);
        lVar28 = *param_2;
        *(undefined2 *)(puVar15 + 8) = *(undefined2 *)(lVar28 + 0x38);
        uVar21 = *(undefined8 *)(lVar28 + 0x3c);
        *(undefined4 *)((long)puVar15 + 0x4c) = *(undefined4 *)(lVar28 + 0x44);
        *(undefined8 *)((long)puVar15 + 0x44) = uVar21;
        *(undefined4 *)(puVar15 + 6) = uVar2;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 0x60;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      }
      uVar22 = uVar22 + 1;
      puVar26 = puVar26 + 0xc;
    } while (uVar16 + uVar9 != uVar22);
  }
  lVar28 = *(long *)(lVar5 + 0x38d490);
  if (lVar28 == 0) {
    lVar28 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar28;
  }
  lVar17 = *(long *)(lVar28 + 8);
  if (((*(ulong *)(lVar17 + 0x10) < uVar29) || (*(long *)(lVar17 + 0x18) != (long)puVar14 + uVar29))
     || (*(undefined8 **)(lVar17 + 0x28) == puVar14)) {
    FUN_032cedf0(lVar17,puVar14,uVar29);
    lVar28 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    *(undefined8 **)(lVar17 + 0x18) = puVar14;
  }
  if (lVar28 == 0) {
    lVar28 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar28;
  }
  lVar17 = *(long *)(lVar28 + 8);
  if (((*(ulong *)(lVar17 + 0x10) < uVar27) || (*(long *)(lVar17 + 0x18) != lVar13 + uVar27)) ||
     (*(long *)(lVar17 + 0x28) == lVar13)) {
    FUN_032cedf0(lVar17,lVar13,uVar27);
    lVar28 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    *(long *)(lVar17 + 0x18) = lVar13;
  }
  if (lVar28 == 0) {
    lVar28 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar28;
  }
  lVar28 = *(long *)(lVar28 + 8);
  if (((*(ulong *)(lVar28 + 0x10) < uVar25) || (*(long *)(lVar28 + 0x18) != lVar12 + uVar25)) ||
     (*(long *)(lVar28 + 0x28) == lVar12)) {
    FUN_032cedf0(lVar28,lVar12,uVar25);
  }
  else {
    *(long *)(lVar28 + 0x18) = lVar12;
  }
  lVar28 = uStack_c88;
  uVar9 = uStack_c88._4_4_;
  uStack_c88 = (ulong)uStack_c88._4_4_ << 0x20;
  if ((-1 < lVar28) && (local_c90 != (undefined8 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_c90,0x60,uVar9 & 0x3fffffff);
  }
  return;
}


