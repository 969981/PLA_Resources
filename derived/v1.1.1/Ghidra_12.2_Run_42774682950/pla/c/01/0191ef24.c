/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191ef24; name: FUN_0191ef24
 */


undefined1 FUN_0191ef24(long param_1)

{
  if (((((((*(long *)(param_1 + 0x70) == 0) ||
          (*(char *)(*(long *)(param_1 + 0x70) + 0x1e1) == '\0')) ||
         (*(long *)(param_1 + 0xa0) == 0)) ||
        (((*(char *)(*(long *)(param_1 + 0xa0) + 0x1e1) == '\0' || (*(long *)(param_1 + 0xd0) == 0))
         || ((*(char *)(*(long *)(param_1 + 0xd0) + 0x1e1) == '\0' ||
             ((*(long *)(param_1 + 0x100) == 0 ||
              (*(char *)(*(long *)(param_1 + 0x100) + 0x1e1) == '\0')))))))) ||
       ((*(long *)(param_1 + 0x130) == 0 ||
        (((*(char *)(*(long *)(param_1 + 0x130) + 0x1e1) == '\0' ||
          (*(long *)(param_1 + 0x160) == 0)) ||
         (*(char *)(*(long *)(param_1 + 0x160) + 0x1e1) == '\0')))))) ||
      (((*(long *)(param_1 + 400) == 0 || (*(char *)(*(long *)(param_1 + 400) + 0x1e1) == '\0')) ||
       (((*(long *)(param_1 + 0x1c0) == 0 ||
         ((*(char *)(*(long *)(param_1 + 0x1c0) + 0x1e1) == '\0' ||
          (*(long *)(param_1 + 0x1f0) == 0)))) ||
        (*(char *)(*(long *)(param_1 + 0x1f0) + 0x1e1) == '\0')))))) ||
     (((*(long *)(param_1 + 0x220) == 0 || (*(char *)(*(long *)(param_1 + 0x220) + 0x1e1) == '\0'))
      || (*(long *)(param_1 + 0x250) == 0)))) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x250) + 0x1e1);
}


