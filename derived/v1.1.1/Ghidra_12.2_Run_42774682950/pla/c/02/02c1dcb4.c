/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1dcb4; name: FUN_02c1dcb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1dcb4(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  
  uVar11 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x118) = uVar11;
  plVar2 = *(long **)(param_1 + 0x58);
  plVar3 = *(long **)(param_1 + 0x60);
  uVar11 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x100) = uVar11;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    plVar13 = *(long **)(*plVar2 + 0x58);
    if (plVar13 == (long *)0x0) {
      nn::os::LockMutex((MutexType *)0x928);
      fVar14 = (float)_DAT_00000900 - *param_2;
      fVar15 = (float)((ulong)_DAT_00000900 >> 0x20) - param_2[1];
      fVar16 = (float)_DAT_00000908 - param_2[2];
      fVar17 = (float)((ulong)_DAT_00000908 >> 0x20) - param_2[3];
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar18._4_4_ = fVar15;
      auVar18._0_4_ = fVar14;
      auVar18._8_4_ = fVar16;
      auVar18._12_4_ = fVar17;
      auVar23._4_4_ = fVar15;
      auVar23._0_4_ = fVar14;
      auVar23._8_4_ = fVar16;
      auVar23._12_4_ = fVar17;
      auVar18 = NEON_ext(auVar18,auVar23,8,1);
      fVar16 = (float)_DAT_00000910 - param_2[4];
      fVar17 = (float)((ulong)_DAT_00000910 >> 0x20) - param_2[5];
      fVar21 = (float)_DAT_00000918 - param_2[6];
      fVar22 = (float)((ulong)_DAT_00000918 >> 0x20) - param_2[7];
      auVar20._0_4_ = fVar16 * fVar16;
      auVar20._4_4_ = fVar17 * fVar17;
      auVar20._8_4_ = fVar21 * fVar21;
      auVar20._12_4_ = fVar22 * fVar22;
      auVar23 = NEON_ext(auVar20,auVar20,8,1);
      fVar16 = auVar23._0_4_ + auVar20._0_4_ + auVar23._4_4_ + auVar20._4_4_;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
      if (auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar15 <= 1.1920929e-07) {
        bVar8 = false;
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar16)) {
          bVar8 = fVar16 < 1.1920929e-07;
          bVar9 = fVar16 == 1.1920929e-07;
          bVar10 = false;
        }
      }
      if (!bVar9 && bVar8 == bVar10) {
        _DAT_00000908 = *(undefined8 *)(param_2 + 2);
        _DAT_00000918 = *(undefined8 *)(param_2 + 6);
        _DAT_00000900 = *(undefined8 *)param_2;
        _DAT_00000910 = *(undefined8 *)(param_2 + 4);
        DAT_00000920 = 1;
      }
      nn::os::UnlockMutex((MutexType *)0x928);
    }
    else {
      plVar1 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      nn::os::LockMutex((MutexType *)(plVar13 + 0x125));
      fVar14 = (float)plVar13[0x120] - *param_2;
      fVar15 = (float)((ulong)plVar13[0x120] >> 0x20) - param_2[1];
      fVar16 = (float)plVar13[0x121] - param_2[2];
      fVar17 = (float)((ulong)plVar13[0x121] >> 0x20) - param_2[3];
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar14;
      auVar6._8_4_ = fVar16;
      auVar6._12_4_ = fVar17;
      auVar7._4_4_ = fVar15;
      auVar7._0_4_ = fVar14;
      auVar7._8_4_ = fVar16;
      auVar7._12_4_ = fVar17;
      auVar18 = NEON_ext(auVar6,auVar7,8,1);
      fVar16 = *(float *)((long)plVar13 + 0x914) - param_2[5];
      fVar17 = *(float *)((long)plVar13 + 0x91c) - param_2[7];
      auVar19._0_4_ =
           (*(float *)(plVar13 + 0x122) - param_2[4]) * (*(float *)(plVar13 + 0x122) - param_2[4]);
      auVar19._4_4_ = fVar16 * fVar16;
      auVar19._8_4_ =
           (*(float *)(plVar13 + 0x123) - param_2[6]) * (*(float *)(plVar13 + 0x123) - param_2[6]);
      auVar19._12_4_ = fVar17 * fVar17;
      auVar23 = NEON_ext(auVar19,auVar19,8,1);
      fVar16 = auVar23._0_4_ + auVar19._0_4_ + auVar23._4_4_ + auVar19._4_4_;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
      if (auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar15 <= 1.1920929e-07) {
        bVar8 = false;
        bVar9 = false;
        bVar10 = true;
        if (!NAN(fVar16)) {
          bVar8 = fVar16 < 1.1920929e-07;
          bVar9 = fVar16 == 1.1920929e-07;
          bVar10 = false;
        }
      }
      if (!bVar9 && bVar8 == bVar10) {
        lVar12 = *(long *)(param_2 + 6);
        plVar13[0x121] = *(long *)(param_2 + 2);
        plVar13[0x123] = lVar12;
        lVar12 = *(long *)param_2;
        plVar13[0x122] = *(long *)(param_2 + 4);
        plVar13[0x120] = lVar12;
        *(undefined1 *)(plVar13 + 0x124) = 1;
      }
      nn::os::UnlockMutex((MutexType *)(plVar13 + 0x125));
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *(int *)plVar1 = iVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  return;
}


