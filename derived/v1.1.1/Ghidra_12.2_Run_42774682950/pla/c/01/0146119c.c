/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146119c; name: FUN_0146119c
 */


void FUN_0146119c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((*(long *)(*(long *)(param_1 + 0x10) + 0x148) == 0) ||
     (uVar1 = FUN_0283b5c4(), (uVar1 & 1) != 0)) {
    return;
  }
  FUN_00d2e2d0(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


