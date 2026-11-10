/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260c968; name: FUN_0260c968
 */


void FUN_0260c968(long param_1,byte param_2)

{
  if (((((*(char *)(param_1 + 0x37c) == '\0') || (*(long *)(param_1 + 0x348) == 0)) ||
       (*(int *)(*(long *)(param_1 + 0x348) + 0xc) == 0)) ||
      ((((*(long *)(param_1 + 0x318) == 0 || (*(int *)(*(long *)(param_1 + 0x318) + 0xc) == 0)) ||
        ((*(long *)(param_1 + 0x328) == 0 ||
         ((*(int *)(*(long *)(param_1 + 0x328) + 0xc) == 0 || (*(long *)(param_1 + 0x338) == 0))))))
       || (*(int *)(*(long *)(param_1 + 0x338) + 0xc) == 0)))) ||
     (((*(long *)(param_1 + 0x358) == 0 || (*(int *)(*(long *)(param_1 + 0x358) + 0xc) == 0)) ||
      (*(long *)(param_1 + 0x368) == 0)))) {
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  else {
    if (((*(int *)(*(long *)(param_1 + 0x368) + 0xc) != 0 ^ param_2) & 1) == 0) {
      return;
    }
    if ((param_2 & 1) == 0) {
      FUN_0260d98c(param_1);
      goto LAB_0260ca30;
    }
  }
  FUN_0260ca3c(param_1);
LAB_0260ca30:
  *(byte *)(param_1 + 0x37c) = param_2 & 1;
  return;
}


