/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c433bc; name: FUN_02c433bc
 */


void FUN_02c433bc(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  ushort uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (((*(char *)(param_1 + 0x3d0) == '\0') && (*(long *)(param_1 + 0x88) != 0)) &&
     ((*(char *)(param_1 + 0x670) == '\0' || (*(char *)(param_1 + 0x550) != '\0')))) {
    if (*(char *)(param_1 + 0x671) == '\0') {
      lVar8 = (long)*(int *)(param_1 + 0x278);
      if (*(int *)(param_1 + 0x278) < 1) {
        return;
      }
      pcVar10 = (char *)(*(long *)(param_1 + 600) + 10);
      if (*(char *)(*(long *)(param_1 + 600) + 8) != '\0') goto LAB_02c434cc;
      do {
        do {
          pcVar2 = pcVar10 + 0x48;
          lVar8 = lVar8 + -1;
          if (lVar8 == 0) {
            return;
          }
          pcVar1 = pcVar10 + 0x46;
          pcVar10 = pcVar2;
        } while (*pcVar1 == '\0');
LAB_02c434cc:
      } while ((*pcVar10 == '\0') || (pcVar10[-1] == '\0'));
    }
    lVar8 = FUN_010b6d94();
    iVar5 = *(int *)(lVar8 + 200);
    lVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar17 = (float)((double)*(long *)(lVar8 + 8) /
                    (double)(*(long *)(&DAT_03a848e0 + (long)iVar5 * 8) + -1));
    (**(code **)(**(long **)(param_1 + 0x88) + 0x58))(fVar17);
    if (*(int *)(param_1 + 0x278) != 0) {
      uVar12 = 0;
      lVar8 = 0x38;
      do {
        pfVar3 = (float *)(*(long *)(param_1 + 600) + lVar8);
        if ((((*(char *)(pfVar3 + -0xc) != '\0') && (*(char *)((long)pfVar3 + -0x2e) != '\0')) &&
            (*(char *)((long)pfVar3 + -0x2f) != '\0')) &&
           ((*(long *)(pfVar3 + -10) != 0 && (*(char *)((long)pfVar3 + -0x2d) != '\0')))) {
          fVar18 = *pfVar3 * fVar17;
          fVar19 = *(float *)(*(long *)(pfVar3 + -10) + 0x20);
          uVar7 = FUN_00227728();
          fVar20 = (float)uVar7;
          uVar9 = FUN_00227744(*(undefined8 *)(pfVar3 + -10));
          if ((uVar9 & 1) == 0) {
            bVar6 = false;
            if ((0.0 < fVar18) && (bVar6 = false, !NAN(fVar19) && !NAN(fVar20))) {
              bVar6 = fVar19 == fVar20;
            }
            if ((bVar6) || ((fVar18 < 0.0 && (fVar19 == 0.0)))) {
              lVar11 = *(long *)(param_1 + 600);
              *(undefined1 *)(param_1 + 0x671) = 1;
              lVar4 = lVar11 + lVar8;
              if (*(char *)(lVar4 + -0x2c) != '\0') {
                uVar9 = (ulong)*(uint *)(param_1 + 0x278);
                if ((uVar12 < uVar9) && (*(char *)(lVar4 + -0x30) != '\0')) {
                  plVar15 = *(long **)(lVar4 + -0x28);
                  if (plVar15 != (long *)0x0) {
                    *(undefined1 *)(lVar4 + -0x2d) = 0;
                    (**(code **)(*plVar15 + 0x20))(plVar15,0);
                    uVar9 = (ulong)*(uint *)(param_1 + 0x278);
                  }
                  if ((uVar12 < uVar9) &&
                     (lVar4 = *(long *)(param_1 + 600) + lVar8, *(char *)(lVar4 + -0x30) != '\0')) {
                    FUN_00227728(*(undefined8 *)(lVar4 + -0x28));
                    *(undefined4 *)(*(long *)(*(long *)(param_1 + 600) + lVar8 + -0x28) + 0x20) = 0;
                    *(undefined1 *)(param_1 + 0x671) = 1;
                  }
                }
                *(undefined1 *)(*(long *)(param_1 + 600) + lVar8 + -0x2c) = 0;
                lVar11 = *(long *)(param_1 + 600);
              }
              *(undefined1 *)(lVar11 + lVar8 + -0x2f) = 0;
              goto LAB_02c434f8;
            }
            fVar18 = fVar18 + fVar19;
            fVar19 = fVar18;
            if (fVar20 < fVar18) {
              fVar19 = fVar20;
            }
            fVar16 = 0.0;
            if (0.0 <= fVar18) {
              fVar16 = fVar19;
            }
          }
          else {
            fVar18 = fVar18 + fVar19;
            fVar16 = fVar18;
            if (fVar20 <= fVar18) {
              fVar16 = fVar18 - fVar20;
            }
            if (fVar18 <= 0.0) {
              fVar16 = fVar18 + fVar20;
            }
          }
          *(float *)(*(long *)(pfVar3 + -10) + 0x20) = fVar16;
        }
LAB_02c434f8:
        uVar12 = uVar12 + 1;
        lVar8 = lVar8 + 0x48;
      } while (uVar12 < *(uint *)(param_1 + 0x278));
    }
    puVar14 = *(undefined8 **)(param_1 + 0x2f0);
    for (puVar13 = *(undefined8 **)(param_1 + 0x2e8); puVar13 != puVar14; puVar13 = puVar13 + 4) {
      plVar15 = (long *)*puVar13;
      lVar8 = *plVar15;
      if (*(char *)(lVar8 + 0x24) == '\0') {
        *(undefined1 *)((long)plVar15 + 0x32) = 0;
      }
      else if ((*(byte *)(lVar8 + 0x44) & 1) == 0) {
        if ((*(char *)((long)plVar15 + 0x32) != '\0') &&
           (*(undefined2 *)((long)plVar15 + 0x31) = 0, (char)plVar15[6] != '\0')) {
          FUN_00227738(lVar8,0);
          *(undefined4 *)(lVar8 + 0x3c) = 0;
          *(undefined1 *)((long)plVar15 + 0x31) = 0;
        }
      }
      else {
        *(undefined1 *)((long)plVar15 + 0x32) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x3d0) = 1;
    *(undefined1 *)(param_1 + 0x671) = 0;
  }
  return;
}


