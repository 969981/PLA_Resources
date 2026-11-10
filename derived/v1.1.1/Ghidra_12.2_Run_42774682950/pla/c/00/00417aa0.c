/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417aa0; name: FUN_00417aa0
 */


undefined8 FUN_00417aa0(long param_1,long param_2)

{
  undefined8 uVar1;
  long local_28 [3];
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    uVar1 = FUN_00405c90(*(undefined8 *)(param_1 + 0x10),local_28);
  }
  return uVar1;
}


