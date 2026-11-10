/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d5e0; name: FUN_0042d5e0
 */


undefined8 FUN_0042d5e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      uVar1 = FUN_0043c550(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x20),param_2,param_3,
                           param_4);
      return uVar1;
    }
  }
  return 0;
}


