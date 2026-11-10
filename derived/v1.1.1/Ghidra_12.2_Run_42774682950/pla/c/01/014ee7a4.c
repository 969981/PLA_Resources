/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014ee7a4; name: FUN_014ee7a4
 */


undefined8 FUN_014ee7a4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  uVar2 = FUN_01507f14(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    local_78 = &LAB_014ee860;
    uStack_70 = 0;
    local_a0 = &LAB_014eea2c;
    local_98 = FUN_014eea48;
    local_90 = &LAB_014eea4c;
    puStack_88 = &LAB_014eea60;
    local_80 = param_1;
    FUN_01507de0(*(undefined8 *)(param_1 + 0x1a8),0);
    FUN_014ee310(param_1,0x63f8f36dc28e180c,&local_a0,1);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      puStack_88 = (undefined1 *)0x0;
      local_a0 = (undefined1 *)0x0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
    uVar3 = 1;
  }
  return uVar3;
}


