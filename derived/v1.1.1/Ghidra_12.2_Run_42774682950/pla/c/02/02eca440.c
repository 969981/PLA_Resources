/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eca440; name: FUN_02eca440
 */


void FUN_02eca440(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong local_48;
  ulong *local_40;
  long local_38;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar4 = FUN_02ecae70();
  uVar3 = (iVar2 + iVar1) - iVar4;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      local_40 = &local_48;
    }
    else {
      local_40 = (ulong *)FUN_02f59e40(4,(ulong)uVar3 << 3,8);
      if (local_40 == (ulong *)0x0) {
        return;
      }
    }
    local_38 = (ulong)uVar3 << 0x20;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar3);
  puVar6 = *(ulong **)(param_1 + 8);
  puVar9 = *(ulong **)(param_2 + 8);
  puVar5 = local_40;
  puVar8 = puVar6;
  puVar11 = puVar9;
  do {
    if (puVar9 == puVar11 + *(uint *)(param_2 + 0x10)) {
      if (puVar6 == puVar8 + *(uint *)(param_1 + 0x10)) {
        FUN_02ea7d54(param_1,&local_48);
        return;
      }
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
    }
    else {
      uVar7 = *puVar9;
      if ((puVar6 == puVar8 + *(uint *)(param_1 + 0x10)) || (uVar10 = *puVar6, uVar7 < uVar10)) {
        *puVar5 = uVar7;
        puVar9 = puVar9 + 1;
      }
      else {
        *puVar5 = uVar10;
        puVar6 = puVar6 + 1;
        if (uVar7 <= uVar10) {
          puVar9 = puVar9 + 1;
        }
      }
    }
    puVar11 = *(ulong **)(param_2 + 8);
    puVar5 = puVar5 + 1;
    puVar8 = *(ulong **)(param_1 + 8);
  } while( true );
}


