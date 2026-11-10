/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b0bbc; name: FUN_027b0bbc
 */


void FUN_027b0bbc(undefined8 param_1)

{
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = &DAT_cbf29ce484222645;
  puStack_28 = &DAT_03996322;
  local_20 = 0;
  local_18 = (long *)0x0;
  FUN_027b0c14(param_1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


