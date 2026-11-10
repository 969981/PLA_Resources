/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01476888; name: FUN_01476888
 */


void FUN_01476888(long param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
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
  
  uVar5 = *(ulong *)(param_1 + 0x5b0);
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((uVar4 >> 3 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 != 0) {
      plVar11 = *(long **)(lVar3 + 0x1a0);
      lVar3 = *(long *)(lVar3 + 0x1a8);
      if ((lVar3 == 0) || (*plVar11 == 0x4a0f571a28d293b4)) {
        plVar8 = plVar11;
      }
      else {
        lVar9 = lVar3 * 0x30;
        plVar10 = plVar11;
        do {
          lVar9 = lVar9 + -0x30;
          if (lVar9 == 0) goto LAB_01476a14;
          plVar1 = plVar10 + 6;
          plVar8 = plVar10 + 6;
          plVar10 = plVar10 + 6;
        } while (*plVar1 != 0x4a0f571a28d293b4);
      }
      if (plVar8 != plVar11 + lVar3 * 6) {
        uVar6 = (ulong)*(uint *)(plVar8 + 5);
        if (((*(uint *)(plVar8 + 5) < *(uint *)(plVar8[4] + 0x278)) &&
            (lVar3 = *(long *)(plVar8[4] + 600), *(char *)(lVar3 + uVar6 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar3 + uVar6 * 0x48 + 0xb) != '\0')) {
          plVar11 = (long *)(lVar3 + uVar6 * 0x48 + 0x10);
          lVar9 = *plVar11;
          if (lVar9 == 0) {
            return;
          }
          if (*(char *)(lVar3 + uVar6 * 0x48 + 9) != '\0') {
            return;
          }
          fVar12 = *(float *)(lVar9 + 0x20);
          uVar2 = FUN_00227728();
          uVar5 = FUN_00227744(*plVar11);
          if (fVar12 < (float)uVar2) {
            return;
          }
          if ((uVar5 & 1) != 0) {
            return;
          }
          uVar5 = *(ulong *)(param_1 + 0x5b0);
        }
      }
    }
LAB_01476a14:
    *(ulong *)(param_1 + 0x5b0) = uVar5 & 0xfffffffffffffff0;
    FUN_00d42690(param_1,0,1);
    return;
  }
  if ((uVar4 >> 2 & 1) == 0) {
    if ((uVar4 >> 1 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 != 0) {
      plVar11 = *(long **)(lVar3 + 0x1a0);
      lVar9 = *(long *)(lVar3 + 0x1a8);
      if ((lVar9 == 0) || (*plVar11 == 0x3b8f5513c2470901)) {
        plVar8 = plVar11;
      }
      else {
        lVar7 = lVar9 * 0x30;
        plVar10 = plVar11;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_01476c40;
          plVar1 = plVar10 + 6;
          plVar8 = plVar10 + 6;
          plVar10 = plVar10 + 6;
        } while (*plVar1 != 0x3b8f5513c2470901);
      }
      if (plVar8 != plVar11 + lVar9 * 6) {
        lVar9 = plVar8[4];
        uVar4 = *(uint *)(plVar8 + 4 + 1);
        uVar6 = (ulong)uVar4;
        if (((uVar4 < *(uint *)(lVar9 + 0x278)) &&
            (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar6 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar9 + uVar6 * 0x48 + 0xb) != '\0')) {
          plVar11 = (long *)(lVar9 + uVar6 * 0x48 + 0x10);
          lVar3 = *plVar11;
          if (lVar3 == 0) {
            return;
          }
          if (*(char *)(lVar9 + uVar6 * 0x48 + 9) != '\0') {
            return;
          }
          fVar12 = *(float *)(lVar3 + 0x20);
          uVar2 = FUN_00227728();
          uVar5 = FUN_00227744(*plVar11);
          if (fVar12 < (float)uVar2) {
            return;
          }
          if ((uVar5 & 1) != 0) {
            return;
          }
          uVar5 = *(ulong *)(param_1 + 0x5b0);
          lVar3 = *(long *)(param_1 + 0x2c8);
        }
      }
    }
LAB_01476c40:
    *(ulong *)(param_1 + 0x5b0) = uVar5 & 0xfffffffffffffff9 | 4;
    local_50 = 0x3b8f5513c2470901;
    pcStack_48 = "anime_keep";
    local_40 = 10;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 != 0) {
      plVar11 = *(long **)(lVar3 + 0x1a0);
      lVar9 = *(long *)(lVar3 + 0x1a8);
      if ((lVar9 == 0) || (*plVar11 == 0x3b8f5513c2470901)) {
        plVar8 = plVar11;
      }
      else {
        lVar7 = lVar9 * 0x30;
        plVar10 = plVar11;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_01476ae0;
          plVar1 = plVar10 + 6;
          plVar8 = plVar10 + 6;
          plVar10 = plVar10 + 6;
        } while (*plVar1 != 0x3b8f5513c2470901);
      }
      if (plVar8 != plVar11 + lVar9 * 6) {
        lVar9 = plVar8[4];
        uVar4 = *(uint *)(plVar8 + 4 + 1);
        uVar6 = (ulong)uVar4;
        if (((uVar4 < *(uint *)(lVar9 + 0x278)) &&
            (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar6 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar9 + uVar6 * 0x48 + 0xb) != '\0')) {
          plVar11 = (long *)(lVar9 + uVar6 * 0x48 + 0x10);
          lVar3 = *plVar11;
          if (lVar3 == 0) {
            return;
          }
          if (*(char *)(lVar9 + uVar6 * 0x48 + 9) != '\0') {
            return;
          }
          fVar12 = *(float *)(lVar3 + 0x20);
          uVar2 = FUN_00227728();
          uVar5 = FUN_00227744(*plVar11);
          if (fVar12 < (float)uVar2) {
            return;
          }
          if ((uVar5 & 1) != 0) {
            return;
          }
          uVar5 = *(ulong *)(param_1 + 0x5b0);
          lVar3 = *(long *)(param_1 + 0x2c8);
        }
      }
    }
LAB_01476ae0:
    *(ulong *)(param_1 + 0x5b0) = uVar5 & 0xfffffffffffffff3 | 8;
    local_50 = 0x4a0f571a28d293b4;
    pcStack_48 = "anime_close";
    local_40 = 0xb;
  }
  if (lVar3 != 0) {
    uStack_38 = 0;
    FUN_0283b1e8(lVar3,&local_50);
  }
  return;
}


