/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014bfdec; name: FUN_014bfdec
 */


void FUN_014bfdec(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_014b71cc(*(undefined8 *)(param_1 + 0x5c8),1);
  }
  local_50 = 0xf7a9321400ff863b;
  pcStack_48 = "InputPokeChangeUp";
  uVar1 = uVar1 & 1;
  local_40 = 0x11;
  uStack_38 = 0;
  FUN_014bff5c(param_1,&local_50,uVar1);
  local_50 = 0x3ddc4686969d000e;
  pcStack_48 = "InputPokeChangeDown";
  local_40 = 0x13;
  uStack_38 = 0;
  FUN_014bff5c(param_1,&local_50,uVar1);
  if (((DAT_043c40f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_043c40f0), iVar2 != 0)) {
    DAT_043c40b0 = 0x27f3c4b9a4c5c165;
    DAT_043c40b8 = "button_poke_up";
    DAT_043c40c0 = 0xe;
    DAT_043c40c8 = 0;
    DAT_043c40d0 = 0x4c168fdfbe1756e4;
    DAT_043c40d8 = "button_poke_down";
    DAT_043c40e0 = 0x10;
    DAT_043c40e8 = 0;
    FUN_00100250(FUN_014c00c0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c40f0);
  }
  uVar3 = thunk_FUN_00d2e944(param_1 + 0x180,&DAT_043c40b0);
  FUN_0280779c(uVar3,uVar1);
  uVar3 = thunk_FUN_00d2e944(param_1 + 0x180,&DAT_043c40d0);
  FUN_0280779c(uVar3,uVar1);
  return;
}


