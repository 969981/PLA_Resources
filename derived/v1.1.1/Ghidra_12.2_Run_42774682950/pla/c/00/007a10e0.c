/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a10e0; name: FUN_007a10e0
 */


void FUN_007a10e0(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_60;
  undefined8 uStack_58;
  
LAB_007a1108:
  piVar15 = param_2 + -4;
  piVar10 = param_1;
LAB_007a1114:
  param_1 = piVar10;
  lVar12 = (long)param_2 - (long)param_1;
  uVar6 = lVar12 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_007a15bc_caseD_0;
  case 2:
    if (*param_1 <= param_2[-4]) {
      return;
    }
    break;
  case 3:
    piVar10 = param_1 + 4;
    iVar4 = *piVar10;
    piVar15 = param_2 + -4;
    if (*param_1 <= iVar4) {
      if (iVar4 <= *piVar15) {
        return;
      }
      uVar20 = *(undefined8 *)(param_1 + 6);
      uVar16 = *(undefined8 *)piVar10;
      uVar19 = *(undefined8 *)piVar15;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar10 = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar20;
      *(undefined8 *)piVar15 = uVar16;
      if (param_1[4] < *param_1) {
        uVar19 = *(undefined8 *)(param_1 + 2);
        uVar16 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 6) = uVar19;
        *(undefined8 *)piVar10 = uVar16;
        return;
      }
      return;
    }
    if (iVar4 <= *piVar15) {
      uVar19 = *(undefined8 *)(param_1 + 2);
      uVar16 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 6) = uVar19;
      *(undefined8 *)piVar10 = uVar16;
      if (param_1[4] <= *piVar15) {
        return;
      }
      uStack_58 = *(undefined8 *)(param_1 + 6);
      local_60 = *(undefined8 *)piVar10;
      uVar16 = *(undefined8 *)piVar15;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar10 = uVar16;
      goto LAB_007a1760;
    }
    break;
  case 4:
    FUN_007a1910(param_1,param_1 + 4,param_1 + 8,piVar15,param_3);
    return;
  case 5:
    piVar10 = param_1 + 4;
    piVar15 = param_1 + 8;
    piVar9 = param_1 + 0xc;
    FUN_007a1910(param_1,piVar10,piVar15,piVar9,param_3);
    piVar7 = param_2 + -4;
    if (param_1[0xc] <= *piVar7) {
      return;
    }
    uVar20 = *(undefined8 *)(param_1 + 0xe);
    uVar16 = *(undefined8 *)piVar9;
    uVar19 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)piVar9 = uVar19;
    *(undefined8 *)(param_2 + -2) = uVar20;
    *(undefined8 *)piVar7 = uVar16;
    if (*piVar15 <= *piVar9) {
      return;
    }
    uVar19 = *(undefined8 *)(param_1 + 10);
    uVar16 = *(undefined8 *)piVar15;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)piVar15 = *(undefined8 *)piVar9;
    *(undefined8 *)(param_1 + 0xe) = uVar19;
    *(undefined8 *)piVar9 = uVar16;
    if (*piVar10 <= *piVar15) {
      return;
    }
    uVar19 = *(undefined8 *)(param_1 + 6);
    uVar16 = *(undefined8 *)piVar10;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)piVar10 = *(undefined8 *)piVar15;
    *(undefined8 *)(param_1 + 10) = uVar19;
    *(undefined8 *)piVar15 = uVar16;
    if (param_1[4] < *param_1) {
      uVar19 = *(undefined8 *)(param_1 + 2);
      uVar16 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 6) = uVar19;
      *(undefined8 *)piVar10 = uVar16;
      return;
    }
    return;
  default:
    if (lVar12 < 0x1f0) {
      piVar10 = param_1 + 8;
      iVar4 = *piVar10;
      piVar15 = param_1 + 4;
      iVar3 = *piVar15;
      if (iVar3 < *param_1) {
        if (iVar4 < iVar3) {
          uStack_58 = *(undefined8 *)(param_1 + 2);
          local_60 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_1 = *(undefined8 *)piVar10;
        }
        else {
          uVar19 = *(undefined8 *)(param_1 + 2);
          uVar16 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)piVar15;
          *(undefined8 *)(param_1 + 6) = uVar19;
          *(undefined8 *)piVar15 = uVar16;
          if (param_1[4] <= iVar4) goto joined_r0x007a1658;
          uStack_58 = *(undefined8 *)(param_1 + 6);
          local_60 = *(undefined8 *)piVar15;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)piVar15 = *(undefined8 *)piVar10;
        }
        *(undefined8 *)(param_1 + 10) = uStack_58;
        *(undefined8 *)piVar10 = local_60;
      }
      else if (iVar4 < iVar3) {
        uVar19 = *(undefined8 *)(param_1 + 6);
        uVar16 = *(undefined8 *)piVar15;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)piVar15 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 10) = uVar19;
        *(undefined8 *)piVar10 = uVar16;
        if (*piVar15 < *param_1) {
          uVar19 = *(undefined8 *)(param_1 + 2);
          uVar16 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)piVar15;
          *(undefined8 *)(param_1 + 6) = uVar19;
          *(undefined8 *)piVar15 = uVar16;
        }
      }
