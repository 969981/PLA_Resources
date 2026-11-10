/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146995c; name: FUN_0146995c
 */


void FUN_0146995c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar1 = FUN_01468650(*(undefined8 *)(param_1 + 0x4c8),"PlaceNameView");
  if (lVar1 != 0) {
    FUN_0147f78c(lVar1,param_2);
    local_40 = 0x6bcce3c5c48c59a;
    pcStack_38 = "NotifyView_0";
    local_30 = 0xc;
    local_28 = (long *)0x0;
    lVar1 = FUN_014703a4(*(undefined8 *)(param_1 + 0x4c8),&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    if (lVar1 != 0) {
      if ((*(char *)(param_1 + 0x6a2) == '\0') && (*(long *)(lVar1 + 0x668) != 0)) {
        *(undefined1 *)(param_1 + 0x6a2) = 1;
        FUN_0147b82c(lVar1);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


