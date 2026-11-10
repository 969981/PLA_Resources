/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e09f20; name: FUN_01e09f20
 */


void FUN_01e09f20(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  
LAB_01e09f44:
  plVar5 = param_2 + -1;
  plVar10 = param_1;
LAB_01e09f50:
  param_1 = plVar10;
  lVar11 = (long)param_2 - (long)param_1;
  uVar9 = lVar11 >> 3;
  if (uVar9 < 2) {
    return;
  }
  switch(uVar9) {
  case 2:
    lVar11 = *param_1;
    if (*(float *)(*plVar5 + 0x330) < *(float *)(lVar11 + 0x330)) {
      *param_1 = *plVar5;
      *plVar5 = lVar11;
      return;
    }
    return;
  case 3:
    lVar11 = *param_1;
    lVar6 = param_1[1];
    lVar12 = *plVar5;
    fVar14 = *(float *)(lVar6 + 0x330);
    if (fVar14 < *(float *)(lVar11 + 0x330)) {
      if (*(float *)(lVar12 + 0x330) < fVar14) {
        *param_1 = lVar12;
        *plVar5 = lVar11;
        return;
      }
      *param_1 = lVar6;
      param_1[1] = lVar11;
      if (*(float *)(*plVar5 + 0x330) < *(float *)(lVar11 + 0x330)) {
        param_1[1] = *plVar5;
        *plVar5 = lVar11;
        return;
      }
      return;
    }
    if (fVar14 <= *(float *)(lVar12 + 0x330)) {
      return;
    }
    param_1[1] = lVar12;
    *plVar5 = lVar6;
    lVar11 = *param_1;
    if (*(float *)(param_1[1] + 0x330) < *(float *)(lVar11 + 0x330)) {
      *param_1 = param_1[1];
      param_1[1] = lVar11;
      return;
    }
    return;
  case 4:
    FUN_01e0a5c0(param_1,param_1 + 1,param_1 + 2,plVar5);
    return;
  case 5:
    plVar10 = param_1 + 2;
    plVar8 = param_1 + 3;
    FUN_01e0a5c0(param_1,param_1 + 1,plVar10,plVar8);
    lVar11 = param_1[3];
    if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar5 + 0x330)) {
      return;
    }
    *plVar8 = *plVar5;
    *plVar5 = lVar11;
    lVar11 = *plVar8;
    lVar6 = *plVar10;
    if (*(float *)(lVar6 + 0x330) <= *(float *)(lVar11 + 0x330)) {
      return;
    }
    *plVar10 = lVar11;
    *plVar8 = lVar6;
    lVar6 = param_1[1];
    if (*(float *)(lVar6 + 0x330) <= *(float *)(lVar11 + 0x330)) {
      return;
    }
    param_1[1] = lVar11;
    param_1[2] = lVar6;
    lVar6 = *param_1;
    if (*(float *)(lVar11 + 0x330) < *(float *)(lVar6 + 0x330)) {
      *param_1 = lVar11;
      param_1[1] = lVar6;
      return;
    }
    return;
  }
  if (0xf7 < lVar11) {
    uVar3 = uVar9;
    if ((long)uVar9 < 0) {
      uVar3 = uVar9 + 1;
    }
    plVar10 = (long *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
    if (lVar11 < 0x1f39) {
      lVar6 = *plVar10;
      lVar11 = *param_1;
      lVar12 = *plVar5;
      fVar14 = *(float *)(lVar6 + 0x330);
      if (fVar14 < *(float *)(lVar11 + 0x330)) {
        if (*(float *)(lVar12 + 0x330) < fVar14) {
          *param_1 = lVar12;
          iVar2 = 1;
        }
        else {
          *param_1 = lVar6;
          *plVar10 = lVar11;
          if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar5 + 0x330)) goto LAB_01e0a380;
          iVar2 = 2;
          *plVar10 = *plVar5;
        }
        *plVar5 = lVar11;
      }
      else if (fVar14 <= *(float *)(lVar12 + 0x330)) {
        iVar2 = 0;
      }
      else {
        *plVar10 = lVar12;
        *plVar5 = lVar6;
        lVar11 = *param_1;
        if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar10 + 0x330)) {
LAB_01e0a380:
          iVar2 = 1;
        }
        else {
          *param_1 = *plVar10;
          iVar2 = 2;
          *plVar10 = lVar11;
        }
      }
    }
    else {
      uVar3 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar3 = uVar9;
      }
      lVar11 = (uVar3 & 0x7ffffffffffffffc) * 2;
      plVar8 = (long *)((long)param_1 + lVar11);
      plVar7 = (long *)((long)plVar10 + lVar11);
      iVar2 = FUN_01e0a5c0(param_1,plVar8,plVar10,plVar7);
      lVar11 = *plVar7;
      if (*(float *)(*plVar5 + 0x330) < *(float *)(lVar11 + 0x330)) {
        *plVar7 = *plVar5;
        *plVar5 = lVar11;
        lVar11 = *plVar10;
        if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar7 + 0x330)) {
          iVar2 = iVar2 + 1;
        }
        else {
          *plVar10 = *plVar7;
          *plVar7 = lVar11;
          lVar11 = *plVar8;
          if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar10 + 0x330)) {
            iVar2 = iVar2 + 2;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = lVar11;
            lVar11 = *param_1;
            if (*(float *)(lVar11 + 0x330) <= *(float *)(*plVar8 + 0x330)) {
              iVar2 = iVar2 + 3;
            }
            else {
              *param_1 = *plVar8;
              iVar2 = iVar2 + 4;
              *plVar8 = lVar11;
            }
          }
        }
      }
    }
    lVar11 = *param_1;
    fVar14 = *(float *)(lVar11 + 0x330);
    if (*(float *)(*plVar10 + 0x330) <= fVar14) {
      plVar8 = param_2 + -2;
LAB_01e0a420:
      plVar7 = plVar8;
      if (param_1 != plVar7) goto code_r0x01e0a428;
      plVar8 = param_1 + 1;
      if (fVar14 < *(float *)(*plVar5 + 0x330)) {
        if (plVar8 == plVar5) {
          return;
        }
      }
      else {
        if (plVar8 == plVar5) {
          return;
        }
        plVar8 = param_1 + 2;
        while (lVar11 = plVar8[-1], *(float *)(lVar11 + 0x330) <= fVar14) {
          plVar8 = plVar8 + 1;
          if (param_2 == plVar8) {
            return;
          }
        }
        plVar8[-1] = *plVar5;
        *plVar5 = lVar11;
        if (plVar8 == plVar5) {
          return;
        }
      }
      plVar7 = plVar5;
      while( true ) {
        do {
          plVar10 = plVar8;
          plVar8 = plVar10 + 1;
          lVar11 = *plVar10;
        } while (*(float *)(lVar11 + 0x330) <= *(float *)(*param_1 + 0x330));
        do {
          plVar7 = plVar7 + -1;
        } while (*(float *)(*param_1 + 0x330) < *(float *)(*plVar7 + 0x330));
        if (plVar7 <= plVar10) break;
        *plVar10 = *plVar7;
        *plVar7 = lVar11;
      }
      goto LAB_01e0a4a0;
    }
    plVar7 = plVar5;
    goto LAB_01e0a3c0;
  }
  lVar11 = *param_1;
  lVar6 = param_1[1];
  lVar12 = param_1[2];
  fVar14 = *(float *)(lVar6 + 0x330);
  if (fVar14 < *(float *)(lVar11 + 0x330)) {
    if (*(float *)(lVar12 + 0x330) < fVar14) {
      *param_1 = lVar12;
    }
    else {
      *param_1 = lVar6;
      param_1[1] = lVar11;
      if (*(float *)(lVar11 + 0x330) <= *(float *)(lVar12 + 0x330)) goto LAB_01e0a174;
      param_1[1] = lVar12;
    }
    param_1[2] = lVar11;
    lVar6 = lVar11;
  }
  else if (fVar14 <= *(float *)(lVar12 + 0x330)) {
LAB_01e0a174:
    lVar6 = lVar12;
  }
  else {
    param_1[1] = lVar12;
    param_1[2] = lVar6;
    if (*(float *)(lVar12 + 0x330) < *(float *)(lVar11 + 0x330)) {
      *param_1 = lVar12;
      param_1[1] = lVar11;
    }
  }
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar11 = 0;
  plVar10 = param_1 + 3;
  goto LAB_01e0a18c;
