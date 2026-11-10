/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01466eb4; name: FUN_01466eb4
 */


void FUN_01466eb4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x6bcce3c5c48c59a;
  pcStack_38 = "NotifyView_0";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  lVar1 = FUN_014703a4(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((param_2 & 1) == 0) {
    lVar2 = *(long *)(lVar1 + 0x668);
  }
  else {
    FUN_0147bdc0(lVar1);
    lVar2 = *(long *)(lVar1 + 0x668);
  }
  if (lVar2 != 0) {
    FUN_0147b82c(lVar1);
  }
  return;
}


