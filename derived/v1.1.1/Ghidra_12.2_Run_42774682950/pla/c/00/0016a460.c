/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016a460; name: FUN_0016a460
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_0016a460(uint *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  long extraout_x8;
  long lVar9;
  ulong extraout_x9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  uint *puVar14;
  ulong *puVar15;
  
  puVar15 = (ulong *)(param_1 + 0x12);
  plVar13 = (long *)0x121;
  *(undefined8 *)(*puVar15 + 8) = 0;
  puVar14 = param_1 + 0x10;
  uVar4 = *param_1;
joined_r0x0016a4bc:
  uVar12 = uVar4 + 1;
  plVar11 = (long *)(ulong)uVar4;
  if (uVar12 < 0x80) {
LAB_0016a4dc:
    switch((ulong)(&switchD_0016a4e8::switchdataD_039c5fc0)[uVar12] * 4 + 0x16a4c4) {
    case 0x16a4c4:
      goto switchD_0016a4e8_caseD_16a4c4;
    case 0x16a4ec:
      goto switchD_0016a4e8_caseD_16a4ec;
    case 0x16a548:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x2d) {
        return (long *)&DAT_0000002d;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x5b) goto joined_r0x0016a63c;
      iVar3 = FUN_0016bef0(param_1);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      if (iVar3 < 0) {
        uVar4 = *param_1 + 1;
        if (uVar4 < 0xf) goto LAB_0016a640;
        do {
          do {
            lVar9 = **(long **)puVar14;
            **(long **)puVar14 = lVar9 + -1;
            if (lVar9 == 0) {
              uVar4 = FUN_001790d0();
              *param_1 = uVar4;
            }
            else {
              pbVar8 = *(byte **)(*(long *)puVar14 + 8);
              *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
              uVar4 = (uint)*pbVar8;
              *param_1 = uVar4;
            }
joined_r0x0016a63c:
            uVar4 = uVar4 + 1;
          } while (0xe < uVar4);
LAB_0016a640:
        } while ((1 << (ulong)(uVar4 & 0x1f) & 0x4801U) == 0);
        goto LAB_0016a4cc;
      }
      FUN_0016c090(param_1,0,iVar3);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      uVar4 = *param_1;
      goto joined_r0x0016a4bc;
    case 0x16a690:
      goto switchD_0016a4e8_caseD_16a690;
    case 0x16a6d8:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x2f) {
        return (long *)0x2f;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)0x117;
    case 0x16a738:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 == 0x3c) {
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
        }
        *param_1 = uVar4;
        return (long *)0x11e;
      }
      if (uVar4 != 0x3d) {
        return (long *)&DAT_0000003c;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)0x11c;
    case 0x16a7e4:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x3a) {
        return (long *)0x3a;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)&DAT_00000120;
    case 0x16a844:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x3d) {
        return (long *)0x7e;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)0x11d;
    case 0x16a8a4:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 == 0x3e) {
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
        }
        *param_1 = uVar4;
        return (long *)0x11f;
      }
      if (uVar4 != 0x3d) {
        return (long *)0x3e;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)0x11b;
    default:
      break;
    case 0x16a950:
      plVar13 = (long *)*puVar15;
      lVar9 = plVar13[1];
      uVar1 = plVar13[2];
      uVar5 = lVar9 + 1;
      if (uVar1 < uVar5) {
        if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
        lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar1,uVar1 << 1);
        lVar9 = plVar13[1];
        uVar5 = lVar9 + 1;
        *plVar13 = lVar6;
        plVar13[2] = uVar1 << 1;
      }
      else {
        lVar6 = *plVar13;
      }
      plVar13[1] = uVar5;
      *(undefined1 *)(lVar6 + lVar9) = 0x2e;
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 == 0x2e) {
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
          *param_1 = uVar4;
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
          *param_1 = uVar4;
        }
        if (uVar4 != 0x2e) {
          return (long *)&DAT_00000118;
        }
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
        }
        *param_1 = uVar4;
        return (long *)0x119;
      }
      if (((byte)(&DAT_039c5d39)[(int)uVar4] >> 1 & 1) == 0) {
        return (long *)0x2e;
      }
    case 0x16b7d0:
      plVar13 = (long *)FUN_0016c570(param_1,param_2);
      return plVar13;
    case 0x16a998:
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
        *param_1 = uVar4;
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
        *param_1 = uVar4;
      }
      if (uVar4 != 0x3d) {
        return (long *)0x3d;
      }
      lVar9 = **(long **)puVar14;
      **(long **)puVar14 = lVar9 + -1;
      if (lVar9 == 0) {
        uVar4 = FUN_001790d0();
      }
      else {
        pbVar8 = *(byte **)(*(long *)puVar14 + 8);
        *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
        uVar4 = (uint)*pbVar8;
      }
      *param_1 = uVar4;
      return (long *)0x11a;
    case 0x16a9f8:
      iVar3 = FUN_0016bef0(param_1);
      if (-1 < iVar3) {
        FUN_0016c090(param_1,param_2);
        return (long *)0x125;
      }
      if (iVar3 == -1) {
        return (long *)0x5b;
      }
      goto LAB_0016bd8c;
    case 0x16b940:
      goto switchD_0016a4e8_caseD_16b940;
    }
  }
