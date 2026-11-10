/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2c4c; name: FUN_02ef2c4c
 */


void FUN_02ef2c4c(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong *local_48;
  
  puVar3 = *(ulong **)(param_1 + 8);
  uVar4 = *(uint *)(param_1 + 0x10);
  local_48 = puVar3;
  if (uVar4 != 0) {
    do {
      puVar2 = local_48;
      uVar7 = *(uint *)(param_2 + 0x10);
      if (uVar7 != 0) {
        uVar6 = *local_48;
        iVar5 = 0;
        do {
          iVar1 = iVar5 + (uVar7 >> 1);
          uVar8 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar1 * 8);
          if (uVar8 == uVar6) {
            if (*(long *)(param_2 + 8) + (long)iVar1 * 8 != 0) {
              local_48 = local_48 + 3;
              goto LAB_02ef2ce4;
            }
            break;
          }
          if (uVar8 < uVar6) {
            iVar5 = iVar1 + 1;
          }
          uVar7 = uVar7 - (uVar8 < uVar6) >> 1;
        } while (uVar7 != 0);
      }
      if (local_48[1] != 0) {
        *(undefined4 *)(local_48 + 2) = 0;
        (*DAT_0442d150)(0);
        puVar2[1] = 0;
        *(undefined4 *)((long)puVar2 + 0x14) = 0;
      }
      local_48 = (ulong *)FUN_02ef3900((long *)(param_1 + 8),&local_48);
      puVar3 = *(ulong **)(param_1 + 8);
      uVar4 = *(uint *)(param_1 + 0x10);
LAB_02ef2ce4:
    } while (local_48 != puVar3 + (ulong)uVar4 * 3);
  }
  return;
}


