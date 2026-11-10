/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02854770; name: FUN_02854770
 */


undefined8 FUN_02854770(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x348);
  if (((((uVar1 & 1) == 0) ||
       (uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x368), (uVar1 & 1) == 0)) ||
      (uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x388), (uVar1 & 1) == 0)) ||
     (((uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x3a8), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x3c8), (uVar1 & 1) == 0)) ||
      ((uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 1000), (uVar1 & 1) == 0 ||
       (uVar1 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x408), (uVar1 & 1) == 0)))))) {
    return 0;
  }
  uVar2 = FUN_0283b5c4(*(undefined8 *)(param_1 + 8),param_1 + 0x428);
  return uVar2;
}


