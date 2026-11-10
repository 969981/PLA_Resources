/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0010e650; name: FUN_0010e650
 */


ulong FUN_0010e650(undefined8 *param_1,undefined8 *param_2,ushort *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 *param_6,long param_7,int param_8,undefined8 param_9
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  size_t __n;
  ushort *puVar20;
  undefined1 auStack_7ffffffe [2147483518];
  ushort local_80 [16];
  
  if (param_8 == 0) {
    uVar8 = FUN_0010ee00(param_3,param_4,param_1,(long)param_2 - (long)param_1,param_9);
  }
  else {
    puVar1 = (undefined8 *)((long)param_6 + param_7);
    puVar20 = param_3;
LAB_0010e700:
    while( true ) {
      if (param_4 + -0x10 <= param_3) {
        memcpy(local_80,param_3,(long)param_4 - (long)param_3);
        puVar20 = (ushort *)((long)puVar20 + ((long)local_80 - (long)param_3));
        param_4 = auStack_7ffffffe + 0x8000037e;
        param_3 = local_80;
      }
      puVar11 = (ushort *)((long)param_3 + 1);
      bVar3 = (byte)*param_3;
      *param_1 = *(undefined8 *)puVar11;
      uVar17 = (ulong)(bVar3 >> 4);
      __n = (ulong)bVar3 & 0xf;
      uVar8 = uVar17 + 4;
      if ((bVar3 & 0x88) != 0) break;
      puVar16 = (undefined8 *)((long)param_1 + __n);
      param_1 = (undefined8 *)((long)puVar16 + uVar8);
      if (param_2 < param_1) {
        FUN_0010a430();
        pcVar14 = *(code **)PTR_PTR_043722f8;
        if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
        pcVar10 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
        uVar9 = 0x718;
        goto LAB_0010ecf0;
      }
      param_3 = (ushort *)((long)puVar11 + __n) + 1;
      puVar13 = (undefined8 *)((long)puVar16 - (ulong)*(ushort *)((long)puVar11 + __n));
      if (puVar13 < param_6) {
        puVar13 = (undefined8 *)((long)puVar13 + param_7);
        lVar15 = (uVar8 & 3 | 0xfffffffffffffffc) - uVar17;
        do {
          *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
          puVar18 = param_6;
          if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
            puVar18 = (undefined8 *)((long)puVar13 + 1);
          }
          *(undefined1 *)((long)puVar16 + 1) = *(undefined1 *)puVar18;
          puVar13 = param_6;
          if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
            puVar13 = (undefined8 *)((long)puVar18 + 1);
          }
          *(undefined1 *)((long)puVar16 + 2) = *(undefined1 *)puVar13;
          puVar18 = param_6;
          if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
            puVar18 = (undefined8 *)((long)puVar13 + 1);
          }
          *(undefined1 *)((long)puVar16 + 3) = *(undefined1 *)puVar18;
          puVar16 = (undefined8 *)((long)puVar16 + 4);
          puVar13 = param_6;
          if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
            puVar13 = (undefined8 *)((long)puVar18 + 1);
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
        if ((uVar8 & 3) != 0) {
          uVar17 = 0;
          do {
            puVar18 = (undefined8 *)((long)puVar13 + 1);
            *(undefined1 *)((long)puVar16 + uVar17) = *(undefined1 *)puVar13;
            uVar17 = uVar17 + 1;
            puVar13 = param_6;
            if (puVar18 != puVar1) {
              puVar13 = puVar18;
            }
          } while ((uVar8 & 3) != uVar17);
        }
      }
      else {
LAB_0010e6a0:
        *puVar16 = *puVar13;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar13 + 1);
      }
    }
    if (8 < __n) {
      if (__n == 0xf) {
        bVar5 = *(byte *)((long)param_3 + 1);
        if ((ulong)bVar5 < 0xc0) {
          puVar11 = param_3 + 1;
          __n = (ulong)bVar5 + 0xf;
        }
        else {
          puVar11 = (ushort *)((long)param_3 + 3);
          __n = ((ulong)((uint)bVar5 * 0x100 - 0xc000) | 0xf) + (ulong)(byte)param_3[1];
        }
        puVar16 = (undefined8 *)((long)param_1 + __n);
        if (param_2 <= puVar16) {
          if (puVar16 <= param_2) {
            memmove(param_1,puVar11,__n);
            iVar7 = (int)puVar11 + (int)__n;
            goto joined_r0x0010edd0;
          }
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
          pcVar10 = "OODLE ERROR : LZ corruption : LZB decomp past end\n";
          uVar9 = 0x742;
          goto LAB_0010ecf0;
        }
        lVar15 = 0;
        do {
          *(undefined8 *)((long)param_1 + lVar15) = *(undefined8 *)((long)puVar11 + lVar15);
          lVar15 = lVar15 + 8;
        } while ((undefined8 *)((long)param_1 + lVar15) < puVar16);
      }
      else {
        if (param_2 <= (undefined8 *)((long)param_1 + __n)) {
          iVar7 = (int)param_2 - (int)param_1;
          memmove(param_1,puVar11,(long)iVar7);
          puVar16 = (undefined8 *)((long)param_1 + (long)iVar7);
          iVar7 = (int)puVar11 + iVar7;
joined_r0x0010edd0:
          if (puVar16 == param_2) {
            return (ulong)(uint)(iVar7 - (int)puVar20);
          }
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
          pcVar10 = "OODLE ERROR : LZ corruption : LZB didn\'t stop at end\n";
          uVar9 = 0x809;
          goto LAB_0010ecf0;
        }
        param_1[1] = *(undefined8 *)((long)param_3 + 9);
      }
    }
    puVar16 = (undefined8 *)((long)param_1 + __n);
    puVar11 = (ushort *)((long)puVar11 + __n);
    uVar12 = (ulong)*puVar11;
    if (0x8f < bVar3) {
      if (uVar17 == 0xf) {
        uVar17 = uVar12 & 0x7f;
        param_3 = (ushort *)((long)puVar11 + 1);
        if ((*puVar11 >> 7 & 1) == 0) {
          uVar6 = *param_3;
          uVar8 = uVar17 + 0x13;
          param_3 = (ushort *)((long)puVar11 + 3);
          if (uVar17 == 0x7f) {
            bVar3 = *(byte *)((long)puVar11 + 3);
            uVar17 = (ulong)bVar3;
            uVar8 = 0x92;
            param_3 = puVar11 + 2;
            if (0xbf < uVar17) {
              uVar8 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x92;
              param_3 = (ushort *)((long)puVar11 + 5);
              uVar17 = (ulong)(byte)puVar11[2];
            }
            uVar8 = uVar8 + uVar17;
          }
          if ((undefined8 *)((long)puVar16 + uVar8) <= param_2) {
            puVar13 = (undefined8 *)((long)puVar16 - (ulong)uVar6);
            if ((puVar13 < param_6) &&
               (puVar13 = (undefined8 *)((long)puVar13 + param_7),
               param_6 < (undefined8 *)((long)puVar13 + uVar8 + 8))) {
              uVar17 = uVar8 & 3;
              puVar18 = puVar16;
              if (2 < uVar8 - 1) {
                lVar15 = uVar17 - uVar8;
                puVar19 = puVar16;
                do {
                  *(undefined1 *)puVar19 = *(undefined1 *)puVar13;
                  puVar18 = param_6;
                  if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
                    puVar18 = (undefined8 *)((long)puVar13 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 1) = *(undefined1 *)puVar18;
                  puVar13 = param_6;
                  if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
                    puVar13 = (undefined8 *)((long)puVar18 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 2) = *(undefined1 *)puVar13;
                  puVar18 = (undefined8 *)((long)puVar19 + 4);
                  puVar2 = param_6;
                  if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
                    puVar2 = (undefined8 *)((long)puVar13 + 1);
                  }
                  *(undefined1 *)((long)puVar19 + 3) = *(undefined1 *)puVar2;
                  puVar13 = param_6;
                  if ((undefined8 *)((long)puVar2 + 1) != puVar1) {
                    puVar13 = (undefined8 *)((long)puVar2 + 1);
                  }
                  lVar15 = lVar15 + 4;
                  puVar19 = puVar18;
                } while (lVar15 != 0);
              }
              if (uVar17 != 0) {
                lVar15 = -uVar17;
                do {
                  puVar19 = (undefined8 *)((long)puVar13 + 1);
                  *(undefined1 *)puVar18 = *(undefined1 *)puVar13;
                  puVar13 = param_6;
                  if (puVar19 != puVar1) {
                    puVar13 = puVar19;
                  }
                  lVar15 = lVar15 + 1;
                  puVar18 = (undefined8 *)((long)puVar18 + 1);
                } while (lVar15 != 0);
              }
            }
            else {
              puVar18 = puVar16;
              do {
                puVar19 = puVar18 + 1;
                *puVar18 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar18 = puVar19;
              } while (puVar19 < (undefined8 *)((long)puVar16 + uVar8));
            }
            goto LAB_0010eb88;
          }
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
          pcVar10 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar9 = 0x7e3;
          goto LAB_0010ecf0;
        }
        uVar8 = (uVar17 >> 3) + 4;
        if (uVar17 >> 3 == 0xf) {
          bVar3 = *(byte *)param_3;
          uVar17 = (ulong)bVar3;
          uVar8 = 0x13;
          param_3 = puVar11 + 1;
          if (0xbf < uVar17) {
            uVar8 = (ulong)((uint)bVar3 * 0x100 - 0xc000) | 0x13;
            param_3 = (ushort *)((long)puVar11 + 3);
            uVar17 = (ulong)(byte)puVar11[1];
          }
          uVar8 = uVar8 + uVar17;
        }
        if (param_2 < (undefined8 *)((long)puVar16 + uVar8)) {
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
          pcVar10 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar9 = 0x7be;
          goto LAB_0010ecf0;
        }
        if ((uVar12 & 7) == 1) {
          puVar13 = puVar1;
          if (puVar16 != param_6) {
            puVar13 = puVar16;
          }
          uVar4 = *(undefined1 *)((long)puVar13 + -1);
          puVar13 = puVar16;
          do {
            puVar18 = (undefined8 *)((long)puVar13 + 4);
            *(uint *)puVar13 = CONCAT13(uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4)));
            puVar13 = puVar18;
          } while (puVar18 < (undefined8 *)((long)puVar16 + uVar8));
        }
        else {
          puVar18 = (undefined8 *)((long)puVar16 - (uVar12 & 7));
          puVar13 = (undefined8 *)((long)puVar18 + param_7);
          if (param_6 <= puVar18) {
            puVar13 = puVar18;
          }
          uVar17 = uVar8 & 3;
          puVar18 = puVar16;
          if (2 < uVar8 - 1) {
            lVar15 = uVar17 - uVar8;
            puVar19 = puVar16;
            do {
              *(undefined1 *)puVar19 = *(undefined1 *)puVar13;
              puVar18 = param_6;
              if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
                puVar18 = (undefined8 *)((long)puVar13 + 1);
              }
              *(undefined1 *)((long)puVar19 + 1) = *(undefined1 *)puVar18;
              puVar13 = param_6;
              if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
                puVar13 = (undefined8 *)((long)puVar18 + 1);
              }
              *(undefined1 *)((long)puVar19 + 2) = *(undefined1 *)puVar13;
              puVar18 = (undefined8 *)((long)puVar19 + 4);
              puVar2 = param_6;
              if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
                puVar2 = (undefined8 *)((long)puVar13 + 1);
              }
              *(undefined1 *)((long)puVar19 + 3) = *(undefined1 *)puVar2;
              puVar13 = param_6;
              if ((undefined8 *)((long)puVar2 + 1) != puVar1) {
                puVar13 = (undefined8 *)((long)puVar2 + 1);
              }
              lVar15 = lVar15 + 4;
              puVar19 = puVar18;
            } while (lVar15 != 0);
          }
          if (uVar17 != 0) {
            lVar15 = -uVar17;
            do {
              puVar19 = (undefined8 *)((long)puVar13 + 1);
              *(undefined1 *)puVar18 = *(undefined1 *)puVar13;
              puVar13 = param_6;
              if (puVar19 != puVar1) {
                puVar13 = puVar19;
              }
              lVar15 = lVar15 + 1;
              puVar18 = (undefined8 *)((long)puVar18 + 1);
            } while (lVar15 != 0);
          }
        }
      }
      else {
        if (param_2 < (undefined8 *)((long)puVar16 + uVar8)) {
          FUN_0010a430();
          pcVar14 = *(code **)PTR_PTR_043722f8;
          if (pcVar14 == (code *)0x0) goto LAB_0010ecf8;
          pcVar10 = "OODLE ERROR : LZ corruption : LZB match past end\n";
          uVar9 = 0x797;
          goto LAB_0010ecf0;
        }
        puVar13 = (undefined8 *)((long)puVar16 - uVar12);
        param_3 = puVar11 + 1;
        if (param_6 <= puVar13) {
          *puVar16 = *puVar13;
          puVar16[1] = puVar13[1];
          if (uVar8 < 0x11) goto LAB_0010eb88;
          *(undefined2 *)(puVar16 + 2) = *(undefined2 *)(puVar13 + 2);
          param_1 = (undefined8 *)((long)puVar16 + uVar8);
          goto LAB_0010e700;
        }
        puVar13 = (undefined8 *)((long)puVar13 + param_7);
        lVar15 = (uVar8 & 3 | 0xfffffffffffffffc) - uVar17;
        puVar18 = puVar16;
        do {
          *(undefined1 *)puVar18 = *(undefined1 *)puVar13;
          puVar19 = param_6;
          if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
            puVar19 = (undefined8 *)((long)puVar13 + 1);
          }
          *(undefined1 *)((long)puVar18 + 1) = *(undefined1 *)puVar19;
          puVar13 = param_6;
          if ((undefined8 *)((long)puVar19 + 1) != puVar1) {
            puVar13 = (undefined8 *)((long)puVar19 + 1);
          }
          *(undefined1 *)((long)puVar18 + 2) = *(undefined1 *)puVar13;
          puVar19 = param_6;
          if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
            puVar19 = (undefined8 *)((long)puVar13 + 1);
          }
          *(undefined1 *)((long)puVar18 + 3) = *(undefined1 *)puVar19;
          puVar18 = (undefined8 *)((long)puVar18 + 4);
          puVar13 = param_6;
          if ((undefined8 *)((long)puVar19 + 1) != puVar1) {
            puVar13 = (undefined8 *)((long)puVar19 + 1);
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
        if ((uVar8 & 3) != 0) {
          uVar17 = 0;
          do {
            puVar19 = (undefined8 *)((long)puVar13 + 1);
            *(undefined1 *)((long)puVar18 + uVar17) = *(undefined1 *)puVar13;
            uVar17 = uVar17 + 1;
            puVar13 = param_6;
            if (puVar19 != puVar1) {
              puVar13 = puVar19;
            }
          } while ((uVar8 & 3) != uVar17);
        }
      }
