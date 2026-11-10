/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a3034; name: FUN_031a3034
 */


void FUN_031a3034(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  uint *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  int local_80 [2];
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  if (*(long *)(lVar13 + 0x38d490) == 0) {
    lVar15 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar15;
    local_68 = *(long *)(lVar15 + 0x10);
  }
  else {
    local_68 = *(long *)(*(long *)(lVar13 + 0x38d490) + 0x10);
  }
  if (local_68 != 0) {
    FUN_032d5af0(local_68,"TtstepCompactOwnedVertices",0x1a);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar15 = *(long *)(param_1 + 0x20);
    uVar24 = *(uint *)(lVar15 + 0xf8);
    lVar16 = lVar15;
  }
  else {
    lVar16 = FUN_02898b44();
    lVar15 = *(long *)(param_1 + 0x20);
    uVar24 = *(uint *)(lVar15 + 0xf8);
  }
  if (uVar24 == 0) goto joined_r0x031a3444;
  uVar18 = (ulong)uVar24;
  uVar17 = uVar24 + 0x1f;
  iVar1 = (int)uVar17 >> 5;
  iVar2 = *(int *)(lVar15 + 0x40);
  *param_2 = *param_2 - uVar24;
  if (iVar1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(long *)(lVar13 + 0x38d490);
    if (lVar15 == 0) {
      lVar15 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar15;
    }
    lVar12 = *(long *)(lVar15 + 8);
    uVar14 = (ulong)(int)(iVar1 * 4 + 0x7fU & 0xffffff80);
    if (uVar14 <= *(ulong *)(lVar12 + 0x10)) {
      lVar15 = *(long *)(lVar12 + 0x18);
      uVar14 = lVar15 + uVar14;
      if (uVar14 <= *(ulong *)(lVar12 + 0x20)) {
        *(ulong *)(lVar12 + 0x18) = uVar14;
        goto LAB_031a3134;
      }
    }
    lVar15 = FUN_032ce670();
  }
LAB_031a3134:
  lVar12 = (long)iVar1;
  iVar20 = iVar2 + uVar24;
  uVar28 = 0xd1b71;
  FUN_032d59e0(lVar15,0,lVar12);
  FUN_033299e0(0xd82c4190);
  if (0 < *(int *)(*(long *)(param_1 + 0x20) + 0xe8)) {
    lVar26 = 0;
    lVar25 = 0;
    uVar27 = uVar28;
    do {
      iVar5 = *(int *)(*(long *)(lVar16 + 0xe0) + lVar26);
      if ((iVar5 < iVar20) &&
         (iVar3 = *(int *)(*(long *)(lVar16 + 0xe0) + lVar26 + 4), iVar3 < iVar20)) {
        uVar6 = iVar5 - iVar2;
        uVar7 = iVar3 - iVar2;
        if (-1 < (int)uVar6) {
          lVar19 = (ulong)(uVar6 >> 5) * 4;
          *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar6 & 0x1f);
        }
        if (-1 < (int)uVar7) {
          lVar19 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar7 & 0x1f);
        }
      }
      if (uVar27 < 0xd1b71) {
        FUN_033299e0(0xf08668e5);
      }
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 0x14;
      uVar27 = uVar27 + 0xd1b71;
    } while (lVar25 < *(int *)(*(long *)(param_1 + 0x20) + 0xe8));
  }
  if (0 < *(int *)(lVar16 + 200)) {
    lVar26 = 0;
    lVar25 = 0;
    do {
      piVar21 = (int *)(*(long *)(lVar16 + 0xc0) + lVar26);
      uVar27 = *piVar21 - iVar2;
      uVar6 = piVar21[1] - iVar2;
      if (-1 < (int)uVar27) {
        lVar19 = (ulong)(uVar27 >> 5) * 4;
        *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar27 & 0x1f);
      }
      if (-1 < (int)uVar6) {
        lVar19 = (ulong)(uVar6 >> 5) * 4;
        *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar6 & 0x1f);
      }
      lVar25 = lVar25 + 1;
      lVar26 = lVar26 + 0x14;
    } while (lVar25 < *(int *)(lVar16 + 200));
  }
  FUN_033299e0(0xbcd81b26);
  iVar5 = *(int *)(lVar16 + 400);
  if (iVar5 != 0) {
    lVar26 = *(long *)(lVar16 + 0x188);
    iVar3 = *(int *)(lVar26 + 0x10);
    lVar25 = lVar26;
    while( true ) {
      if (iVar3 != 0) {
        piVar21 = *(int **)(lVar25 + 8);
        piVar22 = piVar21 + (long)iVar3 * 5;
        do {
          uVar27 = *piVar21 - iVar2;
          uVar6 = piVar21[1] - iVar2;
          if (-1 < (int)uVar27) {
            lVar19 = (ulong)(uVar27 >> 5) * 4;
            *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar27 & 0x1f);
          }
          if (-1 < (int)uVar6) {
            lVar19 = (ulong)(uVar6 >> 5) * 4;
            *(uint *)(lVar15 + lVar19) = *(uint *)(lVar15 + lVar19) | 1 << (ulong)(uVar6 & 0x1f);
          }
          piVar21 = piVar21 + 5;
        } while (piVar21 != piVar22);
      }
      if (lVar25 + 0x38 == lVar26 + (long)iVar5 * 0x38) break;
      iVar3 = *(int *)(lVar25 + 0x48);
      lVar25 = lVar25 + 0x38;
    }
  }
  puVar11 = PTR_PTR_0434a090;
  if ((int)uVar17 < 0x20) {
    if (uVar24 != 0) goto LAB_031a3484;
  }
  else {
    uVar17 = *(uint *)(lVar15 + (lVar12 + -1) * 4) &
             ((-2 << (ulong)(uVar17 & 0x1f) | 1U) ^ 0xfffffffe);
    uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (0 < lVar12 + -1) {
      do {
        uVar27 = *(uint *)(lVar15 + -8 + lVar12 * 4);
        uVar27 = uVar27 - (uVar27 >> 1 & 0x55555555);
        uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
        uVar17 = uVar17 + ((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
        lVar25 = lVar12 + -2;
        lVar12 = lVar12 + -1;
      } while (0 < lVar25);
    }
    if (uVar17 != uVar24) {
LAB_031a3484:
      local_78 = 0;
      local_70 = -0x8000000000000000;
      if ((int)uVar24 < 1) {
        if (uVar24 != 0) goto LAB_031a34dc;
      }
      else {
        if (0x3fffffff < (int)uVar24) {
          FUN_032bd0a8(uVar18);
        }
        local_78 = FUN_032bd1d4(puVar11,uVar18,4,0,0,(long)&local_70 + 4);
        if ((uint)local_70 != uVar24) {
LAB_031a34dc:
          local_70 = CONCAT44(local_70._4_4_,uVar24);
        }
      }
      FUN_033299e0(0xf4b66c83);
      if ((int)uVar24 < 1) {
        uVar24 = 0;
      }
      else {
        uVar14 = 0;
        uVar24 = 0;
        uVar17 = uVar28;
        do {
          if ((*(uint *)(lVar15 + (uVar14 >> 5 & 0x7ffffff) * 4) & 1 << (ulong)((uint)uVar14 & 0x1f)
              ) == 0) {
            *(undefined4 *)(local_78 + uVar14 * 4) = 0xffffffff;
          }
          else {
            *(uint *)(local_78 + uVar14 * 4) = uVar24 + iVar2;
            puVar8 = (undefined8 *)(*(long *)(lVar16 + 0xf0) + uVar14 * 0x10);
            uVar29 = *puVar8;
            puVar9 = (undefined8 *)(*(long *)(lVar16 + 0xf0) + (long)(int)uVar24 * 0x10);
            puVar9[1] = puVar8[1];
            *puVar9 = uVar29;
            uVar24 = uVar24 + 1;
          }
          if (uVar17 < 0xd1b71) {
            FUN_033299e0(0x95338538);
          }
          puVar10 = PTR_PTR_0434a080;
          uVar14 = uVar14 + 1;
          uVar17 = uVar17 + 0xd1b71;
        } while (uVar18 != uVar14);
        puVar23 = (uint *)(lVar16 + 0xfc);
        uVar17 = *puVar23;
        if ((int)(uVar17 & 0x3fffffff) < (int)uVar24) {
          uVar29 = *(undefined8 *)(lVar16 + 0xf0);
          uVar4 = *(undefined4 *)(lVar16 + 0xf8);
          if (0x3fffffff < (int)uVar24) {
            FUN_032bd0a8(uVar24);
            uVar17 = *puVar23;
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar27 = uVar24;
          if ((int)uVar24 <= (int)uVar17) {
            uVar27 = uVar17;
          }
          uVar29 = FUN_032bd1d4(puVar10,uVar27,0x10,uVar29,uVar4,puVar23);
          *(undefined8 *)(lVar16 + 0xf0) = uVar29;
        }
      }
      if (*(uint *)(lVar16 + 0xf8) != uVar24) {
        *(uint *)(lVar16 + 0xf8) = uVar24;
      }
      FUN_033299e0(0x99056c8d);
      if (0 < *(int *)(lVar16 + 0xe8)) {
        lVar25 = 0;
        lVar12 = 0;
        do {
          lVar26 = *(long *)(lVar16 + 0xe0);
          iVar5 = *(int *)(lVar26 + lVar25);
          if (iVar5 < iVar20) {
            iVar3 = *(int *)(lVar26 + lVar25 + 4);
            if (iVar3 < iVar20) {
              if (iVar2 <= iVar5) {
                *(undefined4 *)(lVar26 + lVar25) =
                     *(undefined4 *)(local_78 + (long)(iVar5 - iVar2) * 4);
              }
              if (iVar2 <= iVar3) {
                *(undefined4 *)(lVar26 + lVar25 + 4) =
                     *(undefined4 *)(local_78 + (long)(iVar3 - iVar2) * 4);
              }
            }
          }
          if (uVar28 < 0xd1b71) {
            FUN_033299e0(0xc7a9d6c6);
          }
          lVar12 = lVar12 + 1;
          lVar25 = lVar25 + 0x14;
          uVar28 = uVar28 + 0xd1b71;
        } while (lVar12 < *(int *)(lVar16 + 0xe8));
      }
      if (0 < *(int *)(lVar16 + 200)) {
        lVar25 = 0;
        lVar12 = 0;
        do {
          lVar26 = *(long *)(lVar16 + 0xc0);
          if (iVar2 <= *(int *)(lVar26 + lVar25)) {
            *(undefined4 *)(lVar26 + lVar25) =
                 *(undefined4 *)(local_78 + (long)(*(int *)(lVar26 + lVar25) - iVar2) * 4);
          }
          iVar20 = *(int *)(lVar26 + lVar25 + 4);
          if (iVar2 <= iVar20) {
            *(undefined4 *)(lVar26 + lVar25 + 4) =
                 *(undefined4 *)(local_78 + (long)(iVar20 - iVar2) * 4);
          }
          lVar12 = lVar12 + 1;
          lVar25 = lVar25 + 0x14;
        } while (lVar12 < *(int *)(lVar16 + 200));
      }
      FUN_033299e0(0x2ded4694);
      iVar20 = *(int *)(lVar16 + 400) + -1;
      if (0 < *(int *)(lVar16 + 400)) {
        do {
          lVar12 = *(long *)(lVar16 + 0x188) + (long)iVar20 * 0x38;
          iVar5 = *(int *)(lVar12 + 0x10);
          if (iVar5 != 0) {
            lVar25 = (long)iVar5 * 0x14;
            piVar21 = (int *)(*(long *)(lVar12 + 8) + 4);
            do {
              if (iVar2 <= piVar21[-1]) {
                piVar21[-1] = *(int *)(local_78 + (long)(piVar21[-1] - iVar2) * 4);
              }
              if (iVar2 <= *piVar21) {
                *piVar21 = *(int *)(local_78 + (long)(*piVar21 - iVar2) * 4);
              }
              lVar25 = lVar25 + -0x14;
              piVar21 = piVar21 + 5;
            } while (lVar25 != 0);
          }
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
      }
      FUN_033299e0(0x42618cb0);
      local_80[0] = iVar2;
      FUN_0318bba8(param_1,&local_78,local_80,*(int *)(lVar16 + 0xf8) + *(int *)(lVar16 + 0x40));
      lVar16 = local_70;
      uVar24 = local_70._4_4_;
      local_70 = (ulong)local_70._4_4_ << 0x20;
      if ((-1 < lVar16) && (local_78 != 0)) {
        FUN_032cf244(puVar11,local_78,4,uVar24 & 0x3fffffff);
      }
    }
  }
  lVar16 = *(long *)(lVar13 + 0x38d490);
  if (lVar16 == 0) {
    lVar16 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar16;
  }
  lVar13 = *(long *)(lVar16 + 8);
  uVar18 = (ulong)(int)(iVar1 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar13 + 0x10) < uVar18) || (*(long *)(lVar13 + 0x18) != lVar15 + uVar18)) ||
     (*(long *)(lVar13 + 0x28) == lVar15)) {
    FUN_032cedf0(lVar13,lVar15);
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar15;
  }
joined_r0x031a3444:
  if (local_68 != 0) {
    FUN_032d5b34(local_68,&DAT_0390f40e);
  }
  return;
}


