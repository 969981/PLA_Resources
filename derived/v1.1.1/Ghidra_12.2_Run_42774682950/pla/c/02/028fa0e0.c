/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fa0e0; name: FUN_028fa0e0
 */


void FUN_028fa0e0(long param_1,long param_2,long param_3,int param_4)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  short sVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined1 auVar18 [16];
  int iVar20;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar21 [16];
  int iVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar20 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  pcVar1 = (code *)&LAB_028fa3a0;
  if (param_4 != 0) {
    pcVar1 = FUN_028fa3b0;
  }
  if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 6) == 0) {
    return;
  }
  fVar5 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
  uVar10 = 0;
  plVar2 = (long *)PTR_DAT_0437a578;
  if (*(long *)(param_2 + 200) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 200) + 0x88);
  }
  do {
    if ((ulong)(long)(int)uVar10 <
        (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 2)) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x88) + (long)(int)uVar10 * 4);
      if (((-1 < (int)uVar3) &&
          ((*(ulong *)(*(long *)(param_3 + 0x78) + ((ulong)(uVar3 >> 3) & 0x1ffffff8)) &
           1L << ((ulong)uVar3 & 0x3f)) != 0)) &&
         (lVar11 = *plVar2,
         (int)uVar3 <
         (int)(short)((short)((uint)(*(int *)(lVar11 + 0x278) - *(int *)(lVar11 + 0x270)) >> 4) *
                     -0x5555))) {
        if (*(char *)(lVar11 + 0x450) != '\0') {
          plVar9 = *(long **)(lVar11 + 0x58);
          plVar8 = *(long **)(lVar11 + 0x60);
          if (plVar9 != plVar8) {
            do {
              sVar4 = *(short *)((long)plVar9 + 10);
              sVar6 = (**(code **)(*(long *)(*(long *)(*plVar9 + 0x58) + 0x58) + 0x10))();
              if ((int)(short)uVar3 < (int)sVar4 + (int)sVar6) {
                plVar8 = (long *)(*(long *)(*plVar9 + 0x58) + 0x58);
                uVar7 = (**(code **)(*plVar8 + 0x58))(plVar8,uVar3 - *(ushort *)((long)plVar9 + 10))
                ;
                if (*(uint *)(lVar11 + 0x454) < uVar7) goto LAB_028fa188;
                break;
              }
              plVar9 = plVar9 + 2;
            } while (plVar8 != plVar9);
          }
        }
        if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 6) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar11 = *(long *)(param_1 + 0x10) + uVar10 * 0x40;
        uStack_78 = *(undefined8 *)(lVar11 + 0x28);
        local_68 = *(undefined8 *)(lVar11 + 0x38);
        local_80 = *(undefined8 *)(lVar11 + 0x20);
        local_70 = *(undefined8 *)(lVar11 + 0x30);
        fVar13 = (float)local_80;
        auVar28._0_4_ = fVar13 * fVar13;
        fVar14 = (float)((ulong)local_80 >> 0x20);
        auVar28._4_4_ = fVar14 * fVar14;
        fVar15 = (float)uStack_78;
        auVar28._8_4_ = fVar15 * fVar15;
        fVar16 = (float)((ulong)uStack_78 >> 0x20);
        auVar28._12_4_ = fVar16 * fVar16;
        auVar21 = NEON_ext(auVar28,auVar28,8,1);
        fVar17 = auVar21._0_4_ + auVar28._0_4_;
        fVar19 = auVar21._4_4_ + auVar28._4_4_;
        fVar12 = fVar17 + fVar19;
        fVar17 = fVar17 + fVar19;
        auVar21._8_8_ = CONCAT44(fVar17,fVar12);
        auVar21._0_8_ = CONCAT44(fVar17,fVar12);
        local_88 = *(undefined8 *)(lVar11 + 0x18);
        iVar20 = -(uint)(fVar12 < fVar5);
        iVar25 = -(uint)(fVar17 < fVar5);
        iVar26 = -(uint)(fVar12 < fVar5);
        iVar27 = -(uint)(fVar17 < fVar5);
        bVar22 = (byte)((uint)iVar20 >> 8);
        bVar23 = (byte)((uint)iVar20 >> 0x10);
        bVar24 = (byte)((uint)iVar20 >> 0x18);
        local_90 = *(undefined8 *)(lVar11 + 0x10);
        if ((float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~bVar24,
                            CONCAT12((byte)((uint)fVar12 >> 0x10) & ~bVar23,
                                     CONCAT11((byte)((uint)fVar12 >> 8) & ~bVar22,
                                              SUB41(fVar12,0) & ~(byte)iVar20))) != 0.0) {
          auVar28 = NEON_frsqrte(auVar21,4);
          auVar30._0_4_ = auVar28._0_4_ * fVar12;
          auVar30._4_4_ = auVar28._4_4_ * fVar17;
          auVar30._8_4_ = auVar28._8_4_ * fVar12;
          auVar30._12_4_ = auVar28._12_4_ * fVar17;
          auVar21 = NEON_frsqrts(auVar28,auVar30,4);
          auVar29._0_4_ = auVar28._0_4_ * auVar21._0_4_;
          auVar29._4_4_ = auVar28._4_4_ * auVar21._4_4_;
          auVar29._8_4_ = auVar28._8_4_ * auVar21._8_4_;
          auVar29._12_4_ = auVar28._12_4_ * auVar21._12_4_;
          auVar18._0_4_ = fVar12 * auVar29._0_4_;
          auVar18._4_4_ = fVar17 * auVar29._4_4_;
          auVar18._8_4_ = fVar12 * auVar29._8_4_;
          auVar18._12_4_ = fVar17 * auVar29._12_4_;
          auVar28 = NEON_frsqrts(auVar29,auVar18,4);
          fVar13 = fVar13 * auVar29._0_4_ * auVar28._0_4_;
          fVar14 = fVar14 * auVar29._4_4_ * auVar28._4_4_;
          fVar15 = fVar15 * auVar29._8_4_ * auVar28._8_4_;
          fVar16 = fVar16 * auVar29._12_4_ * auVar28._12_4_;
          local_80 = CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                              CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                       CONCAT15((byte)((uint)fVar14 >> 8) &
                                                ~(byte)((uint)iVar25 >> 8),
                                                CONCAT14(SUB41(fVar14,0) & ~(byte)iVar25,
                                                         CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                                  ~bVar24,CONCAT12((byte)((uint)
                                                  fVar13 >> 0x10) & ~bVar23,
                                                  CONCAT11((byte)((uint)fVar13 >> 8) & ~bVar22,
                                                           SUB41(fVar13,0) & ~(byte)iVar20)))))));
          uStack_78 = CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                               CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10)
                                        ,CONCAT15((byte)((uint)fVar16 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  CONCAT14(SUB41(fVar16,0) & ~(byte)iVar27,
                                                           CONCAT13((byte)((uint)fVar15 >> 0x18) &
                                                                    ~(byte)((uint)iVar26 >> 0x18),
                                                                    CONCAT12((byte)((uint)fVar15 >>
                                                                                   0x10) &
                                                                             ~(byte)((uint)iVar26 >>
                                                                                    0x10),
                                                                             CONCAT11((byte)((uint)
                                                  fVar15 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                                  SUB41(fVar15,0) & ~(byte)iVar26)))))));
          (*pcVar1)(*plVar2,uVar3,&local_90);
        }
      }
    }
LAB_028fa188:
    do {
      uVar10 = uVar10 + 1;
      if (((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 6 & 0xffffffff) <=
          uVar10) {
        return;
      }
    } while ((int)uVar10 < 0);
  } while( true );
}


