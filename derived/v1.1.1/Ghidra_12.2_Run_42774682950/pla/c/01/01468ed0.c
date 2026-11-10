/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01468ed0; name: FUN_01468ed0
 */


void FUN_01468ed0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x8ea3ed3dd8c601e2;
  pcStack_38 = "ItemDescView";
  local_30 = 0xc;
  local_28 = (long *)0x0;
  lVar1 = FUN_0146fff8(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00d63d28(lVar1,param_2);
  return;
}


