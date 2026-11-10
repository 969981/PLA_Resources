/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033706e4; name: FUN_033706e4
 */


void FUN_033706e4(long param_1,long param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [16];
  long local_160;
  long lStack_158;
  ulong uStack_150;
  ulong local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  long local_120;
  long lStack_118;
  ulong local_110;
  ulong local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  long local_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  puVar7 = PTR_PTR_0434a080;
  local_90 = 0;
  local_88 = -0x8000000000000000;
  local_80 = 0;
  uStack_78 = 0xffffffff00000000;
  uVar19 = 0;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  local_a0 = (undefined4 *)0x0;
  local_98 = 0x8000000000000000;
  puVar18 = *(uint **)(*(long *)(param_1 + 0x28) + 0x18);
  uVar13 = *puVar18;
  do {
    if ((int)uVar13 < 0) {
      uVar19 = puVar18[(long)(int)uVar19 + 2] + uVar19;
    }
    else {
      while (uVar19 = uVar19 + 1, (uVar13 >> 0x1e & 1) == 0) {
        uVar13 = puVar18[(int)uVar19];
      }
    }
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x20) - 4U <= uVar19) goto LAB_03370c7c;
    uVar13 = puVar18[(int)uVar19];
    puVar2 = local_a0;
    uVar16 = local_98;
  } while ((int)uVar13 < 0);
  while (local_a0 = puVar2, local_98 = uVar16, uVar19 != 0) {
    lVar15 = -0x400000000;
    uVar13 = 0xfffffffe;
    lVar11 = (long)puVar18 + ((long)(((ulong)uVar19 << 0x20) + 0x200000000) >> 0x1e);
    do {
      pbVar1 = (byte *)(lVar11 + 3);
      lVar15 = lVar15 + 0x200000000;
      uVar13 = uVar13 + 2;
      lVar11 = lVar11 + 8;
    } while ((*pbVar1 >> 5 & 1) == 0);
    local_98._4_4_ = (uint)(uVar16 >> 0x20);
    uVar5 = uVar13 >> 1;
    uVar14 = (ulong)uVar5;
    if ((local_98._4_4_ & 0x3fffffff) < uVar5) {
      uVar10 = local_98._4_4_;
      if (0x7ffffffe < uVar13) {
        FUN_032bd0a8(uVar14);
        uVar10 = local_98._4_4_;
      }
      uVar10 = (uVar10 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar10) {
        uVar10 = 0x3fffffff;
      }
      uVar6 = uVar5;
      if (uVar5 <= uVar10) {
        uVar6 = uVar10;
      }
      local_a0 = (undefined4 *)
                 FUN_032bd1d4(puVar7,uVar6,4,puVar2,uVar16 & 0xffffffff,(long)&local_98 + 4);
      uVar16 = local_98;
    }
    local_98 = uVar16;
    puVar18 = puVar18 + (int)uVar19;
    if ((uint)local_98 != uVar5) {
      local_98 = CONCAT44(local_98._4_4_,uVar5);
    }
    lVar11 = *(long *)(param_1 + 0x20);
    puVar12 = puVar18 + 2;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + ((ulong)*puVar12 & 0xfffffff) * 0x40);
    if ((*puVar12 >> 0x1c & 1) == 0) {
      uStack_150 = plVar3[2];
      local_148 = plVar3[3];
      lStack_158 = plVar3[1];
      local_160 = *plVar3;
      local_140 = (double)plVar3[4];
      local_138 = (double)plVar3[5];
      local_130 = (double)plVar3[6];
      local_128 = (double)plVar3[7];
    }
    else {
      uVar10 = (uint)plVar3[2];
      local_148 = -plVar3[3];
      uVar5 = -uVar10;
      if ((ulong)~plVar3[3] <= local_148) {
        uVar5 = ~uVar10;
      }
      uStack_150 = (ulong)uVar5 & 0x7ff | ((ulong)plVar3[2] >> 0xe) * -0x4000;
      local_160 = (ulong)((uint7)((ulong)*plVar3 >> 8) & 0xffffffffffffc0) * -0x100;
      lStack_158 = (ulong)((uint7)((ulong)plVar3[1] >> 8) & 0xffffffffffffc0) * -0x100;
      local_140 = -(double)plVar3[4];
      local_138 = -(double)plVar3[5];
      local_130 = -(double)plVar3[6];
      local_128 = -(double)plVar3[7];
    }
    uVar5 = *(uint *)((long)puVar12 + (lVar15 >> 0x1e | 4U));
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + ((ulong)uVar5 & 0xfffffff) * 0x40);
    if ((uVar5 >> 0x1c & 1) == 0) {
      local_110 = plVar3[2];
      local_108 = plVar3[3];
      lStack_118 = plVar3[1];
      local_120 = *plVar3;
      local_100 = (double)plVar3[4];
      local_f8 = (double)plVar3[5];
      local_f0 = (double)plVar3[6];
      local_e8 = (double)plVar3[7];
    }
    else {
      uVar10 = (uint)plVar3[2];
      local_108 = -plVar3[3];
      uVar5 = -uVar10;
      if ((ulong)~plVar3[3] <= local_108) {
        uVar5 = ~uVar10;
      }
      local_110 = (ulong)uVar5 & 0x7ff | ((ulong)plVar3[2] >> 0xe) * -0x4000;
      local_120 = (ulong)((uint7)((ulong)*plVar3 >> 8) & 0xffffffffffffc0) * -0x100;
      lStack_118 = (ulong)((uint7)((ulong)plVar3[1] >> 8) & 0xffffffffffffc0) * -0x100;
      local_100 = -(double)plVar3[4];
      local_f8 = -(double)plVar3[5];
      local_f0 = -(double)plVar3[6];
      local_e8 = -(double)plVar3[7];
    }
    if (uVar13 != 0) {
      uVar16 = 0;
      iVar17 = 1;
      while( true ) {
        plVar3 = (long *)(*(long *)(lVar11 + 0x30) + ((ulong)puVar12[iVar17] & 0xfffffff) * 0x40);
        if ((puVar12[iVar17] >> 0x1c & 1) == 0) {
          uStack_d0 = plVar3[2];
          local_c8 = plVar3[3];
          lStack_d8 = plVar3[1];
          local_e0 = *plVar3;
          local_c0 = (double)plVar3[4];
          local_b8 = (double)plVar3[5];
          local_b0 = (double)plVar3[6];
          local_a8 = (double)plVar3[7];
        }
        else {
          uVar10 = (uint)plVar3[2];
          local_c8 = -plVar3[3];
          uVar5 = -uVar10;
          if ((ulong)~plVar3[3] <= local_c8) {
            uVar5 = ~uVar10;
          }
          uStack_d0 = (ulong)uVar5 & 0x7ff | ((ulong)plVar3[2] >> 0xe) * -0x4000;
          local_e0 = (ulong)((uint7)((ulong)*plVar3 >> 8) & 0xffffffffffffc0) * -0x100;
          lStack_d8 = (ulong)((uint7)((ulong)plVar3[1] >> 8) & 0xffffffffffffc0) * -0x100;
          local_c0 = -(double)plVar3[4];
          local_b8 = -(double)plVar3[5];
          local_b0 = -(double)plVar3[6];
          local_a8 = -(double)plVar3[7];
        }
        FUN_0336f580(&local_160,local_170);
        uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
        uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
        fVar22 = (float)((ulong)uVar21 >> 0x20);
        uVar23 = CONCAT44(fVar22,fVar22);
        uVar25 = NEON_frecpe(uVar23,4);
        uVar27 = NEON_frecps(uVar23,uVar25,4);
        fVar24 = (float)uVar25 * (float)uVar27;
        fVar26 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar27 >> 0x20);
        uVar23 = NEON_frecps(uVar23,CONCAT44(fVar26,fVar24),4);
        fVar24 = fVar24 * (float)uVar23;
        fVar26 = fVar26 * (float)((ulong)uVar23 >> 0x20);
        auVar28 = NEON_scvtf(local_170,4);
        local_180 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar26 * auVar28._4_4_,
                             (float)uVar20 + fVar24 * auVar28._0_4_);
        uStack_178 = CONCAT44(fVar22 + fVar26 * auVar28._12_4_,
                              (float)uVar21 + fVar24 * auVar28._8_4_);
        uVar8 = FUN_0329134c(&local_90,&local_180);
        local_a0[uVar16] = uVar8;
        local_110 = uStack_d0;
        local_108 = local_c8;
        lStack_118 = lStack_d8;
        local_120 = local_e0;
        uVar16 = uVar16 + 1;
        local_f0 = local_b0;
        local_e8 = local_a8;
        local_100 = local_c0;
        local_f8 = local_b8;
        if (uVar14 <= uVar16) break;
        lVar11 = *(long *)(param_1 + 0x20);
        iVar17 = iVar17 + 2;
      }
    }
    if (4 < uVar13) {
      lVar11 = 0;
      uVar13 = *puVar18;
      uVar5 = puVar18[1];
      do {
        iVar9 = *(int *)(param_2 + 0x30);
        lVar15 = *(long *)(param_2 + 0x28);
        iVar17 = iVar9 + 1;
        if ((int)(*(uint *)(param_2 + 0x34) & 0x3fffffff) <= iVar9) {
          lVar15 = FUN_02fada68(puVar7,iVar17,lVar15,iVar9,param_2 + 0x34);
          *(long *)(param_2 + 0x28) = lVar15;
          iVar9 = *(int *)(param_2 + 0x30);
        }
        *(int *)(param_2 + 0x30) = iVar17;
        uVar8 = local_a0[lVar11 + 1];
        uVar4 = local_a0[lVar11 + 2];
        puVar2 = (undefined4 *)(lVar15 + (long)iVar9 * 0x10);
        *puVar2 = *local_a0;
        puVar2[1] = uVar8;
        uVar16 = lVar11 + 3;
        lVar11 = lVar11 + 1;
        puVar2[2] = uVar4;
        puVar2[3] = (uVar13 & 0x800000) << 8 | uVar13 << 0x10 | (uint)(ushort)uVar5;
      } while (uVar16 < uVar14);
    }
    puVar18 = *(uint **)(*(long *)(param_1 + 0x28) + 0x18);
    uVar13 = puVar18[(int)uVar19];
    do {
      if ((int)uVar13 < 0) {
        uVar19 = puVar18[(long)(int)uVar19 + 2] + uVar19;
      }
      else {
        while (uVar19 = uVar19 + 1, (uVar13 >> 0x1e & 1) == 0) {
          uVar13 = puVar18[(int)uVar19];
        }
      }
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x20) - 4U <= uVar19) goto LAB_03370c7c;
      uVar13 = puVar18[(int)uVar19];
      puVar2 = local_a0;
      uVar16 = local_98;
    } while ((int)uVar13 < 0);
  }