joined_r0x007a1658:
      if (param_1 + 0xc == param_2) {
        return;
      }
      lVar12 = 0;
      piVar15 = param_1 + 0xc;
      goto LAB_007a16d8;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    piVar10 = param_1 + (uVar5 & 0x1ffffffffffffffe) * 2;
    if (lVar12 < 0x3e71) {
      iVar4 = *piVar10;
      if (iVar4 < *param_1) {
        if (*piVar15 < iVar4) {
          uVar20 = *(undefined8 *)(param_1 + 2);
          uVar16 = *(undefined8 *)param_1;
          iVar4 = 1;
          iVar3 = 1;
          uVar19 = *(undefined8 *)piVar15;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar19;
          *(undefined8 *)(param_2 + -2) = uVar20;
          *(undefined8 *)piVar15 = uVar16;
          iVar11 = *param_1;
          iVar14 = *piVar10;
          if (iVar14 <= iVar11) goto LAB_007a12c8;
        }
        else {
          uVar20 = *(undefined8 *)(param_1 + 2);
          uVar16 = *(undefined8 *)param_1;
          uVar19 = *(undefined8 *)piVar10;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar10 + 2);
          *(undefined8 *)param_1 = uVar19;
          *(undefined8 *)(piVar10 + 2) = uVar20;
          *(undefined8 *)piVar10 = uVar16;
          if (*piVar15 < *piVar10) {
            uVar20 = *(undefined8 *)(piVar10 + 2);
            uVar16 = *(undefined8 *)piVar10;
            uVar19 = *(undefined8 *)piVar15;
            *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)piVar10 = uVar19;
            *(undefined8 *)(param_2 + -2) = uVar20;
            *(undefined8 *)piVar15 = uVar16;
            goto LAB_007a14a0;
          }
LAB_007a14d0:
          iVar4 = 1;
          iVar3 = 1;
          iVar11 = *param_1;
          iVar14 = *piVar10;
          if (iVar14 <= iVar11) goto LAB_007a12c8;
        }
      }
      else if (*piVar15 < iVar4) {
        uVar20 = *(undefined8 *)(piVar10 + 2);
        uVar16 = *(undefined8 *)piVar10;
        uVar19 = *(undefined8 *)piVar15;
        *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)piVar10 = uVar19;
        *(undefined8 *)(param_2 + -2) = uVar20;
        *(undefined8 *)piVar15 = uVar16;
        if (*param_1 <= *piVar10) goto LAB_007a14d0;
        uVar20 = *(undefined8 *)(param_1 + 2);
        uVar16 = *(undefined8 *)param_1;
        uVar19 = *(undefined8 *)piVar10;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar10 + 2);
        *(undefined8 *)param_1 = uVar19;
        *(undefined8 *)(piVar10 + 2) = uVar20;
        *(undefined8 *)piVar10 = uVar16;
LAB_007a14a0:
        iVar4 = 2;
        iVar3 = 2;
        iVar11 = *param_1;
        iVar14 = *piVar10;
        if (iVar14 <= iVar11) goto LAB_007a12c8;
      }
      else {
        iVar4 = 0;
        iVar3 = 0;
        iVar11 = *param_1;
        iVar14 = *piVar10;
        if (iVar14 <= iVar11) goto LAB_007a12c8;
      }
