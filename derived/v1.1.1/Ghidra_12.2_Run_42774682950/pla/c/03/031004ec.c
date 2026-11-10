/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031004ec; name: FUN_031004ec
 */


void FUN_031004ec(long *param_1,float *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  
  lVar9 = *param_1;
  if (*(int *)(lVar9 + 0x15d4) < 1) {
    return;
  }
  lVar6 = 0;
  lVar7 = 0;
  iVar8 = 0;
  lVar10 = 0x148;
  lVar11 = 4;
  fVar12 = (float)*(undefined8 *)param_2;
  fVar13 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_2 + 2);
  if (*(char *)(lVar9 + 0x1688) != '\0') goto LAB_03100554;
  do {
    iVar8 = iVar8 + 1;
    pfVar3 = (float *)(*(long *)(lVar9 + 0x15c0) + lVar11);
    fVar15 = *pfVar3;
    fVar16 = pfVar3[1];
    pfVar4 = (float *)(*(long *)(lVar9 + 0x15c0) + lVar11);
    pfVar4[2] = fVar14 + pfVar3[2];
    pfVar4[3] = pfVar3[3] + 0.0;
    *pfVar4 = fVar12 + fVar15;
    pfVar4[1] = fVar13 + fVar16;
    pfVar3 = (float *)(param_1[3] + lVar6);
    cVar2 = *(char *)(pfVar3 + 9);
    if (cVar2 == '\x10' || cVar2 == '\b') {
      auVar19._0_4_ = fVar12 * *pfVar3;
      auVar19._4_4_ = fVar13 * pfVar3[1];
      auVar19._8_4_ = fVar14 * pfVar3[2];
      auVar19._12_4_ = pfVar3[3] * 0.0;
      auVar20 = NEON_ext(auVar19,auVar19,8,1);
      pfVar3[3] = pfVar3[3] - (auVar19._0_4_ + auVar19._4_4_ + auVar20._0_4_);
      if (cVar2 == '\x10') {
        pfVar3 = (float *)(param_1[5] + lVar10);
        fVar15 = *param_2;
        fVar16 = param_2[1];
        *(ulong *)(pfVar3 + -0x48) = (ulong)(uint)(pfVar3[-0x48] + param_2[2]);
        *(ulong *)(pfVar3 + -0x4a) = CONCAT44(pfVar3[-0x49] + fVar16,pfVar3[-0x4a] + fVar15);
        uVar21 = *(undefined8 *)(pfVar3 + -0x4f);
        fVar15 = *param_2;
        fVar16 = param_2[1];
        fVar17 = param_2[2];
        fVar18 = param_2[3];
        pfVar3[-0x50] = pfVar3[-0x50] + fVar17;
        pfVar3[-0x4f] = pfVar3[-0x4f] + fVar18;
        pfVar3[-0x52] = pfVar3[-0x52] + fVar15;
        pfVar3[-0x51] = pfVar3[-0x51] + fVar16;
        *(ulong *)(pfVar3 + -0x4f) =
             CONCAT44(fVar16 + (float)((ulong)uVar21 >> 0x20),fVar15 + (float)uVar21);
        pfVar3[-0x4d] = fVar17 + pfVar3[-0x4d];
        uVar21 = *(undefined8 *)(param_2 + 2);
        fVar15 = (float)*(undefined8 *)param_2;
        fVar16 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        pfVar3[-5] = pfVar3[-5] + fVar15;
        pfVar3[-4] = pfVar3[-4] + fVar16;
        pfVar3[-3] = pfVar3[-3] + (float)uVar21;
        *(ulong *)(pfVar3 + -2) =
             CONCAT44(fVar16 + (float)((ulong)*(undefined8 *)(pfVar3 + -2) >> 0x20),
                      fVar15 + (float)*(undefined8 *)(pfVar3 + -2));
        *pfVar3 = (float)uVar21 + *pfVar3;
      }
    }
    do {
      lVar9 = *param_1;
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x150;
      lVar6 = lVar6 + 0x28;
      lVar11 = lVar11 + 0x14;
      if (*(int *)(lVar9 + 0x15d4) <= iVar8) {
        if (*(int *)(lVar9 + 0x15d4) < 1) {
          return;
        }
        if (*(char *)(lVar9 + 0x15de) == '\0') {
          return;
        }
        lVar10 = 0;
        lVar7 = 0;
        iVar8 = 0;
        if (*(char *)(lVar9 + 0x1688) != '\0') goto LAB_03100688;
        goto LAB_03100694;
      }
      if (*(char *)(lVar9 + 0x1688) == '\0') break;
LAB_03100554:
    } while (*(char *)(*(long *)(lVar9 + 0x1690) + lVar7) == '\0');
  } while( true );
LAB_03100694:
  puVar1 = (undefined8 *)(param_1[0xb] + lVar10);
  iVar8 = iVar8 + 1;
  if (*(char *)((long)puVar1 + 0x24) == '\x10' || *(char *)((long)puVar1 + 0x24) == '\b') {
    fVar15 = fVar12 * (float)*puVar1;
    fVar16 = fVar13 * (float)((ulong)*puVar1 >> 0x20);
    fVar17 = fVar14 * (float)puVar1[1];
    fVar18 = (float)((ulong)puVar1[1] >> 0x20) * 0.0;
    auVar20._4_4_ = fVar16;
    auVar20._0_4_ = fVar15;
    auVar20._8_4_ = fVar17;
    auVar20._12_4_ = fVar18;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar15;
    auVar5._8_4_ = fVar17;
    auVar5._12_4_ = fVar18;
    auVar19 = NEON_ext(auVar20,auVar5,8,1);
    *(float *)((long)puVar1 + 0xc) =
         *(float *)((long)puVar1 + 0xc) - (fVar15 + fVar16 + auVar19._0_4_);
    lVar9 = *param_1;
  }
  do {
    lVar7 = lVar7 + 1;
    lVar10 = lVar10 + 0x28;
    if (*(int *)(lVar9 + 0x15d4) <= iVar8) {
      return;
    }
    if (*(char *)(lVar9 + 0x1688) == '\0') break;
LAB_03100688:
  } while (*(char *)(*(long *)(lVar9 + 0x1690) + lVar7) == '\0');
  goto LAB_03100694;
}


