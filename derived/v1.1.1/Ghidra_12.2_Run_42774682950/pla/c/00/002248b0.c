/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002248b0; name: FUN_002248b0
 */


/* WARNING: Removing unreachable block (ram,0x00224bb8) */

float FUN_002248b0(undefined8 *param_1,long param_2,int param_3,int param_4,undefined4 *param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long local_1d8;
  uint local_1b4;
  long local_1b0;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  long local_160;
  code *local_158;
  ulong uStack_150;
  undefined8 *local_148;
  long local_140;
  long local_138;
  float local_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  ushort local_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  ushort uStack_fa;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  if (*(char *)(param_1 + 7) == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)((long)param_1 + 99) != '\0';
  }
  local_114 = *(float *)((long)param_1 + 0x14);
  fVar20 = *(float *)(param_1 + 3);
  fVar22 = *(float *)((long)param_1 + 0x3c);
  lVar13 = (long)param_3;
  lVar1 = param_2 + lVar13;
  local_118 = fVar20;
  (**(code **)(*(long *)param_1[0xb] + 0x50))((long *)param_1[0xb],param_1,param_2,lVar1);
  fVar15 = (float)FUN_00225204(param_1,&local_114,&local_118,param_2,param_3);
  local_128 = *(undefined4 *)((long)param_1 + 0xc);
  uStack_124 = *(undefined4 *)(param_1 + 2);
  fVar21 = *(float *)(param_1 + 3);
  local_130 = local_114;
  fStack_12c = local_118;
  local_120 = 0;
  if (param_4 != 0) {
    if (param_4 < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = *param_5;
    }
    *(undefined4 *)((long)param_1 + 0x14) = uVar16;
  }
  local_148 = param_1;
  local_140 = param_2;
  local_138 = lVar1;
  FUN_0021f500(&local_160,param_1[5],0);
  local_160 = param_2;
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_148);
  pcVar10 = local_158;
  if ((uStack_150 & 1) != 0) {
    pcVar10 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
  }
  uVar6 = (*pcVar10)();
  if (local_160 - param_2 <= lVar13) {
    lVar14 = 0;
    fVar24 = 0.0;
    local_1b4 = 0;
    local_1d8 = param_2;
    local_1b0 = param_2;
    do {
      iVar8 = (int)lVar14;
      bVar3 = param_4 <= iVar8 && local_1b0 == local_1d8;
      lVar11 = (long)iVar8;
      if (0x1f < uVar6) goto LAB_00224bbc;
      while( true ) {
        local_120 = CONCAT44(local_120._4_4_,~local_1b4) & 0xffffffff00000001;
        local_140 = local_160;
        if (bVar3 || (3.4028235e+38 <= fVar22 || uVar6 == 10)) break;
        local_178 = CONCAT44(fStack_12c,local_130);
        uStack_170 = CONCAT44(uStack_124,local_128);
        local_168 = local_120;
        local_180 = local_138;
        local_110 = *param_1;
        local_108 = param_1[1];
        uVar2 = param_1[2];
        local_f0 = param_1[4];
        local_f8 = (undefined4)param_1[3];
        uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
        local_100 = (ushort)uVar2;
        uStack_fe = (undefined2)((ulong)uVar2 >> 0x10);
        uStack_fc = (undefined2)((ulong)uVar2 >> 0x20);
        uStack_fa = (ushort)((ulong)uVar2 >> 0x30);
        local_e8 = param_1[5];
        uStack_e0 = param_1[6];
        local_d8 = param_1[7];
        uStack_d0 = param_1[8];
        local_c8 = param_1[9];
        uStack_c0 = param_1[10];
        local_b8 = param_1[0xb];
        uStack_b0 = param_1[0xc];
        local_190 = &local_110;
        local_1a0 = 0;
        local_198 = 0;
        local_188 = local_160;
        (**(code **)(*(long *)param_1[0xb] + 0x20))
                  ((long *)param_1[0xb],&local_1a0,&local_190,uVar6);
        if ((float)local_198 - (float)local_1a0 <= 0.0) {
LAB_00224a80:
          FUN_0021bc4c(&local_110);
          break;
        }
        fVar19 = 0.0;
        if (iVar8 < param_4) {
          fVar19 = *(float *)(param_6 + lVar11 * 4);
        }
        if ((float)CONCAT22(uStack_fa,uStack_fc) - local_130 <=
            *(float *)((long)param_1 + 0x3c) + fVar19) goto LAB_00224a80;
        uVar6 = 10;
        local_120 = local_120 & 0xffffffff;
        local_160 = local_1b0;
        FUN_0021bc4c(&local_110);
        while( true ) {
          if (lVar13 < local_160 - param_2) goto switchD_00224e0c_caseD_4;
          if (uVar6 < 0x20) break;
LAB_00224bbc:
          lVar12 = local_160;
          uVar9 = FUN_002251a0(uVar6);
          if ((uVar9 & 1) == 0) goto LAB_0022507c;
          uVar16 = *(undefined4 *)(param_1 + 3);
          fVar19 = 0.0;
          if (!bVar5) {
            iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))
                              ((long *)param_1[5],local_120._4_4_,uVar6);
            fVar19 = *(float *)((long)param_1 + 0xc) * (float)iVar7;
          }
          (**(code **)(*(long *)param_1[5] + 0x90))((long *)param_1[5],&local_110,uVar6);
          if (uStack_fa < local_100) {
            pcVar10 = local_158;
            if ((uStack_150 & 1) != 0) {
              pcVar10 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1))
                                  );
            }
            uVar6 = (*pcVar10)();
          }
          else {
            fVar17 = fVar24;
            if (local_1b4 != 0) {
              fVar17 = fVar24 + *(float *)(param_1 + 8);
            }
            if (*(char *)(param_1 + 7) == '\0') {
              fVar18 = (float)NEON_ucvtf((uint)local_108._4_2_);
              fVar18 = *(float *)((long)param_1 + 0xc) * fVar18;
            }
            else {
              fVar18 = *(float *)(param_1 + 4);
            }
            fVar23 = 0.0;
            if (!bVar5) {
              iVar7 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],uVar6,0);
              fVar23 = *(float *)((long)param_1 + 0xc) * (float)iVar7;
            }
            fVar17 = fVar19 + fVar17 + fVar18 + fVar23;
            if (bVar3 || 3.4028235e+38 <= fVar22) {
LAB_00224e1c:
              if (local_1b4 == 0) {
                fVar18 = *(float *)((long)param_1 + 0x14);
              }
              else {
                fVar18 = *(float *)(param_1 + 8) + *(float *)((long)param_1 + 0x14);
                *(float *)((long)param_1 + 0x14) = fVar18;
              }
              fVar24 = fVar17 - fVar23;
              *(float *)((long)param_1 + 0x14) = fVar19 + fVar18;
              iVar8 = (**(code **)(*(long *)param_1[5] + 0xc0))();
              *(float *)(param_1 + 3) =
                   *(float *)(param_1 + 3) +
                   *(float *)(param_1 + 2) * (float)-(iVar8 + (short)local_e8);
              FUN_0021bd58(param_1,&local_110);
              *(undefined4 *)(param_1 + 3) = uVar16;
              local_120 = CONCAT44(uVar6,(undefined4)local_120);
              local_1b4 = 1;
              lVar12 = local_160;
              goto LAB_0022507c;
            }
            fVar18 = 0.0;
            if (iVar8 < param_4) {
              fVar18 = *(float *)(param_6 + lVar11 * 4);
            }
            if (fVar17 <= *(float *)((long)param_1 + 0x3c) + fVar18) goto LAB_00224e1c;
            local_120 = local_120 & 0xffffffff;
            uVar6 = 10;
            local_160 = local_1b0;
          }
        }
      }
      uVar16 = (**(code **)(*(long *)param_1[0xb] + 0x18))((long *)param_1[0xb],uVar6,&local_148);
      fVar19 = local_114;
      fVar24 = *(float *)((long)param_1 + 0x14);
      iVar8 = (int)param_2;
      if (((uVar6 == 10) && (*(char *)((long)param_1 + 0x61) == '\0')) &&
         (local_120 = local_120 & 0xffffffff, *(char *)((long)param_1 + 0x62) != '\0')) {
        fVar17 = *(float *)(param_1 + 3);
        local_190 = (undefined8 *)0x0;
        local_188 = 0;
        local_1a0 = local_160;
        local_108 = param_1[1];
        local_f0 = param_1[4];
        local_100 = (ushort)param_1[2];
        uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
        uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
        local_110 = *param_1;
        local_e8 = param_1[5];
        uStack_e0 = param_1[6];
        local_d8 = param_1[7];
        uStack_d0 = param_1[8];
        local_b8 = param_1[0xb];
        uStack_b0 = param_1[0xc];
        local_c8 = param_1[9];
        uStack_c0 = param_1[10];
        uStack_fc = 0;
        uStack_fa = 0;
        local_f8 = 0;
        FUN_002240bc(&local_110,&local_190,&local_1a0,param_3 + (iVar8 - (int)local_160));
        fVar23 = local_188._4_4_ - local_190._4_4_;
        FUN_0021bc4c(&local_110);
        fVar18 = (float)(**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],param_1);
        *(float *)(param_1 + 3) = fVar17 + (fVar23 - fVar18);
      }
      local_1b4 = 0;
      switch(uVar16) {
      case 2:
        local_1b4 = 1;
        break;
      case 3:
        lVar14 = lVar11 + 1;
        fVar17 = 0.0;
        if ((int)lVar14 < param_4) {
          fVar17 = (float)param_5[lVar14];
        }
        if ((*(uint *)(param_1 + 10) & 3) == 2) {
          local_190 = (undefined8 *)0x0;
          local_188 = 0;
          local_1a0 = local_140;
          local_108 = param_1[1];
          local_f0 = param_1[4];
          local_100 = (ushort)param_1[2];
          uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
          uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
          local_110 = *param_1;
          local_e8 = param_1[5];
          uStack_e0 = param_1[6];
          local_d8 = param_1[7];
          uStack_d0 = param_1[8];
          local_b8 = param_1[0xb];
          uStack_b0 = param_1[0xc];
          local_c8 = param_1[9];
          uStack_c0 = param_1[10];
          uStack_fc = 0;
          uStack_fa = 0;
          local_f8 = 0;
          FUN_002240bc(&local_110,&local_190,&local_1a0,param_3 + (iVar8 - (int)local_140));
          fVar18 = (float)local_188 - (float)local_190;
          FUN_0021bc4c(&local_110);
          fVar18 = fVar15 - fVar18;
LAB_00225024:
          fVar23 = local_130 + fVar18;
          fVar18 = fVar15;
        }
        else {
          if ((*(uint *)(param_1 + 10) & 3) == 1) {
            local_190 = (undefined8 *)0x0;
            local_188 = 0;
            local_1a0 = local_140;
            local_108 = param_1[1];
            local_f0 = param_1[4];
            local_100 = (ushort)param_1[2];
            uStack_fe = (undefined2)((ulong)param_1[2] >> 0x10);
            uStack_f4 = (undefined4)((ulong)param_1[3] >> 0x20);
            local_110 = *param_1;
            local_e8 = param_1[5];
            uStack_e0 = param_1[6];
            local_d8 = param_1[7];
            uStack_d0 = param_1[8];
            local_b8 = param_1[0xb];
            uStack_b0 = param_1[0xc];
            local_c8 = param_1[9];
            uStack_c0 = param_1[10];
            uStack_fc = 0;
            uStack_fa = 0;
            local_f8 = 0;
            FUN_002240bc(&local_110,&local_190,&local_1a0,param_3 + (iVar8 - (int)local_140));
            fVar23 = (float)local_188 - (float)local_190;
            FUN_0021bc4c(&local_110);
            fVar18 = (float)(int)(fVar15 * 0.5);
            if (*(char *)(param_1 + 0xc) == '\0') {
              fVar18 = fVar15 * 0.5;
            }
            fVar23 = fVar23 * 0.5;
            fVar4 = (float)(int)fVar23;
            if (*(char *)(param_1 + 0xc) == '\0') {
              fVar4 = fVar23;
            }
            fVar18 = fVar18 - fVar4;
            goto LAB_00225024;
          }
          fVar18 = *(float *)((long)param_1 + 0x14) - local_130;
          fVar23 = local_130;
          if (fVar18 <= fVar15) {
            fVar18 = fVar15;
          }
        }
        fVar15 = fVar18;
        *(float *)((long)param_1 + 0x14) = fVar17 + fVar23;
        if (3.4028235e+38 <= fVar22) {
          local_1b4 = 0;
        }
        else {
          local_1b4 = 0;
          local_1d8 = local_160;
        }
        break;
      case 4:
        goto switchD_00224e0c_caseD_4;
      }
      fVar24 = fVar24 - fVar19;
      local_160 = local_140;
      lVar12 = local_140;
