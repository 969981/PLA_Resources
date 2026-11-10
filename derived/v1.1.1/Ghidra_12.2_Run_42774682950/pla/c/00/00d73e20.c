/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73e20; name: FUN_00d73e20
 */


undefined8 FUN_00d73e20(int *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (int *)0x0) {
    if ((*param_1 == 0x736b6264) &&
       (uVar1 = FUN_010bcff0(*(undefined8 *)(param_1 + 2)), (uVar1 & 1) != 0)) {
      FUN_010bcf48(*(undefined8 *)(param_1 + 2));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


