/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137fb8c; name: FUN_0137fb8c
 */


void FUN_0137fb8c(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte local_450 [1024];
  undefined1 *local_50;
  undefined1 *puStack_48;
  size_t local_40;
  long *local_38;
  
  puVar3 = &DAT_cbf29ce484222645;
  memset(local_450,0,0x400);
  snprintf((char *)local_450,0x400,"pane_%s_A_alignment_00",*(char **)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148);
  local_40 = strlen((char *)local_450);
  if (local_450[0] != 0) {
    pbVar1 = (byte *)((ulong)local_450 | 1);
    do {
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)local_450[0]) * 0x100000001b3);
      local_450[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_450[0] != 0);
  }
  local_38 = (long *)0x0;
  local_50 = puVar3;
  puStack_48 = local_450;
  uVar2 = FUN_00d648b4(uVar2,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00256608(uVar2);
  return;
}


