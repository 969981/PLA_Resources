/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012f9f10; name: FUN_012f9f10
 */


undefined8 FUN_012f9f10(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  
  iVar3 = *(int *)(param_1 + 0x1ec);
  if (iVar3 == 1) {
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1a0);
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x1a8);
    if ((lVar9 == 0) || (*plVar12 == *(long *)(param_1 + 0x170))) {
LAB_012fa134:
      plVar11 = plVar12;
    }
    else {
      lVar10 = lVar9 * 0x30;
      plVar7 = plVar12;
      do {
        lVar10 = lVar10 + -0x30;
        if (lVar10 == 0) {
          return 1;
        }
        plVar1 = plVar7 + 6;
        plVar11 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != *(long *)(param_1 + 0x170));
    }
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        return 1;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x1a0);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x1a8);
      plVar12 = plVar7;
      if ((lVar9 != 0) && (*plVar7 != *(long *)(param_1 + 0x170))) {
        lVar10 = 0;
        do {
          if (lVar9 * 0x30 + -0x30 == lVar10) goto LAB_012fa094;
          lVar2 = lVar10 + 0x30;
          lVar5 = lVar10 + 0x30;
          lVar10 = lVar2;
        } while (*(long *)((long)plVar7 + lVar5) != *(long *)(param_1 + 0x170));
        plVar12 = (long *)((long)plVar7 + lVar2);
      }
      if (plVar12 != plVar7 + lVar9 * 6) {
        lVar10 = plVar12[4];
        uVar4 = *(uint *)(plVar12 + 4 + 1);
        uVar8 = (ulong)uVar4;
        if (((uVar4 < *(uint *)(lVar10 + 0x278)) &&
            (lVar10 = *(long *)(lVar10 + 600), *(char *)(lVar10 + uVar8 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar10 + uVar8 * 0x48 + 0xb) != '\0')) {
          plVar12 = (long *)(lVar10 + uVar8 * 0x48 + 0x10);
          lVar9 = *plVar12;
          if (lVar9 == 0) {
            return 0;
          }
          if (*(char *)(lVar10 + uVar8 * 0x48 + 9) != '\0') {
            return 0;
          }
          fVar13 = *(float *)(lVar9 + 0x20);
          uVar6 = FUN_00227728(lVar9);
          uVar8 = FUN_00227744(*plVar12);
          if (fVar13 < (float)uVar6) {
            return 0;
          }
          if ((uVar8 & 1) != 0) {
            return 0;
          }
          plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x1a0);
          lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x1a8);
        }
      }
LAB_012fa094:
      plVar12 = plVar7;
      if ((lVar9 != 0) && (*plVar7 != *(long *)(param_1 + 0x1a0))) {
        lVar10 = lVar9 * 0x30;
        plVar1 = plVar7;
        do {
          lVar10 = lVar10 + -0x30;
          if (lVar10 == 0) {
            return 1;
          }
          plVar12 = plVar1 + 6;
          plVar11 = plVar1 + 6;
          plVar1 = plVar12;
        } while (*plVar11 != *(long *)(param_1 + 0x1a0));
      }
      if (plVar12 == plVar7 + lVar9 * 6) {
        return 1;
      }
      uVar4 = *(uint *)(plVar12 + 5);
      if (*(uint *)(plVar12[4] + 0x278) <= uVar4) {
        return 1;
      }
      lVar9 = *(long *)(plVar12[4] + 600);
      goto LAB_012fa168;
    }
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1a0);
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x1a8);
    if ((lVar9 == 0) || (*plVar12 == *(long *)(param_1 + 0x1a0))) goto LAB_012fa134;
    lVar10 = lVar9 * 0x30;
    plVar7 = plVar12;
    do {
      lVar10 = lVar10 + -0x30;
      if (lVar10 == 0) {
        return 1;
      }
      plVar11 = plVar7 + 6;
      plVar1 = plVar7 + 6;
      plVar7 = plVar11;
    } while (*plVar1 != *(long *)(param_1 + 0x1a0));
  }
  if (plVar11 == plVar12 + lVar9 * 6) {
    return 1;
  }
  uVar4 = *(uint *)(plVar11 + 5);
  if (*(uint *)(plVar11[4] + 0x278) <= uVar4) {
    return 1;
  }
  lVar9 = *(long *)(plVar11[4] + 600);
LAB_012fa168:
  uVar8 = (ulong)uVar4;
  if ((*(char *)(lVar9 + uVar8 * 0x48 + 8) != '\0') &&
     (*(char *)(lVar9 + uVar8 * 0x48 + 0xb) != '\0')) {
    plVar12 = (long *)(lVar9 + uVar8 * 0x48 + 0x10);
    lVar10 = *plVar12;
    if (lVar10 == 0) {
      return 0;
    }
    if (*(char *)(lVar9 + uVar8 * 0x48 + 9) != '\0') {
      return 0;
    }
    fVar13 = *(float *)(lVar10 + 0x20);
    uVar6 = FUN_00227728();
    uVar8 = FUN_00227744(*plVar12);
    if (fVar13 < (float)uVar6) {
      return 0;
    }
    if ((uVar8 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


