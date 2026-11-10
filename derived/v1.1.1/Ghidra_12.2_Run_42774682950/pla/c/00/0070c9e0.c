/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c9e0; name: FUN_0070c9e0
 */


void FUN_0070c9e0(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
LAB_0070ca04:
  plVar9 = param_2 + -1;
  plVar14 = param_1;
LAB_0070ca10:
  do {
    param_1 = plVar14;
    lVar10 = (long)param_2 - (long)param_1;
    uVar6 = lVar10 >> 3;
    switch(uVar6) {
    case 0:
    case 1:
      goto switchD_0070cd20_caseD_0;
    case 2:
      lVar10 = *param_1;
      if (param_2[-1] < lVar10) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar10;
        return;
      }
      return;
    case 3:
      lVar10 = *param_1;
      lVar11 = param_1[1];
      lVar12 = param_2[-1];
      if (lVar10 <= lVar11) {
        if (lVar11 <= lVar12) {
          return;
        }
        param_1[1] = lVar12;
        param_2[-1] = lVar11;
        lVar10 = *param_1;
        if (param_1[1] < lVar10) {
          *param_1 = param_1[1];
          param_1[1] = lVar10;
          return;
        }
        return;
      }
      if (lVar12 < lVar11) {
        *param_1 = lVar12;
        param_2[-1] = lVar10;
        return;
      }
      *param_1 = lVar11;
      param_1[1] = lVar10;
      if (param_2[-1] < lVar10) {
        param_1[1] = param_2[-1];
        param_2[-1] = lVar10;
        return;
      }
      return;
    case 4:
      lVar10 = *param_1;
      lVar11 = param_1[1];
      lVar12 = param_1[2];
      if (lVar11 < lVar10) {
        if (lVar12 < lVar11) {
          *param_1 = lVar12;
        }
        else {
          *param_1 = lVar11;
          param_1[1] = lVar10;
          if (lVar10 <= lVar12) {
            lVar11 = lVar12;
            goto LAB_0070cf68;
          }
          param_1[1] = lVar12;
        }
        param_1[2] = lVar10;
        lVar13 = param_2[-1];
        lVar12 = lVar10;
        if (lVar10 <= lVar13) {
          return;
        }
      }
      else {
        if (lVar11 <= lVar12) {
          lVar13 = param_2[-1];
          if (lVar12 <= lVar13) {
            return;
          }
          goto LAB_0070cf74;
        }
        param_1[1] = lVar12;
        param_1[2] = lVar11;
        if (lVar12 < lVar10) {
          *param_1 = lVar12;
          param_1[1] = lVar10;
          lVar13 = param_2[-1];
          lVar12 = lVar11;
          if (lVar11 <= lVar13) {
            return;
          }
          goto LAB_0070cf74;
        }
LAB_0070cf68:
        lVar13 = param_2[-1];
        lVar12 = lVar11;
        if (lVar11 <= lVar13) {
          return;
        }
      }
LAB_0070cf74:
      param_1[2] = lVar13;
      param_2[-1] = lVar12;
      lVar10 = param_1[1];
      lVar11 = param_1[2];
      if (lVar10 <= lVar11) {
        return;
      }
      param_1[1] = lVar11;
      param_1[2] = lVar10;
      lVar10 = *param_1;
      if (lVar11 < lVar10) {
        *param_1 = lVar11;
        param_1[1] = lVar10;
        return;
      }
      return;
    case 5:
      FUN_0070cfa0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar9,param_3);
      return;
    default:
      if (lVar10 < 0xf8) {
        lVar10 = *param_1;
        lVar11 = param_1[1];
        lVar13 = param_1[2];
        lVar12 = lVar13;
        if (lVar11 < lVar10) {
          if (lVar13 < lVar11) {
            *param_1 = lVar13;
          }
          else {
            *param_1 = lVar11;
            param_1[1] = lVar10;
            if (lVar10 <= lVar13) goto joined_r0x0070ce40;
            param_1[1] = lVar13;
          }
          param_1[2] = lVar10;
          lVar12 = lVar10;
        }
        else if (lVar13 < lVar11) {
          param_1[1] = lVar13;
          param_1[2] = lVar11;
          lVar12 = lVar11;
          if (lVar13 < lVar10) {
            *param_1 = lVar13;
            param_1[1] = lVar10;
          }
        }
joined_r0x0070ce40:
        if (param_1 + 3 == param_2) {
          return;
        }
        plVar14 = param_1 + 3;
        lVar10 = 0x18;
        lVar11 = *plVar14;
        plVar9 = plVar14;
        if (lVar12 <= lVar11) goto LAB_0070ce10;
        goto LAB_0070cddc;
      }
      uVar5 = uVar6;
      if ((long)uVar6 < 0) {
        uVar5 = uVar6 + 1;
      }
      plVar14 = (long *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
      if (0x1f38 < lVar10) {
        uVar5 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar5 = uVar6;
        }
        lVar10 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_0070cfa0(param_1,(long)param_1 + lVar10,plVar14,(long)plVar14 + lVar10,plVar9,
                             param_3);
        lVar11 = *param_1;
        lVar10 = *plVar14;
        iVar4 = iVar3;
        if (lVar10 <= lVar11) goto LAB_0070cb5c;
LAB_0070ca88:
        plVar8 = param_1 + 1;
        plVar7 = plVar9;
        if (plVar8 < plVar9) goto LAB_0070cba4;
        goto LAB_0070ca98;
      }
      lVar11 = *plVar14;
      lVar10 = *param_1;
      lVar12 = *plVar9;
      if (lVar11 < lVar10) {
        if (lVar12 < lVar11) {
          *param_1 = lVar12;
          iVar3 = 1;
        }
        else {
          *param_1 = lVar11;
          *plVar14 = lVar10;
          if (lVar10 <= *plVar9) {
LAB_0070cc88:
            iVar4 = 1;
            iVar3 = 1;
            lVar11 = *param_1;
            lVar10 = *plVar14;
            if (lVar11 < lVar10) goto LAB_0070ca88;
            goto LAB_0070cb5c;
          }
          iVar3 = 2;
          *plVar14 = *plVar9;
        }
        *plVar9 = lVar10;
        lVar11 = *param_1;
        lVar10 = *plVar14;
        iVar4 = iVar3;
        if (lVar11 < lVar10) goto LAB_0070ca88;
      }
      else if (lVar12 < lVar11) {
        *plVar14 = lVar12;
        *plVar9 = lVar11;
        lVar10 = *param_1;
        if (lVar10 <= *plVar14) goto LAB_0070cc88;
        *param_1 = *plVar14;
        iVar4 = 2;
        iVar3 = 2;
        *plVar14 = lVar10;
        lVar11 = *param_1;
        if (lVar11 < lVar10) goto LAB_0070ca88;
      }
      else {
        iVar4 = 0;
        iVar3 = 0;
        lVar11 = *param_1;
        lVar10 = *plVar14;
        if (lVar11 < lVar10) goto LAB_0070ca88;
      }
LAB_0070cb5c:
      plVar8 = param_2 + -2;
      while (plVar7 = plVar8, param_1 != plVar7) {
        plVar8 = plVar7 + -1;
        if (*plVar7 < lVar10) goto code_r0x0070cb74;
      }
      plVar8 = param_1 + 1;
      if (*plVar9 <= lVar11) {
        if (plVar8 == plVar9) {
          return;
        }
        plVar8 = param_1 + 2;
        while (lVar10 = plVar8[-1], lVar10 <= lVar11) {
          plVar8 = plVar8 + 1;
          if (param_2 == plVar8) {
            return;
          }
        }
        plVar8[-1] = *plVar9;
        *plVar9 = lVar10;
      }
      if (plVar8 == plVar9) {
        return;
      }
      plVar7 = plVar9;
      while( true ) {
        do {
          plVar14 = plVar8;
          plVar8 = plVar14 + 1;
          lVar10 = *plVar14;
        } while (lVar10 <= *param_1);
        do {
          plVar7 = plVar7 + -1;
        } while (*param_1 < *plVar7);
        if (plVar7 <= plVar14) break;
        *plVar14 = *plVar7;
        *plVar7 = lVar10;
      }
    }
  } while( true );
