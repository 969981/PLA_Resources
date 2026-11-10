/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fea18; name: FUN_030fea18
 */


void FUN_030fea18(long param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  puVar4 = PTR_PTR_0434a080;
  uVar1 = *(uint *)(param_1 + 0x15d4);
  if (uVar1 == 0) {
    return;
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 0x1688) != '\0') goto LAB_030fea9c;
  do {
    uVar7 = (uint)uVar8;
    while( true ) {
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x110) +
               (-(ulong)(uVar7 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar7 << 5));
      uVar12 = *puVar2;
      fVar9 = (float)uVar12;
      iVar17 = -(uint)((float)*param_2 <= fVar9);
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      iVar18 = -(uint)((float)((ulong)*param_2 >> 0x20) <= fVar13);
      fVar15 = (float)puVar2[1];
      iVar19 = -(uint)((float)param_2[1] <= fVar15);
      iVar10 = -(uint)(fVar9 <= (float)param_2[2]);
      iVar14 = -(uint)(fVar13 <= (float)((ulong)param_2[2] >> 0x20));
      iVar16 = -(uint)(fVar15 <= (float)param_2[3]);
      uVar11 = CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                        CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                                 CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar17 >> 8),
                                          (byte)iVar10 & (byte)iVar17)));
      if ((uVar11 & (uint)(CONCAT17((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                                    CONCAT16((byte)((uint)iVar14 >> 0x10) &
                                             (byte)((uint)iVar18 >> 0x10),
                                             CONCAT15((byte)((uint)iVar14 >> 8) &
                                                      (byte)((uint)iVar18 >> 8),
                                                      CONCAT14((byte)iVar14 & (byte)iVar18,uVar11)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                   CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                            CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar19 >> 8),
                                     (byte)iVar16 & (byte)iVar19)))) == 0) {
        iVar10 = (int)param_3[1];
        uVar5 = *(uint *)((long)param_3 + 0xc);
        uVar11 = iVar10 + 1;
        if (iVar10 < (int)(uVar5 & 0x3fffffff)) {
          lVar6 = *param_3;
        }
        else {
          lVar6 = *param_3;
          if (0x3ffffffe < iVar10) {
            FUN_032bd0a8(uVar11);
            uVar5 = *(uint *)((long)param_3 + 0xc);
          }
          uVar5 = (uVar5 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar5) {
            uVar5 = 0x3fffffff;
          }
          uVar3 = uVar11;
          if ((int)uVar11 <= (int)uVar5) {
            uVar3 = uVar5;
          }
          lVar6 = FUN_032bd1d4(puVar4,uVar3,4,lVar6,iVar10,(uint *)((long)param_3 + 0xc));
          iVar10 = (int)param_3[1];
          *param_3 = lVar6;
        }
        *(uint *)(lVar6 + (long)iVar10 * 4) = uVar7;
        *(uint *)(param_3 + 1) = uVar11;
      }
      uVar8 = uVar8 + 1;
      if (uVar1 == uVar8) {
        return;
      }
      if (*(char *)(param_1 + 0x1688) == '\0') break;
LAB_030fea9c:
      uVar7 = *(uint *)(*(long *)(param_1 + 0x16a8) + uVar8 * 4);
    }
  } while( true );
}


