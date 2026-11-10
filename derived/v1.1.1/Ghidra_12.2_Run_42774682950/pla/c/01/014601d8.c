/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014601d8; name: FUN_014601d8
 */


void FUN_014601d8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  if ((*(ushort *)(param_1 + 0x30) & 0x1ff) == 0) {
    return;
  }
  local_60 = 0x48f9d35d2e3fc79a;
  pcStack_58 = "anime_L_gauge_nspoke_01_passive_select";
  local_50 = 0x26;
  local_48 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x148);
  if (lVar6 != 0) {
    plVar10 = *(long **)(lVar6 + 0x1a0);
    lVar6 = *(long *)(lVar6 + 0x1a8);
    if ((lVar6 == 0) || (*plVar10 == 0x48f9d35d2e3fc79a)) {
      plVar9 = plVar10;
    }
    else {
      lVar8 = lVar6 * 0x30;
      plVar3 = plVar10;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_0146030c;
        plVar1 = plVar3 + 6;
        plVar9 = plVar3 + 6;
        plVar3 = plVar3 + 6;
      } while (*plVar1 != 0x48f9d35d2e3fc79a);
    }
    if (plVar9 != plVar10 + lVar6 * 6) {
      lVar6 = plVar9[4];
      uVar2 = *(uint *)(plVar9 + 4 + 1);
      uVar7 = (ulong)uVar2;
      if (((uVar2 < *(uint *)(lVar6 + 0x278)) &&
          (lVar6 = *(long *)(lVar6 + 600), *(char *)(lVar6 + uVar7 * 0x48 + 8) != '\0')) &&
         (*(char *)(lVar6 + uVar7 * 0x48 + 0xb) != '\0')) {
        plVar10 = (long *)(lVar6 + uVar7 * 0x48 + 0x10);
        lVar8 = *plVar10;
        if ((lVar8 != 0) && (*(char *)(lVar6 + uVar7 * 0x48 + 9) == '\0')) {
          fVar11 = *(float *)(lVar8 + 0x20);
          uVar4 = FUN_00227728(lVar8);
          uVar7 = FUN_00227744(*plVar10);
          if (((float)uVar4 <= fVar11) && ((uVar7 & 1) == 0)) goto LAB_0146030c;
          lVar5 = *(long *)(param_1 + 0x10);
        }
        FUN_00d2e2d0(lVar5,&local_60);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
  }
LAB_0146030c:
  local_60 = 0x48f9d35d2e3fc79a;
  pcStack_58 = "anime_L_gauge_nspoke_01_passive_select";
  local_50 = 0x26;
  local_48 = (long *)0x0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x148);
  if (lVar5 != 0) {
    FUN_0283b1e8(lVar5,&local_60);
  }
  local_60 = 0x9361c9d60afa3753;
  pcStack_58 = "PLAY_UI_COMMON_BEEP";
  local_50 = 0x13;
  local_48 = (long *)0x0;
  FUN_028354b0(&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