LAB_0070cddc:
  lVar13 = lVar10;
  do {
    lVar2 = lVar13 + -8;
    *(long *)((long)param_1 + lVar13) = lVar12;
    if (lVar2 == 0) {
      plVar9 = param_1;
      goto LAB_0070ce0c;
    }
    lVar12 = *(long *)((long)param_1 + lVar13 + -0x10);
    lVar13 = lVar2;
  } while (lVar11 < lVar12);
  plVar9 = (long *)((long)param_1 + lVar2);
LAB_0070ce0c:
  *plVar9 = lVar11;
  plVar9 = plVar14;
LAB_0070ce10:
  do {
    plVar14 = plVar9 + 1;
    if (plVar14 == param_2) {
      return;
    }
    lVar12 = *plVar9;
    lVar10 = lVar10 + 8;
    lVar11 = *plVar14;
    plVar9 = plVar14;
  } while (lVar12 <= lVar11);
  goto LAB_0070cddc;
code_r0x0070cb74:
  *param_1 = *plVar7;
  iVar4 = iVar3 + 1;
  *plVar7 = lVar11;
  plVar8 = param_1 + 1;
  if (plVar8 < plVar7) {
LAB_0070cba4:
    while( true ) {
      plVar15 = plVar8 + -1;
      do {
        plVar8 = plVar15;
        plVar15 = plVar8 + 1;
        lVar10 = *plVar15;
      } while (lVar10 < *plVar14);
      plVar8 = plVar8 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*plVar14 <= *plVar7);
      if (plVar7 < plVar15) break;
      *plVar15 = *plVar7;
      iVar4 = iVar4 + 1;
      *plVar7 = lVar10;
      plVar1 = plVar7;
      if (plVar14 != plVar15) {
        plVar1 = plVar14;
      }
      plVar14 = plVar1;
    }
    if (plVar15 != plVar14) goto LAB_0070caa0;
