/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b9e3c; name: FUN_016b9e3c
 */


void FUN_016b9e3c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [16];
  
  FUN_016b9e98(&local_38);
  lVar1 = local_38;
  uVar2 = FUN_016b9f2c(param_1,local_38);
  local_38 = 0;
  if ((lVar1 != 0) && ((uVar2 & 1) == 0)) {
    FUN_016ba2d0(auStack_30,lVar1);
  }
  return;
}


