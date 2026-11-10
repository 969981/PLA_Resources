/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00345298; name: FUN_00345298
 */


void FUN_00345298(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  pbVar10 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar9 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  pbVar11 = *(byte **)(param_2 + 0xd8);
  if (pbVar11 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0xd8),puVar9);
    iVar14 = *(int *)(param_1 + 0xd);
  }
  else {
    if (pbVar11 != pbVar10) {
      uVar2 = *(ulong *)(pbVar10 + 8);
      pbVar3 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar3 = pbVar10 + 1;
        uVar2 = (ulong)(*pbVar10 >> 1);
      }
      FUN_00291910(pbVar11,pbVar3,uVar2);
    }
    iVar14 = *(int *)(param_1 + 0xd);
  }
  if (0 < iVar14) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[5];
    piVar13 = *(int **)(param_2 + 0x28);
    if (piVar13 != (int *)0x0) goto LAB_0034538c;
LAB_003453ac:
    iVar14 = *(int *)(param_2 + 0x24);
    do {
      FUN_0032bcac(param_2 + 0x18,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0x28);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        uVar7 = FUN_003c002c(*(undefined8 *)(param_2 + 0x18));
        iVar14 = *(int *)(param_2 + 0x20);
        *(int *)(param_2 + 0x20) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar14 * 8 + 8) = uVar7;
        while( true ) {
          FUN_00345e9c(lVar12,uVar7);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x98;
          if (*(int *)(param_1 + 0xd) <= lVar16) goto LAB_003453f4;
          lVar12 = param_1[5] + lVar15;
          piVar13 = *(int **)(param_2 + 0x28);
          if (piVar13 == (int *)0x0) goto LAB_003453ac;
LAB_0034538c:
          iVar6 = *(int *)(param_2 + 0x20);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x20) = iVar6 + 1;
          uVar7 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x24));
    } while( true );
  }
LAB_003453f4:
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[6];
    piVar13 = *(int **)(param_2 + 0xa0);
    if (piVar13 != (int *)0x0) goto LAB_0034545c;
LAB_0034547c:
    iVar14 = *(int *)(param_2 + 0x9c);
    do {
      FUN_0032bcac(param_2 + 0x90,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0xa0);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        uVar7 = FUN_003c0110(*(undefined8 *)(param_2 + 0x90));
        iVar14 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0x98) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)iVar14 * 8 + 8) = uVar7;
        while( true ) {
          FUN_00346574(lVar12,uVar7);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x30;
          if (*(int *)((long)param_1 + 0x6c) <= lVar16) goto LAB_003454c4;
          lVar12 = param_1[6] + lVar15;
          piVar13 = *(int **)(param_2 + 0xa0);
          if (piVar13 == (int *)0x0) goto LAB_0034547c;
LAB_0034545c:
          iVar6 = *(int *)(param_2 + 0x98);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x98) = iVar6 + 1;
          uVar7 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x9c));
    } while( true );
  }
LAB_003454c4:
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[7];
    piVar13 = *(int **)(param_2 + 0x40);
    if (piVar13 != (int *)0x0) goto LAB_0034552c;
LAB_0034554c:
    iVar14 = *(int *)(param_2 + 0x3c);
    do {
      FUN_0032bcac(param_2 + 0x30,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0x40);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        uVar7 = FUN_003bfe68(*(undefined8 *)(param_2 + 0x30));
        iVar14 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)iVar14 * 8 + 8) = uVar7;
        while( true ) {
          FUN_00345298(lVar12,uVar7);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x90;
          if (*(int *)((long)param_1 + 0x74) <= lVar16) goto LAB_00345594;
          lVar12 = param_1[7] + lVar15;
          piVar13 = *(int **)(param_2 + 0x40);
          if (piVar13 == (int *)0x0) goto LAB_0034554c;
LAB_0034552c:
          iVar6 = *(int *)(param_2 + 0x38);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x38) = iVar6 + 1;
          uVar7 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x3c));
    } while( true );
  }
