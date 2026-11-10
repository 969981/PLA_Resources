/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844870; name: FUN_00844870
 */


void FUN_00844870(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  FUN_007f1c1c(local_40,*(undefined8 *)(param_2 + 0xe0));
  *(undefined4 *)(param_2 + 0x30) = 4000;
  FUN_007f1d00(local_50,*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0x28));
  FUN_007ee660(local_40,local_50);
  FUN_007f1ce8(*(undefined8 *)(param_2 + 0xe0));
  if (local_40[0] == 0) {
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar1 = local_40;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


