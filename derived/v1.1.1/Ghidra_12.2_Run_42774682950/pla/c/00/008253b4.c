/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008253b4; name: FUN_008253b4
 */


void FUN_008253b4(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_008252d4(param_1 + 6,(int)param_1[0x17]);
  if (lVar1 != param_1[0x18]) {
    do {
      (**(code **)(*param_1 + 0x80))(param_1,lVar1);
      lVar1 = FUN_008252d4(param_1 + 6,(int)param_1[0x17]);
    } while (lVar1 != param_1[0x18]);
  }
  return;
}


