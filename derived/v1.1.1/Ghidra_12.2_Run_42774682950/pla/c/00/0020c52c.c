/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c52c; name: FUN_0020c52c
 */


undefined8 FUN_0020c52c(long param_1)

{
  undefined8 uVar1;
  long local_18;
  
  if (**(long **)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
      uVar1 = 0xfffffe0a;
    }
    else {
      uVar1 = FUN_0020c31c(&local_18,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10)
                          );
      if ((int)uVar1 == 0) {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        **(long **)(param_1 + 8) = local_18;
        *(long *)(param_1 + 8) = local_18;
        *(long *)(local_18 + 0x18) = *(long *)(local_18 + 0x18) + *(long *)(param_1 + 0x38);
        *(long *)(*(long *)(param_1 + 8) + 0x20) =
             *(long *)(*(long *)(param_1 + 8) + 0x20) + *(long *)(param_1 + 0x38);
      }
    }
  }
  else {
    uVar1 = 0;
    *(long *)(param_1 + 8) = **(long **)(param_1 + 8);
  }
  return uVar1;
}