LAB_03370c7c:
  puVar7 = PTR_PTR_0434a080;
  if (&local_90 != (long *)(param_2 + 0x18)) {
    if (*(int *)(param_2 + 0x24) < 0) {
      FUN_032bcf84(PTR_PTR_0434a080,(long *)(param_2 + 0x18),0x10);
    }
    else {
    }
    uVar8 = local_88._4_4_;
    if (local_88 < 0) {
      FUN_032bcf84(puVar7,&local_90,0x10);
      uVar8 = local_88._4_4_;
    }
    lVar15 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = local_90;
    lVar11 = *(long *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = (undefined4)local_88;
    *(undefined4 *)(param_2 + 0x24) = uVar8;
    local_90 = lVar15;
    local_88 = lVar11;
  }
  uVar16 = local_98;
  uVar19 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar16) && (local_a0 != (undefined4 *)0x0)) {
    FUN_032cf244(puVar7,local_a0,4,uVar19 & 0x3fffffff);
  }
  lVar11 = local_68;
  uVar19 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_70 != 0)) {
    FUN_032cf244(puVar7,local_70,8,uVar19 & 0x3fffffff);
  }
  local_68 = CONCAT44(0x80000000,(undefined4)local_68);
  local_70 = 0;
  FUN_032676a0(&local_80);
  lVar11 = local_88;
  uVar19 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_90 != 0)) {
    FUN_032cf244(puVar7,local_90,0x10,uVar19 & 0x3fffffff);
  }
  return;
}


