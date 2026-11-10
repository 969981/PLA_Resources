/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082c728; name: FUN_0082c728
 */


void FUN_0082c728(long *param_1)

{
  long *plVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  (**(code **)(*param_1 + 0x38))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_007e5d18();
    }
    param_1[0xb] = 0;
  }
  plVar1 = param_1 + 0xc;
  if ((int)*plVar1 == 1) {
    FUN_007e5d18(plVar1);
  }
  FUN_007e5bd8(plVar1);
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee660(param_1 + 0x12,local_30);
  return;
}


