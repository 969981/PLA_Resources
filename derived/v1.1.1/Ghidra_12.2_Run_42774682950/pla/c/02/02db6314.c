/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02db6314; name: FUN_02db6314
 */


undefined8 FUN_02db6314(long param_1)

{
  long lVar1;
  
  if (((((*(long *)(param_1 + 0xa0) == 0) || (*(char *)(*(long *)(param_1 + 0xa0) + 0x1e1) != '\0'))
       && ((*(long *)(param_1 + 0xd0) == 0 || (*(char *)(*(long *)(param_1 + 0xd0) + 0x1e1) != '\0')
           ))) &&
      ((*(long *)(param_1 + 0x100) == 0 || (*(char *)(*(long *)(param_1 + 0x100) + 0x1e1) != '\0')))
      ) && (((*(long *)(param_1 + 0x130) == 0 ||
             (*(char *)(*(long *)(param_1 + 0x130) + 0x1e1) != '\0')) &&
            (((*(long *)(param_1 + 0x160) == 0 ||
              (*(char *)(*(long *)(param_1 + 0x160) + 0x1e1) != '\0')) &&
             ((*(long *)(param_1 + 400) == 0 ||
              (*(char *)(*(long *)(param_1 + 400) + 0x1e1) != '\0')))))))) {
    if (*(char *)(param_1 + 0x2b0) != '\0') {
      for (lVar1 = **(long **)(param_1 + 0x2d8); lVar1 != (*(long **)(param_1 + 0x2d8))[1];
          lVar1 = lVar1 + 0x30) {
        if ((*(long *)(lVar1 + 8) != 0) && (*(char *)(*(long *)(lVar1 + 8) + 0x1e1) == '\0')) {
          return 0;
        }
      }
    }
    if (((((*(long *)(param_1 + 0x1c0) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x1c0) + 0x1e1) != '\0')) &&
         ((*(long *)(param_1 + 0x220) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x220) + 0x1e1) != '\0')))) &&
        (((*(long *)(param_1 + 0x1f0) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x1f0) + 0x1e1) != '\0')) &&
         ((*(long *)(param_1 + 0x250) == 0 ||
          (*(char *)(*(long *)(param_1 + 0x250) + 0x1e1) != '\0')))))) &&
       ((*(long *)(param_1 + 0x280) == 0 || (*(char *)(*(long *)(param_1 + 0x280) + 0x1e1) != '\0'))
       )) {
      return 1;
    }
  }
  return 0;
}


