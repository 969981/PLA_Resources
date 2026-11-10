/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145c618; name: FUN_0145c618
 */


void FUN_0145c618(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
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
  
  if ((*(ulong *)(param_1 + 0x250) & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x240) = 0;
  if (*(char *)(param_1 + 0x243) != '\0') {
    return;
  }
  *(ulong *)(param_1 + 0x250) = *(ulong *)(param_1 + 0x250) & 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x241) == '\0') {
    return;
  }
  local_50 = 0x994cd76cf26dfc40;
  pcStack_48 = "anime_wake";
  local_40 = 10;
  local_38 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x148);
  if (lVar7 != 0) {
    plVar10 = *(long **)(lVar7 + 0x1a0);
    lVar7 = *(long *)(lVar7 + 0x1a8);
    if ((lVar7 == 0) || (*plVar10 == -0x66b328930d9203c0)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar7 * 0x30;
      plVar3 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0145c760;
        plVar1 = plVar3 + 6;
        plVar9 = plVar3 + 6;
        plVar3 = plVar3 + 6;
      } while (*plVar1 != -0x66b328930d9203c0);
    }
    if (plVar9 != plVar10 + lVar7 * 6) {
      lVar7 = plVar9[4];
      uVar2 = *(uint *)(plVar9 + 4 + 1);
      uVar6 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar7 + 0x278)) &&
          (lVar7 = *(long *)(lVar7 + 600), *(char *)(lVar7 + uVar6 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar7 + uVar6 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar7 + uVar6 * 0x48 + 0x10);
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (*(char *)(lVar7 + uVar6 * 0x48 + 9) == '\0')) {
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728(lVar8);
          uVar6 = FUN_00227744(*plVar10);
          if (((float)uVar4 <= fVar11) && ((uVar6 & 1) == 0)) goto LAB_0145c760;
          lVar5 = *(long *)(param_1 + 0x10);
        }
        FUN_00d2e2d0(lVar5,&local_50);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
LAB_0145c760:
  local_50 = 0x4a0f571a28d293b4;
  pcStack_48 = "anime_close";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  if (lVar5 != 0) {
    FUN_0283b1e8(lVar5,&local_50);
  }
  *(undefined1 *)(param_1 + 0x241) = 0;
  return;
}


