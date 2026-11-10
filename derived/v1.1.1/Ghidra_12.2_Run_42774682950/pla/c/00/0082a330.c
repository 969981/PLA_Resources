/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a330; name: FUN_0082a330
 */


void FUN_0082a330(undefined8 param_1,long param_2,long param_3)

{
  short sVar1;
  uint uVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  if (*(long **)(param_2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x60) + 0x10))();
  }
  if (param_3 == 0) {
LAB_0082a3a8:
    local_40[0] = 0x10407;
  }
  else {
    if (((**(int **)(param_2 + 0xa8) != 1) && (*(char *)(param_2 + 0x470) != '\0')) &&
       (sVar1 = FUN_0083385c(*(undefined8 *)(param_2 + 0x60)), sVar1 != 0)) {
      if ((*(int *)(param_3 + 0x10) == 0) ||
         (uVar2 = FUN_0083385c(*(undefined8 *)(param_2 + 0x60)),
         *(uint *)(param_3 + 0xc) <= (uVar2 & 0xffff))) {
        if ((*(int *)(param_2 + 0xb0) != 0) && (**(int **)(param_2 + 0xa8) != 1)) {
          local_40[0] = 0;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
          FUN_007ee660(param_2 + 0x120,local_40);
          FUN_007e5bd8(*(undefined8 *)(param_2 + 0xa8));
          *(undefined4 *)(param_2 + 0xb0) = 0;
        }
        FUN_0082cbac(local_40,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0xa8),
                     param_3,*(undefined8 *)(param_2 + 0x60));
        if (local_40[0] == 0) {
          FUN_007e5e70(*(undefined8 *)(param_2 + 0x40),0);
          *(undefined4 *)(param_2 + 0xb0) = 2;
        }
        goto LAB_0082a3d8;
      }
      goto LAB_0082a3a8;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
LAB_0082a3d8:
  FUN_007ee578(param_1,local_40);
  return;
}


