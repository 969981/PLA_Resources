/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d7ad0; name: FUN_011d7ad0
 */


void FUN_011d7ad0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  byte bVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar9 = &DAT_041f87a8;
  }
  else {
    puVar9 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar9 = &DAT_041f8af0;
      break;
    case 3:
      puVar9 = &DAT_041f8e38;
      break;
    case 4:
      puVar9 = &DAT_041f9180;
      break;
    case 5:
      puVar9 = &DAT_041f94c8;
    }
  }
  uVar14 = puVar9[0x27];
  uVar2 = puVar9[0x28];
  uVar5 = puVar9[0x29];
  lVar16 = puVar9[0x1b];
  lVar17 = puVar9[0x1e];
  uVar3 = puVar9[0x21];
  uVar6 = puVar9[0x22];
  uVar4 = puVar9[0x23];
  lVar11 = puVar9[0x24];
  iVar7 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),1);
  uStack_68 = 0;
  local_80 = uVar3;
  uStack_78 = uVar6;
  local_70 = uVar4;
  FUN_0283b1e8(*param_1,&local_80);
  if (1 < iVar7) {
    uStack_68 = 0;
    local_80 = uVar3;
    uStack_78 = uVar6;
    local_70 = uVar4;
    FUN_0283b748(0,*param_1,&local_80);
    plVar10 = *(long **)(*param_1 + 0x148);
    lVar8 = *(long *)(*param_1 + 0x150);
    if ((lVar8 != 0) && (*plVar10 != lVar17)) {
      plVar15 = plVar10 + lVar8 * 6;
      lVar8 = lVar8 * 0x30;
      plVar12 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_011d7ecc;
        plVar10 = plVar12 + 6;
        plVar1 = plVar12 + 6;
        plVar12 = plVar10;
      } while (*plVar1 != lVar17);
    }
    goto LAB_011d7d5c;
  }
  lVar8 = *param_1;
  if (iVar7 != 1) {
    uStack_68 = 0;
    local_80 = uVar3;
    uStack_78 = uVar6;
    local_70 = uVar4;
    FUN_0283b748(0x3f800000,lVar8,&local_80);
    plVar10 = *(long **)(*param_1 + 0x148);
    lVar8 = *(long *)(*param_1 + 0x150);
    if ((lVar8 != 0) && (*plVar10 != lVar17)) {
      plVar15 = plVar10 + lVar8 * 6;
      lVar8 = lVar8 * 0x30;
      plVar12 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_011d7ecc;
        plVar1 = plVar12 + 6;
        plVar10 = plVar12 + 6;
        plVar12 = plVar12 + 6;
      } while (*plVar1 != lVar17);
    }
    goto LAB_011d7d5c;
  }
  plVar10 = *(long **)(lVar8 + 0x148);
  lVar8 = *(long *)(lVar8 + 0x150);
  if ((lVar8 != 0) && (*plVar10 != lVar17)) {
    plVar12 = plVar10 + lVar8 * 6;
    lVar8 = lVar8 * 0x30;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) {
        plVar10 = plVar12;
        break;
      }
      plVar1 = plVar10 + 6;
      plVar15 = plVar10 + 6;
      plVar10 = plVar1;
    } while (*plVar15 != lVar17);
  }
  lVar17 = plVar10[4];
  bVar13 = *(byte *)(lVar17 + 0x58) & 0xfe;
LAB_011d7bb8:
  *(byte *)(lVar17 + 0x58) = bVar13;
  iVar7 = FUN_029506a8(*(undefined8 *)(param_2 + 0x70),2);
  uStack_68 = 0;
  local_80 = uVar14;
  uStack_78 = uVar2;
  local_70 = uVar5;
  FUN_0283b1e8(*param_1,&local_80);
  if (iVar7 < 2) {
    lVar17 = *param_1;
    if (iVar7 == 1) {
      plVar10 = *(long **)(lVar17 + 0x148);
      lVar17 = *(long *)(lVar17 + 0x150);
      if ((lVar17 != 0) && (*plVar10 != lVar11)) {
        plVar12 = plVar10 + lVar17 * 6;
        lVar17 = lVar17 * 0x30;
        do {
          lVar17 = lVar17 + -0x30;
          if (lVar17 == 0) {
            plVar10 = plVar12;
            break;
          }
          plVar1 = plVar10 + 6;
          plVar15 = plVar10 + 6;
          plVar10 = plVar1;
        } while (*plVar15 != lVar11);
      }
      lVar11 = plVar10[4];
      bVar13 = *(byte *)(lVar11 + 0x58) & 0xfe;
      goto LAB_011d7c44;
    }
    uStack_68 = 0;
    local_80 = uVar14;
    uStack_78 = uVar2;
    local_70 = uVar5;
    FUN_0283b748(0x40400000,lVar17,&local_80);
    plVar10 = *(long **)(*param_1 + 0x148);
    lVar17 = *(long *)(*param_1 + 0x150);
    if ((lVar17 != 0) && (*plVar10 != lVar11)) {
      plVar15 = plVar10 + lVar17 * 6;
      lVar17 = lVar17 * 0x30;
      plVar12 = plVar10;
      do {
        lVar17 = lVar17 + -0x30;
        if (lVar17 == 0) goto LAB_011d7e54;
        plVar1 = plVar12 + 6;
        plVar10 = plVar12 + 6;
        plVar12 = plVar12 + 6;
      } while (*plVar1 != lVar11);
    }
  }
  else {
    uStack_68 = 0;
    local_80 = uVar14;
    uStack_78 = uVar2;
    local_70 = uVar5;
    FUN_0283b748(0x40000000,*param_1,&local_80);
    plVar10 = *(long **)(*param_1 + 0x148);
    lVar17 = *(long *)(*param_1 + 0x150);
    if ((lVar17 != 0) && (*plVar10 != lVar11)) {
      plVar15 = plVar10 + lVar17 * 6;
      lVar17 = lVar17 * 0x30;
      plVar12 = plVar10;
      do {
        lVar17 = lVar17 + -0x30;
        if (lVar17 == 0) goto LAB_011d7e54;
        plVar10 = plVar12 + 6;
        plVar1 = plVar12 + 6;
        plVar12 = plVar10;
      } while (*plVar1 != lVar11);
    }
  }
LAB_011d7de4:
  lVar11 = plVar10[4];
  bVar13 = *(byte *)(lVar11 + 0x58) | 1;
LAB_011d7c44:
  *(byte *)(lVar11 + 0x58) = bVar13;
  plVar10 = *(long **)(*param_1 + 0x148);
  lVar11 = *(long *)(*param_1 + 0x150);
  if ((lVar11 != 0) && (*plVar10 != lVar16)) {
    plVar12 = plVar10 + lVar11 * 6;
    lVar11 = lVar11 * 0x30;
    do {
      lVar11 = lVar11 + -0x30;
      if (lVar11 == 0) {
        plVar10 = plVar12;
        break;
      }
      plVar1 = plVar10 + 6;
      plVar15 = plVar10 + 6;
      plVar10 = plVar1;
    } while (*plVar15 != lVar16);
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) | 1;
  return;
LAB_011d7ecc:
  plVar10 = plVar15;
LAB_011d7d5c:
  lVar17 = plVar10[4];
  bVar13 = *(byte *)(lVar17 + 0x58) | 1;
  goto LAB_011d7bb8;
LAB_011d7e54:
  plVar10 = plVar15;
  goto LAB_011d7de4;
}


