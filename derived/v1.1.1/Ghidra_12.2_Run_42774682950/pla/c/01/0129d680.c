/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129d680; name: FUN_0129d680
 */


long * FUN_0129d680(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long local_60 [3];
  long *local_48;
  
  if (param_1 != param_2) {
    do {
      FUN_02a47560(local_60,*param_1 + 0x5a0);
      lVar1 = local_60[0];
      lVar2 = *param_3;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == lVar2) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


