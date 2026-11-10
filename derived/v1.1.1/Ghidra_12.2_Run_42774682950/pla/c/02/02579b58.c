/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02579b58; name: FUN_02579b58
 */


void FUN_02579b58(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  long local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar7 = FUN_0257b5d8(param_1,param_3);
  lVar4 = (ulong)param_2 * 0x18;
  uVar13 = *(undefined8 *)(&DAT_0425d4b0 + lVar4);
  lVar4 = *(long *)(&DAT_0425d4a0 + lVar4);
  puVar2 = (&PTR_s_anime_active_passive_poke_00_0425d4a8)[(ulong)param_2 * 3];
  uStack_58 = 0;
  uVar14 = 0;
  if ((uVar7 & 1) == 0) {
    uVar14 = 0x3f800000;
  }
  lVar8 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    local_70 = lVar4;
    puStack_68 = puVar2;
    local_60 = uVar13;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
    lVar8 = *(long *)(param_1 + 0x2c8);
  }
  uStack_58 = 0;
  if (lVar8 == 0) {
    return;
  }
  plVar12 = *(long **)(lVar8 + 0x1a0);
  lVar11 = *(long *)(lVar8 + 0x1a8);
  if ((lVar11 == 0) || (*plVar12 == lVar4)) {
    plVar10 = plVar12;
  }
  else {
    lVar9 = lVar11 * 0x30;
    plVar5 = plVar12;
    do {
      lVar9 = lVar9 + -0x30;
      local_70 = lVar4;
      puStack_68 = puVar2;
      local_60 = uVar13;
      if (lVar9 == 0) goto LAB_02579cbc;
      plVar1 = plVar5 + 6;
      plVar10 = plVar5 + 6;
      plVar5 = plVar5 + 6;
    } while (*plVar1 != lVar4);
  }
  local_70 = lVar4;
  puStack_68 = puVar2;
  local_60 = uVar13;
  if (plVar10 != plVar12 + lVar11 * 6) {
    lVar11 = plVar10[4];
    uVar3 = *(uint *)(plVar10 + 4 + 1);
    uVar7 = (ulong)uVar3;
    if (((uVar3 < *(uint *)(lVar11 + 0x278)) &&
        (lVar11 = *(long *)(lVar11 + 600), *(char *)(lVar11 + uVar7 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar11 + uVar7 * 0x48 + 0xb) != '\0')) {
      plVar12 = (long *)(lVar11 + uVar7 * 0x48 + 0x10);
      lVar8 = *plVar12;
      if ((lVar8 == 0) || (*(char *)(lVar11 + uVar7 * 0x48 + 9) != '\0')) goto LAB_02579cc8;
      fVar15 = *(float *)(lVar8 + 0x20);
      uVar6 = FUN_00227728();
      uVar7 = FUN_00227744(*plVar12);
      if ((fVar15 < (float)uVar6) || ((uVar7 & 1) != 0)) goto LAB_02579cc8;
      lVar8 = *(long *)(param_1 + 0x2c8);
    }
  }
LAB_02579cbc:
  if (lVar8 == 0) {
    return;
  }
  FUN_0283b1e8(lVar8,&local_70);
LAB_02579cc8:
  FUN_0283b748(uVar14,*(undefined8 *)(param_1 + 0x2c8),&local_70);
  return;
}


