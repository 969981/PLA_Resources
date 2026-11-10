/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef3648; name: FUN_02ef3648
 */


undefined8 FUN_02ef3648(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    for (lVar1 = *(long *)(PTR_DAT_043885d8 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      FUN_02ef36b8(lVar1 + 0x20,param_2);
    }
  }
  else if ((4 < *(uint *)(param_3 + 0x40)) &&
          (lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x20), lVar1 != 0)) {
    FUN_02ef36b8(lVar1 + 0x20,param_2);
  }
  return 1;
}


