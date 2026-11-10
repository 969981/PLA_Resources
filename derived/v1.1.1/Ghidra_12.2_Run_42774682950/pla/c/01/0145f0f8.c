/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145f0f8; name: FUN_0145f0f8
 */


void FUN_0145f0f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((((*(byte *)(param_1 + 0x28) & 1) != 0) || (uVar5 = FUN_0145f5a4(), (uVar5 & 1) == 0)) ||
     ((*(byte *)(param_1 + 0x40) & 1) != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
    plVar10 = *(long **)(lVar6 + 0x148);
    lVar6 = *(long *)(lVar6 + 0x150);
    if ((lVar6 != 0) && (*plVar10 != 0x29288174277c5656)) {
      plVar9 = plVar10 + lVar6 * 6;
      lVar6 = lVar6 * 0x30;
      do {
        lVar6 = lVar6 + -0x30;
        if (lVar6 == 0) {
          plVar10 = plVar9;
          break;
        }
        plVar1 = plVar10 + 6;
        plVar2 = plVar10 + 6;
        plVar10 = plVar1;
      } while (*plVar2 != 0x29288174277c5656);
    }
    *(byte *)(plVar10[4] + 0x58) = *(byte *)(plVar10[4] + 0x58) & 0xfe;
  }
  local_50 = 0x73df3ab9b1075ffc;
  pcStack_48 = "anime_L_gauge_nspoke_01_wake";
  local_40 = 0x1c;
  local_38 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x148);
  if (lVar7 != 0) {
    plVar10 = *(long **)(lVar7 + 0x1a0);
    lVar7 = *(long *)(lVar7 + 0x1a8);
    if ((lVar7 == 0) || (*plVar10 == 0x73df3ab9b1075ffc)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar7 * 0x30;
      plVar2 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0145f2a4;
        plVar1 = plVar2 + 6;
        plVar9 = plVar2 + 6;
        plVar2 = plVar2 + 6;
      } while (*plVar1 != 0x73df3ab9b1075ffc);
    }
    if (plVar9 != plVar10 + lVar7 * 6) {
      lVar7 = plVar9[4];
      uVar3 = *(uint *)(plVar9 + 4 + 1);
      uVar5 = (ulong)uVar3;
      if (((uVar3 < *(uint *)(lVar7 + 0x278)) &&
          (lVar7 = *(long *)(lVar7 + 600), *(char *)(lVar7 + uVar5 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar7 + uVar5 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar7 + uVar5 * 0x48 + 0x10);
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (*(char *)(lVar7 + uVar5 * 0x48 + 9) == '\0')) {
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728(lVar8);
          uVar5 = FUN_00227744(*plVar10);
          if (((float)uVar4 <= fVar11) && ((uVar5 & 1) == 0)) goto LAB_0145f2a4;
          lVar6 = *(long *)(param_1 + 0x10);
        }
        FUN_00d2e2d0(lVar6,&local_50);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
      }
    }
  }
LAB_0145f2a4:
  local_50 = 0x8f87802f6e086ef0;
  pcStack_48 = "anime_L_gauge_nspoke_01_close";
  local_40 = 0x1d;
  local_38 = (long *)0x0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  if (lVar6 != 0) {
    FUN_0283b1e8(lVar6,&local_50);
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}


