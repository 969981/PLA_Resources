/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e5b70; name: FUN_007e5b70
 */


void FUN_007e5b70(undefined8 *param_1)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  *param_1 = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_38);
  *(undefined4 *)param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee660((undefined4 *)((long)param_1 + 4),local_38);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


