/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6d3f0; name: FUN_02b6d3f0
 */


void FUN_02b6d3f0(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  
LAB_02b6d414:
  do {
    pbVar15 = param_2 + -8;
    pbVar16 = param_1;
LAB_02b6d420:
    param_1 = pbVar16;
    lVar12 = (long)param_2 - (long)param_1;
    uVar10 = lVar12 >> 3;
    switch(uVar10) {
    case 0:
    case 1:
      goto switchD_02b6d894_caseD_0;
    case 2:
      if (*pbVar15 == *param_1) {
        sVar6 = *(short *)(param_2 + -2);
        sVar5 = *(short *)(param_1 + 6);
        if (sVar6 == sVar5) {
          sVar6 = *(short *)(param_2 + -6);
          sVar5 = *(short *)(param_1 + 2);
        }
        if (sVar5 <= sVar6) {
          return;
        }
      }
      else if (*param_1 <= *pbVar15) {
        return;
      }
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)pbVar15;
      *(undefined8 *)pbVar15 = uVar13;
      return;
    case 3:
      FUN_02b6da90(param_1,param_1 + 8,pbVar15);
      return;
    case 4:
      FUN_02b6dc20(param_1,param_1 + 8,param_1 + 0x10,pbVar15);
      return;
    case 5:
      FUN_02b6dd70(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,pbVar15);
      return;
    default:
      if (lVar12 < 0xf8) {
        FUN_02b6da90(param_1,param_1 + 8,param_1 + 0x10);
        if (param_1 + 0x18 == param_2) {
          return;
        }
        lVar12 = 0;
        pbVar16 = param_1 + 0x18;
        pbVar15 = param_1 + 0x10;
        goto LAB_02b6d904;
      }
      uVar9 = uVar10;
      if ((long)uVar10 < 0) {
        uVar9 = uVar10 + 1;
      }
      pbVar16 = param_1 + ((long)uVar9 >> 1) * 8;
      if (lVar12 < 0x1f39) {
        iVar8 = FUN_02b6da90(param_1,pbVar16,pbVar15);
      }
      else {
        uVar9 = uVar10 + 3;
        if (-1 < (long)uVar10) {
          uVar9 = uVar10;
        }
        lVar12 = (uVar9 & 0x7ffffffffffffffc) * 2;
        iVar8 = FUN_02b6dd70(param_1,param_1 + lVar12,pbVar16,pbVar16 + lVar12,pbVar15);
      }
      bVar3 = *param_1;
      bVar4 = *pbVar16;
      if (bVar3 != bVar4) {
        if (bVar3 < bVar4) goto LAB_02b6d4cc;
LAB_02b6d4e4:
        if (param_1 != param_2 + -0x10) {
          pbVar11 = param_2 + -0x10;
          do {
            if (*pbVar11 == bVar4) {
              if (*(short *)(pbVar11 + 6) == *(short *)(pbVar16 + 6)) {
                if (*(short *)(pbVar11 + 2) < *(short *)(pbVar16 + 2)) {
LAB_02b6d54c:
                  uVar13 = *(undefined8 *)param_1;
                  iVar8 = iVar8 + 1;
                  *(undefined8 *)param_1 = *(undefined8 *)pbVar11;
                  *(undefined8 *)pbVar11 = uVar13;
                  goto LAB_02b6d560;
                }
              }
              else if (*(short *)(pbVar11 + 6) < *(short *)(pbVar16 + 6)) goto LAB_02b6d54c;
            }
            else if (*pbVar11 < bVar4) goto LAB_02b6d54c;
            pbVar11 = pbVar11 + -8;
          } while (param_1 != pbVar11);
        }
        pbVar11 = param_1 + 8;
        if (bVar3 == *pbVar15) {
          if (*(short *)(param_1 + 6) == *(short *)(param_2 + -2)) {
            if (*(short *)(param_2 + -6) <= *(short *)(param_1 + 2)) {
LAB_02b6d730:
              if (pbVar11 == pbVar15) {
                return;
              }
              pbVar11 = param_1 + 0x10;
              do {
                if (bVar3 == pbVar11[-8]) {
                  if (*(short *)(param_1 + 6) == *(short *)(pbVar11 + -2)) {
                    if (*(short *)(param_1 + 2) < *(short *)(pbVar11 + -6)) goto LAB_02b6d790;
                  }
                  else if (*(short *)(param_1 + 6) < *(short *)(pbVar11 + -2)) goto LAB_02b6d790;
                }
                else if (bVar3 < pbVar11[-8]) goto LAB_02b6d790;
                pbVar11 = pbVar11 + 8;
                if (param_2 == pbVar11) {
                  return;
                }
              } while( true );
            }
          }
          else if (*(short *)(param_2 + -2) <= *(short *)(param_1 + 6)) goto LAB_02b6d730;
        }
        else if (*pbVar15 <= bVar3) goto LAB_02b6d730;
        goto joined_r0x02b6d704;
      }
      if (*(short *)(param_1 + 6) != *(short *)(pbVar16 + 6)) {
        if (*(short *)(param_1 + 6) < *(short *)(pbVar16 + 6)) goto LAB_02b6d4cc;
        goto LAB_02b6d4e4;
      }
      if (*(short *)(pbVar16 + 2) <= *(short *)(param_1 + 2)) goto LAB_02b6d4e4;
LAB_02b6d4cc:
      pbVar11 = pbVar15;
LAB_02b6d560:
      pbVar18 = param_1 + 8;
      pbVar17 = pbVar18;
      if (pbVar18 < pbVar11) {
LAB_02b6d56c:
        bVar3 = *pbVar16;
        pbVar17 = pbVar18;
        do {
          pbVar18 = pbVar11;
          if (*pbVar17 == bVar3) {
            if (*(short *)(pbVar17 + 6) == *(short *)(pbVar16 + 6)) {
              if (*(short *)(pbVar16 + 2) <= *(short *)(pbVar17 + 2)) goto LAB_02b6d5c4;
            }
            else if (*(short *)(pbVar16 + 6) <= *(short *)(pbVar17 + 6)) goto LAB_02b6d5c4;
          }
          else if (bVar3 <= *pbVar17) goto LAB_02b6d5c4;
          pbVar17 = pbVar17 + 8;
        } while( true );
      }
LAB_02b6d62c:
      if (pbVar17 != pbVar16) {
        if (*pbVar16 == *pbVar17) {
          sVar5 = *(short *)(pbVar16 + 6);
          sVar6 = *(short *)(pbVar17 + 6);
          if (sVar5 == sVar6) {
            sVar5 = *(short *)(pbVar16 + 2);
            sVar6 = *(short *)(pbVar17 + 2);
          }
          if (sVar5 < sVar6) {
LAB_02b6d698:
            uVar13 = *(undefined8 *)pbVar17;
            iVar8 = iVar8 + 1;
            *(undefined8 *)pbVar17 = *(undefined8 *)pbVar16;
            *(undefined8 *)pbVar16 = uVar13;
          }
        }
        else if (*pbVar16 < *pbVar17) goto LAB_02b6d698;
      }
      if (iVar8 != 0) goto LAB_02b6d6d8;
      uVar10 = FUN_02b6df20(param_1,pbVar17);
      uVar9 = FUN_02b6df20(pbVar17 + 8,param_2);
      if ((uVar9 & 1) == 0) goto code_r0x02b6d6d4;
      param_2 = pbVar17;
      if ((uVar10 & 1) != 0) {
        return;
      }
    }
  } while( true );
