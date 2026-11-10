/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffdd9c; name: FUN_02ffdd9c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02ffdd9c(long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_480 [128];
  undefined1 auStack_80 [32];
  
  uVar11 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x78))();
  puVar9 = PTR_PTR_0434a080;
  if (uVar11 == 0) {
    return 0x80040200;
  }
  lVar14 = param_1;
  if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) == 0) {
    lVar14 = 0;
  }
  if ((*(ushort *)(param_1 + 0x1a) >> 1 & 1) != 0) {
    iVar6 = *(int *)(lVar14 + 0x58);
    iVar7 = *(int *)(lVar14 + 0x50);
    lVar3 = 0;
    if (iVar7 != 0) {
      lVar3 = (long)iVar7 + lVar14 + 0x50;
    }
    if (iVar6 == 0) {
      lVar23 = 0;
      iVar6 = *(int *)(lVar14 + 0x40);
    }
    else {
      lVar23 = (long)iVar6 + lVar14 + 0x58;
      iVar6 = *(int *)(lVar14 + 0x40);
    }
    if (iVar6 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (long)iVar6 + lVar14 + 0x40;
    }
    if (0 < (int)uVar11) {
      uVar22 = 0;
      do {
        puVar1 = (ushort *)(lVar3 + uVar22 * 4);
        bVar5 = (byte)puVar1[1];
        iVar6 = (int)param_4[1];
        uVar17 = *(uint *)((long)param_4 + 0xc);
        uVar18 = iVar6 + (uint)bVar5 * 2;
        if ((int)(uVar17 & 0x3fffffff) < (int)uVar18) {
          lVar13 = *param_4;
          if (0x3fffffff < (int)uVar18) {
            FUN_032bd0a8(uVar18);
            uVar17 = *(uint *)((long)param_4 + 0xc);
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar15 = uVar18;
          if ((int)uVar18 <= (int)uVar17) {
            uVar15 = uVar17;
          }
          lVar13 = FUN_032bd1d4(puVar9,uVar15,0x10,lVar13,iVar6,(uint *)((long)param_4 + 0xc));
          *param_4 = lVar13;
          *(uint *)(param_4 + 1) = uVar18;
        }
        else {
          lVar13 = *param_4;
          *(uint *)(param_4 + 1) = uVar18;
        }
        if (bVar5 != 0) {
          puVar16 = (undefined8 *)(lVar13 + (long)iVar6 * 0x10);
          uVar18 = 1;
          do {
            puVar19 = (undefined8 *)
                      (lVar14 + (ulong)*(byte *)(lVar23 + (ulong)((uVar18 + *puVar1) - 1)) * 0xc);
            fVar8 = *(float *)(puVar19 + 1);
            uVar25 = *puVar19;
            uVar24 = *param_2;
            uVar26 = *param_3;
            puVar16[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                  (float)((ulong)param_2[1] >> 0x20) * fVar8,
                                  (float)param_3[1] + (float)param_2[1] * fVar8);
            *puVar16 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar26 + (float)uVar24 * (float)uVar25);
            uVar17 = 0;
            if (uVar18 != bVar5) {
              uVar17 = uVar18;
            }
            uVar18 = uVar18 + 1;
            uVar24 = *param_3;
            puVar19 = (undefined8 *)
                      (lVar14 + (ulong)*(byte *)(lVar23 + (ulong)uVar17 + (ulong)*puVar1) * 0xc);
            fVar8 = *(float *)(puVar19 + 1);
            uVar26 = *puVar19;
            uVar25 = *param_2;
            puVar16[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                  (float)((ulong)param_2[1] >> 0x20) * fVar8,
                                  (float)param_3[1] + (float)param_2[1] * fVar8);
            puVar16[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) +
                                  (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar26 >> 0x20),
                                  (float)uVar24 + (float)uVar25 * (float)uVar26);
            puVar16 = puVar16 + 4;
          } while (uVar18 - bVar5 != 1);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar11);
    }
    return 0;
  }
  if ((int)uVar11 < 1) {
    return 0;
  }
  uVar18 = 0;
  do {
    uVar12 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x88))
                       (param_1,uVar18,auStack_80,local_480);
    iVar6 = (int)param_4[1];
    uVar15 = *(uint *)((long)param_4 + 0xc);
    uVar17 = iVar6 + uVar12 * 2;
    uVar22 = (ulong)uVar12;
    if ((int)(uVar15 & 0x3fffffff) < (int)uVar17) {
      lVar14 = *param_4;
      if (0x3fffffff < (int)uVar17) {
        FUN_032bd0a8(uVar17);
        uVar15 = *(uint *)((long)param_4 + 0xc);
      }
      uVar15 = (uVar15 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar15) {
        uVar15 = 0x3fffffff;
      }
      uVar2 = uVar17;
      if ((int)uVar17 <= (int)uVar15) {
        uVar2 = uVar15;
      }
      lVar14 = FUN_032bd1d4(puVar9,uVar2,0x10,lVar14,iVar6,(uint *)((long)param_4 + 0xc));
      *param_4 = lVar14;
    }
    else {
      lVar14 = *param_4;
    }
    *(uint *)(param_4 + 1) = uVar17;
    if (0 < (int)uVar12) {
      puVar16 = (undefined8 *)(lVar14 + (long)iVar6 * 0x10);
      if (uVar12 == 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        puVar19 = puVar16;
        puVar21 = local_480 + 2;
        do {
          uVar24 = puVar21[-2];
          uVar25 = *param_2;
          uVar26 = *param_3;
          puVar19[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                (float)((ulong)puVar21[-1] >> 0x20) *
                                (float)((ulong)param_2[1] >> 0x20),
                                (float)param_3[1] + (float)puVar21[-1] * (float)param_2[1]);
          *puVar19 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                              (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                              (float)uVar26 + (float)uVar24 * (float)uVar25);
          uVar4 = 0;
          if (uVar22 - 1 != uVar20) {
            uVar4 = (ulong)((int)uVar20 + 1);
          }
          bVar10 = uVar22 - 2 != uVar20;
          uVar20 = uVar20 + 2;
          uVar24 = local_480[uVar4 * 2];
          uVar25 = *param_2;
          uVar26 = *param_3;
          puVar19[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                (float)((ulong)local_480[uVar4 * 2 + 1] >> 0x20) *
                                (float)((ulong)param_2[1] >> 0x20),
                                (float)param_3[1] +
                                (float)local_480[uVar4 * 2 + 1] * (float)param_2[1]);
          puVar19[2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar26 + (float)uVar24 * (float)uVar25);
          uVar25 = *param_2;
          uVar24 = *puVar21;
          uVar26 = *param_3;
          uVar4 = 0;
          if (bVar10) {
            uVar4 = uVar20 & 0xfffffffe;
          }
          puVar19[5] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                (float)((ulong)puVar21[1] >> 0x20) *
                                (float)((ulong)param_2[1] >> 0x20),
                                (float)param_3[1] + (float)puVar21[1] * (float)param_2[1]);
          puVar19[4] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar26 + (float)uVar24 * (float)uVar25);
          uVar24 = local_480[uVar4 * 2];
          uVar25 = *param_2;
          uVar26 = *param_3;
          puVar16 = puVar19 + 8;
          puVar19[7] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                                (float)((ulong)local_480[uVar4 * 2 + 1] >> 0x20) *
                                (float)((ulong)param_2[1] >> 0x20),
                                (float)param_3[1] +
                                (float)local_480[uVar4 * 2 + 1] * (float)param_2[1]);
          puVar19[6] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                                (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                                (float)uVar26 + (float)uVar24 * (float)uVar25);
          puVar19 = puVar16;
          puVar21 = puVar21 + 4;
        } while (uVar22 - (uVar22 & 1) != uVar20);
        if ((uVar12 & 1) == 0) goto LAB_02ffe070;
      }
      uVar24 = local_480[uVar20 * 2];
      uVar25 = *param_2;
      uVar26 = *param_3;
      uVar4 = 0;
      if (uVar20 + 1 != uVar22) {
        uVar4 = uVar20 + 1 & 0xffffffff;
      }
      puVar16[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                            (float)((ulong)local_480[uVar20 * 2 + 1] >> 0x20) *
                            (float)((ulong)param_2[1] >> 0x20),
                            (float)param_3[1] + (float)local_480[uVar20 * 2 + 1] * (float)param_2[1]
                           );
      *puVar16 = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                          (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                          (float)uVar26 + (float)uVar24 * (float)uVar25);
      uVar24 = local_480[uVar4 * 2];
      uVar25 = *param_2;
      uVar26 = *param_3;
      puVar16[3] = CONCAT44((float)((ulong)param_3[1] >> 0x20) +
                            (float)((ulong)local_480[uVar4 * 2 + 1] >> 0x20) *
                            (float)((ulong)param_2[1] >> 0x20),
                            (float)param_3[1] + (float)local_480[uVar4 * 2 + 1] * (float)param_2[1])
      ;
      puVar16[2] = CONCAT44((float)((ulong)uVar26 >> 0x20) +
                            (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar25 >> 0x20),
                            (float)uVar26 + (float)uVar24 * (float)uVar25);
    }
LAB_02ffe070:
    uVar18 = uVar18 + 1;
    if (uVar18 == uVar11) {
      return 0;
    }
  } while( true );
}


