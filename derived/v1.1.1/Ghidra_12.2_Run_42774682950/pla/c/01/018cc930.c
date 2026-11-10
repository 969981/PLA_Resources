/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cc930; name: FUN_018cc930
 */


void FUN_018cc930(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_018cc98c(&local_38);
  uVar2 = FUN_018cca20(param_1,local_38);
  lVar1 = local_38;
  if (((uVar2 & 1) == 0) && (local_38 = 0, lVar1 != 0)) {
    FUN_018cc754(auStack_30);
  }
  return;
}


