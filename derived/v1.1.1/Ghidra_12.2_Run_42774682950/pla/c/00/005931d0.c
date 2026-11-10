/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005931d0; name: FUN_005931d0
 */


long FUN_005931d0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    uVar1 = *(long *)(param_1 + 0x10) + 4;
    lVar2 = 0;
    if (uVar1 <= param_2) {
      lVar2 = param_2 - uVar1;
    }
  }
  return lVar2;
}


