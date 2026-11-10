/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085ab44; name: FUN_0085ab44
 */


void FUN_0085ab44(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_007ee578(param_1,local_38);
    return;
  }
  lVar1 = FUN_007e4e20();
  if (lVar1 != 0) {
    uVar2 = FUN_007e4e20();
    FUN_007e4e30(local_38,uVar2,0);
  }
  FUN_0085abd8(param_1,param_2,param_3);
  return;
}


