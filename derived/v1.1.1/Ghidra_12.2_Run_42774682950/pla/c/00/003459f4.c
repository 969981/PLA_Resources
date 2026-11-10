/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003459f4; name: FUN_003459f4
 */


void FUN_003459f4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  
  pbVar9 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar8 = (ulong *)*puVar8;
  }
  pbVar10 = *(byte **)(param_2 + 0x60);
  if (pbVar10 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x60),puVar8);
    iVar13 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    if (pbVar10 != pbVar9) {
      uVar1 = *(ulong *)(pbVar9 + 8);
      pbVar2 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar2 = pbVar9 + 1;
        uVar1 = (ulong)(*pbVar9 >> 1);
      }
      FUN_00291910(pbVar10,pbVar2,uVar1);
    }
    iVar13 = *(int *)((long)param_1 + 0x2c);
  }
  if (0 < iVar13) {
    lVar14 = 0;
    lVar15 = 0;
    lVar7 = param_1[6];
    piVar11 = *(int **)(param_2 + 0x28);
    if (piVar11 != (int *)0x0) goto LAB_00345ae4;
LAB_00345b04:
    iVar13 = *(int *)(param_2 + 0x24);
    do {
      FUN_0032bcac(param_2 + 0x18,iVar13 + 1);
      piVar11 = *(int **)(param_2 + 0x28);
      iVar13 = *piVar11;
      do {
        *piVar11 = iVar13 + 1;
        uVar6 = FUN_003c02d0(*(undefined8 *)(param_2 + 0x18));
        iVar13 = *(int *)(param_2 + 0x20);
        *(int *)(param_2 + 0x20) = iVar13 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar13 * 8 + 8) = uVar6;
        while( true ) {
          FUN_00346b44(lVar7,uVar6);
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + 0x28;
          if (*(int *)((long)param_1 + 0x2c) <= lVar15) goto LAB_00345b4c;
          lVar7 = param_1[6] + lVar14;
          piVar11 = *(int **)(param_2 + 0x28);
          if (piVar11 == (int *)0x0) goto LAB_00345b04;
LAB_00345ae4:
          iVar5 = *(int *)(param_2 + 0x20);
          iVar13 = *piVar11;
          if (iVar13 <= iVar5) break;
          *(int *)(param_2 + 0x20) = iVar5 + 1;
          uVar6 = *(undefined8 *)(piVar11 + (long)iVar5 * 2 + 2);
        }
      } while (iVar13 != *(int *)(param_2 + 0x24));
    } while( true );
  }
LAB_00345b4c:
  if (*(int *)(param_1 + 7) < 1) {
LAB_00345c2c:
    if (0 < *(int *)((long)param_1 + 0x3c)) {
      lVar15 = 0;
      do {
        FUN_00346c40(param_2,*(undefined8 *)(param_1[9] + lVar15 * 8));
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((long)param_1 + 0x3c));
    }
    lVar14 = param_1[4];
    lVar15 = FUN_003b83d0();
    if (lVar14 == lVar15) {
      return;
    }
    lVar15 = *(long *)(param_2 + 0x68);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
    if (lVar15 == 0) {
      puVar8 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      lVar15 = FUN_003c0940(puVar8);
      *(long *)(param_2 + 0x68) = lVar15;
    }
    FUN_003b8bc0(lVar15,param_1[4]);
    return;
  }
  lVar14 = 0;
  lVar15 = 0;
  piVar11 = *(int **)(param_2 + 0x40);
  if (piVar11 != (int *)0x0) goto LAB_00345bc8;
LAB_00345be8:
  iVar13 = *(int *)(param_2 + 0x3c);
  do {
    FUN_0032bcac(param_2 + 0x30,iVar13 + 1);
    piVar11 = *(int **)(param_2 + 0x40);
    iVar13 = *piVar11;
    do {
      *piVar11 = iVar13 + 1;
      lVar7 = FUN_003c01d8(*(undefined8 *)(param_2 + 0x30));
      iVar13 = *(int *)(param_2 + 0x38);
      *(int *)(param_2 + 0x38) = iVar13 + 1;
      *(long *)(*(long *)(param_2 + 0x40) + (long)iVar13 * 8 + 8) = lVar7;
      while( true ) {
        lVar12 = param_1[8];
        uVar3 = *(uint *)(lVar7 + 0x10);
        uVar4 = *(undefined4 *)(lVar12 + lVar14);
        *(uint *)(lVar7 + 0x10) = uVar3 | 1;
        *(undefined4 *)(lVar7 + 0x18) = uVar4;
        uVar4 = ((undefined4 *)(lVar12 + lVar14))[1];
        *(uint *)(lVar7 + 0x10) = uVar3 | 3;
        *(undefined4 *)(lVar7 + 0x1c) = uVar4;
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 8;
        if (*(int *)(param_1 + 7) <= lVar15) goto LAB_00345c2c;
        piVar11 = *(int **)(param_2 + 0x40);
        if (piVar11 == (int *)0x0) goto LAB_00345be8;
LAB_00345bc8:
        iVar5 = *(int *)(param_2 + 0x38);
        iVar13 = *piVar11;
        if (iVar13 <= iVar5) break;
        *(int *)(param_2 + 0x38) = iVar5 + 1;
        lVar7 = *(long *)(piVar11 + (long)iVar5 * 2 + 2);
      }
    } while (iVar13 != *(int *)(param_2 + 0x3c));
  } while( true );
}


