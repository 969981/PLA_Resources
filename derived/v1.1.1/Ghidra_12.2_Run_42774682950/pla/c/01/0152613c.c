/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0152613c; name: FUN_0152613c
 */


void FUN_0152613c(undefined8 param_1)

{
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_34;
  undefined1 *local_30;
  undefined *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  local_48 = 0;
  local_40 = (long *)0x0;
  local_30 = &DAT_45e350da1d34436d;
  puStack_28 = &DAT_03a834e8;
  local_20 = 0x1f;
  local_18 = (long *)0x0;
  local_34 = 1;
  local_58 = &DAT_cbf29ce484222645;
  puStack_50 = &DAT_03996322;
  FUN_02b39d68(param_1,&local_30,&local_34,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


