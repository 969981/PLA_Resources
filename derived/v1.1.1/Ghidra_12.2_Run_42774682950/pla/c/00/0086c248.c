/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086c248; name: FUN_0086c248
 */


void FUN_0086c248(undefined8 param_1,long param_2,long *param_3,undefined2 *param_4)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0xb01) == '\0') {
    local_38[0] = 0x10408;
  }
  else {
    if (param_3 != (long *)0x0) {
      (**(code **)(*param_3 + 0x10))(local_38,param_3,param_2 + 0x38);
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = *(undefined2 *)(param_2 + 0xac8);
    }
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


