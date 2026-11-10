/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4eac0; name: munmap
 */


int munmap(void *__addr,size_t __len)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  
  if (((ulong)__addr & 0xfff) != 0) {
    return -1;
  }
  std::mutex::lock();
  puVar10 = &DAT_043f22b8;
  if (DAT_043f22b8 != (undefined8 *)0x0) {
    puVar10 = DAT_043f22b8;
  }
  if ((undefined8 **)puVar10 != &DAT_043f22b8) {
    do {
      while( true ) {
        if (puVar10 == (undefined8 *)0x0) goto LAB_02c4f56c;
        if ((void *)puVar10[5] <= __addr) break;
        if (((void *)puVar10[4] <= __addr) ||
           (puVar10 = (undefined8 *)puVar10[1], (undefined8 **)puVar10 == &DAT_043f22b8))
        goto LAB_02c4eb5c;
      }
      puVar10 = (undefined8 *)puVar10[2];
    } while ((undefined8 **)puVar10 != &DAT_043f22b8);
  }
LAB_02c4eb5c:
  uVar18 = (long)__addr + __len + 0xfff & 0xfffffffffffff000;
  puVar12 = puVar10;
  puVar17 = puVar10;
  if ((undefined8 **)puVar10 != &DAT_043f22b8) {
    do {
      if (uVar18 <= (ulong)puVar17[4]) {
        puVar12 = puVar17;
        goto LAB_02c4ebd8;
      }
      puVar12 = (undefined8 *)puVar17[2];
      if ((undefined8 *)puVar17[2] == (undefined8 *)0x0) {
        do {
          puVar12 = puVar17;
          puVar15 = (undefined8 *)*puVar12;
          puVar17 = puVar15;
        } while (puVar12 == (undefined8 *)puVar15[2]);
        puVar17 = puVar12;
        if ((undefined8 *)puVar12[2] != puVar15) {
          puVar17 = puVar15;
        }
      }
      else {
        do {
          puVar17 = puVar12;
          puVar12 = (undefined8 *)puVar17[1];
        } while ((undefined8 *)puVar17[1] != (undefined8 *)0x0);
      }
    } while ((undefined8 **)puVar17 != &DAT_043f22b8);
    puVar12 = &DAT_043f22b8;
  }
  puVar17 = &DAT_043f22b8;
