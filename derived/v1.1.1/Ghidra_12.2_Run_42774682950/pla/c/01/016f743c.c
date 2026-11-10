/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016f743c; name: FUN_016f743c
 */


void FUN_016f743c(undefined8 param_1)

{
  long lVar1;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  lVar1 = FUN_001511d0(param_1,1);
  lVar1 = *(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7));
  if (*(long **)(lVar1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x58) + 0x20))();
  }
  if (*(long **)(lVar1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(lVar1 + 0x38) + 0x20))();
  }
  if (*(long **)(lVar1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016f74b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x18) + 0x20))();
  return;
}


