/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d0818; name: FUN_032d0818
 */


void FUN_032d0818(undefined8 *param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = 0x2000;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    lVar5 = 0;
    plVar6 = param_1 + 2;
    do {
      if (*plVar6 == 0x200) {
        iVar4 = (int)lVar5;
        if (-1 < iVar4) goto LAB_032d085c;
        break;
      }
      lVar5 = lVar5 + 1;
      plVar6 = plVar6 + 3;
    } while (iVar2 != lVar5);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  iVar4 = iVar2;
LAB_032d085c:
  param_1[(long)iVar4 * 3 + 2] = 0x200;
  param_1[(long)iVar4 * 3 + 3] = 0x80;
  param_1[(long)iVar4 * 3 + 4] = 0x2000;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    lVar5 = 0;
    plVar6 = param_1 + 2;
    do {
      if (*plVar6 == 0x100) {
        iVar4 = (int)lVar5;
        if (-1 < iVar4) goto LAB_032d08b4;
        break;
      }
      lVar5 = lVar5 + 1;
      plVar6 = plVar6 + 3;
    } while (iVar2 != lVar5);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  iVar4 = iVar2;
LAB_032d08b4:
  param_1[(long)iVar4 * 3 + 2] = 0x100;
  param_1[(long)iVar4 * 3 + 3] = 0x20;
  param_1[(long)iVar4 * 3 + 4] = 0x2000;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    lVar5 = 0;
    plVar6 = param_1 + 2;
    do {
      if (*plVar6 == 0) {
        iVar4 = (int)lVar5;
        if (-1 < iVar4) goto LAB_032d0908;
        break;
      }
      lVar5 = lVar5 + 1;
      plVar6 = plVar6 + 3;
    } while (iVar2 != lVar5);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  iVar4 = iVar2;
LAB_032d0908:
  param_1[(long)iVar4 * 3 + 2] = 0;
  param_1[(long)iVar4 * 3 + 3] = 8;
  param_1[(long)iVar4 * 3 + 4] = 0x2000;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    lVar5 = 0;
    plVar6 = param_1 + 2;
    do {
      if (*plVar6 == 0x280) {
        iVar4 = (int)lVar5;
        if (-1 < iVar4) goto LAB_032d095c;
        break;
      }
      lVar5 = lVar5 + 1;
      plVar6 = plVar6 + 3;
    } while (iVar2 != lVar5);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  iVar4 = iVar2;
LAB_032d095c:
  puVar1 = param_1 + 2;
  puVar3 = puVar1 + (long)iVar4 * 3;
  puVar3[2] = 0x2000;
  uVar7 = 0x200;
  *puVar3 = 0x280;
  puVar3[1] = 0x80;
  do {
    uVar8 = uVar7 & 0xffffffffffffffe0;
    if (uVar7 < 0x81) {
      uVar8 = uVar7;
    }
    if (0xff < uVar7) {
      uVar8 = uVar7 & 0xffffffffffffffc0;
    }
    lVar5 = 0x20;
    if (uVar8 < 0x40) {
      lVar5 = 0x10;
    }
    uVar8 = (uVar8 + lVar5) - 1 & -lVar5;
    iVar2 = *(int *)(param_1 + 1);
    if (0 < iVar2) {
      lVar9 = 0;
      puVar3 = puVar1;
      do {
        if (*puVar3 == uVar8) {
          if (-1 < (int)lVar9) goto joined_r0x032d09c4;
          break;
        }
        lVar9 = lVar9 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar2 != lVar9);
      lVar9 = 0;
      puVar3 = puVar1;
      do {
        if (*puVar3 == uVar8) {
          iVar4 = (int)lVar9;
          if (-1 < iVar4) goto LAB_032d0a58;
          break;
        }
        lVar9 = lVar9 + 1;
        puVar3 = puVar3 + 3;
      } while (iVar2 != lVar9);
    }
    *(int *)(param_1 + 1) = iVar2 + 1;
    iVar4 = iVar2;
LAB_032d0a58:
    param_1[(long)iVar4 * 3 + 2] = uVar8;
    param_1[(long)iVar4 * 3 + 3] = lVar5;
    param_1[(long)iVar4 * 3 + 4] = 0x2000;
joined_r0x032d09c4:
    uVar7 = uVar7 - 0x10;
    if (uVar7 == 0) {
      return;
    }
  } while( true );
}


