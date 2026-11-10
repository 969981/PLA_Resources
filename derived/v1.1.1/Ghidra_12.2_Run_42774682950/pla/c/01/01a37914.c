/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a37914; name: FUN_01a37914
 */


void FUN_01a37914(long param_1)

{
  long lVar1;
  undefined1 local_30 [16];
  
  lVar1 = *(long *)(param_1 + 0xe2d0);
  if (*(char *)(lVar1 + 8) != '\0') {
    local_30 = FUN_01a4b7e0();
    FUN_0190296c(lVar1,local_30);
  }
  return;
}


