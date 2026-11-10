/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0080f518; name: FUN_0080f518
 */


void FUN_0080f518(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  *(undefined1 *)(param_2 + 0x284) = 0;
  *(undefined1 *)(param_2 + 0x11e0) = 0;
  *(undefined1 *)(param_2 + 0x1232) = 0;
  FUN_0080fc68(local_30,*(undefined8 *)(param_2 + 0x11d8));
  if (local_30[0] == 0) {
    FUN_007e5e70(*(undefined8 *)(param_2 + 0x11d8),0);
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  else {
    piVar1 = local_30;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


