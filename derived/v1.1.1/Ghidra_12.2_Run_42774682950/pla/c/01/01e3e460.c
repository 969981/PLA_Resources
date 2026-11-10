/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3e460; name: FUN_01e3e460
 */


void FUN_01e3e460(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_01e3e4bc(&local_38);
  lVar1 = local_38;
  uVar2 = FUN_01e3e550(param_1,local_38);
  local_38 = 0;
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    FUN_01e3f0b0(auStack_30,lVar1);
  }
  return;
}


