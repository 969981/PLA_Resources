/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03376b04; name: FUN_03376b04
 */


undefined8 FUN_03376b04(long param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_2a8 [104];
  undefined8 local_240;
  ulong local_238;
  undefined8 local_218;
  undefined8 *local_1b8;
  ulong local_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_150;
  long local_78 [2];
  ulong local_68;
  
  uVar1 = 0x230401b;
  if (*(char *)(param_1 + 6) != '\0') {
    uVar1 = 0x230001b;
  }
  uVar4 = FUN_032e35d8(param_2);
  if ((uVar4 & 0x1f) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = FUN_032e35d8(param_2);
    uVar3 = (uint)((uVar4 & 0x1f) != 1) << 2;
  }
  FUN_032d8ac8(auStack_2a8);
  FUN_032d8fa0(auStack_2a8,param_2,uVar3 | uVar1);
  FUN_032d8f70(auStack_2a8,param_1);
  local_240 = 0;
  if ((((*param_2 >> 3 & 1) != 0) &&
      (plVar5 = (long *)FUN_032e2008(param_2,8), plVar5 != (long *)0x0)) && (*plVar5 != 0)) {
    local_218 = FUN_032c4990(*plVar5,param_1 + 0x58);
    local_238 = local_238 | 8;
  }
  if ((((char)param_2[1] < '\0') &&
      (plVar5 = (long *)FUN_032e2008(param_2,0x8000), plVar5 != (long *)0x0)) &&
     (lVar10 = *plVar5, lVar10 != 0)) {
    uVar2 = *(ushort *)(lVar10 + 8);
    if (uVar2 != 0) {
      plVar5 = (long *)(param_1 + 0x58);
      local_1b8 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,(uint)uVar2 * 0x10 + 0x10,0);
      *local_1b8 = 0;
      local_1b8[1] = (ulong)uVar2;
      if (*(short *)(lVar10 + 8) != 0) {
        uVar4 = 0;
        puVar8 = local_1b8 + 3;
        puVar11 = (undefined8 *)(lVar10 + 0x18);
        do {
          uVar6 = FUN_032c4990(*puVar11,plVar5);
          *puVar8 = uVar6;
          puVar8[-1] = puVar11[-1];
          uVar4 = uVar4 + 1;
          puVar8 = puVar8 + 2;
          puVar11 = puVar11 + 2;
        } while (uVar4 < *(ushort *)(lVar10 + 8));
      }
      local_238 = local_238 | 0x8000;
    }
  }
  if ((((char)param_2[2] < '\0') &&
      (plVar5 = (long *)FUN_032e2008(param_2,0x800000), plVar5 != (long *)0x0)) &&
     ((*plVar5 != 0 &&
      ((*(short *)(*plVar5 + 4) != 0 || (uVar4 = FUN_032e35d8(param_2), (uVar4 & 0x1f) == 7)))))) {
    local_238 = local_238 | 0x800000;
    local_178 = 0;
  }
  if ((((*(char *)(param_1 + 6) == '\0') && ((param_2[1] >> 6 & 1) != 0)) &&
      (puVar8 = (undefined8 *)FUN_032e2008(param_2,0x4000), puVar8 != (undefined8 *)0x0)) &&
     (((int *)*puVar8 != (int *)0x0 && (iVar9 = *(int *)*puVar8, 0 < iVar9)))) {
    do {
      FUN_032d9048(auStack_2a8,0,0);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((*(char *)(param_1 + 4) != '\0') && ((param_2[2] >> 5 & 1) != 0)) {
    puVar7 = (ulong *)FUN_032e2008(param_2,0x200000);
    if (puVar7 == (ulong *)0x0) {
      local_188 = 0;
    }
    else {
      local_188 = *puVar7 & 0xffffffffffffff7f;
    }
    local_238 = local_238 | 0x200000;
  }
  if ((param_2[3] >> 4 & 1) != 0) {
    local_238 = local_238 | 0x10000000;
    local_150 = 0;
  }
  if (*(char *)(param_1 + 6) != '\0') {
    local_188 = local_188 & 0xffffffffffffdfff;
    local_238 = local_238 | 0x200000;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_032dc3a0(local_78,param_2,&DAT_04358310);
    if ((local_68 & 1) != 0) {
      FUN_032e0c40(local_68 & 0xfffffffffffffffe);
    }
    if ((local_78[0] != 0) &&
       ((((param_2[3] >> 1 & 1) == 0 ||
         (plVar5 = (long *)FUN_032e2008(param_2,0x2000000), plVar5 == (long *)0x0)) ||
        (*plVar5 == 0)))) {
      local_238 = local_238 | 0x2000000;
      local_168 = 0;
    }
  }
  uVar6 = FUN_032d9ed4(auStack_2a8,param_1 + 0x58);
  FUN_032d8c08(auStack_2a8);
  return uVar6;
}


