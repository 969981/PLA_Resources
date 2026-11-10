/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015e100; name: FUN_0015e100
 */


void FUN_0015e100(long param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  
  lVar15 = *(long *)(param_1 + 0x70);
  *(byte *)(lVar15 + 9) = *(byte *)(lVar15 + 9) | 4;
  switch(*(undefined1 *)(lVar15 + 8)) {
  case 5:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar15 + 0x30);
    lVar18 = *(long *)(lVar15 + 0x28);
    if (lVar18 == 0) {
LAB_0015e648:
      plVar16 = *(long **)(lVar15 + 0x18);
      plVar9 = plVar16 + (long)(1 << (ulong)(*(byte *)(lVar15 + 0xb) & 0x1f)) * 4;
      uVar10 = (ulong)*(uint *)(lVar15 + 0xc);
      if (*(uint *)(lVar15 + 0xc) != 0) {
        lVar13 = 0;
        uVar14 = 0;
        lVar18 = *(long *)(lVar15 + 0x10);
        if ((*(byte *)(lVar18 + 8) >> 6 & 1) != 0) goto LAB_0015e6a0;
LAB_0015e680:
        uVar14 = uVar14 + 1;
        if (uVar14 < uVar10) {
          while( true ) {
            lVar13 = lVar13 + 0x10;
            lVar18 = *(long *)(lVar15 + 0x10);
            if ((*(byte *)(lVar18 + lVar13 + 8) >> 6 & 1) == 0) break;
LAB_0015e6a0:
            if ((*(byte *)(*(long *)(lVar18 + lVar13) + 9) & 3) == 0) break;
            FUN_0015cac0(param_1);
            uVar10 = (ulong)*(uint *)(lVar15 + 0xc);
            uVar14 = uVar14 + 1;
            if (uVar10 <= uVar14) goto LAB_0015e6cc;
          }
          goto LAB_0015e680;
        }
LAB_0015e6cc:
        plVar16 = *(long **)(lVar15 + 0x18);
      }
      if (plVar16 < plVar9) {
        uVar7 = *(uint *)(plVar16 + 1);
        uVar12 = *(uint *)(plVar16 + 3);
        if (uVar7 != 0) goto LAB_0015e704;
        do {
          plVar20 = plVar16;
          if (((uVar12 >> 6 & 1) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
            *(undefined4 *)(plVar16 + 3) = 10;
          }
          while( true ) {
            plVar16 = plVar20 + 4;
            if (plVar9 <= plVar16) goto LAB_0015e8b0;
            uVar7 = *(uint *)(plVar20 + 5);
            uVar12 = *(uint *)(plVar20 + 7);
            if (uVar7 == 0) break;
LAB_0015e704:
            if (((uVar12 >> 6 & 1) != 0) && ((*(byte *)(plVar16[2] + 9) & 3) != 0)) {
              FUN_0015cac0(param_1);
              uVar7 = *(uint *)(plVar16 + 1);
            }
            plVar20 = plVar16;
            if (((uVar7 >> 6 & 1) != 0) && ((*(byte *)(*plVar16 + 9) & 3) != 0)) {
              FUN_0015cac0(param_1);
            }
          }
        } while( true );
      }
    }
    else {
      if ((*(byte *)(lVar18 + 10) >> 3 & 1) == 0) {
        plVar16 = (long *)FUN_001738a0(lVar18,3,*(undefined8 *)(param_1 + 0xf8));
        lVar18 = *(long *)(lVar15 + 0x28);
        if (lVar18 != 0) goto LAB_0015e5d0;
      }
      else {
        plVar16 = (long *)0x0;
LAB_0015e5d0:
        if ((*(byte *)(lVar18 + 9) & 3) != 0) {
          FUN_0015cac0(param_1);
        }
      }
      if ((plVar16 == (long *)0x0) || ((*(uint *)(plVar16 + 1) & 0xf) != 4)) goto LAB_0015e648;
      lVar18 = *plVar16;
      pcVar4 = strchr((char *)(lVar18 + 0x18),0x6b);
      pcVar5 = strchr((char *)(lVar18 + 0x18),0x76);
      if (pcVar4 == (char *)0x0 && pcVar5 == (char *)0x0) goto LAB_0015e648;
      *(byte *)(lVar15 + 9) = *(byte *)(lVar15 + 9) & 0xfb;
      if (pcVar4 == (char *)0x0) {
        bVar3 = *(int *)(lVar15 + 0xc) != 0;
        if (*(byte *)(lVar15 + 0xb) != 0x1f) {
          plVar9 = *(long **)(lVar15 + 0x18);
          plVar16 = plVar9 + (long)(1 << (ulong)(*(byte *)(lVar15 + 0xb) & 0x1f)) * 4;
          iVar11 = (int)plVar9[1];
          uVar12 = *(uint *)(plVar9 + 3);
          do {
            if (iVar11 == 0) {
              if (((uVar12 >> 6 & 1) != 0) && ((*(byte *)(plVar9[2] + 9) & 3) != 0)) {
                *(undefined4 *)(plVar9 + 3) = 10;
              }
            }
            else {
              if (((uVar12 >> 6 & 1) != 0) && ((*(byte *)(plVar9[2] + 9) & 3) != 0)) {
                FUN_0015cac0(param_1);
              }
              bVar2 = !bVar3;
              bVar3 = true;
              if (bVar2) {
                if ((*(uint *)(plVar9 + 1) >> 6 & 1) != 0) {
                  if ((*(uint *)(plVar9 + 1) & 0xf) == 4) {
                    if ((*(byte *)(*plVar9 + 9) & 3) != 0) {
                      FUN_0015cac0(param_1);
                    }
                  }
                  else if ((*(byte *)(*plVar9 + 9) & 3) != 0) {
                    bVar3 = true;
                    goto joined_r0x0015e7dc;
                  }
                }
                bVar3 = false;
              }
            }
joined_r0x0015e7dc:
            plVar9 = plVar9 + 4;
            if (plVar16 <= plVar9) break;
            iVar11 = (int)plVar9[1];
            uVar12 = *(uint *)(plVar9 + 3);
          } while( true );
        }
        if (*(char *)(param_1 + 0x55) == '\0') {
          *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(param_1 + 0x78);
          *(long *)(param_1 + 0x78) = lVar15;
        }
        else if (bVar3) {
          *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(param_1 + 0x80);
          *(long *)(param_1 + 0x80) = lVar15;
        }
      }
      else if (pcVar5 == (char *)0x0) {
        FUN_0015ea20(param_1,lVar15);
      }
      else {
        *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(param_1 + 0x90);
        *(long *)(param_1 + 0x90) = lVar15;
      }
    }
LAB_0015e8b0:
    uVar10 = 0;
    if (*(long *)(lVar15 + 0x20) != 0) {
      uVar12 = 1 << (ulong)(*(byte *)(lVar15 + 0xb) & 0x1f);
      uVar10 = -(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5;
    }
    lVar15 = (ulong)*(uint *)(lVar15 + 0xc) * 0x10 + 0x38 + uVar10;
    break;
  case 6:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar15 + 0x10);
    if ((*(long *)(lVar15 + 0x18) != 0) && ((*(byte *)(*(long *)(lVar15 + 0x18) + 9) & 3) != 0)) {
      FUN_0015cac0(param_1);
    }
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar18 = 0;
      puVar8 = *(undefined8 **)(lVar15 + 0x20);
      do {
        if (puVar8 == (undefined8 *)0x0) {
LAB_0015e1d0:
          uVar10 = (ulong)*(byte *)(lVar15 + 10);
          if (uVar10 <= lVar18 + 1U) goto LAB_0015e234;
        }
        else {
          plVar16 = (long *)*puVar8;
          if ((plVar16 != puVar8 + 2) && (*(char *)(param_1 + 0x55) != '\b')) {
            *(undefined4 *)(puVar8 + 3) = 1;
            goto LAB_0015e1d0;
          }
          if (((*(byte *)(plVar16 + 1) >> 6 & 1) == 0) || ((*(byte *)(*plVar16 + 9) & 3) == 0))
          goto LAB_0015e1d0;
          FUN_0015cac0(param_1);
          uVar10 = (ulong)*(byte *)(lVar15 + 10);
          if (uVar10 <= lVar18 + 1U) goto LAB_0015e234;
        }
        lVar18 = lVar18 + 1;
        puVar8 = (undefined8 *)((long *)(lVar15 + 0x20))[lVar18];
      } while( true );
    }
    lVar15 = 0x20;
    break;
  default:
    goto switchD_0015e14c_caseD_7;
  case 8:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar15 + 0x48);
    *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar15;
    plVar16 = *(long **)(lVar15 + 0x38);
    *(byte *)(lVar15 + 9) = *(byte *)(lVar15 + 9) & 0xfb;
    if (plVar16 == (long *)0x0) {
      lVar15 = 1;
    }
    else {
      plVar9 = *(long **)(lVar15 + 0x10);
      if (plVar16 < plVar9) {
        do {
          if (((*(byte *)(plVar16 + 1) >> 6 & 1) != 0) && ((*(byte *)(*plVar16 + 9) & 3) != 0)) {
            FUN_0015cac0(param_1);
            plVar9 = *(long **)(lVar15 + 0x10);
          }
          plVar16 = plVar16 + 2;
        } while (plVar16 < plVar9);
      }
      if (*(char *)(param_1 + 0x55) == '\b') {
        plVar9 = (long *)(*(long *)(lVar15 + 0x38) + (long)*(int *)(lVar15 + 0xb8) * 0x10);
        if (plVar16 < plVar9) {
          uVar14 = ~(ulong)plVar16;
          uVar12 = ((uint)((long)plVar9 + uVar14 >> 4) & 0xfffffff) + 1;
          uVar10 = (ulong)uVar12 & 7;
          if ((uVar12 & 7) != 0) {
            do {
              *(undefined4 *)(plVar16 + 1) = 0;
              plVar16 = plVar16 + 2;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (0x6f < (long)plVar9 + uVar14) {
            do {
              *(undefined4 *)(plVar16 + 1) = 0;
              *(undefined4 *)(plVar16 + 3) = 0;
              *(undefined4 *)(plVar16 + 5) = 0;
              *(undefined4 *)(plVar16 + 7) = 0;
              *(undefined4 *)(plVar16 + 9) = 0;
              *(undefined4 *)(plVar16 + 0xb) = 0;
              *(undefined4 *)(plVar16 + 0xd) = 0;
              *(undefined4 *)(plVar16 + 0xf) = 0;
              plVar16 = plVar16 + 0x10;
            } while (plVar16 < plVar9);
          }
        }
        if ((*(long *)(lVar15 + 0x50) == lVar15) && (*(long *)(lVar15 + 0x40) != 0)) {
          *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar15;
        }
      }
      else if (*(char *)(param_1 + 0x56) != '\x01') {
        FUN_0015a680(lVar15);
      }
      lVar15 = (ulong)*(ushort *)(lVar15 + 10) * 0x48 + (long)*(int *)(lVar15 + 0xb8) * 0x10 + 0xd0;
    }
    break;
  case 9:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar15 + 0x70);
    if ((*(long *)(lVar15 + 0x60) != 0) && ((*(byte *)(*(long *)(lVar15 + 0x60) + 9) & 3) != 0)) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
    }
    if ((*(long *)(lVar15 + 0x68) != 0) && ((*(byte *)(*(long *)(lVar15 + 0x68) + 9) & 3) != 0)) {
      FUN_0015cac0(param_1);
    }
    iVar11 = *(int *)(lVar15 + 0x14);
    if (0 < iVar11) {
      lVar17 = 0;
      lVar18 = 0;
      lVar13 = *(long *)(lVar15 + 0x30);
      if ((*(byte *)(lVar13 + 8) >> 6 & 1) != 0) goto LAB_0015e32c;
LAB_0015e30c:
      lVar18 = lVar18 + 1;
      if (lVar18 < iVar11) {
        while( true ) {
          lVar17 = lVar17 + 0x10;
          lVar13 = *(long *)(lVar15 + 0x30);
          if ((*(byte *)(lVar13 + lVar17 + 8) >> 6 & 1) == 0) break;
LAB_0015e32c:
          if ((*(byte *)(*(long *)(lVar13 + lVar17) + 9) & 3) == 0) break;
          FUN_0015cac0(param_1);
          iVar11 = *(int *)(lVar15 + 0x14);
          lVar18 = lVar18 + 1;
          if (iVar11 <= lVar18) goto LAB_0015e358;
        }
        goto LAB_0015e30c;
      }
    }
