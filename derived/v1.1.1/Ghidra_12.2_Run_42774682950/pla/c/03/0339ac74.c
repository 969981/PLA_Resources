/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339ac74; name: FUN_0339ac74
 */


undefined8 FUN_0339ac74(long *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  param_1 = (long *)*param_1;
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
      FUN_032e0ab0(param_1,&DAT_043568f0);
      uVar1 = extraout_x1_00;
    }
    else {
      (**(code **)*param_1)();
      uVar1 = extraout_x1;
    }
  }
  return uVar1;
}


