/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008810fc; name: FUN_008810fc
 */


void FUN_008810fc(long param_1,undefined1 *param_2,byte param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  int *piVar21;
  int *piVar22;
  undefined1 *puVar23;
  long lVar24;
  int iVar25;
  char *pcVar26;
  byte bVar27;
  ulong uVar28;
  ulong uVar29;
  int local_78 [6];
  
  uVar7 = *(undefined1 *)(*(long *)(param_1 + 0x58) + 0xf1);
  FUN_02940e84();
  uVar10 = FUN_0295e400();
  uVar10 = FUN_0294d654(uVar10,uVar7);
  if (param_3 != 0) {
    uVar28 = (ulong)param_3;
    if (param_4 == 0) {
      local_78[0] = 0;
      FUN_0294c474(uVar10,*param_2);
      uVar29 = FUN_0295082c();
      if ((uVar29 & 1) != 0) {
        local_78[0] = -2;
      }
      if (param_3 != 1) {
        local_78[1] = 0;
        FUN_0294c474(uVar10,param_2[1]);
        uVar29 = FUN_0295082c();
        if ((uVar29 & 1) != 0) {
          local_78[1] = 0xfffffffe;
        }
        if (param_3 != 2) {
          lVar11 = uVar28 - 2;
          puVar19 = param_2 + 2;
          piVar21 = local_78 + 2;
          do {
            *piVar21 = 0;
            FUN_0294c474(uVar10,*puVar19);
            uVar29 = FUN_0295082c();
            if ((uVar29 & 1) != 0) {
              *piVar21 = -2;
            }
            lVar11 = lVar11 + -1;
            puVar19 = puVar19 + 1;
            piVar21 = piVar21 + 1;
          } while (lVar11 != 0);
        }
      }
    }
    else {
      uVar29 = 0;
      do {
        local_78[uVar29] = 0;
        lVar11 = FUN_0294c474(uVar10,param_2[uVar29]);
        uVar12 = FUN_0295082c();
        if ((uVar12 & 1) == 0) {
          bVar6 = FUN_02951430(lVar11);
          if (bVar6 != 0) {
            uVar12 = 0;
            iVar25 = 0;
            pcVar26 = (char *)(lVar11 + 0x304);
            do {
              if ((((uint)uVar12 & 0xff) < (uint)*(byte *)(lVar11 + 0x368)) && (*pcVar26 != '\0')) {
                plVar15 = &DAT_0428af30 + (ulong)*(uint *)(pcVar26 + -4) * 6;
                lVar18 = *plVar15;
                if (lVar18 == 0) {
                  plVar16 = &DAT_0428af30;
                }
                else {
                  plVar16 = &DAT_0428af30;
                  if (*(char *)(lVar18 + 0x1e1) != '\0') {
                    plVar16 = plVar15;
                  }
                }
                piVar21 = (int *)((long)*(uint **)(*plVar16 + 0x250) +
                                 (ulong)**(uint **)(*plVar16 + 0x250));
                if (0xe < *(ushort *)((long)piVar21 - (long)*piVar21)) {
                  uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7];
                  if ((uVar20 != 0) && (*(char *)((long)piVar21 + uVar20) != '\0')) {
                    if (lVar18 == 0) {
                      plVar16 = &DAT_0428af30;
                    }
                    else {
                      plVar16 = &DAT_0428af30;
                      if (*(char *)(lVar18 + 0x1e1) != '\0') {
                        plVar16 = plVar15;
                      }
                    }
                    piVar21 = (int *)((long)*(uint **)(*plVar16 + 0x250) +
                                     (ulong)**(uint **)(*plVar16 + 0x250));
                    if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 9) ||
                       (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[4], uVar20 == 0
                       )) {
                      uVar7 = 0;
                      if (lVar18 == 0) goto LAB_00881528;
LAB_0088126c:
                      plVar16 = &DAT_0428af30;
                      if (*(char *)(lVar18 + 0x1e1) != '\0') {
                        plVar16 = plVar15;
                      }
                    }
                    else {
                      uVar7 = *(undefined1 *)((long)piVar21 + uVar20);
                      if (lVar18 != 0) goto LAB_0088126c;
LAB_00881528:
                      plVar16 = &DAT_0428af30;
                    }
                    piVar21 = (int *)((long)*(uint **)(*plVar16 + 0x250) +
                                     (ulong)**(uint **)(*plVar16 + 0x250));
                    if (((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xf) ||
                        (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[7],
                        uVar20 == 0)) || (bVar27 = *(byte *)((long)piVar21 + uVar20), bVar27 < 10))
                    {
                      bVar27 = 0x3c;
                    }
                    bVar3 = (*(byte *)(param_4 + 0x168) & 7) != 0;
                    bVar1 = *(byte *)(param_4 + 0x2dc);
                    uVar13 = (uint)bVar1;
                    bVar2 = *(byte *)(param_4 + 0x2dd);
                    uVar17 = (uint)bVar2;
                    bVar4 = bVar2 != 0x12;
                    bVar5 = bVar2 == 2;
                    if (*(char *)(param_4 + 0x389) < '\0') {
                      if (bVar1 == 0x12 || bVar1 == 2 && bVar3) {
                        uVar14 = 0x12;
                        uVar13 = 0x12;
                        if (!(bVar4 && (!bVar3 || !bVar5))) goto LAB_00881314;
                        goto LAB_0088130c;
                      }
                      if (!(bVar4 && (!bVar3 || !bVar5))) goto LAB_0088136c;
LAB_00881310:
                      uVar14 = uVar17;
                    }
                    else {
                      if (bVar1 == 0x12 || bVar1 == 2 && bVar3) {
                        uVar13 = 0;
                        if (bVar4 && (!bVar3 || !bVar5)) {
                          uVar13 = uVar17;
                        }
                        uVar17 = uVar13;
LAB_0088130c:
                        uVar13 = uVar17;
                        goto LAB_00881310;
                      }
                      if (!(!bVar4 || bVar3 && bVar5)) goto LAB_00881310;
LAB_0088136c:
                      uVar14 = (uint)bVar1;
                    }
LAB_00881314:
                    uVar8 = FUN_0293e2a0(uVar7,uVar13 & 0x1f | (uVar14 & 0x1f) << 5 |
                                               (*(byte *)(param_4 + 0x2de) & 0x1f) << 10);
                    iVar9 = FUN_0293eb50(bVar27,uVar8);
                    if (iVar25 < iVar9) {
                      local_78[uVar29] = iVar9;
                      iVar25 = iVar9;
                    }
                  }
                }
              }
              uVar12 = uVar12 + 1;
              pcVar26 = pcVar26 + 0x1c;
            } while (bVar6 != uVar12);
          }
        }
        else {
          local_78[uVar29] = -2;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar28);
    }
    lVar18 = uVar28 - 2;
    puVar19 = param_2 + 2;
    piVar21 = local_78 + 2;
    lVar11 = 1;
    uVar29 = 0;
    do {
      uVar12 = uVar29 + 1;
      if (uVar12 < uVar28) {
        iVar25 = local_78[uVar29];
        if (iVar25 < local_78[lVar11]) {
          local_78[uVar29] = local_78[lVar11];
          local_78[lVar11] = iVar25;
          uVar7 = param_2[uVar29];
          param_2[uVar29] = param_2[lVar11];
          param_2[lVar11] = uVar7;
        }
        if (lVar11 + 1U != uVar28) {
          piVar22 = piVar21;
          puVar23 = puVar19;
          lVar24 = lVar18;
          do {
            iVar25 = local_78[uVar29];
            if (iVar25 < *piVar22) {
              local_78[uVar29] = *piVar22;
              *piVar22 = iVar25;
              uVar7 = param_2[uVar29];
              param_2[uVar29] = *puVar23;
              *puVar23 = uVar7;
            }
            lVar24 = lVar24 + -1;
            puVar23 = puVar23 + 1;
            piVar22 = piVar22 + 1;
          } while (lVar24 != 0);
        }
      }
      lVar11 = lVar11 + 1;
      lVar18 = lVar18 + -1;
      puVar19 = puVar19 + 1;
      piVar21 = piVar21 + 1;
      uVar29 = uVar12;
    } while (uVar12 != uVar28);
  }
  return;
}


