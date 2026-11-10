/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015d050; name: FUN_0015d050
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0015d050(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar16 = *(long *)(param_1 + 0x18);
  switch(*(undefined1 *)(lVar16 + 0x55)) {
  case 0:
    *(undefined8 *)(lVar16 + 0x20) = 0;
    FUN_0015e100(lVar16);
    if (*(long *)(lVar16 + 0x70) == 0) {
      *(undefined1 *)(lVar16 + 0x55) = 1;
    }
    lVar20 = *(long *)(lVar16 + 0x20);
    break;
  case 1:
    lVar20 = lVar16;
    if (*(long *)(lVar16 + 0x70) != 0) {
      do {
        FUN_0015e100(lVar16);
      } while (*(long *)(lVar16 + 0x70) != 0);
      lVar20 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)(lVar20 + 0x55) = 8;
    *(undefined8 *)(lVar20 + 0x20) = 0;
    lVar11 = *(long *)(lVar20 + 0x78);
    if ((*(byte *)(param_1 + 9) & 3) != 0) {
      FUN_0015cac0(lVar20,param_1);
    }
    if (((*(byte *)(lVar20 + 0x48) >> 6 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar20 + 0x40) + 9) & 3) != 0)) {
      FUN_0015cac0(lVar20);
    }
    FUN_0015e900(lVar20);
    plVar18 = (long *)(lVar20 + 0xa8);
    lVar9 = *plVar18;
    while (lVar9 != 0) {
      if (((*(byte *)(lVar9 + 9) & 7) == 0) && (*(long *)(lVar9 + 0x40) != 0)) {
        plVar18 = (long *)(lVar9 + 0x50);
      }
      else {
        *plVar18 = *(long *)(lVar9 + 0x50);
        puVar17 = *(undefined8 **)(lVar9 + 0x40);
        *(long *)(lVar9 + 0x50) = lVar9;
        for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)puVar17[2]) {
          if (*(int *)(puVar17 + 3) != 0) {
            if (((*(byte *)((long *)*puVar17 + 1) >> 6 & 1) != 0) &&
               ((*(byte *)(*(long *)*puVar17 + 9) & 3) != 0)) {
              FUN_0015cac0(lVar20);
            }
            *(undefined4 *)(puVar17 + 3) = 0;
          }
        }
      }
      lVar9 = *plVar18;
    }
    while (*(long *)(lVar20 + 0x70) != 0) {
      FUN_0015e100(lVar20);
    }
    lVar9 = *(long *)(lVar20 + 0x20);
    *(long *)(lVar20 + 0x70) = lVar11;
    while (lVar11 != 0) {
      FUN_0015e100(lVar20);
      lVar11 = *(long *)(lVar20 + 0x70);
    }
    *(undefined8 *)(lVar20 + 0x20) = 0;
    lVar11 = *(long *)(lVar20 + 0x88);
    *(undefined8 *)(lVar20 + 0x88) = 0;
    while (lVar11 != 0) {
      bVar5 = false;
      do {
        lVar23 = *(long *)(lVar11 + 0x30);
        iVar6 = FUN_0015ea20(lVar20,lVar11);
        if (iVar6 != 0) {
          lVar11 = *(long *)(lVar20 + 0x70);
          while (lVar11 != 0) {
            FUN_0015e100(lVar20);
            lVar11 = *(long *)(lVar20 + 0x70);
          }
          bVar5 = true;
        }
        lVar11 = lVar23;
      } while (lVar23 != 0);
      if (!bVar5) break;
      lVar11 = *(long *)(lVar20 + 0x88);
      *(undefined8 *)(lVar20 + 0x88) = 0;
    }
    for (lVar11 = *(long *)(lVar20 + 0x80); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x30)) {
      plVar18 = *(long **)(lVar11 + 0x18);
      plVar10 = plVar18 + (long)(1 << (ulong)(*(byte *)(lVar11 + 0xb) & 0x1f)) * 4;
      if (*(int *)(lVar11 + 0xc) != 0) {
        lVar23 = 0;
        uVar19 = 0;
        lVar12 = *(long *)(lVar11 + 0x10);
        uVar2 = *(uint *)(lVar12 + 8);
        lVar22 = lVar12;
        while( true ) {
          if ((uVar2 >> 6 & 1) != 0) {
            bVar3 = *(byte *)(*(long *)(lVar12 + lVar23) + 9);
            if ((uVar2 & 0xf) == 4) {
              if ((bVar3 & 3) != 0) {
                FUN_0015cac0(lVar20);
              }
            }
            else if ((bVar3 & 3) != 0) {
              *(undefined4 *)(lVar22 + 8) = 0;
            }
          }
          uVar19 = uVar19 + 1;
          lVar23 = lVar23 + 0x10;
          if (*(uint *)(lVar11 + 0xc) <= uVar19) break;
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar22 = lVar12 + lVar23;
          uVar2 = *(uint *)(lVar22 + 8);
        }
        plVar18 = *(long **)(lVar11 + 0x18);
      }
      for (; plVar18 < plVar10; plVar18 = plVar18 + 4) {
        while ((*(uint *)(plVar18 + 1) >> 6 & 1) != 0) {
          if ((*(uint *)(plVar18 + 1) & 0xf) != 4) {
            if ((((*(byte *)(*plVar18 + 9) & 3) != 0) &&
                (*(undefined4 *)(plVar18 + 1) = 0, (*(byte *)(plVar18 + 3) >> 6 & 1) != 0)) &&
               ((*(byte *)(plVar18[2] + 9) & 3) != 0)) {
              *(undefined4 *)(plVar18 + 3) = 10;
            }
            break;
          }
          if ((*(byte *)(*plVar18 + 9) & 3) == 0) break;
          FUN_0015cac0(lVar20);
          plVar18 = plVar18 + 4;
          if (plVar10 <= plVar18) goto LAB_0015d45c;
        }
      }
LAB_0015d45c:
    }
    lVar11 = *(long *)(lVar20 + 0x90);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      do {
        plVar18 = *(long **)(lVar11 + 0x18);
        plVar10 = plVar18 + (long)(1 << (ulong)(*(byte *)(lVar11 + 0xb) & 0x1f)) * 4;
        if (*(int *)(lVar11 + 0xc) != 0) {
          lVar23 = 0;
          uVar19 = 0;
          lVar12 = *(long *)(lVar11 + 0x10);
          uVar2 = *(uint *)(lVar12 + 8);
          lVar22 = lVar12;
          while( true ) {
            if ((uVar2 >> 6 & 1) != 0) {
              bVar3 = *(byte *)(*(long *)(lVar12 + lVar23) + 9);
              if ((uVar2 & 0xf) == 4) {
                if ((bVar3 & 3) != 0) {
                  FUN_0015cac0(lVar20);
                }
              }
              else if ((bVar3 & 3) != 0) {
                *(undefined4 *)(lVar22 + 8) = 0;
              }
            }
            uVar19 = uVar19 + 1;
            lVar23 = lVar23 + 0x10;
            if (*(uint *)(lVar11 + 0xc) <= uVar19) break;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar22 = lVar12 + lVar23;
            uVar2 = *(uint *)(lVar22 + 8);
          }
          plVar18 = *(long **)(lVar11 + 0x18);
        }
        for (; plVar18 < plVar10; plVar18 = plVar18 + 4) {
          while ((*(uint *)(plVar18 + 1) >> 6 & 1) != 0) {
            if ((*(uint *)(plVar18 + 1) & 0xf) != 4) {
              if ((((*(byte *)(*plVar18 + 9) & 3) != 0) &&
                  (*(undefined4 *)(plVar18 + 1) = 0, (*(byte *)(plVar18 + 3) >> 6 & 1) != 0)) &&
                 ((*(byte *)(plVar18[2] + 9) & 3) != 0)) {
                *(undefined4 *)(plVar18 + 3) = 10;
              }
              break;
            }
            if ((*(byte *)(*plVar18 + 9) & 3) == 0) break;
            FUN_0015cac0(lVar20);
            plVar18 = plVar18 + 4;
            if (plVar10 <= plVar18) goto LAB_0015d590;
          }
        }
LAB_0015d590:
        lVar11 = *(long *)(lVar11 + 0x30);
      } while (lVar11 != 0);
      lVar11 = *(long *)(lVar20 + 0x90);
    }
    lVar23 = *(long *)(lVar20 + 0x80);
    lVar22 = *(long *)(lVar20 + 0x20);
    plVar18 = (long *)(lVar20 + 0x98);
    do {
      plVar10 = plVar18;
      plVar18 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
    plVar14 = *(long **)(lVar20 + 0x68);
    plVar18 = (long *)(lVar20 + 0x68);
    while (plVar15 = plVar14, plVar14 != (long *)0x0) {
      while ((*(byte *)((long)plVar15 + 9) & 3) != 0) {
        *plVar18 = *plVar15;
        *plVar15 = *plVar10;
        *plVar10 = (long)plVar15;
        plVar10 = plVar15;
        plVar15 = (long *)*plVar18;
        if ((long *)*plVar18 == (long *)0x0) goto LAB_0015d724;
      }
      plVar18 = plVar15;
      plVar14 = (long *)*plVar15;
    }
LAB_0015d724:
    plVar18 = *(long **)(lVar20 + 0x98);
    *(undefined4 *)(lVar20 + 0xb0) = 1;
    for (; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      if ((*(byte *)((long)plVar18 + 9) & 3) != 0) {
        FUN_0015cac0(lVar20,plVar18);
      }
    }
    while (*(long *)(lVar20 + 0x70) != 0) {
      FUN_0015e100(lVar20);
    }
    *(undefined8 *)(lVar20 + 0x20) = 0;
    lVar12 = *(long *)(lVar20 + 0x88);
    *(undefined8 *)(lVar20 + 0x88) = 0;
    while (lVar12 != 0) {
      bVar5 = false;
      do {
        lVar21 = *(long *)(lVar12 + 0x30);
        iVar6 = FUN_0015ea20(lVar20,lVar12);
        if (iVar6 != 0) {
          lVar12 = *(long *)(lVar20 + 0x70);
          while (lVar12 != 0) {
            FUN_0015e100(lVar20);
            lVar12 = *(long *)(lVar20 + 0x70);
          }
          bVar5 = true;
        }
        lVar12 = lVar21;
      } while (lVar21 != 0);
      if (!bVar5) {
        lVar12 = *(long *)(lVar20 + 0x88);
        if (lVar12 != 0) {
          bVar3 = *(byte *)(lVar12 + 0xb);
          while( true ) {
            if (bVar3 != 0x1f) {
              lVar24 = *(long *)(lVar12 + 0x18);
              iVar6 = *(int *)(lVar24 + 8);
              lVar21 = lVar24;
              while( true ) {
                if ((iVar6 != 0) && ((*(uint *)(lVar21 + 0x18) >> 6 & 1) != 0)) {
                  bVar4 = *(byte *)(*(long *)(lVar21 + 0x10) + 9);
                  if ((*(uint *)(lVar21 + 0x18) & 0xf) == 4) {
                    if ((bVar4 & 3) != 0) {
                      FUN_0015cac0(lVar20);
                    }
                  }
                  else if (((bVar4 & 3) != 0) &&
                          (*(undefined4 *)(lVar21 + 8) = 0,
                          (*(byte *)(*(long *)(lVar21 + 0x10) + 9) & 3) != 0)) {
                    *(undefined4 *)(lVar21 + 0x18) = 10;
                  }
                }
                if ((ulong)(lVar24 + (long)(1 << (ulong)(bVar3 & 0x1f)) * 0x20) <= lVar21 + 0x20U)
                break;
                iVar6 = *(int *)(lVar21 + 0x28);
                lVar21 = lVar21 + 0x20;
              }
            }
            lVar12 = *(long *)(lVar12 + 0x30);
            if (lVar12 == 0) break;
            bVar3 = *(byte *)(lVar12 + 0xb);
          }
        }
        break;
      }
      lVar12 = *(long *)(lVar20 + 0x88);
      *(undefined8 *)(lVar20 + 0x88) = 0;
    }
    lVar12 = *(long *)(lVar20 + 0x90);
    if (lVar12 != 0) {
      bVar3 = *(byte *)(lVar12 + 0xb);
      while( true ) {
        if (bVar3 != 0x1f) {
          lVar24 = *(long *)(lVar12 + 0x18);
          iVar6 = *(int *)(lVar24 + 8);
          lVar21 = lVar24;
          while( true ) {
            if ((iVar6 != 0) && ((*(uint *)(lVar21 + 0x18) >> 6 & 1) != 0)) {
              bVar4 = *(byte *)(*(long *)(lVar21 + 0x10) + 9);
              if ((*(uint *)(lVar21 + 0x18) & 0xf) == 4) {
                if ((bVar4 & 3) != 0) {
                  FUN_0015cac0(lVar20);
                }
              }
              else if (((bVar4 & 3) != 0) &&
                      (*(undefined4 *)(lVar21 + 8) = 0,
                      (*(byte *)(*(long *)(lVar21 + 0x10) + 9) & 3) != 0)) {
                *(undefined4 *)(lVar21 + 0x18) = 10;
              }
            }
            if ((ulong)(lVar24 + (long)(1 << (ulong)(bVar3 & 0x1f)) * 0x20) <= lVar21 + 0x20U)
            break;
            iVar6 = *(int *)(lVar21 + 0x28);
            lVar21 = lVar21 + 0x20;
          }
        }
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 == 0) break;
        bVar3 = *(byte *)(lVar12 + 0xb);
      }
    }
    for (lVar12 = *(long *)(lVar20 + 0x80); lVar12 != lVar23; lVar12 = *(long *)(lVar12 + 0x30)) {
      plVar18 = *(long **)(lVar12 + 0x18);
      plVar10 = plVar18 + (long)(1 << (ulong)(*(byte *)(lVar12 + 0xb) & 0x1f)) * 4;
      if (*(int *)(lVar12 + 0xc) != 0) {
        lVar21 = 0;
        uVar19 = 0;
        lVar13 = *(long *)(lVar12 + 0x10);
        uVar2 = *(uint *)(lVar13 + 8);
        lVar24 = lVar13;
        while( true ) {
          if ((uVar2 >> 6 & 1) != 0) {
            bVar3 = *(byte *)(*(long *)(lVar13 + lVar21) + 9);
            if ((uVar2 & 0xf) == 4) {
              if ((bVar3 & 3) != 0) {
                FUN_0015cac0(lVar20);
              }
            }
            else if ((bVar3 & 3) != 0) {
              *(undefined4 *)(lVar24 + 8) = 0;
            }
          }
          uVar19 = uVar19 + 1;
          lVar21 = lVar21 + 0x10;
          if (*(uint *)(lVar12 + 0xc) <= uVar19) break;
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar24 = lVar13 + lVar21;
          uVar2 = *(uint *)(lVar24 + 8);
        }
        plVar18 = *(long **)(lVar12 + 0x18);
      }
      for (; plVar18 < plVar10; plVar18 = plVar18 + 4) {
        while ((*(uint *)(plVar18 + 1) >> 6 & 1) != 0) {
          if ((*(uint *)(plVar18 + 1) & 0xf) != 4) {
            if ((((*(byte *)(*plVar18 + 9) & 3) != 0) &&
                (*(undefined4 *)(plVar18 + 1) = 0, (*(byte *)(plVar18 + 3) >> 6 & 1) != 0)) &&
               ((*(byte *)(plVar18[2] + 9) & 3) != 0)) {
              *(undefined4 *)(plVar18 + 3) = 10;
            }
            break;
          }
          if ((*(byte *)(*plVar18 + 9) & 3) == 0) break;
          FUN_0015cac0(lVar20);
          plVar18 = plVar18 + 4;
          if (plVar10 <= plVar18) goto LAB_0015d970;
        }
      }
LAB_0015d970:
    }
    for (lVar23 = *(long *)(lVar20 + 0x90); lVar23 != lVar11; lVar23 = *(long *)(lVar23 + 0x30)) {
      plVar18 = *(long **)(lVar23 + 0x18);
      plVar10 = plVar18 + (long)(1 << (ulong)(*(byte *)(lVar23 + 0xb) & 0x1f)) * 4;
      if (*(int *)(lVar23 + 0xc) != 0) {
        lVar12 = 0;
        uVar19 = 0;
        lVar24 = *(long *)(lVar23 + 0x10);
        uVar2 = *(uint *)(lVar24 + 8);
        lVar21 = lVar24;
        while( true ) {
          if ((uVar2 >> 6 & 1) != 0) {
            bVar3 = *(byte *)(*(long *)(lVar24 + lVar12) + 9);
            if ((uVar2 & 0xf) == 4) {
              if ((bVar3 & 3) != 0) {
                FUN_0015cac0(lVar20);
              }
            }
            else if ((bVar3 & 3) != 0) {
              *(undefined4 *)(lVar21 + 8) = 0;
            }
          }
          uVar19 = uVar19 + 1;
          lVar12 = lVar12 + 0x10;
          if (*(uint *)(lVar23 + 0xc) <= uVar19) break;
          lVar24 = *(long *)(lVar23 + 0x10);
          lVar21 = lVar24 + lVar12;
          uVar2 = *(uint *)(lVar21 + 8);
        }
        plVar18 = *(long **)(lVar23 + 0x18);
      }
      for (; plVar18 < plVar10; plVar18 = plVar18 + 4) {
        while ((*(uint *)(plVar18 + 1) >> 6 & 1) != 0) {
          if ((*(uint *)(plVar18 + 1) & 0xf) != 4) {
            if ((((*(byte *)(*plVar18 + 9) & 3) != 0) &&
                (*(undefined4 *)(plVar18 + 1) = 0, (*(byte *)(plVar18 + 3) >> 6 & 1) != 0)) &&
               ((*(byte *)(plVar18[2] + 9) & 3) != 0)) {
              *(undefined4 *)(plVar18 + 3) = 10;
            }
            break;
          }
          if ((*(byte *)(*plVar18 + 9) & 3) == 0) break;
          FUN_0015cac0(lVar20);
          plVar18 = plVar18 + 4;
          if (plVar10 <= plVar18) goto LAB_0015daa0;
        }
      }
LAB_0015daa0:
    }
    FUN_0016d4c0(lVar20);
    *(byte *)(lVar20 + 0x54) = *(byte *)(lVar20 + 0x54) ^ 3;
    lVar11 = *(long *)(param_1 + 0x18);
    lVar20 = lVar22 + lVar9 + *(long *)(lVar20 + 0x20);
    *(undefined1 *)(lVar11 + 0x55) = 2;
    uVar7 = FUN_0015ce80(param_1,lVar11 + 0x58,1);
    *(undefined8 *)(lVar11 + 0x60) = uVar7;
    *(long *)(lVar16 + 0x28) = *(long *)(lVar16 + 0x18) + *(long *)(lVar16 + 0x10);
    break;
  case 2:
    if (*(long *)(lVar16 + 0x60) != 0) {
      lVar11 = *(long *)(lVar16 + 0x18);
      lVar20 = FUN_0015ce80(param_1,*(long *)(lVar16 + 0x60),0x55);
      *(long *)(lVar16 + 0x60) = lVar20;
      *(long *)(lVar16 + 0x28) = (*(long *)(lVar16 + 0x18) - lVar11) + *(long *)(lVar16 + 0x28);
      if (lVar20 != 0) {
        return 0x253;
      }
    }
    *(undefined1 *)(lVar16 + 0x55) = 3;
    lVar20 = 0;
    *(long *)(lVar16 + 0x60) = lVar16 + 0x68;
    break;
  case 3:
    if (*(long *)(lVar16 + 0x60) != 0) {
      lVar11 = *(long *)(lVar16 + 0x18);
      lVar20 = FUN_0015ce80(param_1,*(long *)(lVar16 + 0x60),0x55);
      *(long *)(lVar16 + 0x60) = lVar20;
      *(long *)(lVar16 + 0x28) = (*(long *)(lVar16 + 0x18) - lVar11) + *(long *)(lVar16 + 0x28);
      if (lVar20 != 0) {
        return 0x253;
      }
    }
    *(undefined1 *)(lVar16 + 0x55) = 4;
    lVar20 = 0;
    *(long *)(lVar16 + 0x60) = lVar16 + 0x98;
    break;
  case 4:
    if (*(long *)(lVar16 + 0x60) != 0) {
      lVar11 = *(long *)(lVar16 + 0x18);
      lVar20 = FUN_0015ce80(param_1,*(long *)(lVar16 + 0x60),0x55);
      *(long *)(lVar16 + 0x60) = lVar20;
      *(long *)(lVar16 + 0x28) = (*(long *)(lVar16 + 0x18) - lVar11) + *(long *)(lVar16 + 0x28);
      if (lVar20 != 0) {
        return 0x253;
      }
    }
    lVar20 = 0;
    *(undefined8 *)(lVar16 + 0x60) = 0;
    *(undefined1 *)(lVar16 + 0x55) = 5;
    break;
  case 5:
    *(byte *)(*(long *)(lVar16 + 200) + 9) =
         *(byte *)(*(long *)(lVar16 + 200) + 9) & 0xf8 | *(byte *)(lVar16 + 0x54) & 3;
    if (*(char *)(lVar16 + 0x56) != '\x01') {
      iVar6 = *(int *)(lVar16 + 0x3c);
      lVar20 = *(long *)(lVar16 + 0x18);
      iVar1 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar1 = iVar6;
      }
      lVar11 = lVar20;
      if (*(int *)(lVar16 + 0x38) < iVar1 >> 2) {
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        FUN_0016d340(param_1,iVar6 >> 1);
        lVar11 = *(long *)(lVar16 + 0x18);
      }
      *(long *)(lVar16 + 0x28) = (lVar11 - lVar20) + *(long *)(lVar16 + 0x28);
    }
    uVar8 = 6;
    goto LAB_0015d3b8;
  case 6:
    if ((*(long *)(lVar16 + 0x98) != 0) && (*(char *)(lVar16 + 0x56) != '\x01')) {
      uVar19 = 0;
      do {
        if (*(uint *)(lVar16 + 0xb0) <= (uint)uVar19) {
          iVar6 = *(uint *)(lVar16 + 0xb0) << 1;
          goto LAB_0015dc34;
        }
        FUN_0015df60(param_1,1);
        uVar19 = (ulong)((uint)uVar19 + 1);
      } while (*(long *)(lVar16 + 0x98) != 0);
      iVar6 = 0;
LAB_0015dc34:
      *(int *)(lVar16 + 0xb0) = iVar6;
      return (-(uVar19 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3) - (long)(int)uVar19;
    }
    uVar8 = 7;
LAB_0015d3b8:
    lVar20 = 0;
    *(undefined1 *)(lVar16 + 0x55) = uVar8;
    break;
  case 7:
    *(undefined8 *)(lVar16 + 0x70) = 0;
    *(undefined8 *)(lVar16 + 0x78) = 0;
    *(long *)(lVar16 + 0x20) = (long)*(int *)(lVar16 + 0x3c) << 3;
    *(undefined8 *)(lVar16 + 0x80) = 0;
    *(undefined8 *)(lVar16 + 0x88) = 0;
    *(undefined8 *)(lVar16 + 0x90) = 0;
    if ((*(byte *)(*(long *)(lVar16 + 200) + 9) & 3) != 0) {
      FUN_0015cac0(lVar16);
    }
    if (((*(byte *)(lVar16 + 0x48) >> 6 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar16 + 0x40) + 9) & 3) != 0)) {
      FUN_0015cac0(lVar16);
    }
    FUN_0015e900(lVar16);
    for (plVar18 = *(long **)(lVar16 + 0x98); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
      if ((*(byte *)((long)plVar18 + 9) & 3) != 0) {
        FUN_0015cac0(lVar16,plVar18);
      }
    }
    lVar20 = *(long *)(lVar16 + 0x20);
    *(undefined1 *)(lVar16 + 0x55) = 0;
    break;
  default:
    lVar20 = 0;
  }
  return lVar20;
}


