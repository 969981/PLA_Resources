/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325ffa8; name: FUN_0325ffa8
 */


void FUN_0325ffa8(float param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 in_x7;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined *puVar16;
  uint *puVar17;
  long lVar18;
  undefined4 uVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long lVar39;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  puVar5 = PTR_PTR_0434a090;
  local_80 = 0;
  local_78 = 0x8000000000000000;
  iVar26 = *(int *)(param_3 + 0x10);
  lVar14 = 0;
  lVar12 = param_3;
  if (iVar26 < 1) {
    local_d8 = 0;
    iVar15 = 0;
    plVar21 = (long *)(param_3 + 0x38);
  }
  else {
    lVar11 = *(long *)(param_3 + 0x28);
    local_d8 = 0;
    uVar9 = (ulong)*(uint *)(param_2 + 0x160);
    lVar18 = 0;
    iVar15 = 0;
    lVar20 = 0;
    do {
      lVar39 = lVar11 + (ulong)*(ushort *)(*(long *)(param_3 + 8) + lVar20 * 6) * 8;
      local_90 = *(undefined8 *)(param_3 + 0x48);
      uVar19 = (undefined4)lVar20;
      local_a0 = lVar11;
      lStack_98 = lVar39;
      local_88 = uVar19;
      if (0 < (int)uVar9) {
        lVar13 = 0;
        lVar11 = 0;
        param_3 = lVar12;
        do {
          puVar10 = (undefined8 *)(*(long *)(param_2 + 0x158) + lVar13);
          local_b0 = *puVar10;
          uStack_a8 = puVar10[1];
          local_c0 = puVar10[2];
          uStack_b8 = puVar10[3];
          fVar22 = (float)local_b0 - (float)local_c0;
          fVar24 = (float)((ulong)local_b0 >> 0x20) - (float)((ulong)local_c0 >> 0x20);
          fVar25 = (float)uStack_a8 - (float)uStack_b8;
          fVar22 = fVar22 * fVar22;
          fVar24 = fVar24 * fVar24;
          fVar25 = fVar25 * fVar25;
          fVar23 = fVar22 + fVar24 + fVar25;
          fVar25 = fVar22 + fVar24 + fVar25;
          uVar35 = CONCAT44(fVar25,fVar23);
          uVar29 = NEON_frsqrte(uVar35,4);
          fVar22 = (float)uVar29;
          fVar24 = (float)((ulong)uVar29 >> 0x20);
          uVar29 = NEON_frsqrts(uVar35,CONCAT44(fVar24 * fVar24,fVar22 * fVar22),4);
          fVar22 = fVar22 * (float)uVar29;
          fVar24 = fVar24 * (float)((ulong)uVar29 >> 0x20);
          uVar35 = NEON_frsqrts(uVar35,CONCAT44(fVar24 * fVar24,fVar22 * fVar22),4);
          iVar26 = -(uint)(fVar23 <= 0.0);
          iVar27 = -(uint)(fVar25 <= 0.0);
          fVar23 = fVar23 * (float)uVar35 * fVar22;
          fVar25 = fVar25 * (float)((ulong)uVar35 >> 0x20) * fVar24;
          uVar35 = CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                            CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                     CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar27 >> 8)
                                              ,CONCAT14(SUB41(fVar25,0) & ~(byte)iVar27,
                                                        CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                                                 ~(byte)((uint)iVar26 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar23 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar26 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar23 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                                  SUB41(fVar23,0) & ~(byte)iVar26)))))));
          uVar29 = NEON_frecpe(uVar35,4);
          uVar30 = NEON_frecps(uVar35,uVar29,4);
          fVar22 = (float)uVar29 * (float)uVar30;
          fVar23 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
          uVar35 = NEON_frecps(uVar35,CONCAT44(fVar23,fVar22),4);
          local_d0 = CONCAT44(param_1 * fVar23 * (float)((ulong)uVar35 >> 0x20),
                              param_1 * fVar22 * (float)uVar35);
          cVar6 = FUN_032603b8(&local_a0,param_2,&local_b0,&local_c0,&local_d0,&local_68,&local_c8,
                               in_x7,param_3,lVar39);
          if (cVar6 != '\0') {
            iVar26 = iVar15 + 1;
            if ((int)(local_78._4_4_ & 0x3fffffff) <= iVar15) {
              lVar14 = FUN_032609ac(puVar5,iVar26,lVar18,iVar15,(long)&local_78 + 4);
              lVar18 = lVar14;
              iVar15 = (int)local_78;
              local_d8 = lVar14;
              local_80 = lVar14;
            }
            puVar10 = (undefined8 *)(lVar18 + (long)iVar15 * 0x18);
            local_78 = CONCAT44(local_78._4_4_,iVar26);
            *puVar10 = local_68;
            *(int *)(puVar10 + 2) = (int)lVar11;
            *(undefined4 *)((long)puVar10 + 0x14) = uVar19;
            puVar10[1] = local_c8;
            iVar15 = iVar26;
          }
          uVar9 = (ulong)*(int *)(param_2 + 0x160);
          lVar11 = lVar11 + 1;
          lVar13 = lVar13 + 0x30;
        } while (lVar11 < (long)uVar9);
        iVar26 = *(int *)(param_3 + 0x10);
        lVar12 = param_3;
      }
      lVar11 = lVar39;
      puVar16 = PTR_PTR_0434a080;
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar26);
    plVar21 = (long *)(param_3 + 0x38);
    if ((int)(*(uint *)(param_3 + 0x44) & 0x3fffffff) < iVar15) {
      uVar35 = FUN_03260b38(PTR_PTR_0434a080,iVar15,*(undefined8 *)(param_3 + 0x38),
                            *(undefined4 *)(param_3 + 0x40));
      *(undefined8 *)(param_3 + 0x38) = uVar35;
      goto LAB_032601e0;
    }
  }
  puVar16 = PTR_PTR_0434a080;
