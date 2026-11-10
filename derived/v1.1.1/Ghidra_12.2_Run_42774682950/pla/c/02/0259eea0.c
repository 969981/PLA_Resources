/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259eea0; name: FUN_0259eea0
 */


void FUN_0259eea0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0259ef24(param_1 + 0xd0);
  if ((uVar1 & 1) != 0) {
    FUN_0259f18c(param_1 + 0xd0);
  }
  uVar1 = FUN_0259ef24(param_1 + 0xf0);
  if ((uVar1 & 1) != 0) {
    FUN_0259f18c(param_1 + 0xf0);
  }
  uVar1 = FUN_0259ef24(param_1 + 0x110);
  if ((uVar1 & 1) != 0) {
    FUN_0259f18c(param_1 + 0x110);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
                    /* WARNING: Could not recover jumptable at 0x0259eefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x40))(*(long **)(param_1 + 0x68),0);
  return;
}


