/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082ac78; name: FUN_0082ac78
 */


void FUN_0082ac78(undefined8 param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar2 = local_40;
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0083fb3c(*(undefined8 *)(param_2 + 0x28));
  }
  FUN_00847e68(*(long *)PTR_DAT_043773c0 + 0x10);
  FUN_007e8b44(*(undefined8 *)PTR_DAT_04377458);
  *(undefined4 *)(param_2 + 0x118) = 0;
  (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),1);
  FUN_0083f674(local_30,*(undefined8 *)(param_2 + 0x28));
  if (local_30[0] == 0) {
    FUN_007e5e70(*(undefined8 *)(param_2 + 0x28),0);
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  else {
    piVar2 = local_30;
  }
  FUN_007ee578(param_1,piVar2);
  return;
}