code_r0x01e0a428:
  plVar8 = plVar7 + -1;
  if (*(float *)(*plVar7 + 0x330) < *(float *)(*plVar10 + 0x330)) goto code_r0x01e0a438;
  goto LAB_01e0a420;
code_r0x01e0a438:
  *param_1 = *plVar7;
  iVar2 = iVar2 + 1;
  *plVar7 = lVar11;
LAB_01e0a3c0:
  plVar8 = param_1 + 1;
  plVar13 = plVar8;
  if (plVar8 < plVar7) {
    while( true ) {
      plVar8 = plVar13 + -1;
      do {
        plVar13 = plVar8;
        plVar8 = plVar13 + 1;
        lVar11 = *plVar8;
      } while (*(float *)(lVar11 + 0x330) < *(float *)(*plVar10 + 0x330));
      plVar13 = plVar13 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (*(float *)(*plVar10 + 0x330) <= *(float *)(*plVar7 + 0x330));
      if (plVar7 < plVar8) break;
      *plVar8 = *plVar7;
      iVar2 = iVar2 + 1;
      *plVar7 = lVar11;
      plVar1 = plVar7;
      if (plVar10 != plVar8) {
        plVar1 = plVar10;
      }
      plVar10 = plVar1;
    }
  }
  if (plVar8 != plVar10) {
    lVar11 = *plVar8;
    if (*(float *)(*plVar10 + 0x330) < *(float *)(lVar11 + 0x330)) {
      iVar2 = iVar2 + 1;
      *plVar8 = *plVar10;
      *plVar10 = lVar11;
    }
  }
  if (iVar2 == 0) {
    uVar9 = FUN_01e0a700(param_1,plVar8);
    uVar3 = FUN_01e0a700(plVar8 + 1,param_2);
    if ((uVar3 & 1) != 0) goto LAB_01e0a504;
    plVar10 = plVar8 + 1;
    if ((uVar9 & 1) != 0) goto LAB_01e09f50;
  }
  if ((long)param_2 - (long)plVar8 <= (long)plVar8 - (long)param_1) {
    FUN_01e09f20(plVar8 + 1,param_2);
    param_2 = plVar8;
    goto LAB_01e09f44;
  }
  FUN_01e09f20(param_1,plVar8);
  plVar10 = plVar8 + 1;
LAB_01e0a4a0:
  goto LAB_01e09f50;
LAB_01e0a504:
  param_2 = plVar8;
  if ((uVar9 & 1) != 0) {
    return;
  }
  goto LAB_01e09f44;
LAB_01e0a18c:
  lVar12 = *plVar10;
  if (*(float *)(lVar12 + 0x330) < *(float *)(lVar6 + 0x330)) {
    lVar6 = lVar11;
    do {
      lVar4 = lVar6;
      *(undefined8 *)((long)param_1 + lVar4 + 0x18) = *(undefined8 *)((long)param_1 + lVar4 + 0x10);
      if (lVar4 == -0x10) {
        plVar5 = param_1;
        goto LAB_01e0a1d8;
      }
      lVar6 = lVar4 + -8;
    } while (*(float *)(lVar12 + 0x330) < *(float *)(*(long *)((long)param_1 + lVar4 + 8) + 0x330));
    plVar5 = (long *)((long)param_1 + lVar4 + 0x10);
LAB_01e0a1d8:
    *plVar5 = lVar12;
  }
  if (plVar10 + 1 == param_2) {
    return;
  }
  lVar6 = *plVar10;
  lVar11 = lVar11 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_01e0a18c;
}