LAB_0015e358:
    iVar11 = *(int *)(lVar15 + 0x10);
    if (0 < iVar11) {
      lVar17 = 0;
      lVar18 = 0;
      lVar13 = **(long **)(lVar15 + 0x58);
      if (lVar13 != 0) goto LAB_0015e394;
LAB_0015e378:
      lVar18 = lVar18 + 1;
      if (lVar18 < iVar11) {
        while( true ) {
          lVar17 = lVar17 + 0x10;
          lVar13 = *(long *)(*(long *)(lVar15 + 0x58) + lVar17);
          if (lVar13 == 0) break;
LAB_0015e394:
          if ((*(byte *)(lVar13 + 9) & 3) == 0) break;
          FUN_0015cac0(param_1);
          iVar11 = *(int *)(lVar15 + 0x10);
          lVar18 = lVar18 + 1;
          if (iVar11 <= lVar18) goto LAB_0015e3bc;
        }
        goto LAB_0015e378;
      }
    }
LAB_0015e3bc:
    iVar11 = *(int *)(lVar15 + 0x20);
    if (0 < iVar11) {
      lVar18 = 0;
      lVar13 = **(long **)(lVar15 + 0x40);
      do {
        if ((lVar13 == 0) || ((*(byte *)(lVar13 + 9) & 3) == 0)) {
          if ((long)iVar11 <= lVar18 + 1) break;
        }
        else {
          FUN_0015cac0(param_1);
          iVar11 = *(int *)(lVar15 + 0x20);
          if ((long)iVar11 <= lVar18 + 1) break;
        }
        lVar18 = lVar18 + 1;
        lVar13 = *(long *)(*(long *)(lVar15 + 0x40) + lVar18 * 8);
      } while( true );
    }
    iVar6 = *(int *)(lVar15 + 0x24);
    if (0 < iVar6) {
      lVar17 = 0;
      lVar18 = 0;
      lVar13 = **(long **)(lVar15 + 0x50);
      if (lVar13 != 0) goto LAB_0015e450;
LAB_0015e434:
      lVar18 = lVar18 + 1;
      if (lVar18 < iVar6) {
        while( true ) {
          lVar17 = lVar17 + 0x10;
          lVar13 = *(long *)(*(long *)(lVar15 + 0x50) + lVar17);
          if (lVar13 == 0) break;
LAB_0015e450:
          if ((*(byte *)(lVar13 + 9) & 3) == 0) break;
          FUN_0015cac0(param_1);
          iVar6 = *(int *)(lVar15 + 0x24);
          lVar18 = lVar18 + 1;
          if (iVar6 <= lVar18) goto LAB_0015e478;
        }
        goto LAB_0015e434;
      }
LAB_0015e478:
      iVar11 = *(int *)(lVar15 + 0x20);
    }
    lVar15 = (long)(iVar11 * 8 + (*(int *)(lVar15 + 0x1c) + *(int *)(lVar15 + 0x18)) * 4 +
                    (*(int *)(lVar15 + 0x14) + iVar6 + *(int *)(lVar15 + 0x10)) * 0x10 + 0x78);
    break;
  case 0x26:
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar15 + 0x10);
    uVar10 = (ulong)*(byte *)(lVar15 + 10);
    if (*(byte *)(lVar15 + 10) != 0) {
      lVar18 = 0;
      pbVar19 = (byte *)(lVar15 + 0x28);
      bVar1 = *pbVar19;
      do {
        if (((bVar1 >> 6 & 1) == 0) || ((*(byte *)(*(long *)(pbVar19 + -8) + 9) & 3) == 0)) {
          if (uVar10 <= lVar18 + 1U) break;
        }
        else {
          FUN_0015cac0(param_1);
          uVar10 = (ulong)*(byte *)(lVar15 + 10);
          if ((ulong)*(byte *)(lVar15 + 10) <= lVar18 + 1U) break;
        }
        lVar18 = lVar18 + 1;
        pbVar19 = pbVar19 + 0x10;
        bVar1 = *pbVar19;
      } while( true );
    }
    lVar15 = uVar10 * 0x10 + 0x20;
  }
  goto LAB_0015e8d8;
LAB_0015e234:
  lVar15 = uVar10 * 8 + 0x20;
LAB_0015e8d8:
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar15;
switchD_0015e14c_caseD_7:
  return;
}