LAB_02c4ebd8:
  uVar5 = puVar10[5];
  if (uVar18 < uVar5) {
    iVar3 = (**(code **)(*DAT_043f2310 + 0x18))(DAT_043f2310,__addr,uVar18 - (long)__addr);
    if (iVar3 != 0) {
      iVar3 = -1;
      goto LAB_02c4f570;
    }
    puVar10[5] = __addr;
    puVar17 = (undefined8 *)(*DAT_043f2318)(0x38);
    uVar7 = puVar10[5];
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
    puVar17[6] = 0;
    puVar17[4] = uVar18;
    puVar17[5] = uVar7;
    if (DAT_043f22b8 == (undefined8 *)0x0) {
LAB_02c4f388:
      puVar15 = &DAT_043f22b8;
      DAT_043f22b8 = puVar17;
      DAT_043f22c0 = puVar17;
      DAT_043f22c8 = puVar17;
    }
    else {
      puVar10 = (undefined8 *)0x0;
      puVar12 = DAT_043f22b8;
      do {
        puVar15 = puVar12;
        uVar5 = puVar15[4];
        if (uVar5 <= uVar18) {
          puVar10 = puVar15;
        }
        lVar11 = 8;
        if (uVar5 <= uVar18) {
          lVar11 = 0x10;
        }
        puVar12 = *(undefined8 **)((long)puVar15 + lVar11);
      } while (*(undefined8 **)((long)puVar15 + lVar11) != (undefined8 *)0x0);
      if ((puVar10 != (undefined8 *)0x0) && (uVar18 <= (ulong)puVar10[4])) goto LAB_02c4f3b0;
      if (uVar5 <= uVar18) {
        lVar11 = puVar15[2];
        if (lVar11 == 0) {
          puVar10 = puVar15;
          do {
            bVar2 = puVar10 == (undefined8 *)((undefined8 *)*puVar10)[2];
            puVar10 = (undefined8 *)*puVar10;
          } while (bVar2);
        }
        else {
          do {
            lVar11 = *(long *)(lVar11 + 8);
          } while (lVar11 != 0);
        }
      }
      if ((undefined8 **)puVar15 == &DAT_043f22b8) goto LAB_02c4f388;
      if (uVar18 < uVar5) {
        puVar15[1] = puVar17;
        if (puVar15 == DAT_043f22c0) {
          DAT_043f22c0 = puVar17;
        }
      }
      else {
        puVar15[2] = puVar17;
        if (puVar15 == DAT_043f22c8) {
          DAT_043f22c8 = puVar17;
        }
      }
    }
    *puVar17 = puVar15;
    puVar17[1] = 0;
    puVar17[2] = 0;
    FUN_02c4f5bc();
    DAT_043f22b0 = DAT_043f22b0 + 1;
  }
  else {
    if (puVar17 != puVar10) {
      iVar3 = -1;
      puVar15 = puVar10;
      if (uVar5 <= uVar18) goto LAB_02c4ec58;
LAB_02c4ec28:
      puVar12 = puVar15;
      iVar4 = (**(code **)(*DAT_043f2310 + 0x18))(DAT_043f2310,puVar12[4],uVar18 - puVar12[4]);
      if (iVar4 == 0) {
        puVar12[4] = uVar18;
        puVar6 = (undefined8 *)puVar12[2];
        puVar16 = puVar12;
        if ((undefined8 *)puVar12[2] != (undefined8 *)0x0) goto LAB_02c4eca8;
LAB_02c4ece8:
        do {
          puVar15 = puVar16;
          puVar16 = (undefined8 *)*puVar15;
        } while (puVar15 == (undefined8 *)puVar16[2]);
        if ((undefined8 *)puVar15[2] != puVar16) {
          puVar15 = puVar16;
        }
        if (puVar15 != puVar17) {
          do {
            uVar5 = puVar15[5];
            if (uVar18 < uVar5) goto LAB_02c4ec28;
LAB_02c4ec58:
            pvVar1 = (void *)puVar15[4];
            if ((void *)puVar15[4] <= __addr) {
              pvVar1 = __addr;
            }
            iVar4 = (**(code **)(*DAT_043f2310 + 0x18))(DAT_043f2310,pvVar1,uVar5 - (long)pvVar1);
            if (iVar4 != 0) goto LAB_02c4f570;
            if ((void *)puVar15[4] < __addr) {
              puVar15[5] = __addr;
              puVar6 = (undefined8 *)puVar10[2];
              if ((undefined8 *)puVar10[2] != (undefined8 *)0x0) {
                do {
                  puVar10 = puVar6;
                  puVar6 = (undefined8 *)puVar10[1];
                } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
                goto LAB_02c4eca0;
              }
              do {
                puVar6 = puVar10;
                puVar16 = (undefined8 *)*puVar6;
                puVar10 = puVar16;
              } while (puVar6 == (undefined8 *)puVar16[2]);
              puVar10 = puVar6;
              if ((undefined8 *)puVar6[2] != puVar16) {
                puVar10 = puVar16;
              }
              puVar6 = (undefined8 *)puVar15[2];
            }
            else {
LAB_02c4eca0:
              puVar6 = (undefined8 *)puVar15[2];
            }
            puVar16 = puVar15;
            if (puVar6 == (undefined8 *)0x0) goto LAB_02c4ece8;
LAB_02c4eca8:
            do {
              puVar15 = puVar6;
              puVar6 = (undefined8 *)puVar15[1];
            } while ((undefined8 *)puVar15[1] != (undefined8 *)0x0);
            if (puVar15 == puVar17) break;
          } while( true );
        }
        goto LAB_02c4ed20;
      }
      goto LAB_02c4f570;
    }
LAB_02c4ed20:
    if (puVar10 != puVar12) {
      do {
        puVar17 = (undefined8 *)puVar10[2];
        puVar15 = puVar10;
        puVar6 = puVar17;
        if (puVar17 == (undefined8 *)0x0) {
          do {
            puVar16 = puVar15;
            puVar15 = (undefined8 *)*puVar16;
          } while (puVar16 == (undefined8 *)puVar15[2]);
          if ((undefined8 *)puVar16[2] != puVar15) {
            puVar16 = puVar15;
          }
        }
        else {
          do {
            puVar16 = puVar6;
            puVar6 = (undefined8 *)puVar16[1];
          } while ((undefined8 *)puVar16[1] != (undefined8 *)0x0);
        }
        puVar15 = puVar17;
        puVar6 = puVar10;
        if (puVar17 == (undefined8 *)0x0) {
          do {
            bVar2 = puVar6 == (undefined8 *)((undefined8 *)*puVar6)[2];
            puVar6 = (undefined8 *)*puVar6;
          } while (bVar2);
        }
        else {
          do {
            puVar15 = (undefined8 *)puVar15[1];
          } while (puVar15 != (undefined8 *)0x0);
        }
        puVar15 = (undefined8 *)puVar10[1];
        if ((puVar17 == (undefined8 *)0x0) || (puVar6 = puVar17, puVar15 == (undefined8 *)0x0)) {
          puVar9 = (undefined8 *)*puVar10;
          puVar8 = puVar9 + 1;
          puVar13 = (undefined8 *)*puVar8;
          puVar6 = puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            puVar6 = puVar17;
          }
          puVar14 = puVar10;
LAB_02c4eea8:
          if (puVar6 == (undefined8 *)0x0) {
            if ((undefined8 **)puVar9 != &DAT_043f22b8) {
              puVar6 = (undefined8 *)0x0;
              if (puVar13 != puVar10) {
                puVar9[2] = 0;
              }
              else {
                *puVar8 = 0;
              }
              goto LAB_02c4ef40;
            }
            puVar6 = (undefined8 *)0x0;
            DAT_043f22b8 = (undefined8 *)0x0;
            puVar9 = &DAT_043f22b8;
          }
          else {
            *puVar6 = puVar9;
            if ((undefined8 **)puVar9 == &DAT_043f22b8) {
              puVar9 = &DAT_043f22b8;
              DAT_043f22b8 = puVar6;
            }
            else {
              if (puVar13 != puVar10) {
                puVar9[2] = puVar6;
              }
              else {
                *puVar8 = puVar6;
              }
LAB_02c4ef40:
            }
          }
          puVar8 = puVar9;
          if (DAT_043f22c0 == puVar10) {
            while( true ) {
              DAT_043f22c0 = puVar8;
              puVar8 = puVar17;
              if (puVar8 == (undefined8 *)0x0) break;
              puVar17 = (undefined8 *)puVar8[1];
            }
          }
          puVar17 = puVar9;
          if (DAT_043f22c8 == puVar10) {
            while( true ) {
              DAT_043f22c8 = puVar17;
              puVar17 = puVar15;
              if (puVar17 == (undefined8 *)0x0) break;
              puVar15 = (undefined8 *)puVar17[2];
            }
          }
          bVar2 = true;
          puVar17 = puVar9;
        }
        else {
          do {
            puVar14 = puVar6;
            puVar6 = (undefined8 *)puVar14[1];
          } while ((undefined8 *)puVar14[1] != (undefined8 *)0x0);
          puVar9 = (undefined8 *)*puVar10;
          puVar6 = (undefined8 *)puVar14[2];
          puVar8 = puVar9 + 1;
          puVar13 = (undefined8 *)*puVar8;
          if (puVar14 == puVar10) goto LAB_02c4eea8;
          *puVar15 = puVar14;
          puVar14[1] = puVar15;
          if (puVar17 != puVar14) {
            puVar14[2] = puVar17;
            *puVar17 = puVar14;
            puVar17 = (undefined8 *)*puVar14;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = puVar17;
            }
            puVar17[1] = puVar6;
          }
          *puVar14 = puVar9;
          if ((undefined8 **)puVar9 == &DAT_043f22b8) {
            bVar2 = false;
            DAT_043f22b8 = puVar14;
          }
          else if (puVar13 == puVar10) {
            bVar2 = false;
            *puVar8 = puVar14;
          }
          else {
            bVar2 = false;
            puVar9[2] = puVar14;
          }
        }
        if ((puVar17 != (undefined8 *)0x0) && ((undefined8 **)puVar17 != &DAT_043f22b8)) {
          puVar15 = puVar17;
          do {
            FUN_02c4f79c(puVar15);
            puVar15 = (undefined8 *)*puVar15;
            if (puVar15 == (undefined8 *)0x0) break;
          } while ((undefined8 **)puVar15 != &DAT_043f22b8);
        }
        if (bVar2) {
          iVar3 = *(int *)(puVar10 + 3);
        }
        else {
          iVar3 = *(int *)(puVar14 + 3);
          *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(puVar10 + 3);
        }
        if (iVar3 != 0) {
          if ((undefined8 **)puVar17 == &DAT_043f22b8) {
LAB_02c4ed6c:
            if (puVar6 == (undefined8 *)0x0) goto LAB_02c4ed78;
          }
          else {
            if (puVar6 != (undefined8 *)0x0) goto LAB_02c4f020;
            do {
              do {
                puVar15 = (undefined8 *)puVar17[1];
                if (puVar15 == puVar6) {
                  puVar15 = (undefined8 *)puVar17[2];
                  if (*(int *)(puVar15 + 3) == 0) {
                    *(undefined4 *)(puVar15 + 3) = 1;
                    puVar9 = (undefined8 *)*puVar17;
                    *(undefined4 *)(puVar17 + 3) = 0;
                    puVar8 = (undefined8 *)puVar9[1];
                    puVar13 = (undefined8 *)puVar15[1];
                    puVar17[2] = puVar13;
                    if (puVar13 != (undefined8 *)0x0) {
                      *puVar13 = puVar17;
                    }
                    puVar15[1] = puVar17;
                    puVar13 = puVar9 + 1;
                    if (puVar8 != puVar17) {
                      puVar13 = puVar9 + 2;
                    }
                    *puVar17 = puVar15;
                    *puVar15 = puVar9;
                    puVar8 = &DAT_043f22b8;
                    if ((undefined8 **)puVar9 != &DAT_043f22b8) {
                      puVar8 = puVar13;
                    }
                    *puVar8 = puVar15;
                    puVar15[6] = puVar17[6];
                    FUN_02c4f79c(puVar17);
                    puVar15 = (undefined8 *)puVar17[2];
                    puVar9 = (undefined8 *)puVar15[1];
                    lVar11 = puVar15[2];
                    if (puVar9 == (undefined8 *)0x0) goto LAB_02c4f158;
LAB_02c4f14c:
                    if (*(int *)(puVar9 + 3) == 1) goto LAB_02c4f158;
                    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 1)) {
                      *(undefined4 *)(puVar9 + 3) = 1;
                      puVar8 = (undefined8 *)*puVar15;
                      *(undefined4 *)(puVar15 + 3) = 0;
                      puVar13 = (undefined8 *)puVar8[1];
                      puVar14 = (undefined8 *)puVar9[2];
                      puVar15[1] = puVar14;
                      if (puVar14 != (undefined8 *)0x0) {
                        *puVar14 = puVar15;
                      }
                      puVar9[2] = puVar15;
                      puVar14 = puVar8 + 1;
                      if (puVar13 != puVar15) {
                        puVar14 = puVar8 + 2;
                      }
                      *puVar15 = puVar9;
                      *puVar9 = puVar8;
                      puVar13 = &DAT_043f22b8;
                      if ((undefined8 **)puVar8 != &DAT_043f22b8) {
                        puVar13 = puVar14;
                      }
                      *puVar13 = puVar9;
                      puVar9[6] = puVar15[6];
                      FUN_02c4f79c();
                      puVar15 = (undefined8 *)puVar17[2];
                    }
                  }
                  else {
                    puVar9 = (undefined8 *)puVar15[1];
                    lVar11 = puVar15[2];
                    if (puVar9 != (undefined8 *)0x0) goto LAB_02c4f14c;
LAB_02c4f158:
                    if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 1)) goto LAB_02c4f004;
                  }
                  *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(puVar17 + 3);
                  *(undefined4 *)(puVar17 + 3) = 1;
                  if (puVar15[2] != 0) {
                    *(undefined4 *)(puVar15[2] + 0x18) = 1;
                  }
                  puVar9 = (undefined8 *)*puVar17;
                  puVar8 = (undefined8 *)puVar17[2];
                  puVar15 = puVar9 + 1;
                  puVar13 = (undefined8 *)*puVar15;
                  puVar14 = (undefined8 *)puVar8[1];
                  puVar17[2] = puVar14;
                  if (puVar14 != (undefined8 *)0x0) {
                    *puVar14 = puVar17;
                  }
                  puVar8[1] = puVar17;
LAB_02c4ed38:
                  *puVar17 = puVar8;
                  if (puVar13 != puVar17) {
                    puVar15 = puVar9 + 2;
                  }
                  *puVar8 = puVar9;
                  puVar13 = &DAT_043f22b8;
                  if ((undefined8 **)puVar9 != &DAT_043f22b8) {
                    puVar13 = puVar15;
                  }
                  *puVar13 = puVar8;
                  FUN_02c4f79c(puVar17);
                  FUN_02c4f79c(*puVar17);
                  goto LAB_02c4ed6c;
                }
                if (*(int *)(puVar15 + 3) != 0) {
                  lVar11 = puVar15[1];
                  puVar9 = (undefined8 *)puVar15[2];
                  if (puVar9 == (undefined8 *)0x0) goto LAB_02c4f0d4;
LAB_02c4f0c8:
                  if (*(int *)(puVar9 + 3) == 1) goto LAB_02c4f0d4;
                  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) == 1)) {
                    *(undefined4 *)(puVar9 + 3) = 1;
                    puVar8 = (undefined8 *)*puVar15;
                    *(undefined4 *)(puVar15 + 3) = 0;
                    puVar13 = (undefined8 *)puVar8[1];
                    puVar14 = (undefined8 *)puVar9[1];
                    puVar15[2] = puVar14;
                    if (puVar14 != (undefined8 *)0x0) {
                      *puVar14 = puVar15;
                    }
                    puVar9[1] = puVar15;
                    puVar14 = puVar8 + 1;
                    if (puVar13 != puVar15) {
                      puVar14 = puVar8 + 2;
                    }
                    *puVar15 = puVar9;
                    *puVar9 = puVar8;
                    puVar13 = &DAT_043f22b8;
                    if ((undefined8 **)puVar8 != &DAT_043f22b8) {
                      puVar13 = puVar14;
                    }
                    *puVar13 = puVar9;
                    puVar9[6] = puVar15[6];
                    FUN_02c4f79c();
                    puVar15 = (undefined8 *)puVar17[1];
                  }
