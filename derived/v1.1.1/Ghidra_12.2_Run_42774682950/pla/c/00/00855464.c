/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855464; name: FUN_00855464
 */


void FUN_00855464(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = local_40;
  if ((*(long *)(param_2 + 0x18) == 0) || (*(long *)(param_2 + 0x20) == 0)) {
    local_30[0] = 0x10408;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    puVar1 = local_30;
  }
  else {
    local_30[0] = 0;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    FUN_00857fdc(local_40,*(undefined8 *)(param_2 + 0x18));
    FUN_007ee660(local_30,local_40);
    FUN_00857fdc(local_40,*(undefined8 *)(param_2 + 0x20));
    FUN_007ee660(local_30,local_40);
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  FUN_007ee578(param_1,puVar1);
  return;
}


