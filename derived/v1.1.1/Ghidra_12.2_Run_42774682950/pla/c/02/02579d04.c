/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02579d04; name: FUN_02579d04
 */


void FUN_02579d04(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = FUN_0257b5d8(param_1,*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8);
  local_60 = 0x4f5d1f750e6cbefc;
  pcStack_58 = "anime_active_passive_poke_07";
  uVar11 = 0;
  if ((uVar5 & 1) == 0) {
    uVar11 = 0x3f800000;
  }
  local_50 = 0x1c;
  uStack_48 = 0;
  lVar6 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_60);
    lVar6 = *(long *)(param_1 + 0x2c8);
  }
  local_60 = 0x4f5d1f750e6cbefc;
  pcStack_58 = "anime_active_passive_poke_07";
  local_50 = 0x1c;
  uStack_48 = 0;
  if (lVar6 == 0) {
    return;
  }
  plVar10 = *(long **)(lVar6 + 0x1a0);
  lVar9 = *(long *)(lVar6 + 0x1a8);
  if ((lVar9 == 0) || (*plVar10 == 0x4f5d1f750e6cbefc)) {
    plVar8 = plVar10;
  }
  else {
    lVar7 = lVar9 * 0x30;
    plVar3 = plVar10;
    do {
      lVar7 = lVar7 + -0x30;
      if (lVar7 == 0) goto LAB_02579e74;
      plVar1 = plVar3 + 6;
      plVar8 = plVar3 + 6;
      plVar3 = plVar3 + 6;
    } while (*plVar1 != 0x4f5d1f750e6cbefc);
  }
  if (plVar8 != plVar10 + lVar9 * 6) {
    lVar9 = plVar8[4];
    uVar2 = *(uint *)(plVar8 + 4 + 1);
    uVar5 = (ulong)uVar2;
    if (((uVar2 < *(uint *)(lVar9 + 0x278)) &&
        (lVar9 = *(long *)(lVar9 + 600), *(char *)(lVar9 + uVar5 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar9 + uVar5 * 0x48 + 0xb) != '\0')) {
      plVar10 = (long *)(lVar9 + uVar5 * 0x48 + 0x10);
      lVar6 = *plVar10;
      if ((lVar6 == 0) || (*(char *)(lVar9 + uVar5 * 0x48 + 9) != '\0')) goto LAB_02579e80;
      fVar12 = *(float *)(lVar6 + 0x20);
      uVar4 = FUN_00227728();
      uVar5 = FUN_00227744(*plVar10);
      if ((fVar12 < (float)uVar4) || ((uVar5 & 1) != 0)) goto LAB_02579e80;
      lVar6 = *(long *)(param_1 + 0x2c8);
    }
  }
LAB_02579e74:
  if (lVar6 == 0) {
    return;
  }
  FUN_0283b1e8(lVar6,&local_60);
LAB_02579e80:
  FUN_0283b748(uVar11,*(undefined8 *)(param_1 + 0x2c8),&local_60);
  return;
}