switchD_0016a4e8_caseD_16a90c:
  if (((&DAT_039c5d39)[(int)plVar11] & 1) == 0) {
    lVar9 = **(long **)puVar14;
    **(long **)puVar14 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar4 = FUN_001790d0();
    }
    else {
      pbVar8 = *(byte **)(*(long *)puVar14 + 8);
      *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
      uVar4 = (uint)*pbVar8;
    }
    *param_1 = uVar4;
    return plVar11;
  }
  while( true ) {
    plVar10 = (long *)*puVar15;
    lVar9 = plVar10[1];
    uVar1 = plVar10[2];
    uVar5 = lVar9 + 1;
    if (uVar1 < uVar5) break;
    lVar6 = *plVar10;
LAB_0016b5b4:
    plVar10[1] = uVar5;
    *(char *)(lVar6 + lVar9) = (char)plVar11;
    lVar9 = **(long **)puVar14;
    **(long **)puVar14 = lVar9 + -1;
    if (lVar9 == 0) {
      uVar5 = FUN_001790d0();
      plVar11 = (long *)(uVar5 & 0xffffffff);
    }
    else {
      pbVar8 = *(byte **)(*(long *)puVar14 + 8);
      *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
      plVar11 = (long *)(ulong)*pbVar8;
    }
    *param_1 = (uint)plVar11;
    if (((&DAT_039c5d39)[(int)(uint)plVar11] & 3) == 0) {
      lVar6 = *(long *)(param_1 + 0xe);
      lVar9 = FUN_0016d720(lVar6,**(undefined8 **)(param_1 + 0x12),
                           (*(undefined8 **)(param_1 + 0x12))[1]);
      plVar13 = *(long **)(lVar6 + 0x10);
      *(long **)(lVar6 + 0x10) = plVar13 + 2;
      *plVar13 = lVar9;
      *(uint *)(plVar13 + 1) = *(byte *)(lVar9 + 8) | 0x40;
      puVar7 = (undefined4 *)
               FUN_00171c60(lVar6,*(undefined8 *)(param_1 + 0x14),*(long *)(lVar6 + 0x10) + -0x10);
      if (puVar7[2] == 0) {
        *puVar7 = 1;
        puVar7[2] = 1;
        if (0 < *(long *)(*(long *)(lVar6 + 0x18) + 0x18)) {
          FUN_0015dc70(lVar6);
        }
      }
      else {
        lVar9 = *(long *)(puVar7 + 4);
      }
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
      *param_2 = lVar9;
      if ((*(char *)(lVar9 + 8) == '\x04') && (*(byte *)(lVar9 + 10) != 0)) {
        return (long *)(ulong)(*(byte *)(lVar9 + 10) | 0x100);
      }
      return (long *)&DAT_00000124;
    }
  }
  if (uVar1 < 0x3fffffffffffffff) {
    plVar13 = (long *)(uVar1 << 1);
    lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,plVar13);
    lVar9 = plVar10[1];
    uVar5 = lVar9 + 1;
    *plVar10 = lVar6;
    plVar10[2] = (long)plVar13;
    goto LAB_0016b5b4;
  }
  goto LAB_0016b9b8;
switchD_0016a4e8_caseD_16a4c4:
  FUN_0016be20(param_1);
LAB_0016a4cc:
  uVar4 = *param_1;
  goto joined_r0x0016a4bc;