LAB_032601e0:
  puVar17 = (uint *)(param_3 + 0x54);
  uVar7 = *puVar17;
  iVar26 = *(int *)(param_3 + 0x50);
  uVar2 = iVar26 + iVar15 * 2;
  uVar9 = local_78;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar2) {
    uVar35 = *(undefined8 *)(param_3 + 0x48);
    if (0x3fffffff < (int)uVar2) {
      param_3 = lVar12;
      FUN_032bd0a8(uVar2);
      uVar7 = *puVar17;
    }
    uVar7 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    if ((int)uVar2 <= (int)uVar7) {
      uVar2 = uVar7;
    }
    uVar35 = FUN_032bd1d4(puVar16,uVar2,0x10,uVar35,iVar26,puVar17);
    *(undefined8 *)(param_3 + 0x48) = uVar35;
    uVar9 = local_78;
  }
  if (iVar15 != 0) {
    piVar8 = (int *)(local_d8 + 0x10);
    lVar12 = (long)iVar15 * 0x18;
    do {
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x158) + (long)*piVar8 * 0x30);
      iVar26 = *(int *)(param_3 + 0x50);
      fVar22 = (float)*puVar10;
      fVar28 = (float)puVar10[2] - fVar22;
      fVar23 = (float)((ulong)*puVar10 >> 0x20);
      fVar31 = (float)((ulong)puVar10[2] >> 0x20) - fVar23;
      fVar24 = (float)puVar10[1];
      fVar32 = (float)puVar10[3] - fVar24;
      fVar25 = (float)((ulong)puVar10[1] >> 0x20);
      fVar33 = (float)((ulong)puVar10[3] >> 0x20) - fVar25;
      fVar34 = (float)*(undefined8 *)(piVar8 + -4);
      fVar36 = (float)((ulong)*(undefined8 *)(piVar8 + -4) >> 0x20);
      fVar37 = (float)*(undefined8 *)(piVar8 + -2);
      fVar38 = (float)((ulong)*(undefined8 *)(piVar8 + -2) >> 0x20);
      puVar10 = (undefined8 *)(*(long *)(param_3 + 0x48) + (long)iVar26 * 0x10);
      puVar10[1] = CONCAT44(fVar25 + fVar33 * fVar36,fVar24 + fVar32 * fVar34);
      *puVar10 = CONCAT44(fVar23 + fVar31 * fVar36,fVar22 + fVar28 * fVar34);
      puVar10 = (undefined8 *)(*(long *)(param_3 + 0x48) + (long)(iVar26 + 1) * 0x10);
      puVar10[1] = CONCAT44(fVar25 + fVar33 * fVar38,fVar24 + fVar32 * fVar37);
      *puVar10 = CONCAT44(fVar23 + fVar31 * fVar38,fVar22 + fVar28 * fVar37);
      *(int *)(param_3 + 0x50) = iVar26 + 2;
      iVar15 = *(int *)(param_3 + 0x40);
      *(int *)(param_3 + 0x40) = iVar15 + 1;
      puVar3 = (undefined2 *)(*plVar21 + (long)iVar15 * 8);
      *puVar3 = (short)iVar26;
      puVar3[1] = (short)(iVar26 + 1);
      uVar4 = *(undefined2 *)(*(long *)(param_2 + 0x158) + (long)*piVar8 * 0x30 + 0x20);
      *(undefined1 *)(puVar3 + 2) = 0;
      puVar3[3] = uVar4;
      if ((float)*(undefined8 *)(piVar8 + -4) != 0.0) {
        *(undefined1 *)(puVar3 + 2) = 4;
      }
      *(undefined1 *)((long)puVar3 + 5) = 0;
      if ((float)*(undefined8 *)(piVar8 + -2) != 1.0) {
        *(undefined1 *)((long)puVar3 + 5) = 4;
      }
      piVar1 = piVar8 + 1;
      lVar12 = lVar12 + -0x18;
      piVar8 = piVar8 + 6;
      lVar20 = *(long *)(param_3 + 8) + (long)*piVar1 * 6;
      *(short *)(lVar20 + 2) = *(short *)(lVar20 + 2) + 1;
    } while (lVar12 != 0);
  }
  local_78 = uVar9 & 0xffffffff00000000;
  if ((local_d8 != 0) && (-1 < (long)uVar9)) {
    FUN_032cf244(PTR_PTR_0434a090,lVar14,0x18,(uint)(uVar9 >> 0x20) & 0x3fffffff);
  }
  return;
}


