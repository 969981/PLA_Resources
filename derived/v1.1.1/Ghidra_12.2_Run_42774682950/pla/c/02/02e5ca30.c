/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5ca30; name: FUN_02e5ca30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5ca30(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
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
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  int local_220;
  float local_1e8;
  undefined1 local_1e4;
  long local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  int local_100;
  float local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98 [5];
  uint local_64;
  
  lVar11 = *(long *)(param_1 + 0x78);
  local_64 = 2;
  if (*(uint *)(*(long *)(param_1 + 8) + 0x40) < 6) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28);
  }
  FUN_02e5c540(uVar4,param_2,local_98,local_98 + 2,&local_64);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 100) = 1;
  (*(code *)**(undefined8 **)(param_1 + 0x58))((undefined8 *)(param_1 + 0x58));
  lVar5 = *(long *)(param_1 + 8);
  if (DAT_042a5ca8 == 0) {
LAB_02e5cb04:
    if (0 < *(int *)(*(long *)(*(long *)(lVar5 + 0x38) + 0x28) + 0xec)) goto LAB_02e5cb18;
  }
  else {
    if (*(uint *)(lVar5 + 0x40) < 6) {
      lVar7 = 0;
      if (_DAT_000000e0 != 0) goto LAB_02e5cae4;
      goto LAB_02e5cb04;
    }
    lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x28);
    if (*(long *)(lVar7 + 0xe0) == 0) goto LAB_02e5cb04;
LAB_02e5cae4:
    if ((*(float *)(lVar7 + 0xa4) <= 0.0) ||
       ((*(int *)(lVar7 + 0xe8) < 1 && (*(int *)(lVar7 + 0xa0) == 0)))) goto LAB_02e5cb04;
LAB_02e5cb18:
    uVar10 = (ulong)local_64;
    if (local_64 != 0) {
      if (lVar11 != 0) {
        lVar5 = 0;
LAB_02e5cb7c:
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28) + 0xa8);
        do {
          if (lVar7 != *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x38) + 0x28) + 0xa8))
          goto LAB_02e5cc24;
          uVar9 = DAT_042a5ca8;
          if (3 < DAT_042a5ca8) {
            uVar9 = 4;
          }
          local_1c0 = CONCAT44(0x447a0000,(undefined4)local_1c0);
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = CONCAT44(1,uVar9);
          local_1c8 = CONCAT44(_DAT_042a5ca4,_DAT_042a5cac);
          local_1c0 = CONCAT71((int7)(local_1c0 >> 8),DAT_042a5cb0) & 0xffffffffffff00ff;
          FUN_02e610dc(&local_1e0,DAT_042a5cb1);
          FUN_02e60644(&local_1e0,lVar11,param_1,*(long *)((long)local_98 + lVar5 + 0x10) + 8,
                       lVar5 == 0);
          while( true ) {
            if (lVar5 == 0) {
              *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
            }
            lVar5 = lVar5 + 8;
            if (uVar10 * 8 == lVar5) goto LAB_02e5ccc4;
            if (lVar5 == 0) goto LAB_02e5cb7c;
            if (lVar5 == 8) break;
LAB_02e5cc24:
            if (*(long *)((long)local_98 + lVar5) != 0) {
              local_1e0 = 0;
              local_1d8 = 0;
              FUN_02e50b3c(*(long *)((long)local_98 + lVar5),param_1,lVar11,&local_1e0);
              FUN_02e599d4(&local_1e0,lVar11,param_1,param_1 + 0x40);
              if (local_1e0 != 0) {
                local_1d8 = local_1d8 & 0xffffffff00000000;
                FUN_02f59e60(9);
                local_1e0 = 0;
                local_1d8 = local_1d8 & 0xffffffff;
              }
            }
          }
          lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28) + 0xc0);
        } while( true );
      }
      if (local_64 != 1) {
        iVar6 = 0;
        do {
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
          do {
            iVar6 = iVar6 + 2;
            if (local_64 - (local_64 & 1) == iVar6) goto LAB_02e5ccb4;
          } while (iVar6 != 0);
        } while( true );
      }
      iVar6 = 0;
LAB_02e5ccb4:
      if (((local_64 & 1) != 0) && (iVar6 == 0)) {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      }
    }
  }
