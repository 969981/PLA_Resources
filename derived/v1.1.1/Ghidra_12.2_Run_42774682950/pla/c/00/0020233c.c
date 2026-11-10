/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020233c; name: FUN_0020233c
 */


void FUN_0020233c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    FUN_001e64cc(param_2,3,&DAT_038da665,*(undefined1 *)(param_1 + lVar1));
    lVar1 = lVar1 + 1;
    param_2 = param_2 + 2;
  } while (lVar1 != 0x20);
  return;
}


