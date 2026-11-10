/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01437578; name: FUN_01437578
 */


void FUN_01437578(long param_1)

{
  long lVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0x9b8b982ef94b5681;
  pcStack_28 = "EnemyNSPlateView";
  local_20 = 0x10;
  uStack_18 = 0;
  lVar1 = FUN_01439dcc(*(undefined8 *)(param_1 + 0x4c8),&local_30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


