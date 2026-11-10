/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dcf40; name: FUN_032dcf40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032dcf40(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ushort uVar6;
  ulong *puVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *puVar16;
  short *psVar17;
  int iVar18;
  short *psVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  undefined8 *local_78 [2];
  ulong local_68;
  
  uVar12 = (uint)*param_1;
  if (((uVar12 >> 6 & 1) == 0) ||
     (uVar13 = (uVar12 & 0x3f) - (uVar12 >> 1 & 0x15),
     uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
     uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18,
     puVar15 = param_1 + (ulong)uVar13 + 2, (code *)param_1[(ulong)uVar13 + 2] != FUN_032ebca8)) {
    local_90 = (ulong *)0x0;
    puVar15 = local_90;
  }
  else {
    *puVar15 = (ulong)&LAB_032eab10;
  }
  if (((uVar12 >> 7 & 1) == 0) ||
     (uVar13 = (uVar12 & 0x7f) - (uVar12 >> 1 & 0x15),
     uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333),
     uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18,
     puVar1 = param_1 + (ulong)uVar13 + 2, (code *)param_1[(ulong)uVar13 + 2] != FUN_032ebcd4)) {
    local_88 = (ulong *)0x0;
    puVar1 = local_88;
  }
  else {
    *puVar1 = (ulong)&LAB_032eab80;
  }
  if (((uVar12 >> 9 & 1) == 0) ||
     (uVar12 = (uVar12 & 0x1ff) - (uVar12 >> 1 & 0x55),
     uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333),
     uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18,
     local_80 = param_1 + (ulong)uVar12 + 2, (code *)param_1[(ulong)uVar12 + 2] != FUN_032ebd00)) {
    local_80 = (ulong *)0x0;
    if ((puVar15 == (ulong *)0x0) && (puVar1 == (ulong *)0x0)) {
      return;
    }
  }
  else {
    *local_80 = (ulong)&LAB_032eabec;
  }
  puVar7 = local_80;
  iVar11 = (int)param_2[1];
  if (0 < iVar11) {
    lVar10 = (long)iVar11;
    iVar18 = iVar11;
    do {
      lVar10 = lVar10 + -1;
      if (*(ulong **)(*param_2 + lVar10 * 8) == param_1) {
        if (iVar18 != 0) {
          return;
        }
        break;
      }
      iVar18 = iVar18 + -1;
    } while (0 < lVar10);
  }
  uVar13 = *(uint *)((long)param_2 + 0xc);
  uVar12 = iVar11 + 1;
  local_90 = puVar15;
  local_88 = puVar1;
  if (iVar11 < (int)(uVar13 & 0x3fffffff)) {
    lVar10 = *param_2;
  }
  else {
    lVar10 = *param_2;
    if (0x3ffffffe < iVar11) {
      FUN_032bd0a8(uVar12);
      uVar13 = *(uint *)((long)param_2 + 0xc);
    }
    uVar13 = (uVar13 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar13) {
      uVar13 = 0x3fffffff;
    }
    uVar5 = uVar12;
    if ((int)uVar12 <= (int)uVar13) {
      uVar5 = uVar13;
    }
    lVar10 = FUN_032bd1d4(PTR_PTR_0434a090,uVar5,8,lVar10,iVar11);
    iVar11 = (int)param_2[1];
    *param_2 = lVar10;
  }
  *(ulong **)(lVar10 + (long)iVar11 * 8) = param_1;
  *(uint *)(param_2 + 1) = uVar12;
  FUN_032e2c7c(local_78,param_1,&DAT_04357e78);
  if ((local_68 & 1) != 0) {
    plVar9 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar2 = plVar9 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *(int *)plVar2 = (int)lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar9 != (long *)0x0) && ((int)lVar10 == 1)) {
      (**(code **)(*plVar9 + 8))();
    }
  }
  if (local_78[0] == (undefined8 *)0x0) {
    puVar16 = param_1;
    if ((*param_1 & 1) == 0) {
      puVar16 = (ulong *)param_1[1];
      bVar3 = (byte)*puVar16;
      while ((bVar3 & 1) == 0) {
        puVar16 = (ulong *)puVar16[1];
        bVar3 = (byte)*puVar16;
      }
    }
    if ((param_1 == (ulong *)0x0) || ((puVar16[2] & 0x1f) != 7)) {
      if (puVar15 != (ulong *)0x0) {
        *puVar15 = 0;
      }
      if (puVar1 != (ulong *)0x0) {
        *puVar1 = 0;
      }
      if (puVar7 != (ulong *)0x0) {
        *puVar7 = 0;
      }
    }
    else {
      uVar20 = param_1[1];
      if (uVar20 != 0) {
        FUN_032dcf40(uVar20,param_2);
        FUN_032dfeb8(&local_90,uVar20);
      }
      do {
        uVar12 = (uint)*param_1;
        if ((uVar12 >> 0x17 & 1) != 0) {
          uVar12 = (uVar12 & 0x7fffff) - (uVar12 >> 1 & 0x155555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          psVar17 = (short *)param_1[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                            0x18) + 2];
          if (psVar17 != (short *)0x0) {
            psVar19 = psVar17 + 4;
            psVar17 = psVar19 + (long)*psVar17 * 4;
            goto LAB_032dd3ec;
          }
          break;
        }
        if ((*param_1 & 1) != 0) {
          psVar19 = (short *)0x0;
          psVar17 = (short *)0x0;
          goto LAB_032dd3ec;
        }
        param_1 = (ulong *)param_1[1];
      } while (param_1 != (ulong *)0x0);
      psVar19 = (short *)0x0;
      psVar17 = (short *)0x0;
LAB_032dd3ec:
      if (0 < (int)((ulong)((long)psVar17 - (long)psVar19) >> 3)) {
        uVar20 = (ulong)((long)psVar17 - (long)psVar19) >> 3 & 0xffffffff;
        FUN_032dcf40(*(undefined8 *)psVar19,param_2);
        FUN_032dfeb8(&local_90,*(undefined8 *)psVar19);
        if (uVar20 != 1) {
          FUN_032dcf40(*(undefined8 *)(psVar19 + 4),param_2);
          FUN_032dfeb8(&local_90,*(undefined8 *)(psVar19 + 4));
          if (uVar20 != 2) {
            FUN_032dcf40(*(undefined8 *)(psVar19 + 8),param_2);
            FUN_032dfeb8(&local_90,*(undefined8 *)(psVar19 + 8));
            if (uVar20 != 3) {
              lVar10 = 3 - uVar20;
              psVar17 = psVar19 + 0xc;
              do {
                FUN_032dcf40(*(undefined8 *)psVar17,param_2);
                FUN_032dfeb8(&local_90,*(undefined8 *)psVar17);
                bVar8 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                psVar17 = psVar17 + 4;
              } while (bVar8);
            }
          }
        }
      }
    }
  }
  else {
    puVar15 = param_1;
    do {
      uVar12 = (uint)*puVar15;
      if ((uVar12 >> 0xf & 1) != 0) {
        uVar12 = (uVar12 & 0x7fff) - (uVar12 >> 1 & 0x1555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar20 = puVar15[(ulong)((uVar12 + (uVar12 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
        uVar6 = *(ushort *)(uVar20 + 8);
        goto joined_r0x032dd2ac;
      }
    } while (((*puVar15 & 9) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
    uVar20 = 0;
    uVar6 = _DAT_00000008;
joined_r0x032dd2ac:
    uVar14 = (ulong)uVar6;
    if (uVar14 != 0) {
      if (**(char **)(uVar20 + 0x18) == 't') {
        FUN_032dcf40(*(undefined8 *)(uVar20 + 0x10),param_2);
        uVar14 = (ulong)*(ushort *)(uVar20 + 8);
      }
      if ((uVar14 & 0xfffe) != 0) {
        if (**(char **)(uVar20 + 0x28) == 't') {
          FUN_032dcf40(*(undefined8 *)(uVar20 + 0x20),param_2);
          uVar14 = (ulong)*(ushort *)(uVar20 + 8);
        }
        if (2 < uVar14) {
          puVar21 = (undefined8 *)(uVar20 + 0x38);
          uVar22 = 2;
          do {
            if (*(char *)*puVar21 == 't') {
              FUN_032dcf40(puVar21[-1],param_2);
              uVar14 = (ulong)*(ushort *)(uVar20 + 8);
            }
            uVar22 = uVar22 + 1;
            puVar21 = puVar21 + 2;
          } while (uVar22 < uVar14);
        }
      }
    }
    (*(code *)*local_78[0])(param_1);
  }
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return;
}


