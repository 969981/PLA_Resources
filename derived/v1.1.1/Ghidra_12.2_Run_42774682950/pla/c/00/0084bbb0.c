/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084bbb0; name: FUN_0084bbb0
 */


bool FUN_0084bbb0(long param_1)

{
  if ((((((*(long *)(param_1 + 0x3f8) == 0) && (*(long *)(param_1 + 0x400) == 0)) &&
        (*(long *)(param_1 + 0x408) == 0)) &&
       (((*(long *)(param_1 + 0x410) == 0 && (*(long *)(param_1 + 0x418) == 0)) &&
        ((*(long *)(param_1 + 0x420) == 0 &&
         ((*(long *)(param_1 + 0x428) == 0 && (*(long *)(param_1 + 0x430) == 0)))))))) &&
      ((*(long *)(param_1 + 0x438) == 0 &&
       ((((((*(long *)(param_1 + 0x440) == 0 && (*(long *)(param_1 + 0x448) == 0)) &&
           (*(long *)(param_1 + 0x450) == 0)) &&
          ((*(long *)(param_1 + 0x458) == 0 && (*(long *)(param_1 + 0x460) == 0)))) &&
         ((*(long *)(param_1 + 0x468) == 0 &&
          ((*(long *)(param_1 + 0x470) == 0 && (*(long *)(param_1 + 0x478) == 0)))))) &&
        (*(long *)(param_1 + 0x480) == 0)))))) &&
     ((((*(long *)(param_1 + 0x488) == 0 && (*(long *)(param_1 + 0x490) == 0)) &&
       (*(long *)(param_1 + 0x498) == 0)) &&
      ((*(long *)(param_1 + 0x4a0) == 0 && (*(long *)(param_1 + 0x4a8) == 0)))))) {
    return *(long *)(param_1 + 0x4b0) != 0;
  }
  return true;
}


