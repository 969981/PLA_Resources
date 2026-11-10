/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01598660; name: FUN_01598660
 */


void FUN_01598660(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  lVar1 = FUN_01598778(auStack_18,param_2);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    FUN_02a439f4(*(undefined8 *)(lVar1 + 0x58));
  }
  return;
}


