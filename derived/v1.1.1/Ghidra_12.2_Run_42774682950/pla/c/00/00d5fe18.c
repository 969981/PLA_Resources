/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5fe18; name: FUN_00d5fe18
 */


void FUN_00d5fe18(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),param_3);
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_2);
    }
  }
  uVar2 = FUN_00d2e5c8(param_1 + 0x180,param_2);
  if (*(long *)(param_1 + 0x2c8) == 0) {
    return;
  }
  uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),param_2);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x2c8) == 0) {
      return;
    }
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),param_2);
  }
  FUN_0283b748(uVar2,*(undefined8 *)(param_1 + 0x2c8),param_2);
  return;
}


