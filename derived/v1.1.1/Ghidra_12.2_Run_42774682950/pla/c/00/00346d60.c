/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00346d60; name: FUN_00346d60
 */


void FUN_00346d60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long *local_58;
  undefined *local_50;
  long **pplStack_48;
  undefined **local_38;
  
  pbVar8 = (byte *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar5 = PTR_DAT_043730c0;
  puVar7 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar7 = (ulong *)*puVar7;
  }
  pbVar9 = *(byte **)(param_2 + 0x18);
  if (pbVar9 == PTR_DAT_043730c0) {
    FUN_0029175c((undefined8 *)(param_2 + 0x18),puVar7);
    puVar7 = (ulong *)param_1[5];
  }
  else {
    if (pbVar9 != pbVar8) {
      uVar2 = *(ulong *)(pbVar8 + 8);
      pbVar3 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar3 = pbVar8 + 1;
        uVar2 = (ulong)(*pbVar8 >> 1);
      }
      FUN_00291910(pbVar9,pbVar3,uVar2);
    }
    puVar7 = (ulong *)param_1[5];
  }
  if (puVar7 != (ulong *)0x0) {
    plVar12 = param_1 + 3;
    local_58 = plVar12;
    if (*puVar7 != 0xffffffffffffffff) {
      pplStack_48 = &local_58;
      local_38 = &local_50;
      local_50 = PTR_LAB_04373bb0;
      std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373bb8);
      cVar4 = *(char *)(*plVar12 + 0x8d);
      goto joined_r0x00346e44;
    }
  }
  cVar4 = *(char *)(param_1[3] + 0x8d);
joined_r0x00346e44:
  if (cVar4 == '\0') {
    FUN_003470d8(param_2,&DAT_0389ff53);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  plVar12 = (long *)(param_2 + 0x20);
  puVar7 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    puVar10 = (undefined *)*plVar12;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar10 = (undefined *)*plVar12;
  }
  if (puVar10 == puVar5) {
    FUN_0029175c(plVar12,puVar7,PTR_DAT_043730c0);
    puVar10 = (undefined *)*plVar12;
    puVar7 = (ulong *)param_1[5];
  }
  else {
    puVar7 = (ulong *)param_1[5];
  }
  if ((puVar7 != (ulong *)0x0) && (local_58 = param_1 + 3, *puVar7 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_38 = &local_50;
    local_50 = PTR_LAB_04373bb0;
    std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373bb8);
  }
  pbVar9 = *(byte **)(param_1[3] + 8);
  uVar2 = *(ulong *)(pbVar9 + 8);
  pbVar8 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar8 = pbVar9 + 1;
    uVar2 = (ulong)(*pbVar9 >> 1);
  }
  FUN_002e4094(puVar10,pbVar8,uVar2);
  puVar7 = (ulong *)param_1[9];
  plVar12 = param_1 + 7;
  if ((puVar7 != (ulong *)0x0) && (local_58 = plVar12, *puVar7 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_50 = PTR_LAB_04373bb0;
    local_38 = &local_50;
    std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373bb8);
  }
  if (*(char *)(*plVar12 + 0x8d) == '\0') {
    FUN_00347288(param_2,&DAT_0389ff53);
  }
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  plVar1 = (long *)(param_2 + 0x28);
  puVar7 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    puVar10 = (undefined *)*plVar1;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar10 = (undefined *)*plVar1;
  }
  if (puVar10 == puVar5) {
    FUN_0029175c(plVar1,puVar7,PTR_DAT_043730c0);
    puVar10 = (undefined *)*plVar1;
    puVar7 = (ulong *)param_1[9];
  }
  else {
    puVar7 = (ulong *)param_1[9];
  }
  if ((puVar7 != (ulong *)0x0) && (local_58 = plVar12, *puVar7 != 0xffffffffffffffff)) {
    pplStack_48 = &local_58;
    local_38 = &local_50;
    local_50 = PTR_LAB_04373bb0;
    std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373bb8);
  }
  pbVar9 = *(byte **)(param_1[7] + 8);
  uVar2 = *(ulong *)(pbVar9 + 8);
  pbVar8 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar8 = pbVar9 + 1;
    uVar2 = (ulong)(*pbVar9 >> 1);
  }
  FUN_002e4094(puVar10,pbVar8,uVar2);
  lVar11 = param_1[0xb];
  lVar6 = FUN_003ba054();
  if (lVar11 != lVar6) {
    lVar6 = *(long *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 8;
    if (lVar6 == 0) {
      puVar7 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar7 = (ulong *)*puVar7;
      }
      lVar6 = FUN_003c0d00(puVar7);
      *(long *)(param_2 + 0x30) = lVar6;
    }
    FUN_003ba924(lVar6,param_1[0xb]);
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x10;
    *(undefined1 *)(param_2 + 0x38) = 1;
  }
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20;
    *(undefined1 *)(param_2 + 0x39) = 1;
  }
  return;
}


