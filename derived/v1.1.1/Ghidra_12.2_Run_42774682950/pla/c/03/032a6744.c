/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a6744; name: FUN_032a6744
 */


void FUN_032a6744(long param_1,ulong param_2)

{
  size_t __n;
  undefined *puVar1;
  void *__dest;
  ulong local_28;
  
  puVar1 = PTR_PTR_0434a080;
  if (*(ulong *)(param_1 + 0x140) < param_2) {
    local_28 = param_2;
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_0434a080 + 0x10))
                               (PTR_PTR_0434a080,param_2,&local_28);
    __n = *(ulong *)(param_1 + 0x138);
    if (local_28 <= *(ulong *)(param_1 + 0x138)) {
      __n = local_28;
    }
    memcpy(__dest,*(void **)(param_1 + 0x130),__n);
    if (*(char *)(param_1 + 0x148) == '\0') {
      (**(code **)(*(long *)puVar1 + 0x18))
                (puVar1,*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x140));
    }
    *(void **)(param_1 + 0x130) = __dest;
    *(ulong *)(param_1 + 0x140) = local_28;
    *(undefined1 *)(param_1 + 0x148) = 0;
    param_2 = local_28;
  }
  *(ulong *)(param_1 + 0x138) = param_2;
  return;
}


