/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00227ae4; name: FUN_00227ae4
 */


undefined8 FUN_00227ae4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  
  uVar6 = *(ushort *)(param_1 + 0x38);
  if (*(ushort *)(param_1 + 0x3a) <= uVar6) {
    return 0;
  }
  if (param_3 != 0) {
    if ((*(char *)(param_3 + 0x1d) == '\x04') || (*(char *)(param_3 + 0x1d) == '\x02')) {
      uVar12 = (ulong)*(uint *)(param_3 + 0x20);
      bVar13 = *(byte *)(param_3 + 0x1c);
    }
    else {
      uVar12 = 0x20;
      bVar13 = *(byte *)(param_3 + 0x1c);
    }
    if (bVar13 != 0) {
      uVar14 = 0;
      bVar15 = 1;
      do {
        piVar2 = (int *)(param_3 + (ulong)*(uint *)(param_3 + uVar12 + uVar14 * 4));
        bVar11 = *(byte *)(piVar2 + 1);
        if (bVar11 != 0) {
          uVar16 = 0;
          bVar13 = bVar15;
LAB_00227c24:
          do {
            pbVar3 = (byte *)((long)piVar2 + (ulong)(uint)piVar2[uVar16 + 2]);
            iVar5 = *piVar2;
            bVar15 = bVar13;
            if (0x50544c45 < iVar5) {
              if (iVar5 < 0x53464c46) {
                if (iVar5 == 0x50544c46) {
                  bVar15 = 0;
                  if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
                    bVar15 = bVar13;
                  }
                  if (((*(byte *)(param_2 + 0x14) & 3) <= *pbVar3 || pbVar3[2] != 1) ||
                      pbVar3[1] != 0) {
                    bVar15 = 0;
                  }
                  if (*(short *)(*(long *)(param_1 + 0x18) + 0xc) != 0) {
                    uVar9 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x30))();
                    if ((uVar9 & 1) == 0) {
                      bVar15 = 0;
                    }
                    else {
                      uVar9 = 1;
                      do {
                        if (*(ushort *)(*(long *)(param_1 + 0x18) + 0xc) <= uVar9)
                        goto LAB_00227e14;
                        uVar10 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + uVar9 * 8) +
                                             0x30))();
                        uVar9 = uVar9 + 1;
                      } while ((uVar10 & 1) != 0);
                      bVar15 = 0;
                    }
LAB_00227e14:
                    bVar11 = *(byte *)(piVar2 + 1);
                    uVar16 = uVar16 + 1;
                    bVar13 = bVar15;
                    if (bVar11 <= uVar16) break;
                    goto LAB_00227c24;
                  }
                }
                else if (iVar5 == 0x52425446) {
                  bVar4 = 0;
                  if (*pbVar3 < 3) {
                    bVar4 = bVar13;
                  }
                  if ((*(uint *)(param_2 + 0x10) >> 0x14 & 3) <= (uint)*pbVar3) {
                    bVar4 = 0;
                  }
                  bVar15 = 0;
                  if (pbVar3[1] < 7) {
                    bVar15 = bVar4;
                  }
                  goto LAB_00227c0c;
                }
              }
              else {
                if (iVar5 == 0x53464c46) {
                  bVar8 = (*(byte *)(param_2 + 0x11) & 0x80) != 0;
                  bVar7 = !bVar8 || 5 < pbVar3[1];
                  bVar8 = bVar8 && pbVar3[1] == 6;
                  goto LAB_00227c08;
                }
                if (iVar5 == 0x53544c46) {
                  bVar4 = 0;
                  if (*pbVar3 < 3) {
                    bVar4 = bVar13;
                  }
                  if ((*(byte *)(param_2 + 0x10) >> 2 & 3) <= *pbVar3) {
                    bVar4 = 0;
                  }
                  bVar15 = 0;
                  if (pbVar3[1] < 5) {
                    bVar15 = bVar4;
                  }
                  goto LAB_00227c0c;
                }
              }
LAB_00227c18:
              uVar16 = uVar16 + 1;
              bVar13 = bVar15;
              if (bVar11 <= uVar16) break;
              goto LAB_00227c24;
            }
            if (0x434d4c45 < iVar5) {
              if (iVar5 == 0x434d4c46) {
                bVar7 = 0x36 < pbVar3[1];
                bVar8 = pbVar3[1] == 0x37;
              }
              else {
                if (iVar5 != 0x4d494c46) goto LAB_00227c18;
                bVar8 = (*(byte *)(param_2 + 0x11) & 0x10) != 0;
                bVar7 = !bVar8 || 1 < pbVar3[1];
                bVar8 = bVar8 && pbVar3[1] == 2;
              }
LAB_00227c08:
              bVar15 = 0;
              if (!bVar7 || bVar8) {
                bVar15 = bVar13;
              }
LAB_00227c0c:
              if (pbVar3[2] != 2) {
                bVar15 = 0;
              }
              goto LAB_00227c18;
            }
            if (iVar5 != 0x41475646) {
              if (iVar5 != 0x43414c46) goto LAB_00227c18;
              bVar15 = bVar13 & (char)(*(char *)(param_2 + 0x11) << 6) >> 7;
              if (pbVar3[2] != 2 || pbVar3[1] != 0) {
                bVar15 = 0;
              }
              uVar16 = uVar16 + 1;
              bVar13 = bVar15;
              if (bVar11 <= uVar16) break;
              goto LAB_00227c24;
            }
            bVar15 = 0;
            if (*pbVar3 < 3) {
              bVar15 = bVar13;
            }
            if (((*(uint *)(param_2 + 0x10) >> 0x12 & 3) <= (uint)*pbVar3 || pbVar3[1] != 0) ||
                pbVar3[2] != 2) {
              bVar15 = 0;
            }
            uVar16 = uVar16 + 1;
            bVar13 = bVar15;
          } while (uVar16 < bVar11);
          bVar13 = *(byte *)(param_3 + 0x1c);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < bVar13);
      if (bVar15 == 0) {
        return 1;
      }
    }
    uVar6 = *(ushort *)(param_1 + 0x38);
  }
  *(ushort *)(param_1 + 0x38) = uVar6 + 1;
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar6 * 0x10);
  *plVar1 = param_2;
  plVar1[1] = param_3;
  return 1;
}


