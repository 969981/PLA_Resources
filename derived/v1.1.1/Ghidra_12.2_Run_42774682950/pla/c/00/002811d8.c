/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002811d8; name: FUN_002811d8
 */


void FUN_002811d8(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  lVar11 = *(long *)(param_2 + 0x418);
  fVar14 = *(float *)(param_2 + 0x4c);
  lVar12 = *(long *)(lVar11 + 0x18);
  if ((lVar12 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
    return;
  }
  lVar10 = *(long *)(*(long *)(param_2 + 0x238) + 0x338);
  lVar4 = FUN_0028d5b8(param_2 + 0x7a8,*(undefined4 *)(lVar11 + 0x38));
  lVar5 = 0;
  do {
    while( true ) {
      iVar6 = *(int *)(lVar12 + 0x70);
      iVar2 = *(int *)(lVar12 + 0x7c);
      iVar3 = *(int *)(lVar11 + 0x20);
      lVar13 = *(long *)(lVar12 + 0x68);
      if (0 < iVar6) {
        fVar15 = *(float *)(lVar10 + 0x34) + (1.0 - fVar14) * (1.0 - *(float *)(lVar10 + 0x34));
        lVar8 = *(long *)(lVar12 + 0x58);
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          uVar17 = *(undefined8 *)(lVar10 + 0x38);
          lVar8 = *(long *)(lVar8 + 0x58);
          *(ulong *)(lVar8 + 0x18) =
               CONCAT44(fVar15 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) +
                                 fVar14 * 0.0),
                        fVar15 * ((float)*(undefined8 *)(lVar8 + 0x18) +
                                 fVar14 * *(float *)(lVar10 + 0x40)));
          *(ulong *)(lVar8 + 0x10) =
               CONCAT44(fVar15 * ((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) +
                                 fVar14 * (float)((ulong)uVar17 >> 0x20)),
                        fVar15 * ((float)*(undefined8 *)(lVar8 + 0x10) + fVar14 * (float)uVar17));
          iVar6 = *(int *)(lVar12 + 0x70);
        } while (iVar7 < iVar6);
        if (0 < iVar6) {
          puVar9 = *(undefined8 **)(lVar12 + 0x58);
          iVar7 = 0;
          do {
            puVar9 = (undefined8 *)puVar9[0xb];
            iVar7 = iVar7 + 1;
            puVar9[1] = CONCAT44((float)((ulong)puVar9[1] >> 0x20) +
                                 fVar14 * (float)((ulong)puVar9[3] >> 0x20),
                                 (float)puVar9[1] + fVar14 * (float)puVar9[3]);
            *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                               fVar14 * (float)((ulong)puVar9[2] >> 0x20),
                               (float)*puVar9 + fVar14 * (float)puVar9[2]);
            iVar6 = *(int *)(lVar12 + 0x70);
          } while (iVar7 < iVar6);
        }
      }
      iVar7 = iVar6 + -1;
      fVar15 = *(float *)(param_2 + 0x4c) + *(float *)(lVar12 + 0x80);
      fVar16 = *(float *)(lVar12 + 0x88);
      *(float *)(lVar12 + 0x80) = fVar15;
      *(float *)(lVar12 + 0x88) = fVar15;
      if (iVar7 == 0 || iVar6 < 1) break;
      lVar5 = lVar4 + (long)(iVar3 * iVar2) * 0x50;
      if (0.0 < (float)(int)fVar15 - (float)(int)fVar16) {
        *(int *)(lVar12 + 0x70) = iVar7;
        iVar6 = iVar7;
      }
      if (*(int *)(lVar10 + 0x28) == 0) {
        FUN_002809e4(param_1,lVar5,lVar12,param_2,lVar10);
      }
      else {
        FUN_00280d38((float)(*(int *)(lVar12 + 0x74) - iVar6) * (float)(*(int *)(lVar10 + 0x28) + 1)
                     ,param_1,lVar5,lVar12,param_2,lVar10);
      }
      lVar5 = lVar12;
      lVar12 = lVar13;
      if (lVar13 == 0) goto LAB_00281430;
    }
    plVar1 = (long *)(lVar11 + 0x18);
    if (lVar5 != 0) {
      plVar1 = (long *)(lVar5 + 0x68);
    }
    *plVar1 = lVar13;
    lVar8 = *(long *)PTR_DAT_04372f80;
    fVar15 = *(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0x338) + 0x18);
    uVar17 = *(undefined8 *)(lVar12 + 0x50);
    *(int *)(param_2 + 0x838) = *(int *)(param_2 + 0x838) + -1;
    *(ulong *)(param_2 + 0x830) =
         *(long *)(param_2 + 0x830) - ((ulong)(uint)(int)fVar15 * 0x70 + 0xff & 0xffffffff00);
    FUN_002717a0(uVar17,1);
    *(undefined8 *)(lVar12 + 0x50) = 0;
    *(undefined1 *)(lVar12 + 0x90) = 0;
    *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + -1;
    lVar12 = lVar13;
  } while (lVar13 != 0);
LAB_00281430:
  FUN_0028d5c4(param_2 + 0x7a8);
  return;
}


