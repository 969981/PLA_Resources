/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037c450; name: FUN_0037c450
 */


void FUN_0037c450(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  char cVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  
LAB_0037c478:
  plVar16 = param_2 + -1;
  plVar19 = param_2 + -2;
  plVar10 = param_1;
LAB_0037c484:
  param_1 = plVar10;
  lVar8 = (long)param_2 - (long)param_1;
  uVar5 = lVar8 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    return;
  case 2:
    lVar8 = param_2[-1];
    lVar12 = *param_1;
    if (*(char *)(lVar8 + 0x43) == '\0') {
      if ((*(char *)(lVar12 + 0x43) == '\0') &&
         ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
          (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
        return;
      }
    }
    else {
      if (*(char *)(lVar12 + 0x43) == '\0') {
        return;
      }
      if (*(int *)(lVar12 + 0x44) <= *(int *)(lVar8 + 0x44)) {
        return;
      }
    }
    *param_1 = lVar8;
    param_2[-1] = lVar12;
    return;
  case 3:
    FUN_0037cca0(param_1,param_1 + 1,plVar16);
    return;
  case 4:
    FUN_0037ceb0(param_1,param_1 + 1,param_1 + 2,plVar16);
    return;
  case 5:
    FUN_0037d050(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar16);
    return;
  }
  if (0xf7 < lVar8) {
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    plVar10 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar8 < 0x1f39) {
      iVar3 = FUN_0037cca0(param_1,plVar10,plVar16);
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar8 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_0037d050(param_1,(long)param_1 + lVar8,plVar10,(long)plVar10 + lVar8,plVar16);
    }
    lVar8 = *param_1;
    lVar12 = *plVar10;
    cVar9 = *(char *)(lVar8 + 0x43);
    cVar1 = *(char *)(lVar12 + 0x43);
    if (cVar9 == '\0') {
      if ((cVar1 == '\0') &&
         ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
          (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_0037c524;
    }
    else if ((cVar1 == '\0') || (*(int *)(lVar12 + 0x44) <= *(int *)(lVar8 + 0x44))) {
LAB_0037c524:
      if (param_1 != plVar19) {
        plVar6 = plVar19;
        if (cVar1 == '\0') {
          do {
            lVar13 = *plVar6;
            if ((*(char *)(lVar13 + 0x43) == '\0') &&
               ((int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x50) + 0x28)) >> 3) *
                0x286bca1b <
                (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                0x286bca1b)) goto LAB_0037c5ac;
            plVar6 = plVar6 + -1;
          } while (param_1 != plVar6);
        }
        else {
          do {
            if ((*(char *)(*plVar6 + 0x43) == '\0') ||
               (*(int *)(*plVar6 + 0x44) < *(int *)(lVar12 + 0x44))) goto LAB_0037c5ac;
            plVar6 = plVar6 + -1;
          } while (param_1 != plVar6);
        }
      }
      lVar12 = *plVar16;
      plVar10 = param_1 + 1;
      if (cVar9 == '\0') {
        if ((*(char *)(lVar12 + 0x43) != '\0') ||
           ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
            (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
        goto LAB_0037c8f0;
      }
      else if ((*(char *)(lVar12 + 0x43) != '\0') &&
              (*(int *)(lVar8 + 0x44) < *(int *)(lVar12 + 0x44))) goto LAB_0037c8f0;
      if (plVar10 == plVar16) {
        return;
      }
      if (cVar9 == '\0') {
        plVar10 = param_1 + 2;
        while ((lVar13 = plVar10[-1], *(char *)(lVar13 + 0x43) == '\0' &&
               ((int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x50) + 0x28)) >> 3) *
                0x286bca1b <=
                (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b)
               )) {
          plVar10 = plVar10 + 1;
          if (param_2 == plVar10) {
            return;
          }
        }
      }
      else {
        lVar13 = param_1[1];
        plVar10 = param_1 + 2;
        if (*(char *)(lVar13 + 0x43) != '\0') goto LAB_0037c7b4;
        do {
          do {
            plVar7 = plVar10 + 1;
            if (param_2 == plVar7) {
              return;
            }
            lVar13 = *plVar10;
            plVar10 = plVar7;
          } while (*(char *)(lVar13 + 0x43) == '\0');
LAB_0037c7b4:
        } while (*(int *)(lVar13 + 0x44) <= *(int *)(lVar8 + 0x44));
      }
      lVar8 = plVar10[-1];
      plVar10[-1] = lVar12;
      *plVar16 = lVar8;
LAB_0037c8f0:
      if (plVar10 == plVar16) {
        return;
      }
      lVar8 = *param_1;
      cVar9 = *(char *)(lVar8 + 0x43);
      plVar7 = plVar16;
      if (cVar9 != '\0') goto LAB_0037c910;
LAB_0037c930:
      lVar12 = *plVar10;
      if (*(char *)(lVar12 + 0x43) == '\0') {
        do {
          if ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
              (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b)
          break;
          plVar10 = plVar10 + 1;
          lVar12 = *plVar10;
        } while (*(char *)(lVar12 + 0x43) == '\0');
      }
      do {
        if (cVar9 == '\0') {
          do {
            do {
              plVar7 = plVar7 + -1;
              lVar12 = *plVar7;
            } while (*(char *)(lVar12 + 0x43) != '\0');
          } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) *
                   0x286bca1b <
                   (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                   0x286bca1b);
        }
        else {
          do {
            plVar7 = plVar7 + -1;
            if (*(char *)(*plVar7 + 0x43) == '\0') break;
          } while (*(int *)(lVar8 + 0x44) < *(int *)(*plVar7 + 0x44));
        }
        if (plVar7 <= plVar10) goto LAB_0037c484;
        lVar8 = *plVar10;
        plVar6 = plVar10 + 1;
        *plVar10 = *plVar7;
        *plVar7 = lVar8;
        lVar8 = *param_1;
        cVar9 = *(char *)(lVar8 + 0x43);
        plVar10 = plVar6;
        if (cVar9 == '\0') goto LAB_0037c930;
LAB_0037c910:
        for (; (*(char *)(*plVar10 + 0x43) == '\0' ||
               (*(int *)(*plVar10 + 0x44) <= *(int *)(lVar8 + 0x44))); plVar10 = plVar10 + 1) {
        }
      } while( true );
    }
    plVar7 = param_1 + 1;
    plVar6 = plVar16;
    if (plVar7 < plVar16) goto LAB_0037c5c8;
    goto LAB_0037c724;
  }
  FUN_0037cca0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar8 = 0;
  plVar16 = param_1 + 3;
  plVar10 = param_1 + 2;
  goto LAB_0037cab0;