LAB_02c4f1e4:
                  *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(puVar17 + 3);
                  *(undefined4 *)(puVar17 + 3) = 1;
                  if (puVar15[1] != 0) {
                    *(undefined4 *)(puVar15[1] + 0x18) = 1;
                  }
                  puVar9 = (undefined8 *)*puVar17;
                  puVar8 = (undefined8 *)puVar17[1];
                  puVar15 = puVar9 + 1;
                  puVar13 = (undefined8 *)*puVar15;
                  puVar14 = (undefined8 *)puVar8[2];
                  puVar17[1] = puVar14;
                  if (puVar14 != (undefined8 *)0x0) {
                    *puVar14 = puVar17;
                  }
                  puVar8[2] = puVar17;
                  goto LAB_02c4ed38;
                }
                *(undefined4 *)(puVar15 + 3) = 1;
                puVar9 = (undefined8 *)*puVar17;
                *(undefined4 *)(puVar17 + 3) = 0;
                puVar8 = (undefined8 *)puVar9[1];
                puVar13 = (undefined8 *)puVar15[2];
                puVar17[1] = puVar13;
                if (puVar13 != (undefined8 *)0x0) {
                  *puVar13 = puVar17;
                }
                puVar15[2] = puVar17;
                puVar13 = puVar9 + 1;
                if (puVar8 != puVar17) {
                  puVar13 = puVar9 + 2;
                }
                *puVar17 = puVar15;
                *puVar15 = puVar9;
                puVar8 = &DAT_043f22b8;
                if ((undefined8 **)puVar9 != &DAT_043f22b8) {
                  puVar8 = puVar13;
                }
                *puVar8 = puVar15;
                puVar15[6] = puVar17[6];
                FUN_02c4f79c(puVar17);
                puVar15 = (undefined8 *)puVar17[1];
                lVar11 = puVar15[1];
                puVar9 = (undefined8 *)puVar15[2];
                if (puVar9 != (undefined8 *)0x0) goto LAB_02c4f0c8;
