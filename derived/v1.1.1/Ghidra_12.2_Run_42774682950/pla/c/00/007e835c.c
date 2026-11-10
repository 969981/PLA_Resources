/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e835c; name: FUN_007e835c
 */


void FUN_007e835c(undefined8 param_1,long param_2)

{
  void *__src;
  undefined4 uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 0x18) != 1) {
    if (*(int *)(param_2 + 0x18) == 0) {
      local_38[0] = 0x10408;
      goto LAB_007e83dc;
    }
    __src = (void *)(param_2 + 0x28);
    memmove((void *)((long)__src +
                    ((ulong)*(uint *)(param_2 + 0x10) - (ulong)*(uint *)(param_2 + 0x14))),__src,
            (ulong)*(uint *)(param_2 + 0x14));
    uVar1 = FUN_007ecaf8(__src,*(uint *)(param_2 + 0x10) + 1,
                         (long)__src +
                         ((ulong)*(uint *)(param_2 + 0x10) - (ulong)*(uint *)(param_2 + 0x14)));
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = 1;
  }
  local_38[0] = 0;
LAB_007e83dc:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


