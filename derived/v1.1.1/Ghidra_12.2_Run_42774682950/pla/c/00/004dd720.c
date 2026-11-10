/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dd720; name: FUN_004dd720
 */


undefined8 FUN_004dd720(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  short *psVar10;
  
  FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x488) + 0x1b8),"external/openssl/ssl/t1_lib.c",
               0x4c2);
  lVar6 = *(long *)(param_1 + 0x488);
  *(undefined8 *)(lVar6 + 0x1b8) = 0;
  *(undefined8 *)(lVar6 + 0x1c0) = 0;
  lVar7 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar7 + 0x318) = 0;
  *(undefined8 *)(lVar7 + 0x310) = 0;
  *(undefined8 *)(lVar7 + 0x328) = 0;
  *(undefined8 *)(lVar7 + 800) = 0;
  *(undefined4 *)(lVar7 + 0x330) = 0;
  if ((*(long *)(lVar7 + 0x2f0) != 0) || (*(long *)(lVar7 + 0x2e8) != 0)) {
    iVar2 = FUN_004ddba0(param_1);
    if (iVar2 == 0) {
      uVar3 = 0x50;
      uVar4 = 0x44;
      uVar5 = 0x4e4;
    }
    else {
      if (*(long *)(*(long *)(param_1 + 0x488) + 0x1b8) != 0) {
        return 1;
      }
      uVar3 = 0x28;
      uVar4 = 0x178;
      uVar5 = 0x4ec;
    }
    FUN_004c99a0(param_1,uVar3,0x14f,uVar4,"external/openssl/ssl/t1_lib.c",uVar5);
    return 0;
  }
  uVar1 = *(uint *)(lVar6 + 0x1c) & 0x30000;
  if (uVar1 == 0x30000) {
    lVar6 = 2;
LAB_004dd814:
    psVar10 = &DAT_03a280da;
    lVar7 = FUN_004dc940(param_1,0);
    goto joined_r0x004dd848;
  }
  if (uVar1 == 0x20000) {
    lVar6 = 1;
    psVar10 = &DAT_03a280dc;
    lVar7 = FUN_004dc940(param_1,0);
    goto joined_r0x004dd848;
  }
  if (uVar1 == 0x10000) {
    lVar6 = 1;
    goto LAB_004dd814;
  }
  if ((*(int *)(param_1 + 0x38) == 1) &&
     (psVar10 = *(short **)(lVar6 + 0x1a8), psVar10 != (short *)0x0)) {
    lVar6 = *(long *)(lVar6 + 0x1b0);
joined_r0x004dd884:
    if (lVar6 == 0) {
      FUN_004dc940(param_1,0);
      FUN_004dc940(param_1,1);
      FUN_004dc940(param_1,2);
      FUN_004dc940(param_1,3);
      FUN_004dc940(param_1,4);
      FUN_004dc940(param_1,5);
      FUN_004dc940(param_1,6);
      FUN_004dc940(param_1,7);
      FUN_004dc940(param_1,8);
      return 1;
    }
  }
  else {
    psVar10 = *(short **)(lVar6 + 0x198);
    if (psVar10 != (short *)0x0) {
      lVar6 = *(long *)(lVar6 + 0x1a0);
      goto joined_r0x004dd884;
    }
    lVar6 = 0x1a;
    psVar10 = &DAT_03a280de;
  }
  lVar7 = FUN_004dc940(param_1,0);
joined_r0x004dd848:
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x310) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,1);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x314) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,2);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x318) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,3);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x31c) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,4);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 800) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,5);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x324) = 2;
        break;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,6);
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x328) = 2;
        lVar7 = FUN_004dc940(param_1,7);
        goto joined_r0x004ddb0c;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,7);
joined_r0x004ddb0c:
  if (lVar7 != 0) {
    psVar8 = psVar10;
    lVar9 = lVar6;
    do {
      if (*(short *)(lVar7 + 8) == *psVar8) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x32c) = 2;
        lVar7 = FUN_004dc940(param_1,8);
        goto joined_r0x004ddb60;
      }
      lVar9 = lVar9 + -1;
      psVar8 = psVar8 + 1;
    } while (lVar9 != 0);
  }
  lVar7 = FUN_004dc940(param_1,8);
joined_r0x004ddb60:
  if (lVar7 != 0) {
    do {
      if (*(short *)(lVar7 + 8) == *psVar10) {
        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x330) = 2;
        return 1;
      }
      lVar6 = lVar6 + -1;
      psVar10 = psVar10 + 1;
    } while (lVar6 != 0);
  }
  return 1;
}


