/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a480; name: FUN_0082a480
 */


void FUN_0082a480(undefined8 param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int local_50 [4];
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = local_50;
  local_50[0] = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_40);
  if (param_3 == (long *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x50))(param_3);
    FUN_00829ca0(local_40,param_2,uVar1);
    FUN_007ee660(local_50,local_40);
    if (local_50[0] != 0) goto LAB_0082a5c4;
    piVar2 = *(int **)(param_2 + 0xa8);
    if ((*piVar2 != 1) && (*(char *)(param_2 + 0x470) != '\0')) {
      if (*(int *)(param_2 + 0xb0) != 0) {
        local_40[0] = 0;
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
        FUN_007ee660(param_2 + 0x120,local_40);
        FUN_007e5bd8(*(undefined8 *)(param_2 + 0xa8));
        piVar2 = *(int **)(param_2 + 0xa8);
        *(undefined4 *)(param_2 + 0xb0) = 0;
      }
      FUN_0082d208(local_40,*(undefined8 *)(param_2 + 0x48),piVar2,param_3);
      FUN_007ee660(local_50,local_40);
      if (local_50[0] == 0) {
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x48),0);
        *(undefined4 *)(param_2 + 0xb0) = 3;
      }
      goto LAB_0082a5c4;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  piVar3 = local_40;
LAB_0082a5c4:
  FUN_007ee578(param_1,piVar3);
  return;
}