LAB_0037c5ac:
  iVar3 = iVar3 + 1;
  *param_1 = *plVar6;
  *plVar6 = lVar8;
  plVar7 = param_1 + 1;
  if (plVar7 < plVar6) {
LAB_0037c5c8:
    plVar18 = param_1 + 1;
    lVar8 = *plVar10;
    cVar9 = *(char *)(lVar8 + 0x43);
    if (cVar9 != '\0') goto LAB_0037c624;
    do {
      lVar12 = *plVar18;
      plVar17 = plVar10;
      plVar7 = plVar18;
      if (*(char *)(lVar12 + 0x43) == '\0') {
        do {
          plVar7 = plVar18;
          if ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
              (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b)
          break;
          plVar18 = plVar18 + 1;
          lVar12 = *plVar18;
          plVar7 = plVar18;
        } while (*(char *)(lVar12 + 0x43) == '\0');
      }
LAB_0037c640:
      if (cVar9 == '\0') {
        do {
          do {
            plVar6 = plVar6 + -1;
            lVar12 = *plVar6;
          } while (*(char *)(lVar12 + 0x43) != '\0');
        } while ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b
                 <= (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                    0x286bca1b);
      }
      else {
        do {
          plVar6 = plVar6 + -1;
          if (*(char *)(*plVar6 + 0x43) == '\0') break;
        } while (*(int *)(lVar8 + 0x44) <= *(int *)(*plVar6 + 0x44));
      }
      plVar10 = plVar17;
      if (plVar6 < plVar7) break;
      lVar8 = *plVar7;
      iVar3 = iVar3 + 1;
      plVar10 = plVar6;
      if (plVar17 != plVar7) {
        plVar10 = plVar17;
      }
      plVar18 = plVar7 + 1;
      *plVar7 = *plVar6;
      *plVar6 = lVar8;
      lVar8 = *plVar10;
      cVar9 = *(char *)(lVar8 + 0x43);
      if (cVar9 != '\0') {
LAB_0037c624:
        do {
          if (*(char *)(*plVar18 + 0x43) != '\0') {
            plVar17 = plVar10;
            plVar7 = plVar18;
            if (*(int *)(lVar8 + 0x44) <= *(int *)(*plVar18 + 0x44)) goto LAB_0037c640;
          }
          plVar18 = plVar18 + 1;
        } while( true );
      }
    } while( true );
  }
