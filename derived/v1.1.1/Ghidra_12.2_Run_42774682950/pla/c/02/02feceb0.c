/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02feceb0; name: FUN_02feceb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02feceb0(long param_1,undefined8 param_2)

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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 local_70;
  undefined4 local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x38))
            (param_1,param_2,&local_70);
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
        goto LAB_02fecf60;
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
LAB_02fecf60:
  puVar2 = PTR_DAT_043887f8;
  auVar17._0_8_ =
       CONCAT17((char)((uint)(fStack_5c * 1.0000163) >> 0x18),
                CONCAT16((char)((uint)(fStack_5c * 1.0000163) >> 0x10),
                         (uint6)((((ushort)((uint)(local_60 * 1.0000163) >> 0x10) & 0xff80) & 0x7fff
                                 ) << 0x10))) & 0x7f80ffffffffffff;
  auVar17._8_2_ = 0;
  auVar17[10] = (byte)((uint)(fStack_58 * 1.0000163) >> 0x10) & 0x80;
  auVar17[0xb] = (byte)((uint)(fStack_58 * 1.0000163) >> 0x18) & 0x7f;
  auVar17._12_2_ = 0;
  auVar17[0xe] = 0x80;
  auVar17[0xf] = 0x28;
  iVar16 = NEON_fmaxnmv(auVar17,4);
  iVar11 = (int)_DAT_03889e40;
  auVar18._0_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)(((int)local_60 - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x70)) + iVar11;
  iVar12 = (int)((ulong)_DAT_03889e40 >> 0x20);
  auVar18._4_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)(((int)fStack_5c - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x74)) + iVar12;
  iVar14 = (int)_UNK_03889e48;
  auVar18._8_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)(((int)fStack_58 - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x78)) + iVar14;
  iVar13 = (int)((ulong)_UNK_03889e48 >> 0x20);
  auVar18._12_4_ =
       (iVar16 + 0xb1800000U ^
       (iVar16 + 0xb1800000U ^ (int)(float)((iStack_54 - iVar16) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x7c)) + iVar13;
  auVar22._8_8_ = _UNK_03889288;
  auVar22._0_8_ = _DAT_03889280;
  auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar22);
  plVar4[4] = auVar19._0_8_;
  auVar15._0_8_ =
       CONCAT17((char)((uint)(fStack_4c * 1.0000163) >> 0x18),
                CONCAT16((char)((uint)(fStack_4c * 1.0000163) >> 0x10),
                         (uint6)((((ushort)((uint)(local_50 * 1.0000163) >> 0x10) & 0xff80) & 0x7fff
                                 ) << 0x10))) & 0x7f80ffffffffffff;
  auVar15._8_2_ = 0;
  auVar15[10] = (byte)((uint)(fStack_48 * 1.0000163) >> 0x10) & 0x80;
  auVar15[0xb] = (byte)((uint)(fStack_48 * 1.0000163) >> 0x18) & 0x7f;
  auVar15._12_2_ = 0;
  auVar15[0xe] = 0x80;
  auVar15[0xf] = 0x28;
  iVar16 = NEON_fmaxnmv(auVar15,4);
  auVar21._0_4_ = iVar16 + -0x4e800000;
  auVar21._4_4_ = iVar16 + -0x4e800000;
  auVar21._8_4_ = iVar16 + -0x4e800000;
  auVar21._12_4_ = iVar16 + -0x4e800000;
  auVar20._0_4_ = (int)(float)(((int)local_50 - iVar16) + 0x4e800000);
  auVar20._4_4_ = (int)(float)(((int)fStack_4c - iVar16) + 0x4e800000);
  auVar20._8_4_ = (int)(float)(((int)fStack_48 - iVar16) + 0x4e800000);
  auVar20._12_4_ = (int)(float)((iStack_44 - iVar16) + 0x4e800000);
  auVar21 = auVar21 ^ (auVar21 ^ auVar20) & *(undefined1 (*) [16])(puVar2 + 0x70);
  auVar19._0_4_ = auVar21._0_4_ + iVar11;
  auVar19._4_4_ = auVar21._4_4_ + iVar12;
  auVar19._8_4_ = auVar21._8_4_ + iVar14;
  auVar19._12_4_ = auVar21._12_4_ + iVar13;
  auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar22);
  plVar4[5] = auVar19._0_8_;
  iVar11 = (int)(fStack_3c * 1.96608e+09);
  iVar12 = (int)(fStack_38 * 1.96608e+09);
  iVar14 = (int)(fStack_34 * 1.96608e+09);
  auVar9._0_8_ = CONCAT17((char)((uint)iVar11 >> 0x18),
                          CONCAT16((char)((uint)iVar11 >> 0x10),
                                   CONCAT15((char)((uint)iVar11 >> 8),
                                            CONCAT14((char)iVar11,(int)(local_40 * 1.96608e+09)))))
                 ^ 0x8000000080000000;
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
  *(undefined4 *)(plVar4 + 7) = local_6c;
  *(undefined4 *)((long)plVar4 + 0x3c) = local_70;
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
    }
  }
  return;
}


