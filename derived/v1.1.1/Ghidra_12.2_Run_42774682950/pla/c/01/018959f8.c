/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018959f8; name: FUN_018959f8
 */


undefined8 FUN_018959f8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  uVar2 = *param_2;
  FUN_01895a40(&local_38);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_01895bbc(auStack_30);
  }
  return uVar2;
}


