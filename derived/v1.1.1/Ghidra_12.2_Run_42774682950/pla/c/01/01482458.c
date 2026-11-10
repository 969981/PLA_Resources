/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01482458; name: FUN_01482458
 */


void FUN_01482458(long param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x5b0);
  uVar3 = (uint)uVar4;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 != 0) {
      plVar11 = *(long **)(lVar6 + 0x1a0);
      lVar6 = *(long *)(lVar6 + 0x1a8);
      if ((lVar6 == 0) || (*plVar11 == 0x4a0f571a28d293b4)) {
        plVar8 = plVar11;
      }
      else {
        lVar7 = lVar6 * 0x30;
        plVar10 = plVar11;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_014825e4;
          plVar1 = plVar10 + 6;
          plVar8 = plVar10 + 6;
          plVar10 = plVar10 + 6;
        } while (*plVar1 != 0x4a0f571a28d293b4);
      }
      if (plVar8 != plVar11 + lVar6 * 6) {
        uVar5 = (ulong)*(uint *)(plVar8 + 5);
        if (((*(uint *)(plVar8 + 5) < *(uint *)(plVar8[4] + 0x278)) &&
            (lVar6 = *(long *)(plVar8[4] + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar11 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
          lVar7 = *plVar11;
          if (lVar7 == 0) {
            return;
          }
          if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar12 = *(float *)(lVar7 + 0x20);
          uVar2 = FUN_00227728();
          uVar4 = FUN_00227744(*plVar11);
          if (fVar12 < (float)uVar2) {
            return;
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar4 = *(ulong *)(param_1 + 0x5b0);
        }
      }
    }
LAB_014825e4:
    *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffff0;
    FUN_00d42690(param_1,0,1);
    return;
  }
  if ((uVar3 >> 2 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 != 0) {
      plVar11 = *(long **)(lVar6 + 0x1a0);
      lVar7 = *(long *)(lVar6 + 0x1a8);
      if ((lVar7 == 0) || (*plVar11 == 0x3b8f5513c2470901)) {
        plVar8 = plVar11;
      }
      else {
        lVar9 = lVar7 * 0x30;
        plVar10 = plVar11;
        do {
          lVar9 = lVar9 + -0x30;
          if (lVar9 == 0) goto LAB_014827d8;
          plVar1 = plVar10 + 6;
          plVar8 = plVar10 + 6;
          plVar10 = plVar10 + 6;
        } while (*plVar1 != 0x3b8f5513c2470901);
      }
      if (plVar8 != plVar11 + lVar7 * 6) {
        lVar7 = plVar8[4];
        uVar3 = *(uint *)(plVar8 + 4 + 1);
        uVar5 = (ulong)uVar3;
        if (((uVar3 < *(uint *)(lVar7 + 0x278)) &&
            (lVar7 = *(long *)(lVar7 + 600), *(char *)(lVar7 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar7 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar11 = (long *)(lVar7 + uVar5 * 0x48 + 0x10);
          lVar6 = *plVar11;
          if (lVar6 == 0) {
            return;
          }
          if (*(char *)(lVar7 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar12 = *(float *)(lVar6 + 0x20);
          uVar2 = FUN_00227728();
          uVar4 = FUN_00227744(*plVar11);
          if (fVar12 < (float)uVar2) {
            return;
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar4 = *(ulong *)(param_1 + 0x5b0);
          lVar6 = *(long *)(param_1 + 0x2c8);
        }
      }
    }
LAB_014827d8:
    *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffff9 | 4;
    local_50 = 0x3b8f5513c2470901;
    pcStack_48 = "anime_keep";
    local_40 = 10;
    uStack_38 = 0;
    if (lVar6 == 0) {
      return;
    }
    FUN_0283b1e8(lVar6,&local_50);
    return;
  }
  lVar6 = *(long *)(param_1 + 0x2c8);
  if (lVar6 != 0) {
    plVar11 = *(long **)(lVar6 + 0x1a0);
    lVar6 = *(long *)(lVar6 + 0x1a8);
    if ((lVar6 == 0) || (*plVar11 == 0x3b8f5513c2470901)) {
      plVar8 = plVar11;
    }
    else {
      lVar7 = lVar6 * 0x30;
      plVar10 = plVar11;
      do {
        lVar7 = lVar7 + -0x30;
        if (lVar7 == 0) goto LAB_014826ac;
        plVar1 = plVar10 + 6;
        plVar8 = plVar10 + 6;
        plVar10 = plVar10 + 6;
      } while (*plVar1 != 0x3b8f5513c2470901);
    }
    if (plVar8 != plVar11 + lVar6 * 6) {
      lVar6 = plVar8[4];
      uVar3 = *(uint *)(plVar8 + 4 + 1);
      uVar5 = (ulong)uVar3;
      if (((uVar3 < *(uint *)(lVar6 + 0x278)) &&
          (lVar6 = *(long *)(lVar6 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
        plVar11 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
        lVar7 = *plVar11;
        if (lVar7 == 0) {
          return;
        }
        if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
          return;
        }
        fVar12 = *(float *)(lVar7 + 0x20);
        uVar2 = FUN_00227728();
        uVar4 = FUN_00227744(*plVar11);
        if (fVar12 < (float)uVar2) {
          return;
        }
        if ((uVar4 & 1) != 0) {
          return;
        }
        uVar4 = *(ulong *)(param_1 + 0x5b0);
      }
    }
  }
LAB_014826ac:
  *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffffb;
  return;
}


