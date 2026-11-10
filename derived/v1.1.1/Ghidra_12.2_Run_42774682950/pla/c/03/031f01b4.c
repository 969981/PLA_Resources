/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f01b4; name: FUN_031f01b4
 */


void FUN_031f01b4(long *param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  puVar3 = (undefined8 *)(*param_1 + (long)(int)param_2 * 0x50);
  puVar5 = (undefined8 *)(param_1[2] + ((long)param_2 >> 0x20) * 0x50);
  puVar1 = puVar3;
  if (*(char *)(puVar3 + 8) != '\0') {
    puVar1 = puVar3 + 4;
  }
  iVar8 = -(uint)((float)*puVar3 <= (float)puVar5[2]);
  iVar11 = -(uint)((float)((ulong)*puVar3 >> 0x20) <= (float)((ulong)puVar5[2] >> 0x20));
  iVar12 = -(uint)((float)puVar3[1] <= (float)puVar5[3]);
  iVar14 = -(uint)((float)*puVar5 <= (float)puVar3[2]);
  iVar16 = -(uint)((float)((ulong)*puVar5 >> 0x20) <= (float)((ulong)puVar3[2] >> 0x20));
  iVar18 = -(uint)((float)puVar5[1] <= (float)puVar3[3]);
  uVar9 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar8 >> 0x18),
                   CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar8 >> 0x10),
                            CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar8 >> 8),
                                     (byte)iVar14 & (byte)iVar8)));
  if (*(char *)(puVar5 + 8) != '\0') {
    puVar5 = puVar5 + 4;
  }
  iVar15 = -(uint)((float)*puVar1 <= (float)puVar5[2]);
  iVar17 = -(uint)((float)((ulong)*puVar1 >> 0x20) <= (float)((ulong)puVar5[2] >> 0x20));
  iVar19 = -(uint)((float)puVar1[1] <= (float)puVar5[3]);
  iVar8 = -(uint)((float)*puVar5 <= (float)puVar1[2]);
  iVar14 = -(uint)((float)((ulong)*puVar5 >> 0x20) <= (float)((ulong)puVar1[2] >> 0x20));
  iVar13 = -(uint)((float)puVar5[1] <= (float)puVar1[3]);
  uVar9 = uVar9 & (uint)(CONCAT17((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                                  CONCAT16((byte)((uint)iVar16 >> 0x10) &
                                           (byte)((uint)iVar11 >> 0x10),
                                           CONCAT15((byte)((uint)iVar16 >> 8) &
                                                    (byte)((uint)iVar11 >> 8),
                                                    CONCAT14((byte)iVar16 & (byte)iVar11,uVar9))))
                        >> 0x20) &
          CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                   CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                            CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar12 >> 8),
                                     (byte)iVar18 & (byte)iVar12)));
  uVar10 = CONCAT13((byte)((uint)iVar8 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                    CONCAT12((byte)((uint)iVar8 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                             CONCAT11((byte)((uint)iVar8 >> 8) & (byte)((uint)iVar15 >> 8),
                                      (byte)iVar8 & (byte)iVar15)));
  uVar10 = uVar10 & (uint)(CONCAT17((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                                    CONCAT16((byte)((uint)iVar14 >> 0x10) &
                                             (byte)((uint)iVar17 >> 0x10),
                                             CONCAT15((byte)((uint)iVar14 >> 8) &
                                                      (byte)((uint)iVar17 >> 8),
                                                      CONCAT14((byte)iVar14 & (byte)iVar17,uVar10)))
                                   ) >> 0x20) &
           CONCAT13((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                    CONCAT12((byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                             CONCAT11((byte)((uint)iVar13 >> 8) & (byte)((uint)iVar19 >> 8),
                                      (byte)iVar13 & (byte)iVar19)));
  if (uVar9 == 0 || uVar10 != 0) {
    if (uVar9 == 0 && uVar10 != 0) {
      FUN_031ed2e8(*param_3,param_2 & 0xffffffff);
      iVar11 = (int)param_1[0xd];
      lVar2 = param_1[0xc];
      iVar8 = iVar11 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x3fffffff) <= iVar11) {
        lVar2 = FUN_031ef8e8(PTR_PTR_0434a080,iVar8);
        iVar11 = (int)param_1[0xd];
        param_1[0xc] = lVar2;
      }
      *(ulong *)(lVar2 + (long)iVar11 * 8) = param_2;
      *(int *)(param_1 + 0xd) = iVar8;
    }
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xd);
    if (0 < (int)uVar9) {
      lVar4 = param_1[0xc];
      lVar6 = 0;
      lVar2 = 0;
      piVar7 = (int *)(lVar4 + 4);
      do {
        if ((piVar7[-1] == (int)param_2) && (*piVar7 == (int)(param_2 >> 0x20))) {
          if ((int)lVar6 == 1) {
            return;
          }
          *(uint *)(param_1 + 0xd) = uVar9 - 1;
          if (uVar9 + (int)lVar6 != 1) {
            *(undefined8 *)(lVar4 + (lVar2 >> 0x1d)) =
                 *(undefined8 *)(lVar4 + (long)(int)(uVar9 - 1) * 8);
          }
          FUN_031ed430(*param_3,-lVar6 & 0xffffffff);
          FUN_031ed6b8(*param_3,-lVar6 & 0xffffffff);
          return;
        }
        lVar6 = lVar6 + -1;
        lVar2 = lVar2 + 0x100000000;
        piVar7 = piVar7 + 2;
      } while ((ulong)uVar9 + lVar6 != 0);
    }
  }
  return;
}