LAB_02b6d904:
  pbVar11 = pbVar16;
  if (*pbVar11 == *pbVar15) {
    if (*(short *)(pbVar11 + 6) == *(short *)(pbVar15 + 6)) {
      if (*(short *)(pbVar11 + 2) < *(short *)(pbVar15 + 2)) {
LAB_02b6d958:
        uVar13 = *(undefined8 *)pbVar11;
        *(undefined8 *)pbVar11 = *(undefined8 *)pbVar15;
        if (pbVar15 != param_1) {
          lVar14 = lVar12;
          do {
            uVar1 = (uint)uVar13 & 0xff;
            if (param_1[lVar14 + 8] == uVar1) {
              sVar5 = (short)((ulong)uVar13 >> 0x30);
              if (*(short *)(param_1 + lVar14 + 0xe) == sVar5) {
                if ((int)*(short *)(param_1 + lVar14 + 10) <= (int)(uint)uVar13 >> 0x10) {
LAB_02b6d9c8:
                  pbVar15 = param_1 + lVar14 + 0x10;
                  goto LAB_02b6d8f0;
                }
              }
              else if (*(short *)(param_1 + lVar14 + 0xe) <= sVar5) goto LAB_02b6d9c8;
            }
            else if (param_1[lVar14 + 8] <= uVar1) goto LAB_02b6d9c8;
            bVar7 = lVar14 != -8;
            *(undefined8 *)(param_1 + lVar14 + 0x10) = *(undefined8 *)(param_1 + lVar14 + 8);
            lVar14 = lVar14 + -8;
          } while (bVar7);
          pbVar15 = param_1;
        }
LAB_02b6d8f0:
        *(undefined8 *)pbVar15 = uVar13;
      }
    }
    else if (*(short *)(pbVar11 + 6) < *(short *)(pbVar15 + 6)) goto LAB_02b6d958;
  }
  else if (*pbVar11 < *pbVar15) goto LAB_02b6d958;
  lVar12 = lVar12 + 8;
  pbVar16 = pbVar11 + 8;
  pbVar15 = pbVar11;
  if (pbVar11 + 8 == param_2) {
switchD_02b6d894_caseD_0:
    return;
  }
  goto LAB_02b6d904;
  while (pbVar18 = pbVar11, bVar3 <= *pbVar11) {
LAB_02b6d5c4:
    pbVar11 = pbVar18 + -8;
    if (*pbVar11 == bVar3) {
      pbVar2 = pbVar18 + -2;
      if (*(short *)pbVar2 == *(short *)(pbVar16 + 6)) {
        pbVar2 = pbVar18 + -6;
        pbVar18 = pbVar11;
        if (*(short *)pbVar2 < *(short *)(pbVar16 + 2)) break;
      }
      else {
        pbVar18 = pbVar11;
        if (*(short *)pbVar2 < *(short *)(pbVar16 + 6)) break;
      }
      goto LAB_02b6d5c4;
    }
  }
  if (pbVar11 < pbVar17) goto LAB_02b6d62c;
  uVar13 = *(undefined8 *)pbVar17;
  iVar8 = iVar8 + 1;
  pbVar2 = pbVar11;
  if (pbVar16 != pbVar17) {
    pbVar2 = pbVar16;
  }
  pbVar18 = pbVar17 + 8;
  *(undefined8 *)pbVar17 = *(undefined8 *)pbVar11;
  *(undefined8 *)pbVar11 = uVar13;
  pbVar16 = pbVar2;
  goto LAB_02b6d56c;
