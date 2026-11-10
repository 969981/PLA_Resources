/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0146719c; name: FUN_0146719c
 */


void FUN_0146719c(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  undefined8 local_18;
  
  local_28 = (long *)0x0;
  local_18 = 0;
  local_40 = 0x75e8a7ee10d4a80;
  pcStack_38 = "PokedexView";
  local_30 = 0xb;
  lVar1 = FUN_01470c50(*(undefined8 *)(param_1 + 0x4c8),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_01480448(lVar1,&local_18);
  return;
}


