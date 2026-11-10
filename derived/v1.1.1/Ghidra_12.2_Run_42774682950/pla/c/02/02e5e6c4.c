/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5e6c4; name: FUN_02e5e6c4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_02e5e6c4(long param_1,float *param_2,float *param_3,long param_4,void *param_5,long *param_6,
            long *param_7)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float fStack_1c8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long local_190 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a8;
  uint local_a4;
  long local_a0;
  long lStack_98;
  long local_88;
  ulong local_80;
  
  local_88 = 0;
  local_80 = 0;
  lStack_98 = *(long *)(param_3 + 2);
  local_a0 = *(long *)param_3;
  if (*(int *)(param_4 + 0x40) != 0) {
    lVar11 = 0;
    uVar14 = 0;
    do {
      uVar5 = FUN_02e651f0(*(long *)(param_4 + 0x38) + lVar11,param_3,param_2,&local_a0,local_190);
      if ((uVar5 & 1) == 0) goto LAB_02e5e788;
      plVar6 = (long *)FUN_02e634d0(&local_88);
      if (plVar6 != (long *)0x0) {
        plVar6[1] = local_190[1];
        *plVar6 = local_190[0];
      }
      lStack_98 = local_190[1];
      local_a0 = local_190[0];
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x20;
    } while (uVar14 < *(uint *)(param_4 + 0x40));
    uVar8 = (int)local_80 - 1;
    if (uVar8 < 7) {
      auVar22 = NEON_fmov(0x3f800000,4);
      local_a8 = (int)local_80;
      lVar13 = 0;
      local_190[0] = 0;
      local_190[1] = 0;
      iVar17 = -(int)local_80;
      local_b0 = 0x3f80000000000000;
      local_190[2] = 0;
      local_190[3] = 0;
      local_190[4] = 0;
      local_190[5] = 0;
      local_190[6] = 0;
      local_190[7] = 0;
      local_190[8] = 0;
      local_190[9] = 0;
      local_190[10] = 0;
      local_190[0xb] = 0;
      local_190[0xc] = 0;
      local_190[0xd] = 0;
      local_190[0xe] = 0;
      local_190[0xf] = 0;
      local_190[0x10] = 0;
      local_190[0x11] = 0;
      local_190[0x12] = 0;
      local_190[0x13] = 0;
      local_190[0x14] = 0;
      local_190[0x15] = 0;
      local_190[0x16] = 0;
      local_190[0x17] = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      lStack_1a8 = *(long *)(param_2 + 2);
      local_1b0 = *(long *)param_2;
      lVar11 = 0;
      lVar16 = 0;
      local_1a0 = local_1b0;
      lStack_198 = lStack_1a8;
      do {
        iVar2 = (int)local_80 + iVar17;
        uVar14 = (ulong)uVar8;
        lVar10 = *(long *)(param_4 + 0x38) + uVar14 * 0x20;
        plVar6 = (long *)(lVar10 + 0x18);
        if (*plVar6 == 0) {
          pauVar1 = (undefined1 (*) [16])(local_88 + (ulong)uVar8 * 0x10);
          auVar4 = *pauVar1;
          lVar15 = *(long *)(lVar10 + 0x10);
          fVar20 = (float)local_1a0;
          uVar14 = (ulong)local_1a0 >> 0x20;
          plVar6 = local_190 + (long)iVar2 * 2;
          lVar19 = (long)iVar2;
          lVar10 = FUN_02e4e640(lVar15 + 0x10,&local_1a0,plVar6);
          if ((lVar10 == 0) ||
             (lVar7 = FUN_02e4e640(CONCAT44(auVar4._4_4_ - (float)uVar14,auVar4._0_4_ - fVar20),
                                   lVar15 + 0x20,&local_1a0,plVar6), lVar7 != 0)) {
            lVar10 = local_88;
            plVar18 = (long *)((long)local_190 + (lVar19 + 0xf) * 8 + 8U);
            *plVar18 = 0;
            pfVar3 = (float *)(lVar10 + (ulong)(uVar8 - 1) * 0x10);
            if ((int)uVar8 < 1) {
              pfVar3 = param_3;
            }
            uStack_1b8 = *(ulong *)(pfVar3 + 2);
            local_1c0 = *(undefined8 *)pfVar3;
            pfVar3 = (float *)((long)&local_d0 + lVar19 * 4);
            lVar10 = FUN_02e5efe0(&local_1a0,&local_1c0,pauVar1,lVar15,lVar16,(long)&local_b0 + 4,
                                  plVar6,pfVar3,plVar18);
            if (lVar10 == 0) goto LAB_02e5e788;
            fVar20 = (float)local_b0 + *pfVar3;
            uVar21 = NEON_fminnm(fVar20,0x3f800000);
            local_b0 = CONCAT44(local_b0._4_4_,uVar21);
            if (((local_b0._4_4_ <= 0.001) || (1.0 < fVar20)) || (*plVar18 == 0)) goto LAB_02e5e788;
          }
          else {
            lVar7 = FUN_02e5611c(lVar10);
            lVar10 = 0;
            *(long *)((long)local_190 + (lVar19 + 0xf) * 8 + 8U) = lVar7;
          }
          uVar14 = FUN_02e5f490(param_1,plVar6,&local_1a0,0,lVar15,lVar10,lVar13,lVar16,lVar11);
          if ((uVar14 & 1) != 0) goto LAB_02e5e788;
          if (lVar13 != 0) {
            pfVar3 = (float *)((long)&local_d0 + (long)(iVar2 + -1) * 4);
            uVar14 = FUN_02e5f550(lVar13,&local_1b0,plVar6,local_190 + (long)(iVar2 + -1) * 2,pfVar3
                                 );
            if ((uVar14 & 1) == 0) goto LAB_02e5e788;
            fVar20 = (float)local_b0 + *pfVar3;
            uVar21 = NEON_fminnm(fVar20,0x3f800000);
            local_b0 = CONCAT44(local_b0._4_4_,uVar21);
            if (1.0 < fVar20) goto LAB_02e5e788;
          }
          lStack_198 = *(long *)((long)local_190 + (long)iVar2 * 0x10U + 8U);
          local_1a0 = *plVar6;
          lVar13 = 0;
        }
        else {
          if (*(char *)(param_1 + 0x20) == '\0') goto LAB_02e5e788;
          local_1c0 = 0;
          uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
          local_1d0 = *param_3;
          local_1cc = param_3[1];
          fStack_1c8 = param_3[2];
          local_1e0 = *param_2 - local_1d0;
          fStack_1dc = param_2[1] - local_1cc;
          local_1d8 = param_2[2] - fStack_1c8;
          uVar5 = FUN_02e4c050(*plVar6,&local_1d0,&local_1e0,&local_1c0);
          if ((uVar5 & 1) == 0) goto LAB_02e5e788;
          uVar21 = *(undefined4 *)((ulong)&local_1c0 | 4);
          lVar15 = (long)iVar2;
          plVar6 = local_190 + lVar15 * 2;
          *(long *)((long)local_190 + lVar15 * 0x10U + 8U) =
               CONCAT44(auVar22._12_4_,(undefined4)uStack_1b8);
          *plVar6 = CONCAT44(uVar21,(undefined4)local_1c0);
          uVar5 = FUN_02e5f490(param_1,plVar6,&local_1a0,
                               *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar14 * 0x20 + 0x18),0,0
                               ,lVar13,lVar16,lVar11);
          if ((uVar5 & 1) != 0) goto LAB_02e5e788;
          if (lVar13 != 0) {
            pfVar3 = (float *)((long)&local_d0 + (long)(iVar2 + -1) * 4);
            uVar5 = FUN_02e5f550(lVar13,&local_1b0,plVar6,local_190 + (long)(iVar2 + -1) * 2,pfVar3)
            ;
            if ((uVar5 & 1) == 0) goto LAB_02e5e788;
            fVar20 = (float)local_b0 + *pfVar3;
            uVar21 = NEON_fminnm(fVar20,0x3f800000);
            local_b0 = CONCAT44(local_b0._4_4_,uVar21);
            if (1.0 < fVar20) goto LAB_02e5e788;
          }
          lVar10 = 0;
          lStack_1a8 = lStack_198;
          local_1b0 = local_1a0;
          lStack_198 = *(long *)((long)local_190 + lVar15 * 0x10U + 8U);
          local_1a0 = *plVar6;
          lVar15 = 0;
          lVar13 = *(long *)(*(long *)(param_4 + 0x38) + uVar14 * 0x20 + 0x18);
        }
        uVar8 = uVar8 - 1;
        iVar17 = iVar17 + 1;
        lVar11 = lVar10;
        lVar16 = lVar15;
      } while (-1 < (int)uVar8);
      uVar14 = FUN_02e5f490(param_1,param_3,local_190 + (ulong)((int)local_80 - 1) * 2,0,0,0,lVar13,
                            lVar15,lVar10);
      if ((uVar14 & 1) != 0) {
        if (param_6 != (long *)0x0) {
          lVar11 = local_190[(ulong)((int)local_80 - 1) * 2];
          *(int *)(param_6 + 1) =
               (int)*(long *)((long)local_190 + (ulong)((int)local_80 - 1) * 0x10 + 8);
          *param_6 = lVar11;
          if (param_7 != (long *)0x0) {
            *param_7 = lVar15;
          }
        }
        uVar12 = 3;
        goto joined_r0x02e5ed58;
      }
      if (lVar13 == 0) {
LAB_02e5ec94:
        iVar17 = *(int *)(param_4 + 0x40);
        local_a4 = 0x811c9dc5;
        if (0 < iVar17) {
          plVar6 = (long *)(*(long *)(param_4 + 0x38) + (ulong)(iVar17 - 1) * 0x20 + 0x18);
          do {
            lVar11 = plVar6[-1];
            iVar17 = iVar17 + -1;
            if (lVar11 == 0) {
              lVar11 = *plVar6;
            }
            uVar9 = (uint)lVar11;
            uVar8 = (uint)((ulong)lVar11 >> 0x20);
            local_a4 = (((((((uVar9 & 0xff ^ local_a4 * 0x1000193) * 0x1000193 ^ uVar9 >> 8 & 0xff)
                            * 0x1000193 ^ uVar9 >> 0x10 & 0xff) * 0x1000193 ^ uVar9 >> 0x18) *
                          0x1000193 ^ uVar8 & 0xff) * 0x1000193 ^ uVar8 >> 8 & 0xff) * 0x1000193 ^
                       (ushort)((ulong)lVar11 >> 0x30) & 0xff) * 0x1000193 ^
                       (uint)(byte)((ulong)lVar11 >> 0x38);
            plVar6 = plVar6 + -4;
          } while (0 < iVar17);
        }
        memcpy(param_5,local_190,0xf0);
        uVar12 = 0;
      }
      else {
        uVar14 = FUN_02e5f550(lVar13,&local_1b0,param_3,local_190 + (ulong)((int)local_80 - 1U) * 2,
                              (long)&local_d0 + (ulong)((int)local_80 - 1U) * 4);
        if ((uVar14 & 1) != 0) {
          fVar20 = (float)local_b0 + *(float *)((long)&local_d0 + (ulong)((int)local_80 - 1) * 4);
          uVar21 = NEON_fminnm(fVar20,0x3f800000);
          local_b0 = CONCAT44(local_b0._4_4_,uVar21);
          if (fVar20 <= 1.0) goto LAB_02e5ec94;
        }
        uVar12 = 2;
      }
      goto joined_r0x02e5ed58;
    }
  }
LAB_02e5e788:
  uVar12 = 1;
joined_r0x02e5ed58:
  if (local_88 != 0) {
    local_80 = local_80 & 0xffffffff00000000;
    (*DAT_0442d158)(0xb);
  }
  return uVar12;
}