LAB_02e5ccc4:
  if (DAT_042a5cb2 == '\0') {
    return;
  }
  lVar11 = *(long *)(lVar11 + 8);
  if (*(uint *)(lVar11 + 0x40) < 6) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar11 + 0x38) + 0x28);
  }
  plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x38);
  lVar7 = plVar8[5];
  if (*(int *)(lVar7 + 0xec) < 1) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0xa8);
  if (lVar5 == *(long *)(lVar7 + 0xa8)) {
    return;
  }
  uVar9 = *(uint *)(param_2 + 1);
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar9 != 0) {
      uVar2 = (uint)lVar5 / uVar9;
    }
    lVar7 = *(long *)(*param_2 + (ulong)((uint)lVar5 - uVar2 * uVar9) * 8);
    if (lVar7 != 0) {
      do {
        if (*(long *)(lVar7 + 0x40) == lVar5) {
          lVar12 = lVar7;
          break;
        }
        lVar7 = *(long *)(lVar7 + 0x48);
        lVar12 = 0;
      } while (lVar7 != 0);
      goto LAB_02e5cd20;
    }
  }
  lVar12 = 0;
LAB_02e5cd20:
  fVar18 = 0.0;
  if ((local_98[0] != 0) && (0.0 < *(float *)(local_98[0] + 0x6c))) {
    fVar18 = *(float *)(local_98[0] + 0x6c);
  }
  if ((lVar12 != 0) && (fVar18 < *(float *)(lVar12 + 0x6c))) {
    fVar18 = *(float *)(lVar12 + 0x6c);
  }
  if (fVar18 < 1.0) {
    lVar5 = *(long *)(*plVar8 + 0x20);
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    pauVar1 = (undefined1 (*) [12])(lVar5 + 0x18);
    uVar4 = *(undefined8 *)*pauVar1;
    fVar13 = *(float *)(lVar11 + 0x78) - *(float *)*pauVar1;
    auVar3 = *pauVar1;
    fVar14 = *(float *)(lVar11 + 0x7c) - *(float *)(lVar5 + 0x1c);
    fVar15 = *(float *)(lVar11 + 0x80) - *(float *)(lVar5 + 0x20);
    fVar16 = (float)FUN_02ef71a8();
    if (fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15 < fVar16 * fVar16) {
      auVar17 = NEON_fmov(0x3f800000,4);
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      uStack_110 = CONCAT44(fVar14,fVar13);
      local_128 = 0;
      auVar17._0_12_ = auVar3;
      local_130 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_138 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_1e0 = 0;
      local_100 = 0;
      local_c8 = 0.0;
      local_c4 = 0;
      uStack_118 = auVar17._8_8_;
      local_120 = uVar4;
      uStack_108 = (ulong)(uint)fVar15;
      local_c0 = uStack_110;
      uStack_b8 = (ulong)(uint)fVar15;
      uStack_b0 = uVar4;
      uStack_a8 = uStack_118;
      FUN_02e5cfb8(local_98[2] + 8,&uStack_b0,&local_c0,&local_1e0,1);
      if (local_100 != 0) {
        uVar10 = FUN_02e5db28(&local_1e0);
        if ((uVar10 & 1) != 0) {
          local_c4 = 1;
        }
        local_100 = 0;
      }
      if (fVar18 <= local_c8) {
        fVar18 = local_c8;
      }
      plVar8 = (long *)(lVar12 + 0x78);
      if (lVar12 == 0) {
        plVar8 = param_2 + 0xd;
      }
      lVar11 = *plVar8;
      if ((lVar11 != 0) && (lVar11 != local_98[2])) {
        local_220 = 0;
        local_250 = 0;
        uStack_248 = 0;
        local_1e8 = 0.0;
        local_260 = 0;
        uStack_258 = 0;
        local_1e4 = 0;
        local_270 = 0;
        uStack_268 = 0;
        local_280 = 0;
        uStack_278 = 0;
        local_290 = 0;
        uStack_288 = 0;
        local_2a0 = 0;
        uStack_298 = 0;
        local_2b0 = 0;
        uStack_2a8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2f0 = 0;
        uStack_2e8 = 0;
        local_300 = 0;
        uStack_2f8 = 0;
        uStack_238 = uStack_a8;
        local_240 = uStack_b0;
        uStack_228 = uStack_b8;
        uStack_230 = local_c0;
        FUN_02e5cfb8(lVar11 + 8,&uStack_b0,&local_c0,&local_300,1);
        if (local_220 != 0) {
          FUN_02e5db28(&local_300);
        }
        if (fVar18 <= local_1e8) {
          fVar18 = local_1e8;
        }
      }
    }
  }
  *(float *)(param_1 + 0x60) = fVar18;
  return;
}