LAB_0010eb88:
      param_1 = (undefined8 *)((long)puVar16 + uVar8);
      goto LAB_0010e700;
    }
    param_1 = (undefined8 *)((long)puVar16 + uVar8);
    if (param_1 <= param_2) {
      puVar13 = (undefined8 *)((long)puVar16 - uVar12);
      param_3 = puVar11 + 1;
      if (param_6 <= puVar13) goto LAB_0010e6a0;
      puVar13 = (undefined8 *)((long)puVar13 + param_7);
      lVar15 = (uVar8 & 3 | 0xfffffffffffffffc) - uVar17;
      do {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar13;
        puVar18 = param_6;
        if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
          puVar18 = (undefined8 *)((long)puVar13 + 1);
        }
        *(undefined1 *)((long)puVar16 + 1) = *(undefined1 *)puVar18;
        puVar13 = param_6;
        if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
          puVar13 = (undefined8 *)((long)puVar18 + 1);
        }
        *(undefined1 *)((long)puVar16 + 2) = *(undefined1 *)puVar13;
        puVar18 = param_6;
        if ((undefined8 *)((long)puVar13 + 1) != puVar1) {
          puVar18 = (undefined8 *)((long)puVar13 + 1);
        }
        *(undefined1 *)((long)puVar16 + 3) = *(undefined1 *)puVar18;
        puVar16 = (undefined8 *)((long)puVar16 + 4);
        puVar13 = param_6;
        if ((undefined8 *)((long)puVar18 + 1) != puVar1) {
          puVar13 = (undefined8 *)((long)puVar18 + 1);
        }
        lVar15 = lVar15 + 4;
      } while (lVar15 != 0);
      if ((uVar8 & 3) != 0) {
        uVar17 = 0;
        do {
          puVar18 = (undefined8 *)((long)puVar13 + 1);
          *(undefined1 *)((long)puVar16 + uVar17) = *(undefined1 *)puVar13;
          uVar17 = uVar17 + 1;
          puVar13 = param_6;
          if (puVar18 != puVar1) {
            puVar13 = puVar18;
          }
        } while ((uVar8 & 3) != uVar17);
      }
      goto LAB_0010e700;
    }
    FUN_0010a430();
    pcVar14 = *(code **)PTR_PTR_043722f8;
    if (pcVar14 != (code *)0x0) {
      pcVar10 = "OODLE ERROR : LZ corruption : LZB match past end\n";
      uVar9 = 0x77a;
LAB_0010ecf0:
      (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\lzb.cpp",uVar9,pcVar10);
    }
LAB_0010ecf8:
    FUN_0010a450();
    uVar8 = 0xffffffff;
  }
  return uVar8;
}


