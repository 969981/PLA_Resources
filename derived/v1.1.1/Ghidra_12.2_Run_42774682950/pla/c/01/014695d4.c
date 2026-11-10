/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014695d4; name: thunk_FUN_01460a04
 */


void thunk_FUN_01460a04(int param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  long *plStack_18;
  
  if (param_1 != 5) {
    lVar1 = (long)param_1 * 0x18;
    uStack_30 = *(undefined8 *)(&DAT_04211620 + lVar1);
    puStack_28 = (&PTR_s_PLAY_UI_COMMON_RIDE_ICON_RUNNING_04211628)[(long)param_1 * 3];
    uStack_20 = *(undefined8 *)(&DAT_04211630 + lVar1);
    plStack_18 = (long *)0x0;
    FUN_028354b0(&uStack_30);
    if (plStack_18 != (long *)0x0) {
      (**(code **)(*plStack_18 + 0x20))();
    }
  }
  return;
}


