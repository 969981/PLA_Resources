/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d494c; name: FUN_031d494c
 */


/* WARNING: Removing unreachable block (ram,0x031d4b80) */

void FUN_031d494c(float param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  char cVar10;
  int iVar11;
  undefined8 in_x7;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float fVar20;
  float fVar19;
  float fVar21;
  float fVar23;
  float fVar22;
  float fVar25;
  float fVar24;
  undefined8 uVar26;
  undefined8 uVar27;
  int iVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  int local_f8 [2];
  int local_f0 [2];
  undefined1 local_e8 [8];
  float local_e0;
  float fStack_dc;
  long local_d8;
  int local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88 [2];
  int local_80 [4];
  float local_68 [2];
  
  lVar15 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0xf0);
  if (*(char *)(lVar15 + 0x30) == '\x01') {
    lVar14 = *(long *)(lVar15 + 0x20);
  }
  else {
    lVar14 = FUN_02898b44();
  }
  fVar20 = *param_3;
  if ((*(int *)(lVar14 + 0x108) == 0) ||
     ((*(byte *)(*(long *)(lVar14 + 0x100) + (long)(int)fVar20) & 1) == 0)) {
    local_68[0] = fVar20;
    FUN_031d4d54(&local_d8,lVar15,local_68);
    lVar15 = *(long *)(lVar14 + 0xd0) + (long)(int)local_d8 * 0x10;
    local_80[0] = *(int *)(lVar15 + 4) + ~*(uint *)(lVar14 + 0x30) + (int)*(short *)(lVar15 + 10);
    FUN_031867f4(param_4,lVar14,local_80);
  }
  else {
    local_88[0] = fVar20;
    iVar11 = FUN_031d99f4(param_2 + 0x28,local_88);
    if (iVar11 == 0) {
      local_118[0] = *(int *)(*(long *)(lVar14 + 0x168) + (long)(int)*param_3 * 4);
      if (local_118[0] == -2) {
        local_118[0] = -1;
      }
      else {
        local_118[0] = local_118[0] - *(int *)(lVar14 + 0x20);
      }
      FUN_031d5240(&local_d8,param_2,lVar15,local_118,param_4);
    }
    else {
      lVar12 = *(long *)(lVar15 + 0x20);
      iVar6 = *(int *)(lVar12 + 0x40);
      iVar11 = *(int *)*param_4;
      iVar28 = ((int *)*param_4)[1];
      plVar4 = (long *)(lVar12 + 0x38);
      if (iVar6 <= iVar11) {
        plVar4 = (long *)(lVar12 + 0xf0);
      }
      iVar2 = 0;
      if (iVar6 <= iVar11) {
        iVar2 = iVar6;
      }
      plVar5 = (long *)(lVar12 + 0x38);
      if (iVar6 <= iVar28) {
        plVar5 = (long *)(lVar12 + 0xf0);
      }
      iVar3 = 0;
      if (iVar6 <= iVar28) {
        iVar3 = iVar6;
      }
      puVar9 = (undefined8 *)(*plVar4 + (long)(iVar11 - iVar2) * 0x10);
      uVar26 = puVar9[1];
      local_a0 = *puVar9;
      puVar9 = (undefined8 *)(*plVar5 + (long)(iVar28 - iVar3) * 0x10);
      uVar29 = puVar9[1];
      uVar27 = *puVar9;
      fVar20 = (float)local_a0;
      fVar23 = (float)((ulong)local_a0 >> 0x20);
      fVar19 = fVar20 - (float)uVar27;
      fVar22 = fVar23 - (float)((ulong)uVar27 >> 0x20);
      fVar25 = (float)uVar26;
      fVar24 = fVar25 - (float)uVar29;
      fVar19 = fVar19 * fVar19;
      fVar22 = fVar22 * fVar22;
      fVar24 = fVar24 * fVar24;
      fVar21 = fVar24 + fVar19 + fVar22;
      fVar24 = fVar24 + fVar19 + fVar22;
      uVar32 = CONCAT44(fVar24,fVar21);
      uVar30 = NEON_frsqrte(uVar32,4);
      fVar19 = (float)uVar30;
      fVar22 = (float)((ulong)uVar30 >> 0x20);
      uVar30 = NEON_frsqrts(uVar32,CONCAT44(fVar22 * fVar22,fVar19 * fVar19),4);
      fVar19 = fVar19 * (float)uVar30;
      fVar22 = fVar22 * (float)((ulong)uVar30 >> 0x20);
      uVar32 = NEON_frsqrts(uVar32,CONCAT44(fVar22 * fVar22,fVar19 * fVar19),4);
      iVar11 = -(uint)(fVar21 <= 0.0);
      iVar28 = -(uint)(fVar24 <= 0.0);
      fVar21 = fVar21 * (float)uVar32 * fVar19;
      fVar24 = fVar24 * (float)((ulong)uVar32 >> 0x20) * fVar22;
      uVar32 = CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                        CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                 CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                          CONCAT14(SUB41(fVar24,0) & ~(byte)iVar28,
                                                   CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                            ~(byte)((uint)iVar11 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                                     ~(byte)((uint)iVar11 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar21 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar11
                                                                                     >> 8),
                                                                              SUB41(fVar21,0) &
                                                                              ~(byte)iVar11)))))));
      uVar30 = NEON_frecpe(uVar32,4);
      uVar31 = NEON_frecps(uVar32,uVar30,4);
      fVar19 = (float)uVar30 * (float)uVar31;
      fVar21 = (float)((ulong)uVar30 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
      uVar32 = NEON_frecps(uVar32,CONCAT44(fVar21,fVar19),4);
      local_b8 = CONCAT44(fVar21 * (float)((ulong)uVar32 >> 0x20) * param_1,
                          fVar19 * (float)uVar32 * param_1);
      local_e0 = *param_3;
      local_b0 = uVar27;
      uStack_a8 = uVar29;
      uStack_98 = uVar26;
      cVar10 = FUN_0318fe6c(lVar14,&local_e0,&local_d8,&local_110);
      if (cVar10 != '\0') {
        uVar7 = (int)local_d8 - *(int *)(lVar14 + 0x20);
        uVar16 = (ulong)uVar7;
        uVar8 = (int)local_110 - *(int *)(lVar14 + 0x20);
        if (uVar7 != uVar8) {
          uVar32 = CONCAT44((float)((ulong)uVar27 >> 0x20) - fVar23,(float)uVar27 - fVar20);
          fVar19 = (float)((ulong)uVar26 >> 0x20);
          uVar26 = CONCAT44((float)((ulong)uVar29 >> 0x20) - fVar19,(float)uVar29 - fVar25);
          uVar17 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar16 << 4;
          do {
            iVar11 = (int)uVar16;
            local_d0 = iVar11 + *(int *)(lVar14 + 0x20);
            piVar1 = (int *)(*(long *)(lVar14 + 0xd0) + uVar17);
            local_c8 = *(long *)(lVar14 + 0xe0) + (long)(*piVar1 - *(int *)(lVar14 + 0x30)) * 0x14;
            local_c0 = local_c8 + (long)(short)piVar1[2] * 0x14;
            local_d8 = lVar15;
            cVar10 = FUN_031d508c(&local_d8,param_5,&local_a0,&local_b0,&local_b8,&local_e0,local_e8
                                  ,in_x7,uVar32,uVar26);
            if (cVar10 != '\0') {
              local_f8[0] = iVar11;
              FUN_031d5240(local_f0,param_2,lVar15,local_f8,param_4);
              lVar12 = *(long *)(lVar14 + 0xe0);
              lVar18 = (long)(local_f0[0] - *(int *)(lVar14 + 0x30));
              if (local_e0 != 0.0) {
                local_110 = CONCAT44(fVar23 + (float)((ulong)uVar32 >> 0x20) * fStack_dc,
                                     fVar20 + (float)uVar32 * local_e0);
                uStack_108 = CONCAT44(fVar19 + (float)((ulong)uVar26 >> 0x20) * fStack_dc,
                                      fVar25 + (float)uVar26 * local_e0);
                *(int *)(lVar12 + lVar18 * 0x14) = *(int *)(lVar14 + 0xf8) + *(int *)(lVar14 + 0x40)
                ;
                FUN_0318a9b0(lVar15,&local_110,1);
              }
              fVar21 = local_e8._0_4_;
              if (fVar21 != 1.0) {
                local_110 = CONCAT44(fVar23 + (float)((ulong)uVar32 >> 0x20) * local_e8._4_4_,
                                     fVar20 + (float)uVar32 * fVar21);
                uStack_108 = CONCAT44(fVar19 + (float)((ulong)uVar26 >> 0x20) * local_e8._4_4_,
                                      fVar25 + (float)uVar26 * fVar21);
                *(int *)(lVar12 + lVar18 * 0x14 + 4) =
                     *(int *)(lVar14 + 0xf8) + *(int *)(lVar14 + 0x40);
                FUN_0318a9b0(lVar15,&local_110,1);
              }
            }
            uVar16 = (ulong)(iVar11 + 1U);
            uVar17 = uVar17 + 0x10;
          } while (uVar8 != iVar11 + 1U);
        }
      }
    }
  }
  if (*(int *)(lVar14 + 0x108) == 0) {
    bVar13 = 8;
  }
  else {
    bVar13 = *(byte *)(*(long *)(lVar14 + 0x100) + (long)(int)*param_3) | 8;
  }
  *(byte *)(*(long *)(lVar14 + 0x100) + (long)(int)*param_3) = bVar13;
  FUN_031cdd40(param_2 + 0xb8,param_3);
  return;
}


