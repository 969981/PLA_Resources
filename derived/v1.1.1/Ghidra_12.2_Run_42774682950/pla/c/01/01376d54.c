/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01376d54; name: FUN_01376d54
 */


void FUN_01376d54(long param_1,ulong param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 & 1) == 0) {
    local_50 = 0x71a74e4f5eb1df05;
    pcStack_48 = "anime_switch_list";
    local_40 = 0x11;
    uStack_38 = 0;
    lVar3 = *(long *)(param_1 + 0x2c8);
    if (lVar3 == 0) {
      return;
    }
    plVar10 = *(long **)(lVar3 + 0x1a0);
    lVar6 = *(long *)(lVar3 + 0x1a8);
    if ((lVar6 == 0) || (*plVar10 == 0x71a74e4f5eb1df05)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar6 * 0x30;
      plVar7 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_01376fb4;
        plVar1 = plVar7 + 6;
        plVar9 = plVar7 + 6;
        plVar7 = plVar7 + 6;
      } while (*plVar1 != 0x71a74e4f5eb1df05);
    }
    plVar10 = plVar10 + lVar6 * 6;
    if (plVar9 == plVar10) {
      plVar7 = (long *)0x0;
      if (plVar9 != plVar10) goto LAB_01376f30;
LAB_01376fb4:
      if (lVar3 == 0) {
        return;
      }
      FUN_0283b1e8(lVar3,&local_50);
    }
    else {
      plVar7 = plVar9 + 4;
      if (plVar9 == plVar10) goto LAB_01376fb4;
LAB_01376f30:
      uVar5 = (ulong)*(uint *)(plVar7 + 1);
      if (((*(uint *)(*plVar7 + 0x278) <= *(uint *)(plVar7 + 1)) ||
          (lVar6 = *(long *)(*plVar7 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) == '\0')) ||
         (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) == '\0')) goto LAB_01376fb4;
      plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
      lVar3 = *plVar10;
      if ((lVar3 != 0) && (*(char *)(lVar6 + uVar5 * 0x48 + 9) == '\0')) {
        fVar12 = *(float *)(lVar3 + 0x20);
        uVar2 = FUN_00227728();
        uVar5 = FUN_00227744(*plVar10);
        if (((float)uVar2 <= fVar12) && ((uVar5 & 1) == 0)) {
          lVar3 = *(long *)(param_1 + 0x2c8);
          goto LAB_01376fb4;
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x2c8);
    uVar11 = 0x3f800000;
    goto LAB_01376e98;
  }
  local_50 = 0x71a74e4f5eb1df05;
  pcStack_48 = "anime_switch_list";
  local_40 = 0x11;
  uStack_38 = 0;
  lVar3 = *(long *)(param_1 + 0x2c8);
  if (lVar3 == 0) {
    return;
  }
  plVar10 = *(long **)(lVar3 + 0x1a0);
  lVar6 = *(long *)(lVar3 + 0x1a8);
  if ((lVar6 == 0) || (*plVar10 == 0x71a74e4f5eb1df05)) {
    plVar9 = plVar10;
  }
  else {
    lVar8 = lVar6 * 0x30;
    plVar7 = plVar10;
    do {
      lVar8 = lVar8 + -0x30;
      if (lVar8 == 0) goto LAB_01376e84;
      plVar1 = plVar7 + 6;
      plVar9 = plVar7 + 6;
      plVar7 = plVar7 + 6;
    } while (*plVar1 != 0x71a74e4f5eb1df05);
  }
  plVar10 = plVar10 + lVar6 * 6;
  if (plVar9 == plVar10) {
    plVar7 = (long *)0x0;
    if (plVar9 != plVar10) goto LAB_01376e04;
LAB_01376e84:
    if (lVar3 == 0) {
      return;
    }
    FUN_0283b1e8(lVar3,&local_50);
  }
  else {
    plVar7 = plVar9 + 4;
    if (plVar9 == plVar10) goto LAB_01376e84;
LAB_01376e04:
    uVar5 = (ulong)*(uint *)(plVar7 + 1);
    if (((*(uint *)(*plVar7 + 0x278) <= *(uint *)(plVar7 + 1)) ||
        (lVar6 = *(long *)(*plVar7 + 600), *(char *)(lVar6 + uVar5 * 0x48 + 8) == '\0')) ||
       (*(char *)(lVar6 + uVar5 * 0x48 + 0xb) == '\0')) goto LAB_01376e84;
    plVar10 = (long *)(lVar6 + uVar5 * 0x48 + 0x10);
    lVar3 = *plVar10;
    if ((lVar3 != 0) && (*(char *)(lVar6 + uVar5 * 0x48 + 9) == '\0')) {
      fVar12 = *(float *)(lVar3 + 0x20);
      uVar2 = FUN_00227728();
      uVar5 = FUN_00227744(*plVar10);
      if (((float)uVar2 <= fVar12) && ((uVar5 & 1) == 0)) {
        lVar3 = *(long *)(param_1 + 0x2c8);
        goto LAB_01376e84;
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2c8);
  uVar11 = 0;
LAB_01376e98:
  FUN_0283b748(uVar11,uVar4,&local_50);
  return;
}


