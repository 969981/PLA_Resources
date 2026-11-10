/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257a6e4; name: FUN_0257a6e4
 */


void FUN_0257a6e4(long param_1,uint param_2,undefined2 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  long lVar6;
  long *plVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  long local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar12 = *(ulong *)(param_1 + 0x708);
  bVar4 = *(byte *)(param_3 + 2);
  uVar5 = *param_3;
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  FUN_02c4fb44(&local_70,uVar5);
  if (*(char *)(local_70 + 0x20) == '\x01') {
    bVar11 = *(byte *)(param_1 + 0x740) ^ 1;
  }
  else {
    bVar11 = 1;
  }
  lVar6 = (ulong)param_2 * 0x18;
  uVar17 = *(undefined8 *)(&DAT_0425d438 + lVar6);
  lVar6 = *(long *)(&DAT_0425d428 + lVar6);
  puVar2 = (&PTR_s_anime_active_passive_item_00_0425d430)[(ulong)param_2 * 3];
  uVar18 = 0x3f800000;
  if (((uVar12 & 3) == 0 & bVar4 & bVar11) != 0) {
    uVar18 = 0;
  }
  uStack_58 = 0;
  lVar10 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    local_70 = lVar6;
    puStack_68 = puVar2;
    local_60 = uVar17;
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_70);
    lVar10 = *(long *)(param_1 + 0x2c8);
  }
  uStack_58 = 0;
  if (lVar10 == 0) {
    return;
  }
  plVar16 = *(long **)(lVar10 + 0x1a0);
  lVar15 = *(long *)(lVar10 + 0x1a8);
  if ((lVar15 == 0) || (*plVar16 == lVar6)) {
    plVar14 = plVar16;
  }
  else {
    lVar13 = lVar15 * 0x30;
    plVar7 = plVar16;
    do {
      lVar13 = lVar13 + -0x30;
      local_70 = lVar6;
      puStack_68 = puVar2;
      local_60 = uVar17;
      if (lVar13 == 0) goto LAB_0257a8a8;
      plVar1 = plVar7 + 6;
      plVar14 = plVar7 + 6;
      plVar7 = plVar7 + 6;
    } while (*plVar1 != lVar6);
  }
  local_70 = lVar6;
  puStack_68 = puVar2;
  local_60 = uVar17;
  if (plVar14 != plVar16 + lVar15 * 6) {
    lVar15 = plVar14[4];
    uVar3 = *(uint *)(plVar14 + 4 + 1);
    uVar12 = (ulong)uVar3;
    if (((uVar3 < *(uint *)(lVar15 + 0x278)) &&
        (lVar15 = *(long *)(lVar15 + 600), *(char *)(lVar15 + uVar12 * 0x48 + 8) != '\0')) &&
       (*(char *)(lVar15 + uVar12 * 0x48 + 0xb) != '\0')) {
      plVar16 = (long *)(lVar15 + uVar12 * 0x48 + 0x10);
      lVar10 = *plVar16;
      if ((lVar10 == 0) || (*(char *)(lVar15 + uVar12 * 0x48 + 9) != '\0')) goto LAB_0257a8b4;
      fVar19 = *(float *)(lVar10 + 0x20);
      uVar8 = FUN_00227728();
      uVar12 = FUN_00227744(*plVar16);
      if ((fVar19 < (float)uVar8) || ((uVar12 & 1) != 0)) goto LAB_0257a8b4;
      lVar10 = *(long *)(param_1 + 0x2c8);
    }
  }
LAB_0257a8a8:
  if (lVar10 == 0) {
    return;
  }
  FUN_0283b1e8(lVar10,&local_70);
LAB_0257a8b4:
  FUN_0283b748(uVar18,*(undefined8 *)(param_1 + 0x2c8),&local_70);
  return;
}


