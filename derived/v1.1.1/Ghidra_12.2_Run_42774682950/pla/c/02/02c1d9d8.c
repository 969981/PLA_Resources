/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1d9d8; name: FUN_02c1d9d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1d9d8(long param_1,float *param_2)

{
  long *plVar1;
  int iVar2;
  ulong *puVar3;
  float *pfVar4;
  uint uVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined4 uStack_ac;
  
  uVar5 = *(uint *)(param_1 + 0xf8);
  if (uVar5 != 0) {
    fVar32 = *(float *)(param_1 + 0xfc);
    fVar19 = fVar32 * (float)uVar5 * 0.5;
    fVar10 = *param_2;
    fVar11 = param_2[2];
    uVar9 = NEON_fmov(0x3f800000,4);
    uVar15 = 0;
    do {
      fVar20 = (float)(int)((fVar32 * 0.5 + (fVar11 - fVar19)) / fVar32) + (float)uVar15;
      uStack_ac = (undefined4)((ulong)uVar9 >> 0x20);
      fVar24 = fVar32 * fVar20;
      uVar18 = 0;
      do {
        fVar21 = (float)(int)((fVar32 * 0.5 + (fVar10 - fVar19)) / fVar32) + (float)uVar18;
        fVar25 = fVar32 * fVar21;
        iVar2 = (uVar5 - 1 & (int)fVar21) + (uVar5 - 1 & (int)fVar20) * uVar5;
        lVar16 = (long)iVar2;
        puVar3 = (ulong *)(*(long *)(param_1 + 0x90) + lVar16 * 0x20);
        puVar3[1] = CONCAT44(uStack_ac,fVar24);
        *puVar3 = (ulong)(uint)fVar25;
        puVar3[3] = CONCAT44(uStack_ac,fVar32 + fVar24);
        puVar3[2] = (ulong)(uint)(fVar32 + fVar25);
        plVar17 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + (long)iVar2 * 8) + 0x58);
        if (plVar17 == (long *)0x0) {
          pfVar4 = (float *)(*(long *)(param_1 + 0x90) + lVar16 * 0x20);
          nn::os::LockMutex((MutexType *)0x928);
          fVar25 = (float)_DAT_000008d0 - *pfVar4;
          fVar22 = (float)((ulong)_DAT_000008d0 >> 0x20) - pfVar4[1];
          fVar21 = (float)_DAT_000008d8 - pfVar4[2];
          fVar23 = (float)((ulong)_DAT_000008d8 >> 0x20) - pfVar4[3];
          fVar25 = fVar25 * fVar25;
          fVar22 = fVar22 * fVar22;
          fVar21 = fVar21 * fVar21;
          fVar23 = fVar23 * fVar23;
          auVar26._4_4_ = fVar22;
          auVar26._0_4_ = fVar25;
          auVar26._8_4_ = fVar21;
          auVar26._12_4_ = fVar23;
          auVar31._4_4_ = fVar22;
          auVar31._0_4_ = fVar25;
          auVar31._8_4_ = fVar21;
          auVar31._12_4_ = fVar23;
          auVar26 = NEON_ext(auVar26,auVar31,8,1);
          fVar21 = (float)_DAT_000008e0 - pfVar4[4];
          fVar23 = (float)((ulong)_DAT_000008e0 >> 0x20) - pfVar4[5];
          fVar29 = (float)_DAT_000008e8 - pfVar4[6];
          fVar30 = (float)((ulong)_DAT_000008e8 >> 0x20) - pfVar4[7];
          auVar28._0_4_ = fVar21 * fVar21;
          auVar28._4_4_ = fVar23 * fVar23;
          auVar28._8_4_ = fVar29 * fVar29;
          auVar28._12_4_ = fVar30 * fVar30;
          auVar31 = NEON_ext(auVar28,auVar28,8,1);
          fVar21 = auVar31._0_4_ + auVar28._0_4_ + auVar31._4_4_ + auVar28._4_4_;
          bVar12 = false;
          bVar13 = false;
          bVar14 = false;
          if (auVar26._0_4_ + fVar25 + auVar26._4_4_ + fVar22 <= 1.1920929e-07) {
            bVar12 = false;
            bVar13 = false;
            bVar14 = true;
            if (!NAN(fVar21)) {
              bVar12 = fVar21 < 1.1920929e-07;
              bVar13 = fVar21 == 1.1920929e-07;
              bVar14 = false;
            }
          }
          if (!bVar13 && bVar12 == bVar14) {
            _DAT_000008d8 = *(undefined8 *)(pfVar4 + 2);
            _DAT_000008e8 = *(undefined8 *)(pfVar4 + 6);
            _DAT_000008e0 = *(undefined8 *)(pfVar4 + 4);
            _DAT_000008d0 = *(undefined8 *)pfVar4;
            DAT_00000920 = 1;
          }
          nn::os::UnlockMutex((MutexType *)0x928);
        }
        else {
          plVar1 = plVar17 + 10;
          do {
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          pfVar4 = (float *)(*(long *)(param_1 + 0x90) + lVar16 * 0x20);
          nn::os::LockMutex((MutexType *)(plVar17 + 0x125));
          fVar25 = (float)plVar17[0x11a] - *pfVar4;
          fVar22 = (float)((ulong)plVar17[0x11a] >> 0x20) - pfVar4[1];
          fVar21 = (float)plVar17[0x11b] - pfVar4[2];
          fVar23 = (float)((ulong)plVar17[0x11b] >> 0x20) - pfVar4[3];
          fVar25 = fVar25 * fVar25;
          fVar22 = fVar22 * fVar22;
          fVar21 = fVar21 * fVar21;
          fVar23 = fVar23 * fVar23;
          auVar7._4_4_ = fVar22;
          auVar7._0_4_ = fVar25;
          auVar7._8_4_ = fVar21;
          auVar7._12_4_ = fVar23;
          auVar8._4_4_ = fVar22;
          auVar8._0_4_ = fVar25;
          auVar8._8_4_ = fVar21;
          auVar8._12_4_ = fVar23;
          auVar26 = NEON_ext(auVar7,auVar8,8,1);
          fVar21 = *(float *)((long)plVar17 + 0x8e4) - pfVar4[5];
          fVar23 = *(float *)((long)plVar17 + 0x8ec) - pfVar4[7];
          auVar27._0_4_ =
               (*(float *)(plVar17 + 0x11c) - pfVar4[4]) * (*(float *)(plVar17 + 0x11c) - pfVar4[4])
          ;
          auVar27._4_4_ = fVar21 * fVar21;
          auVar27._8_4_ =
               (*(float *)(plVar17 + 0x11d) - pfVar4[6]) * (*(float *)(plVar17 + 0x11d) - pfVar4[6])
          ;
          auVar27._12_4_ = fVar23 * fVar23;
          auVar31 = NEON_ext(auVar27,auVar27,8,1);
          fVar21 = auVar31._0_4_ + auVar27._0_4_ + auVar31._4_4_ + auVar27._4_4_;
          bVar12 = false;
          bVar13 = false;
          bVar14 = false;
          if (auVar26._0_4_ + fVar25 + auVar26._4_4_ + fVar22 <= 1.1920929e-07) {
            bVar12 = false;
            bVar13 = false;
            bVar14 = true;
            if (!NAN(fVar21)) {
              bVar12 = fVar21 < 1.1920929e-07;
              bVar13 = fVar21 == 1.1920929e-07;
              bVar14 = false;
            }
          }
          if (!bVar13 && bVar12 == bVar14) {
            lVar16 = *(long *)(pfVar4 + 6);
            plVar17[0x11b] = *(long *)(pfVar4 + 2);
            plVar17[0x11d] = lVar16;
            lVar16 = *(long *)pfVar4;
            plVar17[0x11c] = *(long *)(pfVar4 + 4);
            plVar17[0x11a] = lVar16;
            *(undefined1 *)(plVar17 + 0x124) = 1;
          }
          nn::os::UnlockMutex((MutexType *)(plVar17 + 0x125));
          do {
            iVar2 = (int)*plVar1 + -1;
            cVar6 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *(int *)plVar1 = iVar2;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar5);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar5);
  }
  return;
}