LAB_00345594:
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[8];
    piVar13 = *(int **)(param_2 + 0x58);
    if (piVar13 != (int *)0x0) goto LAB_003455fc;
LAB_0034561c:
    iVar14 = *(int *)(param_2 + 0x54);
    do {
      FUN_0032bcac(param_2 + 0x48,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0x58);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        uVar7 = FUN_003c0248(*(undefined8 *)(param_2 + 0x48));
        iVar14 = *(int *)(param_2 + 0x50);
        *(int *)(param_2 + 0x50) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x58) + (long)iVar14 * 8 + 8) = uVar7;
        while( true ) {
          FUN_003459f4(lVar12,uVar7);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x50;
          if (*(int *)(param_1 + 0xf) <= lVar16) goto LAB_00345664;
          lVar12 = param_1[8] + lVar15;
          piVar13 = *(int **)(param_2 + 0x58);
          if (piVar13 == (int *)0x0) goto LAB_0034561c;
LAB_003455fc:
          iVar6 = *(int *)(param_2 + 0x50);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x50) = iVar6 + 1;
          uVar7 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x54));
    } while( true );
  }
LAB_00345664:
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[9];
    piVar13 = *(int **)(param_2 + 0x70);
    if (piVar13 != (int *)0x0) goto LAB_003456bc;
LAB_003456e0:
    iVar14 = *(int *)(param_2 + 0x6c);
    do {
      FUN_0032bcac(param_2 + 0x60,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0x70);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        lVar8 = FUN_003bfd38(*(undefined8 *)(param_2 + 0x60));
        iVar14 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar14 + 1;
        *(long *)(*(long *)(param_2 + 0x70) + (long)iVar14 * 8 + 8) = lVar8;
        while( true ) {
          puVar1 = (undefined4 *)(lVar12 + lVar15);
          uVar4 = *(uint *)(lVar8 + 0x10);
          uVar5 = *puVar1;
          *(uint *)(lVar8 + 0x10) = uVar4 | 2;
          *(undefined4 *)(lVar8 + 0x20) = uVar5;
          uVar5 = puVar1[1];
          *(uint *)(lVar8 + 0x10) = uVar4 | 6;
          *(undefined4 *)(lVar8 + 0x24) = uVar5;
          lVar17 = *(long *)(puVar1 + 2);
          lVar12 = FUN_003aad08();
          if (lVar17 != lVar12) {
            uVar7 = *(undefined8 *)(puVar1 + 2);
            lVar12 = *(long *)(lVar8 + 0x18);
            *(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) | 1;
            if (lVar12 == 0) {
              puVar9 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
              if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
                puVar9 = (ulong *)*puVar9;
              }
              lVar12 = FUN_003bfef0(puVar9);
              *(long *)(lVar8 + 0x18) = lVar12;
            }
            FUN_003ab340(lVar12,uVar7);
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x10;
          if (*(int *)((long)param_1 + 0x7c) <= lVar16) goto LAB_00345798;
          lVar12 = param_1[9];
          piVar13 = *(int **)(param_2 + 0x70);
          if (piVar13 == (int *)0x0) goto LAB_003456e0;
LAB_003456bc:
          iVar6 = *(int *)(param_2 + 0x68);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x68) = iVar6 + 1;
          lVar8 = *(long *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x6c));
    } while( true );
  }
LAB_00345798:
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar15 = 0;
    lVar16 = 0;
    lVar12 = param_1[10];
    piVar13 = *(int **)(param_2 + 0x88);
    if (piVar13 != (int *)0x0) goto LAB_00345800;
