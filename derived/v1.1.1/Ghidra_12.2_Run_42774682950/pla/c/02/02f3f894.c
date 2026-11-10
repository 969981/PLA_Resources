/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3f894; name: FUN_02f3f894
 */


undefined8 FUN_02f3f894(long param_1)

{
  long lVar1;
  undefined4 local_34;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  if (DAT_0440a148 != 0) {
    local_30 = 0;
    FUN_02ef6648(*(undefined8 *)(param_1 + 200),&local_30,&local_34,&local_28);
    if (local_28 != 0) {
      FUN_02ef66a4(*(undefined8 *)(param_1 + 200));
      lVar1 = *(long *)(param_1 + 0xd8);
      *(long *)(param_1 + 0xd8) = local_28;
      FUN_02f40380(param_1 + 0xf0,local_30);
      *(undefined8 *)(param_1 + 0xe0) = local_30;
      *(undefined4 *)(param_1 + 0xe8) = local_34;
      if (lVar1 != 0) {
        FUN_02e8e5e0(lVar1,0);
      }
      return 1;
    }
  }
  return 0;
}


