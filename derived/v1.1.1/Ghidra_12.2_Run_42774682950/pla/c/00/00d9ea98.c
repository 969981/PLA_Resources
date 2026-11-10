/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9ea98; name: FUN_00d9ea98
 */


void FUN_00d9ea98(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lStack_120;
  code *local_118;
  undefined8 uStack_110;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long local_a0;
  code *local_98;
  undefined8 uStack_90;
  
  FUN_00d9efd0(&local_c0,*(undefined8 *)(param_1 + 0x688));
  puVar3 = local_c0;
  local_c0 = (undefined1 *)0x0;
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined1 **)(param_1 + 0x50) = puVar3;
  if (lVar1 != 0) {
    FUN_00da0194(param_1 + 0x58);
    puVar3 = *(undefined1 **)(param_1 + 0x50);
  }
  *(undefined1 **)(param_1 + 0x68) = local_a8;
  *(code **)(param_1 + 0x58) = local_b8;
  *(code **)(param_1 + 0x60) = local_b0;
  local_98 = FUN_00d9ebe0;
  uStack_90 = 0;
  local_c0 = &LAB_00da02d8;
  local_b8 = FUN_00da02f8;
  local_b0 = FUN_00da02fc;
  local_a8 = &LAB_00da0310;
  local_118 = FUN_00d9ebe0;
  uStack_110 = 0;
  pcVar2 = *(code **)(puVar3 + 0x18);
  lStack_120 = param_1;
  local_a0 = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    (*pcVar2)(puVar3 + 0x30);
  }
  FUN_00da02fc(&lStack_120,puVar3 + 0x30);
  *(code **)(puVar3 + 0x18) = FUN_00da02f8;
  *(undefined1 **)(puVar3 + 0x28) = &LAB_00da0310;
  *(code **)(puVar3 + 0x20) = FUN_00da02fc;
  *(undefined1 **)(puVar3 + 0x10) = &LAB_00da02d8;
  FUN_00da02f8(&lStack_120);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  return;
}


