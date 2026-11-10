/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb174; name: FUN_014eb174
 */


void FUN_014eb174(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  code *local_78;
  undefined8 uStack_70;
  
  if (*(int *)(param_1 + 0x1cc) != 1) {
    if (*(int *)(param_1 + 0x1cc) != 0) {
      return;
    }
    FUN_00d6b510(*(undefined8 *)(param_1 + 0x1c0));
    FUN_014fe080(*(undefined8 *)(param_1 + 0x1a8));
    FUN_00d6a73c(*(undefined8 *)(param_1 + 0x1b8));
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  }
  uVar2 = FUN_014fe3c4(*(undefined8 *)(param_1 + 0x1a8));
  if (((uVar2 & 1) != 0) &&
     (uVar2 = FUN_00d6a788(*(undefined8 *)(param_1 + 0x1b8)), (uVar2 & 1) != 0)) {
    local_78 = FUN_014eb634;
    uStack_70 = 0;
    local_a0 = &LAB_014ebc6c;
    local_98 = FUN_014ebc8c;
    local_90 = &LAB_014ebc90;
    puStack_88 = &LAB_014ebca4;
    local_80 = param_1;
    FUN_014eb428(param_1,0xeafee107791b4aa5,&local_a0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
  }
  return;
}


