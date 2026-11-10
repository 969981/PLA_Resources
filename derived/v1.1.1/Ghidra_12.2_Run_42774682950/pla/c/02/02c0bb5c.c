/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0bb5c; name: FUN_02c0bb5c
 */


void FUN_02c0bb5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_00d82b2c(*(long *)(param_1 + 0x200) + 0xf0,auStack_28);
  if (lVar1 != 0) {
    FUN_02a49934(lVar1,*param_2,*(undefined8 *)(param_1 + 0x200));
  }
  return;
}