LAB_007a1234:
      piVar9 = param_1 + 4;
      piVar7 = piVar15;
      if (piVar9 < piVar15) goto LAB_007a1330;
      goto LAB_007a1244;
    }
    uVar5 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar5 = uVar6;
    }
    piVar9 = param_1 + (uVar5 & 0x3ffffffffffffffc);
    piVar7 = piVar10 + (uVar5 & 0x3ffffffffffffffc);
    iVar3 = FUN_007a1910(param_1,piVar9,piVar10,piVar7,param_3);
    if (*piVar15 < *piVar7) {
      uVar20 = *(undefined8 *)(piVar7 + 2);
      uVar16 = *(undefined8 *)piVar7;
      uVar19 = *(undefined8 *)piVar15;
      *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)piVar7 = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar20;
      *(undefined8 *)piVar15 = uVar16;
      if (*piVar7 < *piVar10) {
        uVar20 = *(undefined8 *)(piVar10 + 2);
        uVar16 = *(undefined8 *)piVar10;
        uVar19 = *(undefined8 *)piVar7;
        *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar7 + 2);
        *(undefined8 *)piVar10 = uVar19;
        *(undefined8 *)(piVar7 + 2) = uVar20;
        *(undefined8 *)piVar7 = uVar16;
        if (*piVar10 < *piVar9) {
          uVar20 = *(undefined8 *)(piVar9 + 2);
          uVar16 = *(undefined8 *)piVar9;
          uVar19 = *(undefined8 *)piVar10;
          *(undefined8 *)(piVar9 + 2) = *(undefined8 *)(piVar10 + 2);
          *(undefined8 *)piVar9 = uVar19;
          *(undefined8 *)(piVar10 + 2) = uVar20;
          *(undefined8 *)piVar10 = uVar16;
          if (*piVar9 < *param_1) {
            uVar20 = *(undefined8 *)(param_1 + 2);
            uVar16 = *(undefined8 *)param_1;
            iVar3 = iVar3 + 4;
            uVar19 = *(undefined8 *)piVar9;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar9 + 2);
            *(undefined8 *)param_1 = uVar19;
            *(undefined8 *)(piVar9 + 2) = uVar20;
            *(undefined8 *)piVar9 = uVar16;
            goto LAB_007a1224;
          }
          iVar3 = iVar3 + 3;
          iVar11 = *param_1;
          iVar14 = *piVar10;
          iVar4 = iVar3;
          if (iVar14 <= iVar11) goto LAB_007a12c8;
        }
        else {
          iVar3 = iVar3 + 2;
          iVar11 = *param_1;
          iVar14 = *piVar10;
          iVar4 = iVar3;
          if (iVar14 <= iVar11) goto LAB_007a12c8;
        }
      }
      else {
        iVar3 = iVar3 + 1;
        iVar11 = *param_1;
        iVar14 = *piVar10;
        iVar4 = iVar3;
        if (iVar14 <= iVar11) goto LAB_007a12c8;
      }
      goto LAB_007a1234;
    }
LAB_007a1224:
    iVar11 = *param_1;
    iVar14 = *piVar10;
    iVar4 = iVar3;
    if (iVar11 < iVar14) goto LAB_007a1234;
LAB_007a12c8:
    piVar9 = param_2 + -8;
    while (piVar7 = piVar9, param_1 != piVar7) {
      piVar9 = piVar7 + -4;
      if (*piVar7 < iVar14) goto code_r0x007a12e0;
    }
    piVar9 = param_1 + 4;
    if (*piVar15 <= iVar11) {
      if (piVar9 == piVar15) {
        return;
      }
      piVar9 = param_1 + 8;
      while (piVar9[-4] <= iVar11) {
        piVar9 = piVar9 + 4;
        if (param_2 == piVar9) {
          return;
        }
      }
      uVar20 = *(undefined8 *)(piVar9 + -2);
      uVar16 = *(undefined8 *)(piVar9 + -4);
      uVar19 = *(undefined8 *)piVar15;
      *(undefined8 *)(piVar9 + -2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(piVar9 + -4) = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar20;
      *(undefined8 *)piVar15 = uVar16;
    }
    if (piVar9 == piVar15) {
      return;
    }
    piVar7 = piVar15;
    while( true ) {
      piVar10 = piVar9 + -4;
      do {
        piVar18 = piVar10;
        piVar10 = piVar18 + 4;
      } while (*piVar10 <= *param_1);
      piVar9 = piVar18 + 8;
      do {
        piVar13 = piVar7;
        piVar7 = piVar13 + -4;
      } while (*param_1 < *piVar7);
      if (piVar7 <= piVar10) break;
      uVar20 = *(undefined8 *)(piVar18 + 6);
      uVar16 = *(undefined8 *)piVar10;
      uVar19 = *(undefined8 *)piVar7;
      *(undefined8 *)(piVar18 + 6) = *(undefined8 *)(piVar13 + -2);
      *(undefined8 *)piVar10 = uVar19;
      *(undefined8 *)(piVar13 + -2) = uVar20;
      *(undefined8 *)piVar7 = uVar16;
    }
    goto LAB_007a1114;
  }
  uStack_58 = *(undefined8 *)(param_1 + 2);
  local_60 = *(undefined8 *)param_1;
  uVar16 = *(undefined8 *)(param_2 + -4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)param_1 = uVar16;
LAB_007a1760:
  *(undefined8 *)(param_2 + -2) = uStack_58;
  *(undefined8 *)(param_2 + -4) = local_60;
  return;
