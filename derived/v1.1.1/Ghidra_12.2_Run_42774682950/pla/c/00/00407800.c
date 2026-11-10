/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407800; name: FUN_00407800
 */


undefined8 FUN_00407800(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00407470(param_1,param_2,*param_1);
  return uVar1;
}


