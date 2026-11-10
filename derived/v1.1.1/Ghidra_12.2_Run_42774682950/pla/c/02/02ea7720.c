/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7720; name: FUN_02ea7720
 */


void FUN_02ea7720(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong local_48;
  ulong *local_40;
  long local_38;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar4 = FUN_02ea7ce0();
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
  puVar7 = puVar6;
  puVar10 = puVar9;
  do {
    if (puVar9 == puVar10 + *(uint *)(param_2 + 0x10)) {
      if (puVar6 == puVar7 + *(uint *)(param_1 + 0x10)) {
        FUN_02ea7d54(param_1,&local_48);
        return;
      }
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
    }
    else {
      uVar8 = *puVar9;
      if ((puVar6 == puVar7 + *(uint *)(param_1 + 0x10)) || (uVar11 = *puVar6, uVar8 < uVar11)) {
        *puVar5 = uVar8;
        puVar9 = puVar9 + 1;
      }
      else {
        *puVar5 = uVar11;
        puVar6 = puVar6 + 1;
        if (uVar8 <= uVar11) {
          puVar9 = puVar9 + 1;
        }
      }
    }
    puVar10 = *(ulong **)(param_2 + 8);
    puVar5 = puVar5 + 1;
    puVar7 = *(ulong **)(param_1 + 8);
  } while( true );
}


