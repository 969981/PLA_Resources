/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01365634; name: FUN_01365634
 */


void FUN_01365634(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_02a4754c(auStack_40,PTR_DAT_0437a3d8);
  FUN_01365690(param_1,auStack_40,param_2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


