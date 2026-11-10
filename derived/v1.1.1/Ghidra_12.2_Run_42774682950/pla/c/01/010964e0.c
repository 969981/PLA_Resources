/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010964e0; name: FUN_010964e0
 */


undefined8 FUN_010964e0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x2ffffffff;
  if (param_1 != 1) {
    uVar1 = 0x3ffffffff;
  }
  uVar2 = 0x1ffffffff;
  if (param_1 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}


