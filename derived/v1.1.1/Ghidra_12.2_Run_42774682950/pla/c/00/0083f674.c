/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083f674; name: FUN_0083f674
 */


void FUN_0083f674(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0xf8))(local_30);
  if (local_30[0] == 0) {
    *(char **)(param_2 + 0x40) = "SessionStatusCheckJob::CheckSessionStatus";
    *(undefined **)(param_2 + 0x30) = PTR_FUN_04377f70;
    *(undefined8 *)(param_2 + 0x38) = 0;
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


