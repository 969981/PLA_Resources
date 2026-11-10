/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023e84c; name: FUN_0023e84c
 */


void FUN_0023e84c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar3 = PTR_SinCosSampleTable_04372ce8;
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 0xc) != 0) {
    uVar2 = uVar4 >> 2 & 3;
    uVar1 = uVar4 & 3;
    if (uVar2 <= (uVar4 & 3)) {
      uVar1 = uVar2;
    }
    uVar2 = (int)*(char *)(param_2 + 0x18d);
    if ((int)uVar1 <= (int)*(char *)(param_2 + 0x18d)) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) {
      fVar13 = *(float *)PTR_FloatDegree180_04372ce0;
      fVar12 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
      uVar4 = 0;
      do {
        while( true ) {
          uVar10 = (ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30;
          if (1 < *(byte *)(*(long *)(param_1 + 0x18) +
                            uVar10 + ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 +
                            (long)(int)uVar4 * 0x10 + 1) - 5) break;
          lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          if (lVar6 != 0) {
            lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar4 == 2) {
            puVar7 = (undefined8 *)(lVar6 + 0xb0);
            puVar5 = (undefined8 *)(lVar6 + 0xc0);
LAB_0023e8ec:
            *puVar7 = 0x3f800000;
            puVar7[1] = 0;
            *puVar5 = 0xbf80000000000000;
            puVar5[1] = 0x3f80000000000000;
          }
          else {
            if (uVar4 == 1) {
              puVar7 = (undefined8 *)(lVar6 + 0x90);
              puVar5 = (undefined8 *)(lVar6 + 0xa0);
              goto LAB_0023e8ec;
            }
            if (uVar4 == 0) {
              puVar7 = (undefined8 *)(lVar6 + 0x70);
              puVar5 = (undefined8 *)(lVar6 + 0x80);
              goto LAB_0023e8ec;
            }
          }
LAB_0023e8f4:
          uVar4 = uVar4 + 1;
          if (uVar2 <= uVar4) goto LAB_0023ea8c;
        }
        pfVar8 = (float *)(*(long *)(param_1 + 0x18) + uVar10 + (long)(int)uVar4 * 0x14);
        fVar14 = pfVar8[3];
        fVar16 = *pfVar8;
        fVar17 = pfVar8[1];
        uVar10 = (ulong)(pfVar8[2] * (fVar12 / fVar13));
        fVar15 = pfVar8[4];
        lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
        pfVar8 = (float *)(puVar3 + (uVar10 >> 0x18 & 0xff) * 0x10);
        if (lVar6 == 0) {
          lVar6 = 0;
          if (uVar4 != 2) goto LAB_0023e9b0;
LAB_0023e9d4:
          pfVar9 = (float *)(lVar6 + 0xb0);
          pfVar11 = (float *)(lVar6 + 0xc0);
        }
        else {
          lVar6 = lVar6 + (ulong)*(uint *)(param_1 + 0x30);
          if (uVar4 == 2) goto LAB_0023e9d4;
LAB_0023e9b0:
          if (uVar4 == 1) {
            pfVar9 = (float *)(lVar6 + 0x90);
            pfVar11 = (float *)(lVar6 + 0xa0);
          }
          else {
            if (uVar4 != 0) goto LAB_0023e8f4;
            pfVar9 = (float *)(lVar6 + 0x70);
            pfVar11 = (float *)(lVar6 + 0x80);
          }
        }
        fVar19 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
        fVar18 = pfVar8[1] + pfVar8[3] * fVar19;
        fVar19 = *pfVar8 + pfVar8[2] * fVar19;
        *pfVar9 = fVar14 * fVar19;
        pfVar9[1] = -(fVar15 * fVar18);
        pfVar9[2] = 0.0;
        pfVar9[3] = fVar15 * fVar18 * 0.5 + ((fVar16 + 0.5) - fVar14 * fVar19 * 0.5);
        *pfVar11 = -(fVar14 * fVar18);
        pfVar11[1] = -(fVar15 * fVar19);
        pfVar11[2] = 0.0;
        pfVar11[3] = (fVar15 * fVar19 * 0.5 - ((fVar17 + 0.5) - fVar14 * fVar18 * 0.5)) + 1.0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
LAB_0023ea8c:
      uVar4 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar4 & 0x30) == 0) {
    *(undefined1 *)(param_2 + 0x188) = 0xff;
  }
  else {
    uVar4 = uVar4 >> 4 & 3;
    if ((((uVar4 == 0) ||
         (*(undefined1 *)(param_2 + 0x188) =
               *(undefined1 *)
                (*(long *)(param_1 + 0x18) +
                 ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
                 ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 1), uVar4 == 1)) ||
        (*(undefined1 *)(param_2 + 0x189) =
              *(undefined1 *)
               (*(long *)(param_1 + 0x18) +
                ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
                ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x11), uVar4 == 2)) ||
       (*(undefined1 *)(param_2 + 0x18a) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x18) +
               ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x21), uVar4 != 3)) {
      memset((void *)(param_2 + (ulong)(uVar4 | 0x188)),0xff,(ulong)(2 - uVar4) + 1);
    }
  }
  FUN_0023ef70(param_1,param_2,param_3,param_4);
  return;
}


