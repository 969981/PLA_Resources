/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db7334; name: FUN_00db7334
 */


void FUN_00db7334(long param_1)

{
  long lVar1;
  long *local_18;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_18 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    FUN_00db73b0(&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 0x40))(local_18,param_1);
    }
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (lVar1 != 0) {
      FUN_02a43934();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x18))();
  }
  return;
}


