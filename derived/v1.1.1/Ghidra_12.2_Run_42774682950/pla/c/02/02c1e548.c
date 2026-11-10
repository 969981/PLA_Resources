/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1e548; name: FUN_02c1e548
 */


void FUN_02c1e548(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_ec;
  
  if ((*(char *)(param_1 + 0x920) == '\0') || (*(long *)(param_1 + 0x8f0) == 0)) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x928));
  uVar11 = 0;
  uVar13 = 0;
  uVar9 = 0;
  local_ec = 0;
  fVar19 = (float)*(undefined8 *)(param_1 + 0x8d0);
  fVar21 = (float)*(undefined8 *)(param_1 + 0x8d8);
  fVar22 = (float)*(int *)(param_1 + 0x8c0);
  fVar26 = *(float *)(param_1 + 0x900);
  fVar16 = ((float)*(undefined8 *)(param_1 + 0x8e0) - fVar19) / fVar22;
  iVar2 = *(int *)(*(long *)(param_1 + 0x8f0) + 0x68);
  fVar32 = ((float)*(undefined8 *)(param_1 + 0x8e8) - fVar21) / fVar22;
  fVar23 = (float)*(undefined8 *)(param_1 + 0x918);
  fVar29 = (float)iVar2 / ((float)*(undefined8 *)(param_1 + 0x910) - fVar26);
  fVar22 = fVar22 + -0.001;
  do {
    fVar24 = (float)(&DAT_03a841fc)[uVar11];
    if (fVar24 < fVar22) {
      fVar17 = (float)(&DAT_03a8423c)[uVar11];
      do {
        if (fVar17 < fVar22) {
          fVar20 = fVar19 + fVar16 * 0.5 + fVar16 * fVar24;
          iVar15 = (int)(fVar29 * (fVar20 - fVar26));
          if ((iVar15 < iVar2) && (-1 < iVar15)) {
            fVar31 = fVar17;
            do {
              fVar30 = fVar21 + fVar32 * 0.5 + fVar32 * fVar31;
              lVar8 = *(long *)(param_1 + 0x8f0);
              iVar3 = *(int *)(lVar8 + 0x6c);
              iVar7 = iVar3 - (int)(fVar29 * (fVar23 - fVar30));
              if ((-1 < iVar7) && (iVar4 = *(int *)(lVar8 + 0x68), iVar7 < iVar4)) {
                iVar5 = *(int *)(lVar8 + 0x60);
                lVar10 = (long)(iVar15 + iVar4 * iVar7);
                lVar12 = *(long *)(lVar8 + 0x58);
                if (iVar5 == 4) {
                  uVar14 = *(uint *)(lVar8 + 100);
                  if (*(char *)(lVar12 + (long)(int)uVar14 + lVar10 * 4) != '\0') {
LAB_02c1e758:
                    fVar28 = fVar30 * *(float *)(param_1 + 0x87c);
                    fVar27 = fVar20 * *(float *)(param_1 + 0x87c);
                    fVar18 = (float)FUN_02c1e96c(fVar27,fVar28,*(undefined4 *)(param_1 + 0x890),
                                                 param_1);
                    fVar27 = (float)FUN_02c1e96c(fVar27,fVar28,*(undefined4 *)(param_1 + 0x894),
                                                 param_1);
                    fVar28 = (float)FUN_02c1e96c(fVar20 * *(float *)(param_1 + 0x880),
                                                 fVar30 * *(float *)(param_1 + 0x880),
                                                 *(undefined4 *)(param_1 + 0x898),param_1);
                    fVar18 = fVar20 + fVar16 * fVar18 * *(float *)(param_1 + 0x88c);
                    iVar7 = (int)(fVar29 * (fVar18 - fVar26));
                    if ((-1 < iVar7) && (iVar7 < iVar2)) {
                      fVar30 = fVar30 + fVar32 * fVar27 * *(float *)(param_1 + 0x88c);
                      iVar3 = iVar3 - (int)(fVar29 * (fVar23 - fVar30));
                      if ((-1 < iVar3) && (iVar3 < iVar4)) {
                        fVar27 = *(float *)(param_1 + 0x884);
                        lVar8 = (long)(iVar7 + iVar3 * iVar4);
                        fVar25 = *(float *)(param_1 + 0x888);
                        if (iVar5 == 4) {
                          if (*(char *)(lVar12 + lVar8 * 4 + (long)(int)uVar14) != '\0') {
LAB_02c1e850:
                            if ((((fVar30 < (float)*(undefined8 *)(param_1 + 0x918)) &&
                                 ((float)*(undefined8 *)(param_1 + 0x900) < fVar18)) &&
                                ((float)*(undefined8 *)(param_1 + 0x908) < fVar30)) &&
                               (fVar18 < (float)*(undefined8 *)(param_1 + 0x910))) {
                              lVar8 = *(long *)(param_1 + 0x860);
                              FUN_02bc0574(lVar8);
                              puVar6 = (undefined8 *)(*(long *)(lVar8 + 0xa8) + uVar13 * 0x10);
                              puVar6[1] = (ulong)(uint)(fVar27 + (fVar28 + 1.0) * 0.5 *
                                                                 (fVar25 - fVar27));
                              *puVar6 = CONCAT44(fVar30,fVar18);
                              uVar13 = (ulong)((int)uVar13 + 1);
                            }
                          }
                        }
                        else if (((int)*(char *)(lVar12 + lVar8) << (ulong)((uVar14 & 0xf) << 1) &
                                 0x80U) != 0) goto LAB_02c1e850;
                      }
                    }
                  }
                }
                else {
                  uVar14 = *(uint *)(lVar8 + 100);
                  if (((int)*(char *)(lVar12 + lVar10) << (ulong)((uVar14 & 0xf) << 1) & 0x80U) != 0
                     ) goto LAB_02c1e758;
                }
              }
              fVar31 = fVar31 + 4.0;
            } while (fVar31 < fVar22);
          }
        }
        fVar24 = fVar24 + 4.0;
      } while (fVar24 < fVar22);
    }
    if (uVar11 == uVar9) {
      uVar1 = (ulong)local_ec;
      uVar14 = local_ec & 0x1f;
      local_ec = local_ec + 1;
      uVar9 = (ulong)((2 << (ulong)uVar14) - 1);
      *(int *)(param_1 + uVar1 * 4 + 0x868) = (int)uVar13;
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x10) {
      *(undefined1 *)(param_1 + 0x920) = 0;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x928));
      return;
    }
  } while( true );
}


