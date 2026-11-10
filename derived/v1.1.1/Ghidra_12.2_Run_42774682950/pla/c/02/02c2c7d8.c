/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2c7d8; name: FUN_02c2c7d8
 */


undefined8 FUN_02c2c7d8(long param_1,ushort *param_2)

{
  uint uVar1;
  ushort *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  long lVar11;
  ushort *puVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar6 = (ushort *)(param_1 + 0x23c);
  puVar12 = param_2 + 1;
  if (9 < *param_2 - 0x11 && *param_2 != 0x1b) {
    puVar12 = param_2;
  }
  uVar15 = 0x400;
  memset(puVar6,0,0x400);
  iVar4 = 0;
  do {
    while( true ) {
      uVar7 = *puVar12;
      *puVar6 = uVar7;
      if (uVar7 == 0x10) break;
      if (uVar7 == 0) goto LAB_02c2c934;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
      iVar4 = iVar4 + 1;
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) goto LAB_02c2c924;
    }
    uVar7 = puVar12[1];
    uVar1 = uVar7 + 2;
    bVar3 = uVar15 < uVar1;
    uVar15 = uVar15 - uVar1;
    if (bVar3 || uVar15 == 0) {
      *puVar6 = 0;
      goto LAB_02c2c934;
    }
    uVar9 = uVar7 + 1;
    uVar14 = uVar9 & 7;
    puVar10 = puVar6 + 1;
    *puVar10 = uVar7;
    puVar2 = puVar12 + 1;
    puVar8 = puVar12;
    if (uVar14 != 0) {
      lVar5 = 0;
      do {
        lVar11 = lVar5;
        uVar9 = uVar9 - 1;
        uVar14 = uVar14 - 1;
        *(undefined2 *)((long)puVar6 + lVar11 + 4) = *(undefined2 *)((long)puVar12 + lVar11 + 4);
        lVar5 = lVar11 + 2;
      } while (uVar14 != 0);
      puVar10 = (ushort *)((long)puVar6 + lVar11 + 4);
      puVar8 = (ushort *)((long)puVar12 + lVar11 + 2);
      puVar2 = puVar8 + 1;
      puVar6 = puVar10;
    }
    puVar12 = puVar2;
    if (6 < uVar7) {
      puVar6 = puVar10;
      do {
        puVar6[1] = puVar8[2];
        puVar6[2] = puVar12[2];
        puVar6[3] = puVar12[3];
        puVar6[4] = puVar12[4];
        puVar6[5] = puVar12[5];
        puVar6[6] = puVar12[6];
        puVar8 = puVar12 + 7;
        puVar6[7] = *puVar8;
        puVar12 = puVar12 + 8;
        uVar9 = uVar9 - 8;
        puVar6 = puVar6 + 8;
        *puVar6 = *puVar12;
      } while (uVar9 != 0);
    }
    iVar4 = uVar1 + iVar4;
  } while (uVar15 != 0);
LAB_02c2c924:
  if (iVar4 != 0) {
    puVar6[-1] = 0;
  }
LAB_02c2c934:
  lVar5 = 0;
  puVar6 = (ushort *)(param_1 + 0x23c);
  uVar7 = *puVar6;
  while (uVar7 != 0) {
    if (uVar7 == 0x1b || uVar7 - 0x11 < 10) {
      *(undefined2 *)((long)puVar6 + lVar5) = 0;
    }
    lVar5 = lVar5 + 2;
    if (lVar5 == 0x800) break;
    uVar7 = *(ushort *)((long)puVar6 + lVar5);
  }
  puVar6 = (ushort *)(param_1 + 0x23c);
  if (*(short *)(param_1 + 0x23c) == 0x4f) {
    puVar12 = (ushort *)&UNK_03a758e6;
    uVar7 = 0x4f;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2d010;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 1;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2d010:
    uVar7 = 0x4f;
    puVar12 = (ushort *)&UNK_03a758ba;
    do {
      if (uVar7 == 0x10) {
        puVar10 = puVar12 + 1;
        uVar13 = (ulong)*puVar10;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          if (uVar7 != *puVar6) {
            return 0;
          }
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 1;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar6 = puVar6 + 1;
    } while (uVar7 == *puVar6);
  }
  else if (*(short *)(param_1 + 0x23c) == 0x48) {
    puVar12 = (ushort *)&UNK_03a758d0;
    uVar7 = 0x48;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2c9f4;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2c9f4:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a759a6;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2ca5c;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2ca5c:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a75852;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cac4;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cac4:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a759ba;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cb2c;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cb2c:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a758a4;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cb94;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cb94:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a7587a;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cbfc;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cbfc:
    uVar7 = 0x48;
    puVar12 = &DAT_03a75938;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cc64;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cc64:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a75990;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cccc;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cccc:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a7594c;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cd34;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cd34:
    uVar7 = 0x48;
    puVar12 = &DAT_03a75928;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cd9c;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cd9c:
    uVar7 = 0x48;
    puVar12 = &DAT_03a75962;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2ce04;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2ce04:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a75892;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2ce6c;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2ce6c:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a759cc;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2ced4;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2ced4:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a7597e;
    puVar10 = puVar6;
    do {
      if (uVar7 == 0x10) {
        puVar8 = puVar12 + 1;
        uVar13 = (ulong)*puVar8;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar8;
          puVar8 = puVar8 + 1;
          if (uVar7 != *puVar10) goto LAB_02c2cf3c;
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar10 = puVar10 + 1;
    } while (uVar7 == *puVar10);
LAB_02c2cf3c:
    uVar7 = 0x48;
    puVar12 = (ushort *)&UNK_03a75900;
    do {
      if (uVar7 == 0x10) {
        puVar10 = puVar12 + 1;
        uVar13 = (ulong)*puVar10;
        lVar5 = uVar13 * 2 + 4;
        puVar12 = puVar12 + uVar13 + 2;
        while (lVar5 != 0) {
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -2;
          uVar7 = *puVar10;
          puVar10 = puVar10 + 1;
          if (uVar7 != *puVar6) {
            return 0;
          }
        }
        uVar7 = *puVar12;
      }
      if (uVar7 == 0) {
        return 2;
      }
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12;
      puVar6 = puVar6 + 1;
    } while (uVar7 == *puVar6);
  }
  return 0;
}


