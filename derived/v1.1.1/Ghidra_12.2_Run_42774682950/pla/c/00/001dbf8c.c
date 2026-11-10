/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dbf8c; name: FUN_001dbf8c
 */


void FUN_001dbf8c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xf58);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_001f43b0(param_1,2,2);
  do {
    lVar1 = FUN_001dc02c(param_1,*puVar2,*(undefined8 *)(param_1 + 0xf70),
                         *(ulong *)(param_1 + 0xf40) >> 5 & 1);
    if (lVar1 == 0) {
      FUN_001f3934(param_1,"ignoring failed cookie_init for %s\n",*puVar2);
    }
    else {
      *(long *)(param_1 + 0xf70) = lVar1;
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != (undefined8 *)0x0);
  FUN_001f86a8(*(undefined8 *)(param_1 + 0xf58));
  *(undefined8 *)(param_1 + 0xf58) = 0;
  FUN_001f43f8(param_1,2);
  return;
}


