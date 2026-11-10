/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010bc10; name: FUN_0010bc10
 */


undefined8 FUN_0010bc10(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  void *__s;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  
  iVar4 = FUN_0010b930();
  if (iVar4 == 0) {
    uVar19 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28c);
    __s = *(void **)(param_1 + 0x2b8);
    lVar18 = *(long *)(param_1 + 0x2c0);
    if (*(int *)(param_1 + 0x288) < 2) {
      uVar19 = 1;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (param_2 != 0) {
        uVar1 = 1 << (ulong)(uVar1 & 0x1f);
        memset(__s,0,(long)(int)uVar1);
        FUN_0010a200(lVar18,*(uint *)(param_1 + 0x290) | *(uint *)(param_1 + 0x290) << 0x10,
                     -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x298);
      if (iVar4 <= (int)uVar1) {
        lVar9 = (long)iVar4;
        lVar7 = *(long *)(param_1 + 0x2b0);
        uVar15 = *(uint *)(param_1 + lVar9 * 4 + 0x200);
        if (iVar4 < (int)uVar1) {
          lVar10 = 0;
          iVar11 = 0;
          do {
            if (uVar15 != 0) {
              uVar8 = (undefined1)lVar9;
              uVar2 = uVar1 - (int)lVar9;
              iVar4 = uVar15 << (ulong)(uVar2 & 0x1f);
              puVar13 = (undefined8 *)((long)__s + lVar10);
              puVar13[1] = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(
                                                  uVar8,CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
              *puVar13 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
              if (0x10 < iVar4) {
                puVar6 = (undefined8 *)((ulong)(puVar13 + 2) & 0xfffffffffffffff0);
                do {
                  puVar16 = puVar6 + 2;
                  puVar6[1] = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(
                                                  uVar8,CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
                  *puVar6 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(
                                                  uVar8,CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
                  puVar6 = puVar16;
                } while (puVar16 < (undefined8 *)((long)puVar13 + (long)iVar4));
              }
              if (0 < (int)uVar15) {
                iVar4 = 1 << (ulong)(uVar2 & 0x1f);
                iVar5 = iVar4 * 2;
                lVar14 = (long)iVar4;
                iVar4 = iVar11 + uVar15;
                if (iVar5 < 0x11) {
                  if ((uVar15 & 3) != 0) {
                    puVar13 = (undefined8 *)(lVar18 + lVar10 * 2);
                    iVar5 = -(uVar15 & 3);
                    iVar12 = iVar11;
                    do {
                      iVar11 = iVar12 + 1;
                      lVar10 = lVar10 + lVar14;
                      uVar3 = *(undefined2 *)(lVar7 + (long)iVar12 * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      iVar5 = iVar5 + 1;
                      puVar13[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar13 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      puVar13 = (undefined8 *)((long)puVar13 + lVar14 * 2);
                      iVar12 = iVar11;
                    } while (iVar5 != 0);
                  }
                  if (2 < uVar15 - 1) {
                    puVar13 = (undefined8 *)(lVar18 + lVar10 * 2);
                    puVar6 = (undefined8 *)(lVar18 + (lVar10 + lVar14) * 2);
                    iVar11 = iVar11 + 3;
                    do {
                      uVar3 = *(undefined2 *)(lVar7 + (long)(iVar11 + -3) * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      puVar13[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar13 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      uVar3 = *(undefined2 *)(lVar7 + (long)(iVar11 + -2) * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      lVar10 = lVar10 + lVar14 * 4;
                      puVar6[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar6 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      uVar3 = *(undefined2 *)(lVar7 + (long)(iVar11 + -1) * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      puVar16 = (undefined8 *)((long)puVar13 + lVar14 * 4);
                      puVar16[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar16 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      uVar3 = *(undefined2 *)(lVar7 + (long)iVar11 * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      iVar11 = iVar11 + 4;
                      puVar16 = (undefined8 *)((long)puVar13 + lVar14 * 6);
                      puVar16[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar16 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      puVar6 = puVar6 + lVar14;
                      puVar13 = puVar13 + lVar14;
                    } while (iVar11 - iVar4 != 3);
                  }
                }
                else {
                  lVar17 = (long)iVar5;
                  if ((uVar15 & 1) != 0) {
                    uVar3 = *(undefined2 *)(lVar7 + (long)iVar11 * 2);
                    uVar8 = (undefined1)uVar3;
                    uVar20 = (undefined1)((ushort)uVar3 >> 8);
                    puVar13 = (undefined8 *)(lVar18 + lVar10 * 2);
                    puVar13[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                    *puVar13 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                    puVar6 = (undefined8 *)((ulong)(puVar13 + 2) & 0xfffffffffffffff0);
                    do {
                      puVar16 = puVar6 + 2;
                      puVar6[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar6 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      puVar6 = puVar16;
                    } while (puVar16 < (undefined8 *)((long)puVar13 + lVar17));
                    iVar11 = iVar11 + 1;
                    lVar10 = lVar10 + lVar14;
                  }
                  if (uVar15 != 1) {
                    do {
                      uVar3 = *(undefined2 *)(lVar7 + (long)iVar11 * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      puVar13 = (undefined8 *)(lVar18 + lVar10 * 2);
                      puVar13[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar13 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      puVar6 = (undefined8 *)((ulong)(puVar13 + 2) & 0xfffffffffffffff0);
                      do {
                        puVar16 = puVar6 + 2;
                        puVar6[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                        *puVar6 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                        puVar6 = puVar16;
                      } while (puVar16 < (undefined8 *)((long)puVar13 + lVar17));
                      uVar3 = *(undefined2 *)(lVar7 + (long)(iVar11 + 1) * 2);
                      uVar8 = (undefined1)uVar3;
                      uVar20 = (undefined1)((ushort)uVar3 >> 8);
                      puVar13 = (undefined8 *)(lVar18 + (lVar10 + lVar14) * 2);
                      puVar13[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      *puVar13 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                      puVar6 = (undefined8 *)((ulong)(puVar13 + 2) & 0xfffffffffffffff0);
                      do {
                        puVar16 = puVar6 + 2;
                        puVar6[1] = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                        *puVar6 = CONCAT17(uVar20,CONCAT16(uVar8,CONCAT15(uVar20,CONCAT14(uVar8,
                                                  CONCAT13(uVar20,CONCAT12(uVar8,uVar3))))));
                        puVar6 = puVar16;
                      } while (puVar16 < (undefined8 *)((long)puVar13 + lVar17));
                      iVar11 = iVar11 + 2;
                      lVar10 = lVar10 + lVar14 + lVar14;
                    } while (iVar11 != iVar4);
                  }
                }
                iVar11 = iVar4;
              }
            }
            lVar9 = lVar9 + 1;
            uVar15 = *(uint *)(param_1 + lVar9 * 4 + 0x200);
          } while (lVar9 != (int)uVar1);
          iVar4 = (int)lVar9;
        }
        else {
          iVar11 = 0;
          lVar10 = 0;
        }
        if (0 < (int)uVar15) {
          uVar8 = (undefined1)iVar4;
          puVar13 = (undefined8 *)((long)__s + lVar10);
          puVar13[1] = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
          *puVar13 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
          if (0x10 < (int)uVar15) {
            puVar6 = (undefined8 *)((ulong)(puVar13 + 2) & 0xfffffffffffffff0);
            do {
              puVar16 = puVar6 + 2;
              puVar6[1] = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8
                                                  ,CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
              *puVar6 = CONCAT17(uVar8,CONCAT16(uVar8,CONCAT15(uVar8,CONCAT14(uVar8,CONCAT13(uVar8,
                                                  CONCAT12(uVar8,CONCAT11(uVar8,uVar8)))))));
              puVar6 = puVar16;
            } while (puVar16 < (undefined8 *)((long)puVar13 + (long)(int)uVar15));
          }
          memcpy((void *)(lVar18 + lVar10 * 2),(void *)(lVar7 + (long)iVar11 * 2),
                 (long)(int)uVar15 << 1);
        }
      }
      uVar19 = 1;
    }
  }
  return uVar19;
}


