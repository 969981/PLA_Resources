/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145d49c; name: FUN_0145d49c
 */


void FUN_0145d49c(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x240) = 1;
  if (*(char *)(param_1 + 0x243) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x241) != '\0') {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  plVar10 = *(long **)(lVar5 + 0x148);
  lVar5 = *(long *)(lVar5 + 0x150);
  if ((lVar5 != 0) && (*plVar10 != 0x80a8e808288e407)) {
    plVar9 = plVar10 + lVar5 * 6;
    lVar5 = lVar5 * 0x30;
    do {
      lVar5 = lVar5 + -0x30;
      if (lVar5 == 0) {
        plVar10 = plVar9;
        break;
      }
      plVar2 = plVar10 + 6;
      plVar1 = plVar10 + 6;
      plVar10 = plVar2;
    } while (*plVar1 != 0x80a8e808288e407);
  }
  *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) | 1;
  local_50 = 0x4a0f571a28d293b4;
  pcStack_48 = "anime_close";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x148);
  if (lVar7 != 0) {
    plVar10 = *(long **)(lVar7 + 0x1a0);
    lVar7 = *(long *)(lVar7 + 0x1a8);
    if ((lVar7 == 0) || (*plVar10 == 0x4a0f571a28d293b4)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar7 * 0x30;
      plVar1 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0145d654;
        plVar2 = plVar1 + 6;
        plVar9 = plVar1 + 6;
        plVar1 = plVar1 + 6;
      } while (*plVar2 != 0x4a0f571a28d293b4);
    }
    if (plVar9 != plVar10 + lVar7 * 6) {
      lVar7 = plVar9[4];
      uVar3 = *(uint *)(plVar9 + 4 + 1);
      uVar6 = (ulong)uVar3;
      if (((uVar3 < *(uint *)(lVar7 + 0x278)) &&
          (lVar7 = *(long *)(lVar7 + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728(lVar8);
          uVar6 = FUN_00227744(*plVar10);
          if (((float)uVar4 <= fVar11) && ((uVar6 & 1) == 0)) goto LAB_0145d654;
          lVar5 = *(long *)(param_1 + 0x10);
        }
        FUN_00d2e2d0(lVar5,&local_50);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
LAB_0145d654:
  local_50 = 0x994cd76cf26dfc40;
  pcStack_48 = "anime_wake";
  local_40 = 10;
  local_38 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  if (lVar5 != 0) {
    FUN_0283b1e8(lVar5,&local_50);
  }
  *(undefined1 *)(param_1 + 0x241) = 1;
  return;
}


