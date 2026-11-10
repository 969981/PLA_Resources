/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01460a04; name: FUN_01460a04
 */


void FUN_01460a04(int param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined *puStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (param_1 != 5) {
    lVar1 = (long)param_1 * 0x18;
    local_30 = *(undefined8 *)(&DAT_04211620 + lVar1);
    puStack_28 = (&PTR_s_PLAY_UI_COMMON_RIDE_ICON_RUNNING_04211628)[(long)param_1 * 3];
    local_20 = *(undefined8 *)(&DAT_04211630 + lVar1);
    local_18 = (long *)0x0;
    FUN_028354b0(&local_30);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


