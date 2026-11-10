/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fed11c; name: FUN_02fed11c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fed11c(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar15 [16];
  int iVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  plVar7 = (long *)(param_1 + 0x30);
  plVar3 = (long *)0x0;
  if (*plVar7 != 0) {
    plVar3 = (long *)(*plVar7 + (long)plVar7);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar6 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      plVar4 = (long *)(*plVar3 + (long)plVar3);
      if ((*plVar3 != 0 && plVar4 != (long *)0x0) && ((short)plVar4[3] == -0xf00)) {
        bVar8 = true;
        goto LAB_02fed1b0;
      }
      plVar3 = plVar3 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  lVar6 = tpidr_el0;
  lVar5 = *(long *)(lVar6 + 0x38d490);
  if (lVar5 == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar6 + 0x38d490) = lVar5;
  }
  plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x40,0);
  bVar8 = false;
  plVar4[2] = 1;
  plVar4[3] = 0xf100;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *plVar4 = (long)&DAT_042bba38;
  plVar4[1] = 0xffffffff;
LAB_02fed1b0:
  puVar2 = PTR_DAT_043887f8;
  fVar21 = (float)param_2[5] * 1.0000163;
  fVar22 = (float)param_2[6] * 1.0000163;
  auVar17._0_8_ =
       CONCAT17((char)((uint)fVar21 >> 0x18),
                CONCAT16((char)((uint)fVar21 >> 0x10),
                         (uint6)((((ushort)((uint)((float)param_2[4] * 1.0000163) >> 0x10) & 0xff80)
                                 & 0x7fff) << 0x10))) & 0x7f80ffffffffffff;
  auVar17._8_2_ = 0;
  auVar17[10] = (byte)((uint)fVar22 >> 0x10) & 0x80;
  auVar17[0xb] = (byte)((uint)fVar22 >> 0x18) & 0x7f;
  auVar17._12_2_ = 0;
  auVar17[0xe] = 0x80;
  auVar17[0xf] = 0x28;
  iVar16 = NEON_fmaxnmv(auVar17,4);
  iVar11 = (int)_DAT_03889e40;
  auVar18._0_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)((param_2[4] - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x70)) + iVar11;
  iVar12 = (int)((ulong)_DAT_03889e40 >> 0x20);
  auVar18._4_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)((param_2[5] - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x74)) + iVar12;
  iVar14 = (int)_UNK_03889e48;
  auVar18._8_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)((param_2[6] - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x78)) + iVar14;
  iVar13 = (int)((ulong)_UNK_03889e48 >> 0x20);
  auVar18._12_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)((param_2[7] - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x7c)) + iVar13;
  auVar24._8_8_ = _UNK_03889288;
  auVar24._0_8_ = _DAT_03889280;
  auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar24);
  plVar4[4] = auVar19._0_8_;
  fVar21 = (float)param_2[9] * 1.0000163;
  fVar22 = (float)param_2[10] * 1.0000163;
  auVar15._0_8_ =
       CONCAT17((char)((uint)fVar21 >> 0x18),
                CONCAT16((char)((uint)fVar21 >> 0x10),
                         (uint6)((((ushort)((uint)((float)param_2[8] * 1.0000163) >> 0x10) & 0xff80)
                                 & 0x7fff) << 0x10))) & 0x7f80ffffffffffff;
  auVar15._8_2_ = 0;
  auVar15[10] = (byte)((uint)fVar22 >> 0x10) & 0x80;
  auVar15[0xb] = (byte)((uint)fVar22 >> 0x18) & 0x7f;
  auVar15._12_2_ = 0;
  auVar15[0xe] = 0x80;
  auVar15[0xf] = 0x28;
  iVar16 = NEON_fmaxnmv(auVar15,4);
  auVar23._0_4_ = iVar16 + -0x4e800000;
  auVar23._4_4_ = iVar16 + -0x4e800000;
  auVar23._8_4_ = iVar16 + -0x4e800000;
  auVar23._12_4_ = iVar16 + -0x4e800000;
  auVar20._0_4_ = (int)(float)((param_2[8] - iVar16) + 0x4e800000);
  auVar20._4_4_ = (int)(float)((param_2[9] - iVar16) + 0x4e800000);
  auVar20._8_4_ = (int)(float)((param_2[10] - iVar16) + 0x4e800000);
  auVar20._12_4_ = (int)(float)((param_2[0xb] - iVar16) + 0x4e800000);
  auVar23 = auVar23 ^ (auVar23 ^ auVar20) & *(undefined1 (*) [16])(puVar2 + 0x70);
  auVar19._0_4_ = auVar23._0_4_ + iVar11;
  auVar19._4_4_ = auVar23._4_4_ + iVar12;
  auVar19._8_4_ = auVar23._8_4_ + iVar14;
  auVar19._12_4_ = auVar23._12_4_ + iVar13;
  auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar24);
  plVar4[5] = auVar19._0_8_;
  iVar11 = (int)((float)param_2[0xd] * 1.96608e+09);
  iVar12 = (int)((float)param_2[0xe] * 1.96608e+09);
  iVar14 = (int)((float)param_2[0xf] * 1.96608e+09);
  auVar9._0_8_ = CONCAT17((char)((uint)iVar11 >> 0x18),
                          CONCAT16((char)((uint)iVar11 >> 0x10),
                                   CONCAT15((char)((uint)iVar11 >> 8),
                                            CONCAT14((char)iVar11,
                                                     (int)((float)param_2[0xc] * 1.96608e+09))))) ^
                 0x8000000080000000;
  auVar9[8] = (undefined1)iVar12;
  auVar9[9] = (undefined1)((uint)iVar12 >> 8);
  auVar9[10] = (undefined1)((uint)iVar12 >> 0x10);
  auVar9[0xb] = (byte)((uint)iVar12 >> 0x18) ^ 0x80;
  auVar9[0xc] = (undefined1)iVar14;
  auVar9[0xd] = (undefined1)((uint)iVar14 >> 8);
  auVar9[0xe] = (undefined1)((uint)iVar14 >> 0x10);
  auVar9[0xf] = (byte)((uint)iVar14 >> 0x18) ^ 0x80;
  auVar19 = NEON_ext(auVar9,auVar9,8,1);
  auVar10._0_8_ =
       CONCAT26(auVar19._6_2_,
                CONCAT24(auVar19._2_2_,
                         CONCAT22((short)(auVar9._0_8_ >> 0x30),(short)(auVar9._0_8_ >> 0x10))));
  auVar10._8_8_ = 0;
  plVar4[6] = auVar10._0_8_;
  *(undefined4 *)(plVar4 + 7) = param_2[1];
  *(undefined4 *)((long)plVar4 + 0x3c) = *param_2;
  FUN_02ff9a40(auVar10,auVar19,plVar7,plVar4);
  if ((!bVar8) && (plVar4[1] != 0)) {
    plVar3 = plVar4 + 2;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  }
  return;
}