LAB_02c4f0d4:
                if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) != 1)) goto LAB_02c4f1e4;
LAB_02c4f004:
                *(undefined4 *)(puVar15 + 3) = 0;
                puVar15 = (undefined8 *)*puVar17;
                puVar6 = puVar17;
                if ((undefined8 **)puVar15 == &DAT_043f22b8) goto LAB_02c4ed6c;
                bVar2 = puVar17 == (undefined8 *)0x0;
                puVar17 = puVar15;
              } while (bVar2);
LAB_02c4f020:
            } while (*(int *)(puVar6 + 3) == 1);
          }
          *(undefined4 *)(puVar6 + 3) = 1;
        }
LAB_02c4ed78:
        DAT_043f22b0 = DAT_043f22b0 + -1;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        (*DAT_043f2320)(puVar10);
        puVar10 = puVar16;
      } while (puVar16 != puVar12);
    }
  }
LAB_02c4f3b0:
  if (DAT_043f22b8 != (undefined8 *)0x0) {
    puVar10 = &DAT_043f22b8;
    puVar17 = DAT_043f22b8;
    do {
      lVar11 = 0x10;
      if (uVar18 <= (ulong)puVar17[4]) {
        lVar11 = 8;
        puVar10 = puVar17;
      }
      puVar17 = *(undefined8 **)((long)puVar17 + lVar11);
    } while (puVar17 != (undefined8 *)0x0);
    if ((undefined8 **)puVar10 != &DAT_043f22b8) {
      do {
        puVar17 = (undefined8 *)*puVar10;
        puVar12 = (undefined8 *)puVar10[1];
        puVar15 = (undefined8 *)puVar10[2];
        if (puVar17 == (undefined8 *)0x0) {
LAB_02c4f42c:
          puVar6 = puVar17;
          do {
            puVar16 = puVar6;
            puVar6 = (undefined8 *)puVar16[2];
          } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
        }
        else {
          if ((puVar12 == (undefined8 *)0x0) || (puVar15 == (undefined8 *)0x0)) {
            puVar6 = puVar12;
            if (puVar12 == (undefined8 *)0x0) {
              puVar16 = puVar17;
              puVar6 = puVar17;
              if ((undefined8 *)puVar17[1] == puVar10) {
                do {
                  puVar16 = (undefined8 *)*puVar6;
                  bVar2 = (undefined8 *)puVar16[1] == puVar6;
                  puVar6 = puVar16;
                } while (bVar2);
              }
              goto LAB_02c4f480;
            }
          }
          else if (((puVar12 == puVar15) || ((undefined8 *)*puVar12 != puVar10)) ||
                  (puVar6 = puVar12, (undefined8 *)*puVar15 != puVar10)) goto LAB_02c4f42c;
          do {
            puVar16 = puVar6;
            puVar6 = (undefined8 *)puVar16[2];
          } while ((undefined8 *)puVar16[2] != (undefined8 *)0x0);
        }
LAB_02c4f480:
        if (puVar16 == puVar10) {
          uVar18 = 0;
        }
        else {
          uVar18 = puVar10[4] - puVar16[5];
        }
        uVar5 = uVar18;
        if ((puVar12 != (undefined8 *)0x0) && (uVar5 = puVar12[6], (ulong)puVar12[6] <= uVar18)) {
          uVar5 = uVar18;
        }
        uVar18 = uVar5;
        if ((puVar15 != (undefined8 *)0x0) && (uVar18 = puVar15[6], (ulong)puVar15[6] <= uVar5)) {
          uVar18 = uVar5;
        }
        puVar6 = puVar17;
        if (puVar17 == (undefined8 *)0x0) {
LAB_02c4f4e0:
          do {
            puVar17 = puVar6;
            puVar6 = (undefined8 *)puVar17[2];
          } while ((undefined8 *)puVar17[2] != (undefined8 *)0x0);
        }
        else {
          if ((puVar12 != (undefined8 *)0x0) && (puVar15 != (undefined8 *)0x0)) {
            if ((puVar12 != puVar15) && ((undefined8 *)*puVar12 == puVar10)) {
              if ((undefined8 *)*puVar15 == puVar10) goto LAB_02c4f500;
            }
            goto LAB_02c4f4e0;
          }
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = puVar17;
            if ((undefined8 *)puVar17[1] == puVar10) {
              do {
                puVar17 = (undefined8 *)*puVar12;
                bVar2 = (undefined8 *)puVar17[1] == puVar12;
                puVar12 = puVar17;
              } while (bVar2);
            }
          }
          else {
LAB_02c4f500:
            do {
              puVar17 = puVar12;
              puVar12 = (undefined8 *)puVar17[2];
            } while ((undefined8 *)puVar17[2] != (undefined8 *)0x0);
          }
        }
        uVar5 = uVar18;
        if ((puVar17 == puVar10) &&
           (uVar5 = puVar10[4] - DAT_043f22a0, (ulong)(puVar10[4] - DAT_043f22a0) <= uVar18)) {
          uVar5 = uVar18;
        }
        if (uVar5 == puVar10[6]) break;
        puVar10[6] = uVar5;
        puVar10 = (undefined8 *)*puVar10;
      } while ((undefined8 **)puVar10 != &DAT_043f22b8);
    }
  }
LAB_02c4f56c:
  iVar3 = 0;
LAB_02c4f570:
  std::mutex::unlock();
  return iVar3;
}