LAB_0070cbdc:
    if (iVar4 != 0) goto LAB_0070cc10;
  }
  else {
LAB_0070ca98:
    plVar15 = param_1 + 1;
    if (plVar15 == plVar14) goto LAB_0070cbdc;
LAB_0070caa0:
    lVar10 = *plVar15;
    if (lVar10 <= *plVar14) goto LAB_0070cbdc;
    *plVar15 = *plVar14;
    *plVar14 = lVar10;
    if (iVar4 != -1) goto LAB_0070cc10;
  }
  uVar6 = FUN_0070d190(param_1,plVar15,param_3);
  uVar5 = FUN_0070d190(plVar15 + 1,param_2,param_3);
  if ((uVar5 & 1) != 0) goto LAB_0070cd00;
  plVar14 = plVar15 + 1;
  if ((uVar6 & 1) != 0) goto LAB_0070ca10;
LAB_0070cc10:
  if ((long)param_2 - (long)plVar15 <= (long)plVar15 - (long)param_1) {
    FUN_0070c9e0(plVar15 + 1,param_2,param_3);
    param_2 = plVar15;
    goto LAB_0070ca04;
  }
  FUN_0070c9e0(param_1,plVar15,param_3);
  plVar14 = plVar15 + 1;
  goto LAB_0070ca10;
LAB_0070cd00:
  param_2 = plVar15;
  if ((uVar6 & 1) != 0) {
switchD_0070cd20_caseD_0:
    return;
  }
  goto LAB_0070ca04;
}


