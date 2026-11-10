/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fda610; name: FUN_00fda610
 */


undefined8 FUN_00fda610(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long *local_48;
  long *local_40;
  undefined *local_38;
  undefined8 local_28;
  
  puVar1 = PTR_LAB_04379768;
  local_28 = 0;
  local_38 = PTR_LAB_04379768;
  FUN_00fd86c8(&local_40,param_1,1,&local_38,&local_28);
  if (local_40 != (long *)0x0) {
    local_38 = puVar1;
    local_28 = 0;
    FUN_00fd86c8(&local_48,param_1,2,&local_38,&local_28);
    if (local_48 != (long *)0x0) {
      if (local_40 == local_48) {
        bVar2 = true;
      }
      else {
        bVar2 = *local_40 == 0 || *local_48 != 0;
      }
      goto LAB_00fda6b0;
    }
  }
  bVar2 = false;
LAB_00fda6b0:
  FUN_001517e0(param_1,bVar2);
  return 1;
}


