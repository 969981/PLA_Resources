/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02674b78; name: FUN_02674b78
 */


uint FUN_02674b78(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = 0x1141573c78ecf5cb;
  pcStack_58 = "unstoppable_by_down";
  lVar1 = (long)*(int *)(param_1 + 0x59c) * 0x18;
  local_40 = *(undefined8 *)(&DAT_04265bd0 + lVar1);
  puStack_38 = (&PTR_s_odoshishi_04265bd8)[(long)*(int *)(param_1 + 0x59c) * 3];
  local_30 = *(undefined8 *)(&DAT_04265be0 + lVar1);
  local_28 = (long *)0x0;
  local_50 = 0x13;
  local_48 = (long *)0x0;
  uVar2 = FUN_00e9e50c(&local_40,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2 & 1;
}


