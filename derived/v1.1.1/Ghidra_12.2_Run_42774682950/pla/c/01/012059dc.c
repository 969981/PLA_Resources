/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012059dc; name: FUN_012059dc
 */


void FUN_012059dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0142f970(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01206bd0(param_1);
  return;
}