LAB_00345820:
    iVar14 = *(int *)(param_2 + 0x84);
    do {
      FUN_0032bcac(param_2 + 0x78,iVar14 + 1);
      piVar13 = *(int **)(param_2 + 0x88);
      iVar14 = *piVar13;
      do {
        *piVar13 = iVar14 + 1;
        uVar7 = FUN_003c002c(*(undefined8 *)(param_2 + 0x78));
        iVar14 = *(int *)(param_2 + 0x80);
        *(int *)(param_2 + 0x80) = iVar14 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar14 * 8 + 8) = uVar7;
        while( true ) {
          FUN_00345e9c(lVar12,uVar7);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x98;
          if (*(int *)(param_1 + 0x10) <= lVar16) goto LAB_00345868;
          lVar12 = param_1[10] + lVar15;
          piVar13 = *(int **)(param_2 + 0x88);
          if (piVar13 == (int *)0x0) goto LAB_00345820;
LAB_00345800:
          iVar6 = *(int *)(param_2 + 0x80);
          iVar14 = *piVar13;
          if (iVar14 <= iVar6) break;
          *(int *)(param_2 + 0x80) = iVar6 + 1;
          uVar7 = *(undefined8 *)(piVar13 + (long)iVar6 * 2 + 2);
        }
      } while (iVar14 != *(int *)(param_2 + 0x84));
    } while( true );
  }
LAB_00345868:
  if (*(int *)((long)param_1 + 0x84) < 1) {
LAB_00345948:
    if (0 < *(int *)(param_1 + 0x11)) {
      lVar16 = 0;
      do {
        FUN_00346668(param_2,*(undefined8 *)(param_1[0xc] + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(param_1 + 0x11));
    }
    lVar15 = param_1[4];
    lVar16 = FUN_003b6164();
    if (lVar15 == lVar16) {
      return;
    }
    lVar16 = *(long *)(param_2 + 0xe0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    if (lVar16 == 0) {
      puVar9 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      lVar16 = FUN_003c0580(puVar9);
      *(long *)(param_2 + 0xe0) = lVar16;
    }
    FUN_003b6ad4(lVar16,param_1[4]);
    return;
  }
  lVar15 = 0;
  lVar16 = 0;
  piVar13 = *(int **)(param_2 + 0xb8);
  if (piVar13 != (int *)0x0) goto LAB_003458e4;
LAB_00345904:
  iVar14 = *(int *)(param_2 + 0xb4);
  do {
    FUN_0032bcac(param_2 + 0xa8,iVar14 + 1);
    piVar13 = *(int **)(param_2 + 0xb8);
    iVar14 = *piVar13;
    do {
      *piVar13 = iVar14 + 1;
      lVar12 = FUN_003bfdf8(*(undefined8 *)(param_2 + 0xa8));
      iVar14 = *(int *)(param_2 + 0xb0);
      *(int *)(param_2 + 0xb0) = iVar14 + 1;
      *(long *)(*(long *)(param_2 + 0xb8) + (long)iVar14 * 8 + 8) = lVar12;
      while( true ) {
        lVar8 = param_1[0xb];
        uVar4 = *(uint *)(lVar12 + 0x10);
        uVar5 = *(undefined4 *)(lVar8 + lVar15);
        *(uint *)(lVar12 + 0x10) = uVar4 | 1;
        *(undefined4 *)(lVar12 + 0x18) = uVar5;
        uVar5 = ((undefined4 *)(lVar8 + lVar15))[1];
        *(uint *)(lVar12 + 0x10) = uVar4 | 3;
        *(undefined4 *)(lVar12 + 0x1c) = uVar5;
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 8;
        if (*(int *)((long)param_1 + 0x84) <= lVar16) goto LAB_00345948;
        piVar13 = *(int **)(param_2 + 0xb8);
        if (piVar13 == (int *)0x0) goto LAB_00345904;
LAB_003458e4:
        iVar6 = *(int *)(param_2 + 0xb0);
        iVar14 = *piVar13;
        if (iVar14 <= iVar6) break;
        *(int *)(param_2 + 0xb0) = iVar6 + 1;
        lVar12 = *(long *)(piVar13 + (long)iVar6 * 2 + 2);
      }
    } while (iVar14 != *(int *)(param_2 + 0xb4));
  } while( true );
}