code_r0x02b6d6d4:
  pbVar16 = pbVar17 + 8;
  if ((uVar10 & 1) == 0) {
LAB_02b6d6d8:
    if ((long)param_2 - (long)pbVar17 <= (long)pbVar17 - (long)param_1) {
      FUN_02b6d3f0(pbVar17 + 8,param_2);
      param_2 = pbVar17;
      goto LAB_02b6d414;
    }
    FUN_02b6d3f0(param_1,pbVar17);
    pbVar16 = pbVar17 + 8;
  }
  goto LAB_02b6d420;
LAB_02b6d790:
  uVar13 = *(undefined8 *)(pbVar11 + -8);
  *(undefined8 *)(pbVar11 + -8) = *(undefined8 *)pbVar15;
  *(undefined8 *)pbVar15 = uVar13;
joined_r0x02b6d704:
  if (pbVar11 == pbVar15) {
    return;
  }
  pbVar18 = pbVar15;
LAB_02b6d7ac:
  bVar3 = *param_1;
  pbVar16 = pbVar11;
  do {
    pbVar11 = pbVar18;
    if (bVar3 == *pbVar16) {
      if (*(short *)(param_1 + 6) == *(short *)(pbVar16 + 6)) {
        if (*(short *)(param_1 + 2) < *(short *)(pbVar16 + 2)) break;
      }
      else if (*(short *)(param_1 + 6) < *(short *)(pbVar16 + 6)) break;
    }
    else if (bVar3 < *pbVar16) break;
    pbVar16 = pbVar16 + 8;
  } while( true );
  while (pbVar11 = pbVar18, bVar3 < *pbVar18) {
LAB_02b6d804:
    pbVar18 = pbVar11 + -8;
    if (bVar3 == *pbVar18) {
      pbVar17 = pbVar11 + -2;
      if (*(short *)(param_1 + 6) == *(short *)pbVar17) {
        pbVar17 = pbVar11 + -6;
        pbVar11 = pbVar18;
        if (*(short *)pbVar17 <= *(short *)(param_1 + 2)) break;
      }
      else {
        pbVar11 = pbVar18;
        if (*(short *)pbVar17 <= *(short *)(param_1 + 6)) break;
      }
      goto LAB_02b6d804;
    }
  }
  if (pbVar18 <= pbVar16) goto LAB_02b6d420;
  uVar13 = *(undefined8 *)pbVar16;
  pbVar11 = pbVar16 + 8;
  *(undefined8 *)pbVar16 = *(undefined8 *)pbVar18;
  *(undefined8 *)pbVar18 = uVar13;
  goto LAB_02b6d7ac;
}


