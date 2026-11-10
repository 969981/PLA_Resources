/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ee198; name: FUN_014ee198
 */


void FUN_014ee198(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_c0 [24];
  long *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  uVar2 = FUN_01507a28(*(undefined8 *)(param_1 + 0x1a8));
  local_80 = param_1;
  if ((uVar2 & 1) == 0) {
    local_78 = &LAB_014ee2e0;
    uStack_70 = 0;
    local_a0 = &LAB_014eea2c;
    local_98 = FUN_014eea48;
    local_90 = &LAB_014eea4c;
    local_88 = &LAB_014eea60;
    FUN_014ee310(param_1,0xb4b7aad3c483a091,&local_a0,1);
    FUN_02a4754c(auStack_c0,&DAT_04217db0);
    FUN_028354b0(auStack_c0);
    pcVar1 = local_98;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
      pcVar1 = local_98;
    }
  }
  else {
    local_78 = &LAB_014ee6e0;
    uStack_70 = 0;
    local_a0 = &LAB_014eea74;
    local_98 = FUN_014eea94;
    local_90 = &LAB_014eea98;
    local_88 = &LAB_014eeaac;
    FUN_01507b40(*(undefined8 *)(param_1 + 0x1a8),0);
    FUN_01507de0(*(undefined8 *)(param_1 + 0x1a8),1);
    FUN_014ee57c(param_1,&local_a0);
    pcVar1 = local_98;
  }
  if (pcVar1 != (code *)0x0) {
    local_88 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


