/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02944350; name: FUN_02944350
 */


void FUN_02944350(long param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined2 *puVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint *puVar18;
  char cVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  
  puVar12 = *(uint **)(param_1 + 0x58);
  if (*puVar12 == 4) {
    uVar15 = 1;
  }
  else if ((*(byte *)(param_1 + 0x13a) & 1) == 0) {
    if ((char)puVar12[0x436] == '\x06') {
      puVar18 = *(uint **)(*(long *)(param_1 + 0x390) + 0x1e8);
      uVar15 = *puVar18;
      uVar14 = (ulong)uVar15;
      if (uVar15 == 0) {
        uVar15 = *(uint *)(param_1 + 0x128);
        if (uVar15 == 8) {
          uVar15 = 1;
          *(undefined4 *)(param_1 + 0x128) = 1;
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x130);
        bVar6 = false;
        bVar5 = false;
        iVar16 = *(int *)(param_1 + 0x110);
        puVar18 = puVar18 + 1;
        do {
          bVar2 = (byte)*puVar18;
          if (iVar16 == 2) {
LAB_02944414:
            if (bVar2 < 5) {
              cVar19 = (&DAT_03a7ebe0)[bVar2];
            }
            else {
              cVar19 = '\x02';
            }
            if (bVar1 < 5) {
              cVar7 = (&DAT_03a7ebe0)[bVar1];
            }
            else {
LAB_029443d8:
              cVar7 = '\x02';
            }
          }
          else if (iVar16 == 1) {
            if (bVar2 < 5) {
              cVar19 = (&DAT_03a7ebe5)[bVar2];
            }
            else {
              cVar19 = '\x02';
            }
            if (4 < bVar1) goto LAB_029443d8;
            cVar7 = (&DAT_03a7ebe5)[bVar1];
          }
          else {
            if (iVar16 == 0) goto LAB_02944414;
            cVar19 = '\x02';
            cVar7 = '\x02';
          }
          uVar14 = uVar14 - 1;
          bVar5 = (bool)(bVar5 | cVar19 == cVar7);
          bVar6 = (bool)(bVar6 | cVar19 != cVar7);
          puVar18 = (uint *)((long)puVar18 + 1);
        } while (uVar14 != 0);
        if (bVar5) {
          uVar15 = 2;
          if (*puVar12 < 2) {
            uVar15 = 3;
          }
          if (!bVar6) {
            uVar15 = 3;
          }
        }
        else {
          uVar15 = 4;
        }
      }
    }
    else {
      uVar15 = 5;
    }
  }
  else {
    uVar15 = 6;
  }
  puVar12[0x435] = uVar15;
  lVar20 = *(long *)(param_1 + 0x58);
  if ((*(void **)(lVar20 + 0x10e8) != (void *)0x0) &&
     (puVar10 = *(ushort **)
                 (*(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x130) * 8 + 0x150) + 0xa0),
     puVar10 != (ushort *)0x0)) {
    uVar3 = *puVar10;
    memcpy(*(void **)(lVar20 + 0x10e8),puVar10 + 2,(ulong)uVar3);
    *(uint *)(*(long *)(param_1 + 0x58) + 0x10f0) = (uint)uVar3;
    *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10f8) = *(undefined8 *)(param_1 + 0x80);
    lVar20 = *(long *)(param_1 + 0x58);
  }
  if ((*(char *)(lVar20 + 0x54) == '\0') && (*(long *)(param_1 + 0x140) != 0)) {
    *(int *)(lVar20 + 0x110c) =
         (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x390) + 0x1c8) + 8);
    *(short *)(lVar20 + 0x1112) =
         (short)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x390) + 0x1c8) + 0x20);
    puVar13 = *(undefined2 **)(*(long *)(param_1 + 0x390) + 0x108);
    *(undefined2 *)(lVar20 + 0x1114) = *puVar13;
    *(undefined2 *)(lVar20 + 0x1116) = puVar13[1];
    *(undefined2 *)(lVar20 + 0x1118) = puVar13[2];
    *(undefined2 *)(lVar20 + 0x111a) = puVar13[3];
    *(undefined2 *)(lVar20 + 0x111c) = puVar13[5];
    if (*(int *)(*(long *)(param_1 + 0x58) + 0x10d4) == 1) {
      *(undefined2 *)(lVar20 + 0x111e) = 1;
    }
    lVar17 = *(long *)(param_1 + 0x390);
    lVar21 = *(long *)(lVar17 + 8);
    uVar14 = (ulong)*(byte *)(lVar21 + 0x38);
    if (uVar14 != 0) {
      lVar17 = 0;
      lVar23 = uVar14 - 1;
      while( true ) {
        if (((uint)lVar17 & 0xff) < (uint)uVar14) {
          lVar9 = *(long *)(lVar21 + 8 + lVar17 * 8);
        }
        else {
          lVar9 = 0;
        }
        *(ushort *)(lVar20 + 0x1124) =
             *(short *)(lVar20 + 0x1124) + (ushort)*(byte *)(lVar9 + 0x36c);
        sVar8 = FUN_029506a8(lVar9,0xd);
        *(short *)(lVar20 + 0x1110) = *(short *)(lVar20 + 0x1110) + sVar8;
        if (lVar23 == lVar17) break;
        uVar14 = (ulong)*(byte *)(lVar21 + 0x38);
        lVar17 = lVar17 + 1;
      }
      lVar17 = *(long *)(param_1 + 0x390);
    }
    lVar21 = *(long *)(lVar17 + 200);
    lVar17 = 0x18;
    do {
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(ushort *)(lVar20 + 0x1122) =
         (ushort)*(byte *)(lVar21 + 0x112) + (ushort)*(byte *)(lVar21 + 0x113) +
         (ushort)*(byte *)(lVar21 + 0x114) + (ushort)*(byte *)(lVar21 + 0x115) +
         (ushort)*(byte *)(lVar21 + 0x116) + (ushort)*(byte *)(lVar21 + 0x117);
    lVar17 = *(long *)(*(long *)(param_1 + 0x390) + 8);
    if (*(char *)(lVar17 + 0x70) == '\0') {
      iVar16 = 0;
      uVar14 = 0;
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
      do {
        lVar21 = *(long *)(lVar17 + 0x40 + uVar22 * 8);
        lVar23 = *(long *)(lVar21 + 0x60);
        uVar14 = FUN_02c6cf3c(*(undefined8 *)(lVar23 + 0x98));
        uVar11 = 0;
        if (((uVar14 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar23 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
          uVar11 = (uint)(*(short *)(lVar21 + 0x74) != 0);
        }
        iVar16 = iVar16 + uVar11;
        uVar14 = (ulong)*(byte *)(lVar17 + 0x70);
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar14);
    }
    uVar11 = (int)uVar14 * 0x1000000;
    bVar1 = 0;
    if ((uint)(iVar16 * 0x1000000) <= uVar11) {
      bVar1 = (byte)(uVar11 + iVar16 * -0x1000000 >> 0x18);
    }
    *(ushort *)(lVar20 + 0x1120) = (ushort)bVar1;
    uVar14 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                          *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),3);
    if ((uVar14 & 1) != 0) {
      lVar17 = *(long *)(*(long *)(param_1 + 0x390) + 8);
      if (*(char *)(lVar17 + 0xe0) == '\0') {
        iVar16 = 0;
        uVar14 = 0;
      }
      else {
        uVar22 = 0;
        iVar16 = 0;
        do {
          lVar21 = *(long *)(lVar17 + 0xb0 + uVar22 * 8);
          lVar23 = *(long *)(lVar21 + 0x60);
          uVar14 = FUN_02c6cf3c(*(undefined8 *)(lVar23 + 0x98));
          uVar11 = 0;
          if (((uVar14 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar23 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
            uVar11 = (uint)(*(short *)(lVar21 + 0x74) != 0);
          }
          iVar16 = iVar16 + uVar11;
          uVar14 = (ulong)*(byte *)(lVar17 + 0xe0);
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar14);
      }
      uVar11 = (int)uVar14 * 0x1000000;
      bVar1 = 0;
      if ((uint)(iVar16 * 0x1000000) <= uVar11) {
        bVar1 = (byte)(uVar11 + iVar16 * -0x1000000 >> 0x18);
      }
      *(ushort *)(lVar20 + 0x1120) = *(short *)(lVar20 + 0x1120) + (ushort)bVar1;
    }
  }
  FUN_029491b4(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x390),
               *(undefined8 *)(param_1 + 0x370),param_1,*(undefined1 *)(param_1 + 0x130));
  if ((*(long *)(param_1 + 0x140) != 0) || (*(long *)(param_1 + 0x148) != 0)) {
    FUN_02949bb4(*(undefined8 *)(param_1 + 0x58),param_1,*(undefined1 *)(param_1 + 0x130),uVar15);
  }
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x106f) == '\0') {
    uVar11 = *(uint *)(param_1 + 0x118);
    if ((*(byte *)(param_1 + 0x13a) >> 3 & 1) == 0) {
      uVar4 = (1 << (*(char *)(param_1 + 0x350) != '\0')) << (*(char *)(param_1 + 0x351) != '\0');
      if (1 < uVar4) {
        uVar11 = uVar4 * uVar11;
        if (0x1869e < uVar11) {
          uVar11 = 99999;
        }
      }
    }
  }
  else {
    uVar11 = 0;
  }
  if ((uVar15 == 0) || (uVar15 == 2)) {
    iVar16 = -*(int *)(param_1 + 0x11c);
  }
  else {
    if (uVar15 != 1) {
      return;
    }
    iVar16 = *(int *)(param_1 + 0x114) + uVar11;
  }
  *(int *)(*(long *)(param_1 + 0x58) + 0x10d0) = iVar16;
  return;
}


