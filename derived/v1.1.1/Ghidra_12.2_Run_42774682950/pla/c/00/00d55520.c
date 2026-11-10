/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d55520; name: FUN_00d55520
 */


uint FUN_00d55520(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  uVar1 = FUN_00d5d460();
  local_14[0] = 0;
  local_18[0] = 0;
  uVar2 = FUN_00d5d4ec(param_1,uVar1,local_14,local_18);
  return uVar2 & 1;
}


