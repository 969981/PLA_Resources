/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03007ee4; name: FUN_03007ee4
 */


undefined8 FUN_03007ee4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  else {
    local_14 = 0;
    local_18 = 0;
    uVar1 = FUN_03006f40(param_1,&local_14,&local_18);
    if ((uVar1 & 1) == 0) {
      uVar2 = 0x80040200;
    }
    else {
      uVar2 = 0;
      *(char *)(param_1 + 0x21) = (char)local_14;
    }
  }
  return uVar2;
}


