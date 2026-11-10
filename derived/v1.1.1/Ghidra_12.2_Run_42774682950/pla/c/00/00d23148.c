/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d23148; name: FUN_00d23148
 */


undefined8 FUN_00d23148(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_02c440e8(*(undefined8 *)(param_1 + 0x4f8));
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = FUN_02c44370(*(undefined8 *)(param_1 + 0x4f8),param_2), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_02c44428(*(undefined8 *)(param_1 + 0x4f8),param_2), (uVar1 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


