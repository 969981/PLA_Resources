/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870a58; name: FUN_00870a58
 */


void FUN_00870a58(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_00870388();
  FUN_00870af4(local_38,param_2);
  *(undefined1 *)(param_2 + 0x1828) = 0;
  FUN_007e5bd8(param_2 + 0x6f8);
  FUN_008767d0(local_38,*(undefined8 *)(param_2 + 0x6f0),param_2 + 0x6f8,
               *(undefined8 *)(param_2 + 0x78));
  if (local_38[0] == 0) {
    FUN_007e5e70(*(undefined8 *)(param_2 + 0x6f0),0);
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar1 = local_48;
  }
  else {
    piVar1 = local_38;
  }
  FUN_007ee578(param_1,piVar1);
  return;
}


