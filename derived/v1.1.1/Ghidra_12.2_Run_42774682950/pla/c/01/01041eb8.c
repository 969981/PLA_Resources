/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01041eb8; name: FUN_01041eb8
 */


void FUN_01041eb8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  lVar1 = FUN_001511d0(param_1,1);
  plVar2 = *(long **)(*(long *)(lVar1 + ((ulong)(uint)-(int)lVar1 & 7)) + 0x20);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01041f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))();
  return;
}


