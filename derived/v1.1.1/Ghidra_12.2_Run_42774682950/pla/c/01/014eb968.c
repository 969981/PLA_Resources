/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb968; name: FUN_014eb968
 */


undefined8 FUN_014eb968(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  iVar2 = FUN_014fe69c(*(undefined8 *)(param_1 + 0x1a8),0);
  if (iVar2 == 0) {
    FUN_014eb3bc(param_1);
    uVar3 = 1;
  }
  else {
    local_78 = &LAB_014eba24;
    uStack_70 = 0;
    local_a0 = &LAB_014ebcb8;
    local_98 = FUN_014ebcd4;
    local_90 = &LAB_014ebcd8;
    puStack_88 = &LAB_014ebcec;
    local_80 = param_1;
    FUN_014eb764(param_1,0x73cd070f31b236fb,&local_a0,0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
    uVar3 = 0;
  }
  return uVar3;
}


