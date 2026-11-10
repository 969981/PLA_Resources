/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dce10; name: FUN_004dce10
 */


undefined8 FUN_004dce10(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined2 *puVar11;
  long lVar12;
  int *piVar13;
  int local_50 [3];
  ushort local_44 [2];
  
  uVar5 = FUN_00423a50(param_3);
  iVar3 = (int)uVar5;
  if (iVar3 == -1) {
    return uVar5;
  }
  piVar13 = *(int **)(param_1 + 8);
  uVar9 = *(uint *)(*(long *)(piVar13 + 0x30) + 0x60);
  if ((((uVar9 >> 3 & 1) == 0) && (0x303 < *piVar13)) && (*piVar13 != 0x10000)) {
    if (iVar3 == 6) {
      iVar3 = 0x390;
    }
    else if (iVar3 == 0x74) {
      uVar5 = 0x2f;
      uVar7 = 0x172;
      uVar8 = 0x3ee;
      goto LAB_004dcfd8;
    }
  }
  lVar6 = FUN_004dcbd0(param_2);
  if (((lVar6 == 0) ||
      ((((uVar9 >> 3 & 1) == 0 && (0x303 < *piVar13)) &&
       ((*piVar13 != 0x10000 &&
        ((*(int *)(lVar6 + 0xc) == 0x40 || (*(int *)(lVar6 + 0xc) == 0x2a3)))))))) ||
     ((iVar3 != *(int *)(lVar6 + 0x14) && ((iVar3 != 6 || (*(int *)(lVar6 + 0x14) != 0x390)))))) {
    uVar5 = 0x2f;
    uVar7 = 0x172;
    uVar8 = 0x3ff;
    goto LAB_004dcfd8;
  }
  uVar5 = FUN_00423a50(param_3);
  iVar2 = FUN_004e3020(uVar5,local_50);
  if ((iVar2 == 0) || (*(int *)(lVar6 + 0x18) != local_50[0])) {
    uVar5 = 0x2f;
    uVar7 = 0x172;
    uVar8 = 0x406;
    goto LAB_004dcfd8;
  }
  if (iVar3 == 0x198) {
    iVar3 = FUN_004dd2b0(param_1,param_3);
    if (iVar3 == 0) {
      uVar5 = 0x2f;
      uVar7 = 0xa2;
      uVar8 = 0x411;
      goto LAB_004dcfd8;
    }
    piVar13 = *(int **)(param_1 + 8);
    uVar9 = *(uint *)(*(long *)(piVar13 + 0x30) + 0x60);
    if (((((uVar9 >> 3 & 1) == 0) && (0x303 < *piVar13)) && (*piVar13 != 0x10000)) ||
       ((*(byte *)(*(long *)(param_1 + 0x488) + 0x1e) & 3) != 0)) {
      FUN_004238d0(param_3);
      FUN_0042d4f0();
      iVar3 = FUN_0042e3e0();
      if ((*(int *)(lVar6 + 0x20) != 0) && (iVar3 != *(int *)(lVar6 + 0x20))) {
        uVar5 = 0x2f;
        uVar7 = 0x17a;
        uVar8 = 0x41c;
        goto LAB_004dcfd8;
      }
      piVar13 = *(int **)(param_1 + 8);
      uVar9 = *(uint *)(*(long *)(piVar13 + 0x30) + 0x60);
    }
    if ((((uVar9 >> 3 & 1) == 0) && (0x303 < *piVar13)) && (*piVar13 != 0x10000)) {
      lVar10 = *(long *)(param_1 + 0x488);
      uVar9 = *(uint *)(lVar10 + 0x1c);
    }
    else {
      lVar10 = FUN_004238d0(param_3);
      if (lVar10 == 0) {
LAB_004dd0ac:
        lVar10 = 0;
      }
      else {
        FUN_0042d4f0();
        iVar3 = FUN_0042e3e0();
        lVar10 = 0;
        piVar13 = &DAT_03a27f60;
        do {
          if (lVar10 == 0x1e) goto LAB_004dd0ac;
          iVar2 = *piVar13;
          lVar10 = lVar10 + 1;
          piVar13 = piVar13 + 3;
        } while (iVar2 != iVar3);
      }
      iVar3 = FUN_004dc620(param_1,lVar10,1);
      if (iVar3 == 0) {
        uVar5 = 0x2f;
        uVar7 = 0x17a;
        uVar8 = 0x424;
        goto LAB_004dcfd8;
      }
      lVar10 = *(long *)(param_1 + 0x488);
      uVar9 = *(uint *)(lVar10 + 0x1c);
      if (((param_2 & 0xffff | 0x100) != 0x503) && ((uVar9 & 0x30000) != 0)) {
        uVar5 = 0x28;
        uVar7 = 0x172;
        uVar8 = 0x42d;
        goto LAB_004dcfd8;
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x488);
    uVar9 = *(uint *)(lVar10 + 0x1c);
    if ((uVar9 & 0x30000) != 0) {
      uVar5 = 0x28;
      uVar7 = 0x172;
      uVar8 = 0x434;
      goto LAB_004dcfd8;
    }
  }
  uVar1 = uVar9 & 0x30000;
  if (uVar1 == 0x30000) {
    lVar10 = 2;
    puVar11 = &DAT_03a280da;
LAB_004dd1b0:
    lVar12 = 0;
    do {
      if ((uint)(ushort)puVar11[lVar12] == (param_2 & 0xffff)) goto LAB_004dd1d0;
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
LAB_004dd1d8:
    if (((uVar9 & 0x30001) != 0) || (*(int *)(lVar6 + 0xc) != 0x40)) {
      uVar5 = 0x28;
      uVar7 = 0x172;
      uVar8 = 0x443;
      goto LAB_004dcfd8;
    }
  }
  else {
    if (uVar1 == 0x20000) {
      lVar10 = 1;
      puVar11 = &DAT_03a280dc;
      goto LAB_004dd1b0;
    }
    if (uVar1 == 0x10000) {
      lVar10 = 1;
      puVar11 = &DAT_03a280da;
      goto LAB_004dd1b0;
    }
    if ((*(int *)(param_1 + 0x38) != 1) ||
       (puVar11 = *(undefined2 **)(lVar10 + 0x1a8), puVar11 == (undefined2 *)0x0)) {
      puVar11 = *(undefined2 **)(lVar10 + 0x198);
      if (puVar11 == (undefined2 *)0x0) {
        lVar10 = 0x1a;
        puVar11 = &DAT_03a280de;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x1a0);
        if (lVar10 == 0) goto LAB_004dd19c;
      }
      goto LAB_004dd1b0;
    }
    lVar10 = *(long *)(lVar10 + 0x1b0);
    if (lVar10 != 0) goto LAB_004dd1b0;
LAB_004dd19c:
    lVar12 = 0;
LAB_004dd1d0:
    if (lVar12 == lVar10) goto LAB_004dd1d8;
    if (*(int *)(lVar6 + 0xc) == 0) goto LAB_004dd264;
  }
  lVar10 = FUN_004bda40(*(undefined4 *)(lVar6 + 0x10));
  if (lVar10 == 0) {
    uVar5 = 0x28;
    uVar7 = 0x170;
    uVar8 = 0x448;
  }
  else {
    local_44[0] = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
    iVar3 = FUN_0041ccc0();
    uVar4 = FUN_0041ccb0(lVar10);
    iVar3 = FUN_004e2fc0(param_1,0x5000d,iVar3 << 2,uVar4,local_44);
    if (iVar3 != 0) {
LAB_004dd264:
      *(long *)(*(long *)(param_1 + 0xa8) + 0x308) = lVar6;
      return 1;
    }
    uVar5 = 0x28;
    uVar7 = 0x172;
    uVar8 = 0x456;
  }
LAB_004dcfd8:
  FUN_004c99a0(param_1,uVar5,0x14d,uVar7,"external/openssl/ssl/t1_lib.c",uVar8);
  return 0;
}


