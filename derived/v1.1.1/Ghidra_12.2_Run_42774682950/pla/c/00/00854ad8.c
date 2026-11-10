/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854ad8; name: FUN_00854ad8
 */


void FUN_00854ad8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_008438b8(local_48,*(undefined8 *)(param_2 + 0x40),param_3);
  FUN_007ee660(local_38,local_48);
  FUN_008438b8(local_48,*(undefined8 *)(param_2 + 0x48),param_3);
  FUN_007ee660(local_38,local_48);
  local_48[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_48);
  return;
}


