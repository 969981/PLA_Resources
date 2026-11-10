/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3f1e8; name: FUN_01e3f1e8
 */


void FUN_01e3f1e8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 local_38 [3];
  
  FUN_01e3f230(local_38);
  uVar1 = FUN_01e3f2c4(param_1,local_38[0]);
  if ((uVar1 & 1) != 0) {
    local_38[0] = 0;
  }
  FUN_01e3f9b4(local_38);
  return;
}


