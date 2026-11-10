/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00857600; name: FUN_00857600
 */


void FUN_00857600(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int *piVar2;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  puVar1 = PTR_DAT_043773c0;
  piVar2 = local_40;
  if (*(char *)(param_2 + 8) == '\0') {
    local_30[0] = 0x10408;
    local_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
    piVar2 = local_30;
  }
  else {
    FUN_0085506c(local_30,*(undefined8 *)PTR_DAT_043773c0,param_2 + 0x10,param_2 + 0x1920,
                 param_2 + 0x3230,param_2 + 0x4b40);
    if (local_30[0] == 0) {
      FUN_00855170(*(undefined8 *)puVar1);
      local_40[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
    }
    else {
      piVar2 = local_30;
    }
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


