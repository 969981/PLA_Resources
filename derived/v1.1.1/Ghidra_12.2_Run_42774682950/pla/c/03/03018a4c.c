/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03018a4c; name: FUN_03018a4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03018a4c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [14];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar30;
  undefined1 auVar25 [12];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar31;
  int iVar32;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  float fVar38;
  int iVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar13 = PTR_PTR_0434a080;
  iVar2 = (int)param_3[1];
  iVar5 = iVar2 * 0x20;
  if (*(int *)(param_2 + 0x624) < iVar5) {
    if (*(long *)(param_2 + 0x628) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(param_2 + 0x628),(long)*(int *)(param_2 + 0x624) + 0x30)
      ;
      *(undefined4 *)(param_2 + 0x624) = 0;
      *(undefined8 *)(param_2 + 0x628) = 0;
    }
    uVar16 = (**(code **)(*(long *)puVar13 + 0x10))(puVar13,(long)(iVar5 + 0x30),0);
    *(undefined8 *)(param_2 + 0x628) = uVar16;
    *(int *)(param_2 + 0x624) = iVar5;
  }
  *(int *)(param_2 + 0x620) = iVar5;
  puVar13 = PTR_PTR_0434a080;
  if (*(int *)(param_2 + 0x634) < iVar5) {
    if (*(long *)(param_2 + 0x638) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(param_2 + 0x638),(long)*(int *)(param_2 + 0x634) + 0x30)
      ;
      *(undefined4 *)(param_2 + 0x634) = 0;
      *(undefined8 *)(param_2 + 0x638) = 0;
    }
    lVar14 = (**(code **)(*(long *)puVar13 + 0x10))(puVar13,(long)(iVar5 + 0x30),0);
    *(long *)(param_2 + 0x638) = lVar14;
    *(int *)(param_2 + 0x634) = iVar5;
  }
  else {
    lVar14 = *(long *)(param_2 + 0x638);
  }
  puVar21 = (undefined8 *)(lVar14 + 0x3fU & 0xffffffffffffffc0);
  *(int *)(param_2 + 0x640) = iVar2;
  puVar18 = (undefined8 *)(*(long *)(param_2 + 0x628) + 0x3fU & 0xffffffffffffffc0);
  *(int *)(param_2 + 0x630) = iVar5;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar21 = 0;
  puVar21[1] = 0;
  puVar21[2] = 0;
  puVar21[3] = 0;
  uVar12 = _UNK_0388a1f8;
  uVar16 = _DAT_0388a1f0;
  if (0 < (int)(iVar2 - 1U)) {
    lVar19 = *param_3;
    auVar26._8_8_ = _UNK_0388a1f8;
    auVar26._0_8_ = _DAT_0388a1f0;
    auVar26 = a64_TBL(ZEXT816(0),ZEXT816(0),auVar26);
    uVar44 = *(undefined8 *)(param_2 + 0x5c8);
    uVar43 = *(undefined8 *)(param_2 + 0x5c0);
    lVar14 = *(long *)(param_2 + 0x150);
    lVar20 = *(long *)(param_1 + 0x30);
    uVar17 = 0;
    do {
      iVar5 = *(int *)(lVar19 + 4 + uVar17 * 4);
      if ((long)uVar17 < (long)iVar2 + -5) {
        lVar1 = lVar14 + (ulong)*(uint *)(lVar19 + 4 + uVar17 * 4 + 0x10) * 0x80;
        Hint_Prefetch(lVar1,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        Hint_Prefetch(lVar1 + 0x40,0,0,0);
        Hint_Prefetch(lVar1 + 0x80,0,0,0);
      }
      lVar1 = lVar14 + (long)iVar5 * 0x80;
      uVar31 = *(undefined8 *)(lVar1 + 0x40);
      auVar33._2_2_ = 0;
      auVar33._0_2_ = (ushort)uVar31;
      auVar33._4_2_ = (short)((ulong)uVar31 >> 0x10);
      auVar33._6_2_ = 0;
      auVar33._8_2_ = (short)((ulong)uVar31 >> 0x20);
      auVar33._10_2_ = 0;
      auVar33._12_2_ = (short)((ulong)uVar31 >> 0x30);
      auVar33._14_2_ = 0;
      auVar34 = NEON_ext(auVar33,auVar33,8,1);
      uVar3 = *(ushort *)(lVar1 + 0x58);
      lVar15 = lVar20 + (ulong)uVar3 * 0x70;
      fVar24 = *(float *)(lVar15 + 8);
      fVar38 = (float)(auVar34._4_4_ << 0x10);
      uVar6 = *(uint *)(lVar15 + 4) | 2;
      lVar15 = *(long *)(param_1 + 0x40);
      iVar32 = -(uint)(fVar38 == 0.0);
      iVar39 = -(uint)(fVar38 == 0.0);
      fVar38 = (float)uVar43 * fVar24;
      fVar29 = (float)((ulong)uVar43 >> 0x20) * fVar24;
      fVar30 = (float)uVar44 * fVar24;
      fVar24 = (float)((ulong)uVar44 >> 0x20) * fVar24;
      uVar46 = *(undefined8 *)(lVar1 + 0x68);
      uVar45 = *(undefined8 *)(lVar1 + 0x60);
      bVar35 = (byte)((uint)iVar32 >> 8);
      bVar36 = (byte)((uint)iVar32 >> 0x10);
      bVar37 = (byte)((uint)iVar32 >> 0x18);
      bVar40 = (byte)((uint)iVar39 >> 8);
      bVar41 = (byte)((uint)iVar39 >> 0x10);
      bVar42 = (byte)((uint)iVar39 >> 0x18);
      fVar38 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~bVar37,
                               CONCAT12((byte)((uint)fVar38 >> 0x10) & ~bVar36,
                                        CONCAT11((byte)((uint)fVar38 >> 8) & ~bVar35,
                                                 SUB41(fVar38,0) & ~(byte)iVar32)));
      auVar25._0_8_ =
           CONCAT17((byte)((uint)fVar29 >> 0x18) & ~bVar42,
                    CONCAT16((byte)((uint)fVar29 >> 0x10) & ~bVar41,
                             CONCAT15((byte)((uint)fVar29 >> 8) & ~bVar40,
                                      CONCAT14(SUB41(fVar29,0) & ~(byte)iVar39,fVar38))));
      auVar25[8] = SUB41(fVar30,0) & ~(byte)iVar32;
      auVar25[9] = (byte)((uint)fVar30 >> 8) & ~bVar35;
      auVar25[10] = (byte)((uint)fVar30 >> 0x10) & ~bVar36;
      auVar25[0xb] = (byte)((uint)fVar30 >> 0x18) & ~bVar37;
      auVar34[0xc] = SUB41(fVar24,0) & ~(byte)iVar39;
      auVar34._0_12_ = auVar25;
      auVar34[0xd] = (byte)((uint)fVar24 >> 8) & ~bVar40;
      auVar34[0xe] = (byte)((uint)fVar24 >> 0x10) & ~bVar41;
      auVar34[0xf] = (byte)((uint)fVar24 >> 0x18) & ~bVar42;
      if ((*(uint *)(lVar15 + 0xb58) & uVar6) != 0) {
        lVar22 = 0;
        puVar23 = (undefined8 *)(lVar15 + 0xb68);
        fVar24 = (float)*(undefined8 *)(param_2 + 0x570);
        fVar29 = (float)((ulong)*(undefined8 *)(param_2 + 0x570) >> 0x20);
        auVar28._0_8_ = CONCAT44(fVar29 * (float)((ulong)auVar25._0_8_ >> 0x20),fVar24 * fVar38);
        auVar28._8_4_ = fVar24 * auVar25._8_4_;
        auVar28._12_4_ = fVar29 * auVar34._12_4_;
        uStack_58 = auVar28._8_8_;
        local_60 = auVar28._0_8_;
        do {
          if ((*(uint *)(puVar23 + -1) & uVar6) != 0) {
            (**(code **)(*(long *)*puVar23 + 0xa0))((long *)*puVar23,param_1,iVar5,&local_60);
          }
          lVar22 = lVar22 + 1;
          puVar23 = puVar23 + 2;
        } while (lVar22 < *(int *)(lVar15 + 0xb5c));
        fVar24 = (float)*(undefined8 *)(param_2 + 0x568);
        auVar34._0_4_ = fVar24 * (float)local_60;
        fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x568) >> 0x20);
        auVar34._4_4_ = fVar38 * local_60._4_4_;
        auVar34._8_4_ = fVar24 * (float)uStack_58;
        auVar34._12_4_ = fVar38 * uStack_58._4_4_;
      }
      auVar27._0_8_ =
           CONCAT44((float)((ulong)uVar45 >> 0x20) + auVar34._4_4_,(float)uVar45 + auVar34._0_4_);
      auVar27._8_4_ = (float)uVar46 + auVar34._8_4_;
      auVar27._12_4_ = (float)((ulong)uVar46 >> 0x20) + auVar34._12_4_;
      uVar9 = *(undefined4 *)(lVar1 + 0x70);
      uVar10 = *(undefined4 *)(lVar1 + 0x74);
      uVar11 = *(undefined4 *)(lVar1 + 0x78);
      auVar7._8_8_ = uVar12;
      auVar7._0_8_ = uVar16;
      auVar34 = a64_TBL(ZEXT816(0),auVar27,auVar7);
      puVar18[6] = auVar27._0_8_;
      *(undefined4 *)(puVar18 + 5) = uVar11;
      *(int *)((long)puVar18 + 0x2c) = auVar34._12_4_;
      *(undefined4 *)(puVar18 + 4) = uVar9;
      *(undefined4 *)((long)puVar18 + 0x24) = uVar10;
      *(ushort *)(puVar18 + 7) = (ushort)uVar31;
      *(undefined2 *)((long)puVar18 + 0x3a) = *(undefined2 *)(lVar1 + 0x42);
      *(undefined2 *)((long)puVar18 + 0x3c) = *(undefined2 *)(lVar1 + 0x44);
      *(undefined2 *)((long)puVar18 + 0x3e) = *(undefined2 *)(lVar1 + 0x46);
      uVar4 = *(undefined2 *)(lVar1 + 0x5c);
      uVar31 = *(undefined8 *)(param_2 + 0x548);
      puVar21[6] = 0;
      *(int *)(puVar21 + 7) = iVar5;
      puVar21[5] = (ulong)auVar26._12_4_ << 0x20;
      puVar21[4] = 0;
      *(ushort *)((long)puVar21 + 0x3c) = uVar3;
      auVar8._2_12_ = auVar34._4_12_;
      auVar8._0_2_ = uVar4;
      uVar17 = uVar17 + 1;
      *(short *)((long)puVar21 + 0x3e) =
           (short)((uint)((float)uVar31 * (float)(auVar8._0_4_ << 0x10)) >> 0x10);
      puVar18 = puVar18 + 4;
      puVar21 = puVar21 + 4;
    } while (uVar17 != iVar2 - 1U);
  }
  return;
}


