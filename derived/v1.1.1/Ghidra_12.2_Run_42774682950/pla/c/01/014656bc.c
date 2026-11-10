/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014656bc; name: FUN_014656bc
 */


void FUN_014656bc(long param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar1 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = *(long *)(lVar1 + 0x3f50);
  if (*(char *)(lVar1 + 0x40) != '\0') {
    *(undefined1 *)(lVar1 + 0x40) = 0;
    local_40 = DAT_042116c8;
    puStack_38 = PTR_s_anime_L_ns_time_00_wake_042116d0;
    local_30 = DAT_042116d8;
    local_28 = (long *)0x0;
    FUN_0146119c(lVar1,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = DAT_042116b0;
    puStack_38 = PTR_s_anime_L_ns_time_00_close_042116b8;
    local_30 = DAT_042116c0;
    local_28 = (long *)0x0;
    lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 0x148);
    if (lVar1 != 0) {
      FUN_0283b1e8(lVar1,&local_40);
    }
  }
  return;
}


