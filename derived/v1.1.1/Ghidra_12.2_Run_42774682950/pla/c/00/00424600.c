/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00424600; name: FUN_00424600
 */


undefined8 FUN_00424600(long param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  
  if ((param_2 == 0 && *(long *)(param_1 + 8) == 0) ||
     (param_4 == 0 && *(long *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  if (param_2 != 0) {
    FUN_0040c1e0();
    *(long *)(param_1 + 8) = param_2;
  }
  if (param_3 != 0) {
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x40) = param_3;
  }
  if (param_4 != 0) {
    FUN_0040c1e0(*(undefined8 *)(param_1 + 0x10));
    *(long *)(param_1 + 0x10) = param_4;
  }
  if (param_3 != 0) {
    uVar1 = FUN_0040c070(param_3);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return 1;
}


