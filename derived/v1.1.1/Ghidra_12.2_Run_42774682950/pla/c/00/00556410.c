/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00556410; name: FUN_00556410
 */


void FUN_00556410(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 auVar14 [16];
  
LAB_00556438:
  pauVar9 = (undefined1 (*) [16])(param_2[-1] + 8);
  pauVar10 = param_1;
LAB_00556444:
  param_1 = pauVar10;
  lVar8 = (long)param_2 - (long)param_1;
  uVar6 = lVar8 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_0055687c_caseD_0;
  case 2:
    uVar6 = (*(code *)*param_3)(pauVar9,param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar7 = *(undefined8 *)*param_1;
    break;
  case 3:
    puVar1 = (undefined8 *)(*param_1 + 8);
    uVar6 = (*(code *)*param_3)(puVar1,param_1);
    uVar5 = (*(code *)*param_3)(pauVar9,puVar1);
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar7 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = *(undefined8 *)*pauVar9;
      *(undefined8 *)*pauVar9 = uVar7;
      goto LAB_005569d8;
    }
    uVar7 = *(undefined8 *)*param_1;
    if ((uVar5 & 1) == 0) {
      *(undefined8 *)*param_1 = *(undefined8 *)(*param_1 + 8);
      *(undefined8 *)(*param_1 + 8) = uVar7;
      uVar6 = (*(code *)*param_3)(pauVar9,puVar1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      uVar7 = *puVar1;
      *puVar1 = *(undefined8 *)*pauVar9;
      goto LAB_00556900;
    }
    break;
  case 4:
    FUN_00556a50(param_1,*param_1 + 8,param_1 + 1,pauVar9,param_3);
    return;
  case 5:
    pauVar10 = param_1 + 1;
    puVar1 = (undefined8 *)(param_1[1] + 8);
    FUN_00556a50(param_1,*param_1 + 8,pauVar10,puVar1,param_3);
    uVar6 = (*(code *)*param_3)(pauVar9,puVar1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar7 = *puVar1;
    *puVar1 = *(undefined8 *)*pauVar9;
    *(undefined8 *)*pauVar9 = uVar7;
    uVar6 = (*(code *)*param_3)(puVar1,pauVar10);
    if ((uVar6 & 1) == 0) {
      return;
    }
    auVar14 = NEON_ext(*pauVar10,*pauVar10,8,1);
    *(long *)(param_1[1] + 8) = auVar14._8_8_;
    *(long *)*pauVar10 = auVar14._0_8_;
    uVar6 = (*(code *)*param_3)(pauVar10,*param_1 + 8);
    if ((uVar6 & 1) == 0) {
      return;
    }
    auVar14 = NEON_ext(*(undefined1 (*) [16])(*param_1 + 8),*(undefined1 (*) [16])(*param_1 + 8),8,1
                      );
    *(long *)param_1[1] = auVar14._8_8_;
    *(long *)(*param_1 + 8) = auVar14._0_8_;
LAB_005569d8:
    uVar6 = (*(code *)*param_3)(*param_1 + 8,param_1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    auVar14 = NEON_ext(*param_1,*param_1,8,1);
    *(long *)(*param_1 + 8) = auVar14._8_8_;
    *(long *)*param_1 = auVar14._0_8_;
    return;
  default:
    if (lVar8 < 0xf8) {
      FUN_00556bd0(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    pauVar10 = (undefined1 (*) [16])(*param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar8 < 0x1f39) {
      uVar6 = (*(code *)*param_3)(pauVar10,param_1);
      uVar5 = (*(code *)*param_3)(pauVar9,pauVar10);
      if ((uVar6 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          iVar4 = 0;
        }
        else {
          uVar7 = *(undefined8 *)*pauVar10;
          *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar9;
          *(undefined8 *)*pauVar9 = uVar7;
          uVar6 = (*(code *)*param_3)(pauVar10,param_1);
          if ((uVar6 & 1) == 0) goto LAB_00556614;
          uVar7 = *(undefined8 *)*param_1;
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar10;
          *(undefined8 *)*pauVar10 = uVar7;
LAB_00556604:
          iVar4 = 2;
        }
      }
      else {
        uVar7 = *(undefined8 *)*param_1;
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar10;
          *(undefined8 *)*pauVar10 = uVar7;
          uVar6 = (*(code *)*param_3)(pauVar9,pauVar10);
          if ((uVar6 & 1) != 0) {
            uVar7 = *(undefined8 *)*pauVar10;
            *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar9;
            *(undefined8 *)*pauVar9 = uVar7;
            goto LAB_00556604;
          }
LAB_00556614:
          iVar4 = 1;
        }
        else {
          *(undefined8 *)*param_1 = *(undefined8 *)*pauVar9;
          *(undefined8 *)*pauVar9 = uVar7;
          iVar4 = 1;
        }
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar8 = (uVar5 & 0x7ffffffffffffffc) * 2;
      puVar1 = (undefined8 *)(*param_1 + lVar8);
      puVar2 = (undefined8 *)(*pauVar10 + lVar8);
      iVar4 = FUN_00556a50(param_1,puVar1,pauVar10,puVar2,param_3);
      uVar6 = (*(code *)*param_3)(pauVar9,puVar2);
      if ((uVar6 & 1) != 0) {
        uVar7 = *puVar2;
        *puVar2 = *(undefined8 *)*pauVar9;
        *(undefined8 *)*pauVar9 = uVar7;
        uVar6 = (*(code *)*param_3)(puVar2,pauVar10);
        if ((uVar6 & 1) == 0) {
          iVar4 = iVar4 + 1;
        }
        else {
          uVar7 = *(undefined8 *)*pauVar10;
          *(undefined8 *)*pauVar10 = *puVar2;
          *puVar2 = uVar7;
          uVar6 = (*(code *)*param_3)(pauVar10,puVar1);
          if ((uVar6 & 1) == 0) {
            iVar4 = iVar4 + 2;
          }
          else {
            uVar7 = *puVar1;
            *puVar1 = *(undefined8 *)*pauVar10;
            *(undefined8 *)*pauVar10 = uVar7;
            uVar6 = (*(code *)*param_3)(puVar1,param_1);
            if ((uVar6 & 1) == 0) {
              iVar4 = iVar4 + 3;
            }
            else {
              uVar7 = *(undefined8 *)*param_1;
              iVar4 = iVar4 + 4;
              *(undefined8 *)*param_1 = *puVar1;
              *puVar1 = uVar7;
            }
          }
        }
      }
    }
    uVar6 = (*(code *)*param_3)(param_1,pauVar10);
    if ((uVar6 & 1) == 0) goto LAB_00556658;
    pauVar13 = (undefined1 (*) [16])(*param_1 + 8);
    pauVar11 = pauVar9;
    if (pauVar13 < pauVar9) goto LAB_005566bc;
    goto LAB_0055664c;
  }
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar9;
LAB_00556900:
  *(undefined8 *)*pauVar9 = uVar7;
  return;
LAB_00556658:
  pauVar13 = param_2 + -1;
  while (pauVar11 = pauVar13, param_1 != pauVar11) {
    uVar6 = (*(code *)*param_3)(pauVar11,pauVar10);
    pauVar13 = (undefined1 (*) [16])(pauVar11[-1] + 8);
    if ((uVar6 & 1) != 0) goto code_r0x0055667c;
  }
  pauVar13 = (undefined1 (*) [16])(*param_1 + 8);
  uVar6 = (*(code *)*param_3)(param_1,pauVar9);
  if ((uVar6 & 1) == 0) {
    if (pauVar13 == pauVar9) {
      return;
    }
    pauVar13 = param_1 + 1;
    while (uVar6 = (*(code *)*param_3)(param_1,pauVar13[-1] + 8), (uVar6 & 1) == 0) {
      pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
      if (param_2 == pauVar13) {
        return;
      }
    }
    uVar7 = *(undefined8 *)(pauVar13[-1] + 8);
    *(undefined8 *)(pauVar13[-1] + 8) = *(undefined8 *)*pauVar9;
    *(undefined8 *)*pauVar9 = uVar7;
  }
  if (pauVar13 == pauVar9) {
    return;
  }
  pauVar11 = pauVar9;
  while( true ) {
    pauVar10 = (undefined1 (*) [16])(pauVar13[-1] + 8);
    do {
      pauVar13 = pauVar10;
      pauVar10 = (undefined1 (*) [16])(*pauVar13 + 8);
      uVar6 = (*(code *)*param_3)(param_1,pauVar10);
    } while ((uVar6 & 1) == 0);
    pauVar13 = pauVar13 + 1;
    do {
      pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 8);
      uVar6 = (*(code *)*param_3)(param_1,pauVar11);
    } while ((uVar6 & 1) != 0);
    if (pauVar11 <= pauVar10) break;
    uVar7 = *(undefined8 *)*pauVar10;
    *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = uVar7;
  }
  goto LAB_00556444;
code_r0x0055667c:
  uVar7 = *(undefined8 *)*param_1;
  iVar4 = iVar4 + 1;
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar11;
  *(undefined8 *)*pauVar11 = uVar7;
  pauVar13 = (undefined1 (*) [16])(*param_1 + 8);
  if (pauVar13 < pauVar11) {
LAB_005566bc:
    while( true ) {
      pauVar12 = (undefined1 (*) [16])(pauVar13[-1] + 8);
      do {
        pauVar13 = pauVar12;
        pauVar12 = (undefined1 (*) [16])(*pauVar13 + 8);
        uVar6 = (*(code *)*param_3)(pauVar12,pauVar10);
      } while ((uVar6 & 1) != 0);
      pauVar13 = pauVar13 + 1;
      do {
        pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 8);
        uVar6 = (*(code *)*param_3)(pauVar11,pauVar10);
      } while ((uVar6 & 1) == 0);
      if (pauVar11 < pauVar12) break;
      uVar7 = *(undefined8 *)*pauVar12;
      iVar4 = iVar4 + 1;
      *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
      *(undefined8 *)*pauVar11 = uVar7;
      pauVar3 = pauVar11;
      if (pauVar10 != pauVar12) {
        pauVar3 = pauVar10;
      }
      pauVar10 = pauVar3;
    }
    if (pauVar12 == pauVar10) goto LAB_00556730;
  }
  else {
LAB_0055664c:
    pauVar12 = (undefined1 (*) [16])(*param_1 + 8);
    if (pauVar12 == pauVar10) goto LAB_00556730;
  }
  uVar6 = (*(code *)*param_3)(pauVar10,pauVar12);
  if ((uVar6 & 1) != 0) {
    uVar7 = *(undefined8 *)*pauVar12;
    iVar4 = iVar4 + 1;
    *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar10;
    *(undefined8 *)*pauVar10 = uVar7;
  }
LAB_00556730:
  if (iVar4 == 0) {
    uVar6 = FUN_00556d50(param_1,pauVar12,param_3);
    uVar5 = FUN_00556d50((undefined1 (*) [16])(*pauVar12 + 8),param_2,param_3);
    if ((uVar5 & 1) != 0) goto LAB_0055685c;
    pauVar10 = (undefined1 (*) [16])(*pauVar12 + 8);
    if ((uVar6 & 1) != 0) goto LAB_00556444;
  }
  if ((long)param_2 - (long)pauVar12 <= (long)pauVar12 - (long)param_1) {
    FUN_00556410((long)*pauVar12 + 8,param_2,param_3);
    param_2 = pauVar12;
    goto LAB_00556438;
  }
  FUN_00556410(param_1,pauVar12,param_3);
  pauVar10 = (undefined1 (*) [16])(*pauVar12 + 8);
  goto LAB_00556444;
LAB_0055685c:
  param_2 = pauVar12;
  if ((uVar6 & 1) != 0) {
switchD_0055687c_caseD_0:
    return;
  }
  goto LAB_00556438;
}