LAB_0022507c:
      if (3.4028235e+38 <= fVar22) {
        lVar12 = local_1b0;
      }
      pcVar10 = local_158;
      if ((uStack_150 & 1) != 0) {
        pcVar10 = *(code **)(local_158 + *(long *)((long)&local_160 + ((long)uStack_150 >> 1)));
      }
      uVar6 = (*pcVar10)();
      local_1b0 = lVar12;
    } while (local_160 - param_2 <= lVar13);
  }
switchD_00224e0c_caseD_4:
  if (bVar5) {
    fVar22 = *(float *)((long)param_1 + 0x14);
  }
  else {
    iVar8 = (**(code **)(*(long *)param_1[5] + 0xb0))((long *)param_1[5],local_120._4_4_,0);
    fVar22 = *(float *)((long)param_1 + 0x14) + *(float *)((long)param_1 + 0xc) * (float)iVar8;
    *(float *)((long)param_1 + 0x14) = fVar22;
  }
  fVar24 = fVar22 - local_130;
  if (fVar22 - local_130 <= fVar15) {
    fVar24 = fVar15;
  }
  if (((*(uint *)(param_1 + 10) & 0x300) != 0x100) && ((*(uint *)(param_1 + 10) & 0x300) != 0x200))
  {
    fVar20 = (fVar20 - fVar21) + *(float *)(param_1 + 3);
  }
  *(float *)(param_1 + 3) = fVar20;
  (**(code **)(*(long *)param_1[0xb] + 0x38))((long *)param_1[0xb],&local_148);
  (**(code **)(*(long *)param_1[0xb] + 0x58))((long *)param_1[0xb],param_1,param_2,lVar1);
  return fVar24;
}


