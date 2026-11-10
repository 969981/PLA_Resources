/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebd2b0; name: FUN_00ebd2b0
 */


void FUN_00ebd2b0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  
  FUN_00150ba0(param_1,1,0);
  uVar1 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