switchD_0016a4e8_caseD_16a4ec:
  lVar9 = **(long **)puVar14;
  **(long **)puVar14 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_001790d0();
    *param_1 = uVar4;
  }
  else {
    pbVar8 = *(byte **)(*(long *)puVar14 + 8);
    *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
    *param_1 = uVar4;
  }
  uVar12 = uVar4 + 1;
  plVar11 = (long *)(ulong)uVar4;
  if (0x7f < uVar12) goto switchD_0016a4e8_caseD_16a90c;
  goto LAB_0016a4dc;
switchD_0016a4e8_caseD_16a690:
  plVar10 = (long *)*puVar15;
  lVar9 = plVar10[1];
  uVar1 = plVar10[2];
  uVar5 = lVar9 + 1;
  if (uVar1 < uVar5) {
    if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
    lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
    lVar9 = plVar10[1];
    uVar5 = lVar9 + 1;
    *plVar10 = lVar6;
    plVar10[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar10;
  }
  plVar10[1] = uVar5;
  *(char *)(lVar6 + lVar9) = (char)plVar11;
  lVar9 = **(long **)puVar14;
  **(long **)puVar14 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_001790d0();
    plVar13 = (long *)(ulong)uVar4;
    *param_1 = uVar4;
  }
  else {
    pbVar8 = *(byte **)(*(long *)puVar14 + 8);
    *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
    bVar2 = *pbVar8;
    plVar13 = (long *)(ulong)bVar2;
    uVar4 = (uint)bVar2;
    *param_1 = uVar4;
  }
  if (uVar4 != (uint)plVar11) {
    if (0x5b < (int)plVar13) goto LAB_0016aa74;
LAB_0016aac4:
    iVar3 = (int)plVar13;
    if (iVar3 == -1) {
LAB_0016b978:
      FUN_0016a190(param_1,"unfinished string",0x121);
      uVar4 = *param_1;
      plVar11 = (long *)(ulong)uVar4;
      if (uVar4 == 0xffffffff) goto LAB_0016ba84;
      plVar13 = (long *)*puVar15;
      lVar9 = plVar13[1];
      uVar1 = plVar13[2];
      uVar5 = lVar9 + 1;
      if (uVar5 <= uVar1) goto LAB_0016b9cc;
      if (uVar1 < 0x3fffffffffffffff) {
        lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar13,uVar1,uVar1 << 1);
        lVar9 = plVar13[1];
        uVar5 = lVar9 + 1;
        *plVar13 = lVar6;
        plVar13[2] = uVar1 << 1;
        goto LAB_0016ba48;
      }
    }
    else {
      if ((iVar3 == 10) || (iVar3 == 0xd)) {
        FUN_0016a190(param_1,"unfinished string",0x125);
        goto LAB_0016b978;
      }
      while( true ) {
        plVar10 = (long *)*puVar15;
        lVar9 = plVar10[1];
        uVar1 = plVar10[2];
        uVar5 = lVar9 + 1;
        if (uVar1 < uVar5) break;
        lVar6 = *plVar10;
LAB_0016ab28:
        plVar10[1] = uVar5;
        *(char *)(lVar6 + lVar9) = (char)plVar13;
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
          *param_1 = uVar4;
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
          *param_1 = uVar4;
        }
        while( true ) {
          plVar13 = (long *)(ulong)uVar4;
          if (uVar4 == (uint)plVar11) goto LAB_0016b420;
          if ((int)uVar4 < 0x5c) goto LAB_0016aac4;
LAB_0016aa74:
          if ((int)plVar13 != 0x5c) break;
          plVar10 = (long *)*puVar15;
          lVar9 = plVar10[1];
          uVar1 = plVar10[2];
          uVar5 = lVar9 + 1;
          if (uVar1 < uVar5) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
            plVar13 = (long *)(uVar1 << 1);
            lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,plVar13);
            lVar9 = plVar10[1];
            uVar5 = lVar9 + 1;
            *plVar10 = lVar6;
            plVar10[2] = (long)plVar13;
          }
          else {
            lVar6 = *plVar10;
          }
          plVar10[1] = uVar5;
          *(undefined1 *)(lVar6 + lVar9) = 0x5c;
          lVar9 = **(long **)puVar14;
          **(long **)puVar14 = lVar9 + -1;
          if (lVar9 == 0) {
            uVar4 = FUN_001790d0();
            *param_1 = uVar4;
          }
          else {
            pbVar8 = *(byte **)(*(long *)puVar14 + 8);
            *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
            uVar4 = (uint)*pbVar8;
            *param_1 = uVar4;
          }
          if (uVar4 + 1 < 0x7c) {
                    /* WARNING: Could not recover jumptable at 0x0016abfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar13 = (long *)(*(code *)((ulong)*(ushort *)(&DAT_039c60c0 + (ulong)(uVar4 + 1) * 2)
                                         * 4 + 0x16aa60))();
            return plVar13;
          }
          if (((byte)(&DAT_039c5d39)[(int)uVar4] >> 1 & 1) == 0) {
            if (uVar4 == 0xffffffff) goto LAB_0016bdb4;
            plVar11 = (long *)*puVar15;
            lVar9 = plVar11[1];
            uVar1 = plVar11[2];
            uVar5 = lVar9 + 1;
            if (uVar1 < uVar5) {
              if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
              lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar11,uVar1,uVar1 << 1);
              lVar9 = plVar11[1];
              uVar5 = lVar9 + 1;
              *plVar11 = lVar6;
              plVar11[2] = uVar1 << 1;
            }
            else {
              lVar6 = *plVar11;
            }
            plVar11[1] = uVar5;
            *(char *)(lVar6 + lVar9) = (char)uVar4;
            lVar6 = **(long **)puVar14;
            **(long **)puVar14 = lVar6 + -1;
            lVar9 = *(long *)puVar14;
            if (lVar6 != 0) goto LAB_0016bda0;
            uVar4 = FUN_001790d0();
            goto LAB_0016bdb0;
          }
          plVar10 = (long *)*puVar15;
          lVar9 = plVar10[1];
          uVar1 = plVar10[2];
          uVar5 = lVar9 + 1;
          if (uVar1 < uVar5) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
            lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
            lVar9 = plVar10[1];
            uVar5 = lVar9 + 1;
            *plVar10 = lVar6;
            plVar10[2] = uVar1 << 1;
          }
          else {
            lVar6 = *plVar10;
          }
          plVar10[1] = uVar5;
          *(char *)(lVar6 + lVar9) = (char)uVar4;
          lVar9 = **(long **)puVar14;
          **(long **)puVar14 = lVar9 + -1;
          if (lVar9 == 0) {
            uVar5 = FUN_001790d0();
            plVar13 = (long *)(uVar5 & 0xffffffff);
          }
          else {
            pbVar8 = *(byte **)(*(long *)puVar14 + 8);
            *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
            plVar13 = (long *)(ulong)*pbVar8;
          }
          uVar12 = (uint)plVar13;
          *param_1 = uVar12;
          iVar3 = uVar4 - 0x30;
          if (((byte)(&DAT_039c5d39)[(int)uVar12] >> 1 & 1) == 0) {
            lVar9 = 1;
          }
          else {
            plVar10 = (long *)*puVar15;
            lVar9 = plVar10[1];
            uVar1 = plVar10[2];
            uVar5 = lVar9 + 1;
            if (uVar1 < uVar5) {
              if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
              lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
              lVar9 = plVar10[1];
              uVar5 = lVar9 + 1;
              *plVar10 = lVar6;
              plVar10[2] = uVar1 << 1;
            }
            else {
              lVar6 = *plVar10;
            }
            plVar10[1] = uVar5;
            *(char *)(lVar6 + lVar9) = (char)plVar13;
            lVar9 = **(long **)puVar14;
            **(long **)puVar14 = lVar9 + -1;
            if (lVar9 == 0) {
              uVar5 = FUN_001790d0();
              plVar13 = (long *)(uVar5 & 0xffffffff);
            }
            else {
              pbVar8 = *(byte **)(*(long *)puVar14 + 8);
              *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
              plVar13 = (long *)(ulong)*pbVar8;
            }
            uVar4 = (uint)plVar13;
            *param_1 = uVar4;
            iVar3 = uVar12 + iVar3 * 10 + -0x30;
            if (((byte)(&DAT_039c5d39)[(int)uVar4] >> 1 & 1) == 0) {
              lVar9 = 2;
            }
            else {
              plVar10 = (long *)*puVar15;
              lVar9 = plVar10[1];
              uVar1 = plVar10[2];
              uVar5 = lVar9 + 1;
              if (uVar1 < uVar5) {
                if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
                lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
                lVar9 = plVar10[1];
                uVar5 = lVar9 + 1;
                *plVar10 = lVar6;
                plVar10[2] = uVar1 << 1;
              }
              else {
                lVar6 = *plVar10;
              }
              plVar10[1] = uVar5;
              *(char *)(lVar6 + lVar9) = (char)plVar13;
              iVar3 = uVar4 + iVar3 * 10 + -0x30;
              lVar9 = **(long **)puVar14;
              **(long **)puVar14 = lVar9 + -1;
              if (lVar9 == 0) {
                uVar5 = FUN_001790d0();
                plVar13 = (long *)(uVar5 & 0xffffffff);
              }
              else {
                pbVar8 = *(byte **)(*(long *)puVar14 + 8);
                *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
                plVar13 = (long *)(ulong)*pbVar8;
              }
              *param_1 = (uint)plVar13;
              lVar9 = 3;
            }
          }
          if (0xff < iVar3) {
            if ((int)plVar13 == -1) goto LAB_0016bddc;
            plVar11 = (long *)*puVar15;
            lVar9 = plVar11[1];
            uVar1 = plVar11[2];
            uVar5 = lVar9 + 1;
            if (uVar1 < uVar5) {
              if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
              lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar11,uVar1,uVar1 << 1);
              lVar9 = plVar11[1];
              uVar5 = lVar9 + 1;
              *plVar11 = lVar6;
              plVar11[2] = uVar1 << 1;
            }
            else {
              lVar6 = *plVar11;
            }
            plVar11[1] = uVar5;
            *(char *)(lVar6 + lVar9) = (char)plVar13;
            lVar6 = **(long **)puVar14;
            **(long **)puVar14 = lVar6 + -1;
            lVar9 = *(long *)puVar14;
            if (lVar6 != 0) goto LAB_0016bdc8;
            uVar4 = FUN_001790d0();
            goto LAB_0016bdd8;
          }
          *(long *)(*puVar15 + 8) = *(long *)(*puVar15 + 8) - lVar9;
          *(long *)(*puVar15 + 8) = *(long *)(*puVar15 + 8) + -1;
          plVar10 = (long *)*puVar15;
          lVar9 = plVar10[1];
          uVar1 = plVar10[2];
          uVar5 = lVar9 + 1;
          if (uVar1 < uVar5) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_0016b9b8;
            lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
            lVar9 = plVar10[1];
            uVar5 = lVar9 + 1;
            *plVar10 = lVar6;
            plVar10[2] = uVar1 << 1;
          }
          else {
            lVar6 = *plVar10;
          }
          plVar10[1] = uVar5;
          *(char *)(lVar6 + lVar9) = (char)iVar3;
          uVar4 = *param_1;
        }
      }
      if (uVar1 < 0x3fffffffffffffff) {
        lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
        lVar9 = plVar10[1];
        uVar5 = lVar9 + 1;
        *plVar10 = lVar6;
        plVar10[2] = uVar1 << 1;
        goto LAB_0016ab28;
      }
    }
    goto LAB_0016b9b8;
  }
LAB_0016b420:
  plVar10 = (long *)*puVar15;
  lVar9 = plVar10[1];
  uVar1 = plVar10[2];
  uVar5 = lVar9 + 1;
  if (uVar1 < uVar5) {
    if (0x3ffffffffffffffe < uVar1) {
LAB_0016b9b8:
      do {
        uVar4 = (uint)plVar11;
        FUN_0016a190(param_1,"lexical element too long",0);
        lVar9 = extraout_x8;
        uVar5 = extraout_x9;
LAB_0016b9cc:
        lVar6 = *plVar13;
LAB_0016ba48:
        plVar13[1] = uVar5;
        *(char *)(lVar6 + lVar9) = (char)uVar4;
        lVar9 = **(long **)puVar14;
        **(long **)puVar14 = lVar9 + -1;
        if (lVar9 == 0) {
          uVar4 = FUN_001790d0();
        }
        else {
          pbVar8 = *(byte **)(*(long *)puVar14 + 8);
          *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
        }
        *param_1 = uVar4;
LAB_0016ba84:
        FUN_0016a190(param_1,"UTF-8 value too large",0x125);
        if ((int)plVar13 == -1) goto LAB_0016bd50;
        plVar11 = (long *)*puVar15;
        lVar9 = plVar11[1];
        uVar1 = plVar11[2];
        uVar5 = lVar9 + 1;
        if (uVar5 <= uVar1) {
          lVar6 = *plVar11;
          goto LAB_0016bc3c;
        }
        if (uVar1 < 0x3fffffffffffffff) {
          lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar11,uVar1,uVar1 << 1);
          lVar9 = plVar11[1];
          uVar5 = lVar9 + 1;
          *plVar11 = lVar6;
          plVar11[2] = uVar1 << 1;
LAB_0016bc3c:
          plVar11[1] = uVar5;
          *(char *)(lVar6 + lVar9) = (char)plVar13;
          lVar9 = **(long **)puVar14;
          **(long **)puVar14 = lVar9 + -1;
          if (lVar9 == 0) {
            uVar4 = FUN_001790d0();
          }
          else {
            pbVar8 = *(byte **)(*(long *)puVar14 + 8);
            *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
            uVar4 = (uint)*pbVar8;
          }
          *param_1 = uVar4;
LAB_0016bd50:
          lVar9 = FUN_0016a190(param_1,"missing \'{\'",0x125);
          pbVar8 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar8 + 1;
          *param_1 = (uint)*pbVar8;
          FUN_0016a190(param_1,"missing \'}\'",0x125);
LAB_0016bd8c:
          lVar9 = FUN_0016a190(param_1,"invalid long string delimiter",0x125);
LAB_0016bda0:
          pbVar8 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
LAB_0016bdb0:
          *param_1 = uVar4;
LAB_0016bdb4:
          lVar9 = FUN_0016a190(param_1,"invalid escape sequence",0x125);
LAB_0016bdc8:
          pbVar8 = *(byte **)(lVar9 + 8);
          *(byte **)(lVar9 + 8) = pbVar8 + 1;
          uVar4 = (uint)*pbVar8;
LAB_0016bdd8:
          *param_1 = uVar4;
LAB_0016bddc:
          lVar9 = FUN_0016a190(param_1,"decimal escape too large",0x125);
          plVar13 = (long *)FUN_0016a460(lVar9,lVar9 + 0x28);
          *(int *)(lVar9 + 0x20) = (int)plVar13;
          return plVar13;
        }
      } while( true );
    }
    lVar6 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar10,uVar1,uVar1 << 1);
    lVar9 = plVar10[1];
    uVar5 = lVar9 + 1;
    *plVar10 = lVar6;
    plVar10[2] = uVar1 << 1;
  }
  else {
    lVar6 = *plVar10;
  }
  plVar10[1] = uVar5;
  *(char *)(lVar6 + lVar9) = (char)plVar11;
  lVar9 = **(long **)puVar14;
  **(long **)puVar14 = lVar9 + -1;
  if (lVar9 == 0) {
    uVar4 = FUN_001790d0();
  }
  else {
    pbVar8 = *(byte **)(*(long *)puVar14 + 8);
    *(byte **)(*(long *)puVar14 + 8) = pbVar8 + 1;
    uVar4 = (uint)*pbVar8;
  }
  *param_1 = uVar4;
  lVar6 = *(long *)(param_1 + 0xe);
  lVar9 = FUN_0016d720(lVar6,**(long **)(param_1 + 0x12) + 1,(*(long **)(param_1 + 0x12))[1] + -2);
  plVar13 = *(long **)(lVar6 + 0x10);
  *(long **)(lVar6 + 0x10) = plVar13 + 2;
  *plVar13 = lVar9;
  *(uint *)(plVar13 + 1) = *(byte *)(lVar9 + 8) | 0x40;
  puVar7 = (undefined4 *)
           FUN_00171c60(lVar6,*(undefined8 *)(param_1 + 0x14),*(long *)(lVar6 + 0x10) + -0x10);
  if (puVar7[2] == 0) {
    *puVar7 = 1;
    puVar7[2] = 1;
    if (0 < *(long *)(*(long *)(lVar6 + 0x18) + 0x18)) {
      FUN_0015dc70(lVar6);
    }
  }
  else {
    lVar9 = *(long *)(puVar7 + 4);
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
  *param_2 = lVar9;
  plVar13 = (long *)0x125;
switchD_0016a4e8_caseD_16b940:
  return plVar13;
}


