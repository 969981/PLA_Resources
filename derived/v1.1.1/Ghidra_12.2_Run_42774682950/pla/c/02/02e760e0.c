/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e760e0; name: FUN_02e760e0
 */


undefined8 FUN_02e760e0(undefined8 param_1,undefined8 *param_2,ushort param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 auStack_450 [128];
  
  if ((param_4 < 3) && ((param_2 != (undefined8 *)0x0 || (param_3 == 0)))) {
    uVar2 = (uint)param_3;
    uVar17 = (ulong)param_3;
    lVar5 = -((ulong)(uVar2 * 0x28 + 0xf) & 0x7ffff0);
    puVar13 = (undefined8 *)((long)auStack_450 + lVar5 + 0x400);
    if (param_3 != 0) {
      uVar14 = uVar17;
      do {
        *puVar13 = *param_2;
        uVar16 = param_2[3];
        uVar15 = param_2[1];
        uVar3 = *(undefined4 *)(param_2 + 4);
        puVar13[2] = param_2[2];
        puVar13[3] = uVar16;
        puVar13[1] = uVar15;
        uVar14 = uVar14 - 1;
        *(undefined4 *)(puVar13 + 4) = uVar3;
        *(undefined4 *)((long)puVar13 + 0x24) = 0x3ff3f;
        puVar13 = puVar13 + 5;
        param_2 = (undefined8 *)((long)param_2 + 0x24);
      } while (uVar14 != 0);
    }
    if ((uVar2 * 0x28 + 0x14 <= *(uint *)(DAT_0440a128 + 0x20)) &&
       (lVar10 = FUN_02e7de5c(DAT_0440a128,0x26), lVar10 != 0)) {
      *(uint *)(lVar10 + 0xc) = uVar2;
      *(int *)(lVar10 + 0x10) = param_4;
      *(undefined8 *)(lVar10 + 4) = param_1;
      if (param_3 != 0) {
        pfVar11 = (float *)(lVar10 + 0x38);
        pfVar12 = (float *)((long)auStack_450 + lVar5 + 0x414);
        do {
          if ((((~(uint)pfVar12[1] & 0x7f800000) == 0) || ((~(uint)pfVar12[2] & 0x7f800000) == 0))
             || ((~(uint)pfVar12[3] & 0x7f800000) == 0)) {
LAB_02e762e4:
            *(undefined2 *)(lVar10 + 2) = 0x3b;
            uVar15 = 0x1f;
            goto LAB_02e762b0;
          }
          fVar18 = pfVar12[-5];
          fVar19 = pfVar12[-4];
          fVar20 = pfVar12[-3];
          fVar21 = fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20;
          bVar6 = false;
          bVar8 = false;
          if (0.9 < fVar21) {
            bVar6 = false;
            bVar8 = true;
            if (!NAN(fVar21)) {
              bVar6 = fVar21 < 1.1;
              bVar8 = false;
            }
          }
          if (bVar6 == bVar8) goto LAB_02e762e4;
          fVar21 = pfVar12[-2];
          fVar22 = pfVar12[-1];
          fVar24 = *pfVar12;
          fVar23 = fVar21 * fVar21 + fVar22 * fVar22 + fVar24 * fVar24;
          fVar18 = fVar21 * fVar18 + fVar19 * fVar22 + fVar20 * fVar24;
          fVar18 = fVar18 * fVar18;
          bVar6 = false;
          bVar8 = false;
          if (0.9 < fVar23) {
            bVar6 = false;
            bVar8 = true;
            if (!NAN(fVar23)) {
              bVar6 = fVar23 < 1.1;
              bVar8 = false;
            }
          }
          bVar7 = false;
          bVar9 = false;
          if (bVar6 != bVar8) {
            bVar7 = false;
            bVar9 = true;
            if (!NAN(fVar18)) {
              bVar7 = fVar18 < 0.1;
              bVar9 = false;
            }
          }
          if (bVar7 == bVar9) goto LAB_02e762e4;
          *(undefined8 *)(pfVar11 + -9) = *(undefined8 *)(pfVar12 + -5);
          uVar15 = *(undefined8 *)(pfVar12 + -3);
          uVar16 = *(undefined8 *)(pfVar12 + -1);
          fVar18 = pfVar12[3];
          *(undefined8 *)(pfVar11 + -3) = *(undefined8 *)(pfVar12 + 1);
          *(undefined8 *)(pfVar11 + -5) = uVar16;
          *(undefined8 *)(pfVar11 + -7) = uVar15;
          fVar19 = pfVar12[4];
          uVar17 = uVar17 - 1;
          pfVar12 = pfVar12 + 10;
          pfVar11[-1] = fVar18;
          *pfVar11 = fVar19;
          pfVar11 = pfVar11 + 10;
        } while (uVar17 != 0);
      }
      uVar15 = 1;
LAB_02e762b0:
      piVar1 = (int *)(DAT_0440a128 + 0x9c);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      return uVar15;
    }
  }
  return 0x1f;
}


