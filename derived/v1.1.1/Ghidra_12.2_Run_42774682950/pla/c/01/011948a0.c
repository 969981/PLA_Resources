/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011948a0; name: FUN_011948a0
 */


void FUN_011948a0(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_b0 [24];
  long *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  
  local_68 = &LAB_011983b4;
  uStack_60 = 0;
  local_90 = &LAB_011997dc;
  local_88 = FUN_011997f8;
  local_80 = &LAB_011997fc;
  puStack_78 = &LAB_01199810;
  local_70 = param_1;
  FUN_0119541c(param_1,0xcf5868ca23626f0c,&local_90,1,0,1);
  FUN_02a4754c(auStack_b0,&DAT_041f4b60);
  FUN_028354b0(auStack_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  pcVar1 = local_88;
  if (local_88 != (code *)0x0) {
    local_80 = (undefined1 *)0x0;
    puStack_78 = (undefined1 *)0x0;
    local_90 = (undefined1 *)0x0;
    local_88 = (code *)0x0;
    (*pcVar1)(&local_70);
  }
  return;
}


