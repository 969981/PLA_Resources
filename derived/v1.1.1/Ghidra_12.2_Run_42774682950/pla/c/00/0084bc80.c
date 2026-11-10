/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084bc80; name: FUN_0084bc80
 */


bool FUN_0084bc80(long param_1,long param_2)

{
  if ((param_2 == 0) || (*(long *)(param_1 + 8) == param_2)) {
    return false;
  }
  if (((*(long *)(param_1 + 0x3f8) == param_2) ||
      (((*(long *)(param_1 + 0x400) == param_2 || (*(long *)(param_1 + 0x408) == param_2)) ||
       (*(long *)(param_1 + 0x410) == param_2)))) ||
     (((((*(long *)(param_1 + 0x418) == param_2 || (*(long *)(param_1 + 0x420) == param_2)) ||
        (*(long *)(param_1 + 0x428) == param_2)) ||
       (((*(long *)(param_1 + 0x430) == param_2 || (*(long *)(param_1 + 0x438) == param_2)) ||
        ((((*(long *)(param_1 + 0x440) == param_2 ||
           (((*(long *)(param_1 + 0x448) == param_2 || (*(long *)(param_1 + 0x450) == param_2)) ||
            (*(long *)(param_1 + 0x458) == param_2)))) ||
          ((*(long *)(param_1 + 0x460) == param_2 || (*(long *)(param_1 + 0x468) == param_2)))) ||
         (*(long *)(param_1 + 0x470) == param_2)))))) ||
      (((*(long *)(param_1 + 0x478) == param_2 || (*(long *)(param_1 + 0x480) == param_2)) ||
       ((*(long *)(param_1 + 0x488) == param_2 ||
        ((((*(long *)(param_1 + 0x490) == param_2 || (*(long *)(param_1 + 0x498) == param_2)) ||
          (*(long *)(param_1 + 0x4a0) == param_2)) || (*(long *)(param_1 + 0x4a8) == param_2))))))))
     )) {
    return true;
  }
  return *(long *)(param_1 + 0x4b0) == param_2;
}


