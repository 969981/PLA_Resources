/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01617470; name: FUN_01617470
 */


void FUN_01617470(undefined8 *param_1,long param_2,ulong *param_3)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  size_t sVar5;
  undefined4 uVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined1 *puVar19;
  
  puVar19 = &DAT_cbf29ce484222645;
  *(undefined8 *)((long)param_1 + 0x5d) = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  param_1[4] = &DAT_cbf29ce484222645;
  param_1[5] = &DAT_03996322;
  param_1[8] = &DAT_cbf29ce484222645;
  param_1[9] = &DAT_03996322;
  param_1[0xd] = 0x1010100000000;
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((*(char *)(param_2 + 0x54) != '\0') && (uVar7 = *(ulong *)(param_2 + 0x80), uVar7 != 0)) {
    uVar9 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar14 = *param_3;
    uVar13 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar9 = uVar7 - 1;
    if (uVar13 < 2) {
      uVar16 = uVar9 & uVar14;
    }
    else if (uVar14 < uVar7) {
      uVar16 = uVar14;
    }
    else {
      uVar16 = 0;
      if (uVar7 != 0) {
        uVar16 = uVar14 / uVar7;
      }
      uVar16 = uVar14 - uVar16 * uVar7;
    }
    lVar15 = *(long *)(param_2 + 0x78);
    plVar10 = *(long **)(lVar15 + uVar16 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar10[1] == uVar14) {
            if (plVar10[2] == uVar14) goto LAB_01617680;
          }
          else if ((plVar10[1] & uVar9) != uVar16) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar10[1];
          if (uVar17 == uVar14) {
            if (plVar10[2] == uVar14) goto LAB_01617680;
          }
          else {
            if (uVar7 <= uVar17) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar17 / uVar7;
              }
              uVar17 = uVar17 - uVar3 * uVar7;
            }
            if (uVar17 != uVar16) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    if (uVar13 < 2) {
      uVar14 = uVar9 & 0xc821686521676f75;
      puVar11 = *(undefined8 **)(lVar15 + uVar14 * 8);
    }
    else if (uVar7 < 0xc821686521676f76) {
      uVar14 = 0;
      if (uVar7 != 0) {
        uVar14 = 0xc821686521676f75 / uVar7;
      }
      uVar14 = 0xc821686521676f75 - uVar14 * uVar7;
      puVar11 = *(undefined8 **)(lVar15 + uVar14 * 8);
    }
    else {
      uVar14 = 0xc821686521676f75;
      puVar11 = *(undefined8 **)(lVar15 + 0x410b43290b3b7ba8);
    }
    if ((puVar11 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar11, plVar10 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar10[1] == 0xc821686521676f75) {
            if (plVar10[2] == -0x37de979ade98908b) goto LAB_01617680;
          }
          else if ((plVar10[1] & uVar9) != uVar14) {
            return;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar10[1];
          if (uVar9 == 0xc821686521676f75) {
            if (plVar10[2] == -0x37de979ade98908b) {
LAB_01617680:
              piVar18 = (int *)plVar10[3];
              if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 5) ||
                 (uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2], uVar7 == 0)) {
                lVar15 = 0;
              }
              else {
                puVar1 = (uint *)((long)piVar18 + uVar7);
                lVar15 = (long)puVar1 + (ulong)*puVar1;
              }
              sVar5 = strlen((char *)(lVar15 + 4));
              bVar2 = *(byte *)(lVar15 + 4);
              puVar12 = &DAT_cbf29ce484222645;
              if (bVar2 != 0) {
                puVar12 = &DAT_cbf29ce484222645;
                pbVar8 = (byte *)(lVar15 + 5);
                do {
                  puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                } while (bVar2 != 0);
              }
              *param_1 = puVar12;
              param_1[1] = (char *)(lVar15 + 4);
              param_1[2] = sVar5;
              param_1[3] = 0;
              if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 7) ||
                 (uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[3], uVar7 == 0)) {
                lVar15 = 0;
              }
              else {
                puVar1 = (uint *)((long)piVar18 + uVar7);
                lVar15 = (long)puVar1 + (ulong)*puVar1;
              }
              sVar5 = strlen((char *)(lVar15 + 4));
              bVar2 = *(byte *)(lVar15 + 4);
              puVar12 = &DAT_cbf29ce484222645;
              if (bVar2 != 0) {
                puVar12 = &DAT_cbf29ce484222645;
                pbVar8 = (byte *)(lVar15 + 5);
                do {
                  puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                } while (bVar2 != 0);
              }
              param_1[4] = puVar12;
              param_1[5] = (char *)(lVar15 + 4);
              param_1[6] = sVar5;
              param_1[7] = 0;
              if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 9) ||
                 (uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[4], uVar7 == 0)) {
                lVar15 = 0;
              }
              else {
                puVar1 = (uint *)((long)piVar18 + uVar7);
                lVar15 = (long)puVar1 + (ulong)*puVar1;
              }
              sVar5 = strlen((char *)(lVar15 + 4));
              bVar2 = *(byte *)(lVar15 + 4);
              if (bVar2 != 0) {
                pbVar8 = (byte *)(lVar15 + 5);
                do {
                  puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                } while (bVar2 != 0);
              }
              param_1[8] = puVar19;
              param_1[9] = (char *)(lVar15 + 4);
              param_1[10] = sVar5;
              param_1[0xb] = 0;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0xd) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[6];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)(param_1 + 0xc) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x11) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[8];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x62) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0xf) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[7];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x61) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0xb) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[5];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 100) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x13) {
                uVar6 = 0;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[9];
                uVar6 = 0;
                if (uVar7 != 0) {
                  uVar6 = *(undefined4 *)((long)piVar18 + uVar7);
                }
              }
              *(undefined4 *)(param_1 + 0xd) = uVar6;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x15) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[10];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x6c) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x17) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xb];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x6d) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x19) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xc];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x6e) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x1b) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xd];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x6f) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x1d) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xe];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)(param_1 + 0xe) = bVar4;
              if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x1f) {
                bVar4 = false;
              }
              else {
                uVar7 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0xf];
                bVar4 = false;
                if (uVar7 != 0) {
                  bVar4 = *(char *)((long)piVar18 + uVar7) != '\0';
                }
              }
              *(bool *)((long)param_1 + 0x71) = bVar4;
              *(undefined1 *)((long)param_1 + 99) = 1;
              return;
            }
          }
          else {
            if (uVar7 <= uVar9) {
              uVar13 = 0;
              if (uVar7 != 0) {
                uVar13 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar13 * uVar7;
            }
            if (uVar9 != uVar14) {
              return;
            }
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  return;
}