LAB_007a16d8:
  iVar4 = *piVar15;
  if (iVar4 < *piVar10) {
    uVar16 = *(undefined8 *)(piVar15 + 1);
    iVar3 = piVar15[3];
    lVar2 = lVar12;
    do {
      lVar17 = lVar2;
      *(undefined8 *)((long)param_1 + lVar17 + 0x38) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x28);
      *(undefined8 *)((long)param_1 + lVar17 + 0x30) =
           *(undefined8 *)((long)param_1 + lVar17 + 0x20);
      if (lVar17 == -0x20) {
        piVar10 = param_1;
        goto LAB_007a16b4;
      }
      lVar2 = lVar17 + -0x10;
    } while (iVar4 < *(int *)((long)param_1 + lVar17 + 0x10));
    piVar10 = (int *)((long)param_1 + lVar17 + 0x20);
LAB_007a16b4:
    *piVar10 = iVar4;
    piVar10[3] = iVar3;
    *(undefined8 *)(piVar10 + 1) = uVar16;
  }
  piVar9 = piVar15 + 4;
  lVar12 = lVar12 + 0x10;
  piVar10 = piVar15;
  piVar15 = piVar9;
  if (piVar9 == param_2) {
switchD_007a15bc_caseD_0:
    return;
  }
  goto LAB_007a16d8;
code_r0x007a12e0:
  uVar20 = *(undefined8 *)(param_1 + 2);
  uVar16 = *(undefined8 *)param_1;
  iVar4 = iVar3 + 1;
  uVar19 = *(undefined8 *)piVar7;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar7 + 2);
  *(undefined8 *)param_1 = uVar19;
  *(undefined8 *)(piVar7 + 2) = uVar20;
  *(undefined8 *)piVar7 = uVar16;
  piVar9 = param_1 + 4;
  if (piVar9 < piVar7) {
LAB_007a1330:
    while( true ) {
      piVar18 = piVar9 + -4;
      do {
        piVar13 = piVar18;
        piVar18 = piVar13 + 4;
      } while (*piVar18 < *piVar10);
      piVar9 = piVar13 + 8;
      do {
        piVar8 = piVar7;
        piVar7 = piVar8 + -4;
      } while (*piVar10 <= *piVar7);
      if (piVar7 < piVar18) break;
      uVar20 = *(undefined8 *)(piVar13 + 6);
      uVar16 = *(undefined8 *)piVar18;
      iVar4 = iVar4 + 1;
      uVar19 = *(undefined8 *)piVar7;
      piVar1 = piVar7;
      if (piVar10 != piVar18) {
        piVar1 = piVar10;
      }
      *(undefined8 *)(piVar13 + 6) = *(undefined8 *)(piVar8 + -2);
      *(undefined8 *)piVar18 = uVar19;
      *(undefined8 *)(piVar8 + -2) = uVar20;
      *(undefined8 *)piVar7 = uVar16;
      piVar10 = piVar1;
    }
    if (piVar18 != piVar10) goto LAB_007a124c;
LAB_007a1368:
    if (iVar4 != 0) goto LAB_007a139c;
  }
  else {
LAB_007a1244:
    piVar18 = param_1 + 4;
    if (piVar18 == piVar10) goto LAB_007a1368;
LAB_007a124c:
    if (*piVar18 <= *piVar10) goto LAB_007a1368;
    uVar20 = *(undefined8 *)(piVar18 + 2);
    uVar16 = *(undefined8 *)piVar18;
    uVar19 = *(undefined8 *)piVar10;
    *(undefined8 *)(piVar18 + 2) = *(undefined8 *)(piVar10 + 2);
    *(undefined8 *)piVar18 = uVar19;
    *(undefined8 *)(piVar10 + 2) = uVar20;
    *(undefined8 *)piVar10 = uVar16;
    if (iVar4 != -1) goto LAB_007a139c;
  }
  uVar6 = FUN_007a1ad0(param_1,piVar18,param_3);
  uVar5 = FUN_007a1ad0(piVar18 + 4,param_2,param_3);
  if ((uVar5 & 1) != 0) goto LAB_007a159c;
  piVar10 = piVar18 + 4;
  if ((uVar6 & 1) != 0) goto LAB_007a1114;
LAB_007a139c:
  if ((long)param_2 - (long)piVar18 <= (long)piVar18 - (long)param_1) {
    FUN_007a10e0(piVar18 + 4,param_2,param_3);
    param_2 = piVar18;
    goto LAB_007a1108;
  }
  FUN_007a10e0(param_1,piVar18,param_3);
  piVar10 = piVar18 + 4;
  goto LAB_007a1114;
LAB_007a159c:
  param_2 = piVar18;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_007a1108;
}


