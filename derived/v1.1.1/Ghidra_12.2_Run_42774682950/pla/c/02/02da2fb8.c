/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da2fb8; name: FUN_02da2fb8
 */


void FUN_02da2fb8(long param_1,long param_2)

{
  size_t __n;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  __n = *(size_t *)(param_2 + 0x10);
  if (__n - 1 < 0x10) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = (undefined4)__n;
    strncpy((char *)&local_38,*(char **)(param_2 + 8),__n);
    *(undefined8 *)(param_1 + 0x24) = uStack_30;
    *(undefined8 *)(param_1 + 0x1c) = local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_28;
    if (*(char *)(param_1 + 0x18) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


