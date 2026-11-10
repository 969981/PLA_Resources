/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016608c4; name: FUN_016608c4
 */


float FUN_016608c4(void)

{
  double dVar1;
  undefined1 auStack_40 [8];
  char *local_38;
  long *local_28;
  
  FUN_01660724(auStack_40);
  dVar1 = atof(local_38);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return (float)dVar1;
}


