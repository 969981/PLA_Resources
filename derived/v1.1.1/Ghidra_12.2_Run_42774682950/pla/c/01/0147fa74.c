/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147fa74; name: FUN_0147fa74
 */


void FUN_0147fa74(long param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x5b0);
  uVar3 = (uint)uVar4;
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 != 0) {
      plVar10 = *(long **)(lVar6 + 0x1a0);
      lVar6 = *(long *)(lVar6 + 0x1a8);
      if ((lVar6 == 0) || (*plVar10 == 0x4a0f571a28d293b4)) {
        plVar8 = plVar10;
      }
      else {
        lVar7 = lVar6 * 0x30;
        plVar9 = plVar10;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_0147fc04;
          plVar1 = plVar9 + 6;
          plVar8 = plVar9 + 6;
          plVar9 = plVar9 + 6;
        } while (*plVar1 != 0x4a0f571a28d293b4);
      }
      if (plVar8 != plVar10 + lVar6 * 6) {
        uVar5 = (ulong)*(uint *)(plVar8 + 5);
        if (((*(uint *)(plVar8 + 5) < *(uint *)(plVar8[4] + 0x278)) &&
            (lVar6 = *(long *)(plVar8[4] + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
          lVar7 = *plVar10;
          if (lVar7 == 0) {
            return;
          }
          if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar11 = *(float *)(lVar7 + 0x20);
          uVar2 = FUN_00227728();
          uVar4 = FUN_00227744(*plVar10);
          if (fVar11 < (float)uVar2) {
            return;
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar4 = *(ulong *)(param_1 + 0x5b0);
        }
      }
    }
LAB_0147fc04:
    *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffff0;
    *(undefined1 **)(param_1 + 0x5b8) = &DAT_cbf29ce484222645;
    FUN_00d42690(param_1,0,1);
    return;
  }
  if ((uVar3 >> 2 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 != 0) {
      plVar10 = *(long **)(lVar6 + 0x1a0);
      lVar6 = *(long *)(lVar6 + 0x1a8);
      if ((lVar6 == 0) || (*plVar10 == 0x3b8f5513c2470901)) {
        plVar8 = plVar10;
      }
      else {
        lVar7 = lVar6 * 0x30;
        plVar9 = plVar10;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_0147fe50;
          plVar1 = plVar9 + 6;
          plVar8 = plVar9 + 6;
          plVar9 = plVar9 + 6;
        } while (*plVar1 != 0x3b8f5513c2470901);
      }
      if (plVar8 != plVar10 + lVar6 * 6) {
        lVar6 = plVar8[4];
        uVar3 = *(uint *)(plVar8 + 4 + 1);
        uVar5 = (ulong)uVar3;
        if (((uVar3 < *(uint *)(lVar6 + 0x278)) &&
            (lVar6 = *(long *)(lVar6 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
          lVar7 = *plVar10;
          if (lVar7 == 0) {
            return;
          }
          if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar11 = *(float *)(lVar7 + 0x20);
          uVar2 = FUN_00227728();
          uVar4 = FUN_00227744(*plVar10);
          if (fVar11 < (float)uVar2) {
            return;
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar4 = *(ulong *)(param_1 + 0x5b0);
        }
      }
    }
LAB_0147fe50:
    *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffff9 | 4;
    local_48 = "anime_keep";
    local_40 = 10;
    local_50 = 0x3b8f5513c2470901;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 != 0) {
      plVar10 = *(long **)(lVar6 + 0x1a0);
      lVar6 = *(long *)(lVar6 + 0x1a8);
      if ((lVar6 == 0) || (*plVar10 == 0x3b8f5513c2470901)) {
        plVar8 = plVar10;
      }
      else {
        lVar7 = lVar6 * 0x30;
        plVar9 = plVar10;
        do {
          lVar7 = lVar7 + -0x30;
          if (lVar7 == 0) goto LAB_0147fce0;
          plVar1 = plVar9 + 6;
          plVar8 = plVar9 + 6;
          plVar9 = plVar9 + 6;
        } while (*plVar1 != 0x3b8f5513c2470901);
      }
      if (plVar8 != plVar10 + lVar6 * 6) {
        lVar6 = plVar8[4];
        uVar3 = *(uint *)(plVar8 + 4 + 1);
        uVar5 = (ulong)uVar3;
        if (((uVar3 < *(uint *)(lVar6 + 0x278)) &&
            (lVar6 = *(long *)(lVar6 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) != '\0')) &&
           (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) != '\0')) {
          plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
          lVar7 = *plVar10;
          if (lVar7 == 0) {
            return;
          }
          if (*(char *)(lVar6 + uVar5 * 0x48 + 9) != '\0') {
            return;
          }
          fVar11 = *(float *)(lVar7 + 0x20);
          uVar2 = FUN_00227728();
          uVar4 = FUN_00227744(*plVar10);
          if (fVar11 < (float)uVar2) {
            return;
          }
          if ((uVar4 & 1) != 0) {
            return;
          }
          uVar4 = *(ulong *)(param_1 + 0x5b0);
        }
      }
    }
LAB_0147fce0:
    *(ulong *)(param_1 + 0x5b0) = uVar4 & 0xfffffffffffffff3 | 8;
    local_50 = 0x4a0f571a28d293b4;
    local_48 = "anime_close";
    local_40 = 0xb;
  }
  local_38 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


