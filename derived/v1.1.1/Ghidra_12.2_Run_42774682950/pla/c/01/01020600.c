/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01020600; name: FUN_01020600
 */


void FUN_01020600(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  local_30 = (*(code *)*param_2)();
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_00b3c384();
  FUN_0101f9e0(param_1,uVar1,local_30);
  return;
}