LAB_0037c724:
  if (plVar7 == plVar10) {
LAB_0037c754:
    if (iVar3 != 0) goto LAB_0037c834;
  }
  else {
    lVar12 = *plVar10;
    lVar8 = *plVar7;
    if (*(char *)(lVar12 + 0x43) == '\0') {
      if ((*(char *)(lVar8 + 0x43) == '\0') &&
         ((int)((ulong)(lVar8 - *(long *)(*(long *)(lVar8 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
          (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_0037c754;
    }
    else if ((*(char *)(lVar8 + 0x43) == '\0') ||
            (*(int *)(lVar8 + 0x44) <= *(int *)(lVar12 + 0x44))) goto LAB_0037c754;
    *plVar7 = lVar12;
    *plVar10 = lVar8;
    if (iVar3 != -1) goto LAB_0037c834;
  }
  uVar5 = FUN_0037d270(param_1,plVar7);
  uVar4 = FUN_0037d270(plVar7 + 1,param_2);
  if ((uVar4 & 1) != 0) goto LAB_0037ca20;
  plVar10 = plVar7 + 1;
  if ((uVar5 & 1) != 0) goto LAB_0037c484;
LAB_0037c834:
  if ((long)param_2 - (long)plVar7 <= (long)plVar7 - (long)param_1) {
    FUN_0037c450(plVar7 + 1,param_2);
    param_2 = plVar7;
    goto LAB_0037c478;
  }
  FUN_0037c450(param_1,plVar7);
  plVar10 = plVar7 + 1;
  goto LAB_0037c484;
LAB_0037ca20:
  param_2 = plVar7;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_0037c478;
LAB_0037cab0:
  plVar19 = plVar16;
  lVar12 = *plVar19;
  lVar13 = *plVar10;
  cVar9 = *(char *)(lVar12 + 0x43);
  if (cVar9 == '\0') {
    if ((*(char *)(lVar13 + 0x43) != '\0') ||
       ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
        (int)((ulong)(lVar13 - *(long *)(*(long *)(lVar13 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
    goto LAB_0037cb18;
  }
  else if ((*(char *)(lVar13 + 0x43) != '\0') && (*(int *)(lVar12 + 0x44) < *(int *)(lVar13 + 0x44))
          ) {
LAB_0037cb18:
    *plVar19 = lVar13;
    if (plVar10 != param_1) {
      lVar13 = lVar8;
      if (cVar9 == '\0') {
        lVar14 = (long)param_1 + lVar8;
        lVar15 = *(long *)(lVar14 + 8);
        if (*(char *)(lVar15 + 0x43) == '\0') goto LAB_0037cb94;
        do {
          do {
            lVar11 = lVar13 + -8;
            *(long *)(lVar14 + 0x10) = lVar15;
            if (lVar13 == -8) goto LAB_0037cbc8;
            lVar14 = (long)param_1 + lVar11;
            lVar15 = *(long *)(lVar14 + 8);
            lVar13 = lVar11;
          } while (*(char *)(lVar15 + 0x43) != '\0');
LAB_0037cb94:
        } while ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b <
                 (int)((ulong)(lVar15 - *(long *)(*(long *)(lVar15 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b);
LAB_0037ca98:
        plVar10 = (long *)(lVar14 + 0x10);
      }
      else {
        do {
          lVar14 = (long)param_1 + lVar13;
          lVar15 = *(long *)(lVar14 + 8);
          if ((*(char *)(lVar15 + 0x43) == '\0') ||
             (*(int *)(lVar15 + 0x44) <= *(int *)(lVar12 + 0x44))) goto LAB_0037ca98;
          bVar2 = lVar13 != -8;
          *(long *)(lVar14 + 0x10) = lVar15;
          lVar13 = lVar13 + -8;
        } while (bVar2);
LAB_0037cbc8:
        plVar10 = param_1;
      }
    }
    *plVar10 = lVar12;
  }
  lVar8 = lVar8 + 8;
  plVar16 = plVar19 + 1;
  plVar10 = plVar19;
  if (plVar19 + 1 == param_2) {
    return;
  }
  goto LAB_0037cab0;
}


