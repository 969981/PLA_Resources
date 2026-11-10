/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffd380; name: FUN_02ffd380
 */


undefined4
FUN_02ffd380(undefined1 param_1 [16],int *param_2,int param_3,undefined1 (*param_4) [16],
            float *param_5,long param_6,int param_7)

{
  ulong uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  int *piVar21;
  float *pfVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  uint uVar27;
  uint *puVar28;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar49;
  int iVar50;
  undefined1 auVar48 [16];
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [56];
  long local_a8;
  undefined8 local_a0;
  long local_68;
  
  puVar12 = PTR_PTR_0434a090;
  puVar11 = PTR_PTR_0434a080;
  uVar27 = param_2[5];
  uVar23 = (ulong)uVar27;
  uVar17 = param_1._8_8_;
  auVar31._0_8_ = param_1._0_8_;
  if (uVar27 != 0) {
    if ((param_1._0_4_ == 0.0) || (param_3 == 0)) {
      if (*param_2 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = (long)*param_2 + (long)param_2;
      }
      iVar13 = param_2[6];
      uVar6 = param_2[1];
      uVar20 = (ulong)uVar6;
      lVar5 = 0;
      if (param_2[4] != 0) {
        lVar5 = (long)param_2 + (long)param_2[4] + 0x10;
      }
      if (iVar13 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = (long)iVar13 + (long)(param_2 + 6);
      }
      puVar28 = (uint *)(param_6 + 0x24);
      uVar19 = *puVar28;
      iVar13 = *(int *)(param_6 + 0x20);
      uVar2 = iVar13 + uVar6;
      if ((int)(uVar19 & 0x3fffffff) < (int)uVar2) {
        uVar17 = *(undefined8 *)(param_6 + 0x18);
        if (0x3fffffff < (int)uVar2) {
          FUN_032bd0a8(uVar2);
          uVar19 = *puVar28;
        }
        uVar19 = (uVar19 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        uVar4 = uVar2;
        if ((int)uVar2 <= (int)uVar19) {
          uVar4 = uVar19;
        }
        lVar16 = FUN_032bd1d4(puVar11,uVar4,0x10,uVar17,iVar13,puVar28);
        *(long *)(param_6 + 0x18) = lVar16;
      }
      else {
        lVar16 = *(long *)(param_6 + 0x18);
      }
      *(uint *)(param_6 + 0x20) = uVar2;
      if (0 < (int)uVar6) {
        pfVar15 = (float *)(lVar18 + 8);
        puVar24 = (undefined8 *)(lVar16 + (long)iVar13 * 0x10);
        do {
          fVar45 = *pfVar15;
          uVar20 = uVar20 - 1;
          pfVar22 = pfVar15 + -2;
          pfVar15 = pfVar15 + 3;
          auVar34._0_8_ =
               CONCAT44(param_5[1] +
                        *(float *)(*param_4 + 4) * (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                        *param_5 + *(float *)*param_4 * (float)*(undefined8 *)pfVar22);
          auVar34._8_4_ = param_5[2] + *(float *)(*param_4 + 8) * fVar45;
          auVar34._12_4_ = param_5[3] + *(float *)(*param_4 + 0xc) * fVar45;
          puVar24[1] = auVar34._8_8_;
          *puVar24 = auVar34._0_8_;
          puVar24 = puVar24 + 2;
        } while (uVar20 != 0);
      }
      puVar28 = (uint *)(param_6 + 0x34);
      iVar50 = *(int *)(param_6 + 0x30) + uVar27 * 4;
      if ((int)(*puVar28 & 0x3fffffff) < iVar50) {
        uVar17 = FUN_02fada68(puVar11,iVar50,*(undefined8 *)(param_6 + 0x28),
                              *(int *)(param_6 + 0x30),puVar28);
        *(undefined8 *)(param_6 + 0x28) = uVar17;
      }
      if (0 < (int)uVar27) {
        uVar20 = 0;
        do {
          pbVar3 = (byte *)(local_68 + (ulong)*(ushort *)(lVar5 + uVar20 * 4));
          bVar7 = *pbVar3;
          pbVar26 = (byte *)(lVar5 + uVar20 * 4 + 2);
          iVar50 = *(int *)(param_6 + 0x30);
          lVar18 = *(long *)(param_6 + 0x28);
          iVar10 = (uint)*pbVar26 + iVar50 + -2;
          if ((int)(*(uint *)(param_6 + 0x34) & 0x3fffffff) < iVar10) {
            lVar18 = FUN_02fada68(puVar11,iVar10,lVar18,iVar50,puVar28);
            *(long *)(param_6 + 0x28) = lVar18;
          }
          *(int *)(param_6 + 0x30) = iVar10;
          if (2 < *pbVar26) {
            piVar21 = (int *)(lVar18 + (long)iVar50 * 0x10);
            lVar18 = 0;
            do {
              bVar8 = pbVar3[lVar18 + 1];
              bVar9 = pbVar3[lVar18 + 2];
              *piVar21 = iVar13 + (uint)bVar7;
              piVar21[1] = iVar13 + (uint)bVar8;
              piVar21[2] = iVar13 + (uint)bVar9;
              piVar21[3] = param_7;
              uVar1 = lVar18 + 3;
              lVar18 = lVar18 + 1;
              piVar21 = piVar21 + 4;
            } while (uVar1 < *pbVar26);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar23);
      }
      return 0;
    }
    if (param_3 == 1) {
      local_a8 = CONCAT44(local_a8._4_4_,uVar27);
      if ((int)uVar27 < 1) {
        uVar23 = 0;
        pfVar15 = (float *)0x0;
        uVar27 = 0x80000000;
      }
      else {
        pfVar15 = (float *)FUN_032cf190(PTR_PTR_0434a090,0x10,&local_a8);
        uVar20 = 0;
        pfVar22 = pfVar15;
        do {
          if (param_2[5] == 0) {
            lVar18 = 0;
            if (*param_2 != 0) {
              lVar18 = (long)*param_2 + (long)param_2;
            }
            puVar24 = (undefined8 *)(lVar18 + (uVar20 >> 0x18 & 0xff) * 0xc);
            uVar40 = *puVar24;
            fVar45 = *(float *)(puVar24 + 1);
            puVar25 = (undefined8 *)(lVar18 + (uVar20 >> 0x10 & 0xff) * 0xc);
            uVar47 = *puVar25;
            puVar24 = (undefined8 *)(lVar18 + (uVar20 >> 8 & 0xff) * 0xc);
            uVar51 = *puVar24;
            fVar49 = (float)uVar40;
            fVar37 = (float)uVar51;
            fVar52 = fVar37 - fVar49;
            fVar38 = (float)((ulong)uVar40 >> 0x20);
            fVar32 = (float)((ulong)uVar51 >> 0x20);
            fVar53 = fVar32 - fVar38;
            fVar33 = *(float *)(puVar24 + 1);
            puVar24 = (undefined8 *)(lVar18 + (uVar20 & 0xff) * 0xc);
            uVar40 = *puVar24;
            fVar39 = (float)uVar40 - (float)uVar47;
            fVar44 = (float)((ulong)uVar40 >> 0x20) - (float)((ulong)uVar47 >> 0x20);
            fVar46 = *(float *)(puVar24 + 1) - *(float *)(puVar25 + 1);
            uVar40 = NEON_ext(CONCAT44(fVar53,fVar52),CONCAT44(fVar33 - fVar45,fVar33 - fVar45),4,1)
            ;
            uVar47 = NEON_ext(CONCAT44(fVar44,fVar39),(ulong)(uint)fVar46,4,1);
            fVar37 = (fVar37 - fVar49) * (float)uVar47 - fVar39 * (float)uVar40;
            fVar32 = (fVar32 - fVar38) * (float)((ulong)uVar47 >> 0x20) -
                     fVar44 * (float)((ulong)uVar40 >> 0x20);
            auVar41._0_8_ = CONCAT44(fVar32,fVar37);
            auVar41._8_4_ = (fVar33 - fVar45) * fVar39 - fVar52 * fVar46;
            auVar41._12_4_ = (fVar33 - fVar45) * fVar44 - fVar53 * fVar46;
            auVar34 = NEON_ext(auVar41,auVar41,4,1);
            fVar33 = auVar34._0_4_;
            fVar39 = auVar34._4_4_;
            auVar29._0_8_ = auVar34._0_8_;
            auVar29._8_8_ = auVar41._0_8_;
            fVar44 = fVar33 * fVar33 + fVar39 * fVar39 + fVar37 * fVar37;
            fVar52 = fVar33 * fVar33 + fVar39 * fVar39 + fVar37 * fVar37;
            uVar40 = CONCAT44(fVar52,fVar44);
            uVar47 = NEON_frsqrte(uVar40,4);
            fVar46 = (float)uVar47;
            fVar53 = (float)((ulong)uVar47 >> 0x20);
            uVar47 = NEON_frsqrts(uVar40,CONCAT44(fVar53 * fVar53,fVar46 * fVar46),4);
            fVar46 = fVar46 * (float)uVar47;
            fVar53 = fVar53 * (float)((ulong)uVar47 >> 0x20);
            auVar48._0_8_ = CONCAT44(-(uint)(0.0 < fVar52),-(uint)(0.0 < fVar44));
            iVar13 = -(uint)(fVar44 <= 0.0);
            iVar50 = -(uint)(fVar52 <= 0.0);
            uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar53 * fVar53,fVar46 * fVar46),4);
            auVar48._8_8_ = auVar48._0_8_;
            fVar46 = (float)uVar40 * fVar46;
            fVar53 = (float)((ulong)uVar40 >> 0x20) * fVar53;
            fVar44 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                     CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                              ~(byte)((uint)iVar13 >> 0x10),
                                              CONCAT11((byte)((uint)fVar46 >> 8) &
                                                       ~(byte)((uint)iVar13 >> 8),
                                                       SUB41(fVar46,0) & ~(byte)iVar13)));
            auVar43._0_4_ = fVar33 * fVar44;
            fVar33 = (float)(CONCAT17((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18),
                                      CONCAT16((byte)((uint)fVar53 >> 0x10) &
                                               ~(byte)((uint)iVar50 >> 0x10),
                                               CONCAT15((byte)((uint)fVar53 >> 8) &
                                                        ~(byte)((uint)iVar50 >> 8),
                                                        CONCAT14(SUB41(fVar53,0) & ~(byte)iVar50,
                                                                 fVar44)))) >> 0x20);
            auVar43._4_4_ = fVar39 * fVar33;
            auVar43._8_4_ = fVar37 * fVar44;
            auVar43._12_4_ = fVar32 * fVar33;
            auVar29 = auVar29 ^ (auVar29 ^ auVar43) & auVar48;
            auVar36._0_4_ = fVar49 * auVar29._0_4_;
            auVar36._4_4_ = fVar38 * auVar29._4_4_;
            auVar36._8_4_ = fVar45 * auVar29._8_4_;
            auVar36._12_4_ = fVar45 * auVar29._12_4_;
            auVar34 = NEON_ext(auVar36,auVar36,8,1);
            auVar30._0_12_ = auVar29._0_12_;
            auVar30._12_4_ = -(auVar36._0_4_ + auVar36._4_4_ + auVar34._0_4_);
          }
          else {
            auVar30 = *(undefined1 (*) [16])((long)(param_2 + 2) + uVar20 * 0x10 + (long)param_2[2])
            ;
          }
          *(long *)(pfVar22 + 2) = auVar30._8_8_;
          *(long *)pfVar22 = auVar30._0_8_;
          auVar34 = *param_4;
          auVar41 = NEON_frecpe(auVar34,4);
          auVar48 = NEON_frecps(auVar34,auVar41,4);
          uVar20 = uVar20 + 1;
          auVar42._0_4_ = auVar41._0_4_ * auVar48._0_4_;
          auVar42._4_4_ = auVar41._4_4_ * auVar48._4_4_;
          auVar42._8_4_ = auVar41._8_4_ * auVar48._8_4_;
          auVar42._12_4_ = auVar41._12_4_ * auVar48._12_4_;
          auVar34 = NEON_frecps(auVar34,auVar42,4);
          fVar33 = auVar30._0_4_ * auVar42._0_4_ * auVar34._0_4_;
          fVar37 = auVar30._4_4_ * auVar42._4_4_ * auVar34._4_4_;
          fVar38 = auVar30._8_4_ * auVar42._8_4_ * auVar34._8_4_;
          uVar40 = CONCAT44(fVar33 * fVar33 + fVar37 * fVar37 + fVar38 * fVar38,
                            fVar33 * fVar33 + fVar37 * fVar37 + fVar38 * fVar38);
          uVar47 = NEON_frsqrte(uVar40,4);
          fVar45 = (float)uVar47;
          fVar49 = (float)((ulong)uVar47 >> 0x20);
          uVar47 = NEON_frsqrts(uVar40,CONCAT44(fVar49 * fVar49,fVar45 * fVar45),4);
          fVar45 = fVar45 * (float)uVar47;
          fVar49 = fVar49 * (float)((ulong)uVar47 >> 0x20);
          uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar49 * fVar49,fVar45 * fVar45),4);
          fVar45 = (float)uVar40 * fVar45;
          fVar49 = (float)((ulong)uVar40 >> 0x20) * fVar49;
          fVar33 = fVar33 * fVar45;
          fVar37 = fVar37 * fVar49;
          fVar38 = fVar38 * fVar45;
          fVar49 = auVar30._12_4_ * fVar49;
          pfVar22[2] = fVar38;
          pfVar22[3] = fVar49;
          *pfVar22 = fVar33;
          pfVar22[1] = fVar37;
          auVar35._0_4_ = *param_5 * fVar33;
          auVar35._4_4_ = param_5[1] * fVar37;
          auVar35._8_4_ = param_5[2] * fVar38;
          auVar35._12_4_ = param_5[3] * fVar49;
          auVar34 = NEON_ext(auVar35,auVar35,8,1);
          pfVar22[2] = fVar38;
          pfVar22[3] = fVar49 - (auVar35._0_4_ + auVar35._4_4_ + auVar34._0_4_);
          *pfVar22 = fVar33;
          pfVar22[1] = fVar37;
          pfVar22[3] = pfVar22[3] - param_1._0_4_;
          pfVar22 = pfVar22 + 4;
        } while (uVar23 != uVar20);
        uVar27 = (uint)local_a8;
      }
      FUN_001b1d70(&local_a8);
      FUN_001b1d20(auStack_e0);
      FUN_001b1d20(auStack_110);
      iVar13 = FUN_001b3ca0(&local_a8,pfVar15,uVar23,auStack_110);
      if (iVar13 != -1) {
        FUN_001c09f4(&local_a8,0,param_6,param_7,1);
        FUN_001b1ed4(&local_a8);
        if ((int)uVar27 < 0) {
          return 0;
        }
        if (pfVar15 == (float *)0x0) {
          return 0;
        }
        FUN_032cf244(puVar12,pfVar15,0x10,uVar27 & 0x3fffffff);
        return 0;
      }
      FUN_001b1ed4(&local_a8);
      if ((-1 < (int)uVar27) && (pfVar15 != (float *)0x0)) {
        FUN_032cf244(puVar12,pfVar15,0x10,uVar27 & 0x3fffffff);
      }
    }
  }
  puVar11 = PTR_PTR_0434a090;
  iVar13 = param_2[1];
  if (iVar13 < 1) {
    uVar14 = 0x80040200;
  }
  else {
    local_a8 = 0;
    local_a0._0_4_ = 0;
    local_a0._4_4_ = 0x80000000;
    local_a8 = FUN_02ffeb8c(PTR_PTR_0434a090,iVar13,0,0,(long)&local_a0 + 4);
    if ((int)local_a0 != iVar13) {
      local_a0._0_4_ = iVar13;
    }
    auVar31._8_8_ = uVar17;
    lVar18 = 0;
    if (*param_2 != 0) {
      lVar18 = (long)*param_2 + (long)param_2;
    }
    uVar14 = FUN_02ffd988(auVar31,lVar18,iVar13,param_3,param_4,param_5,param_6,param_7);
    uVar27 = local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < (int)uVar27) && (local_a8 != 0)) {
      FUN_032cf244(puVar11,local_a8,0x10,uVar27 & 0x3fffffff);
    }
  }
  return uVar14;
}


