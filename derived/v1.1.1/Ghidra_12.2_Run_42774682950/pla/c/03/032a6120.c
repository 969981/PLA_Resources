/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a6120; name: FUN_032a6120
 */


void FUN_032a6120(long param_1,void *param_2,ulong param_3)

{
  undefined *puVar1;
  void *__dest;
  ulong local_38;
  
  puVar1 = PTR_PTR_0434a080;
  __dest = *(void **)(param_1 + 0x130);
  if (__dest != param_2) {
    local_38 = param_3;
    if (*(ulong *)(param_1 + 0x140) < param_3) {
      if (*(char *)(param_1 + 0x148) == '\0') {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080);
      }
      __dest = (void *)(**(code **)(*(long *)puVar1 + 0x10))(puVar1,param_3,&local_38);
      *(void **)(param_1 + 0x130) = __dest;
      *(ulong *)(param_1 + 0x140) = local_38;
    }
    memcpy(__dest,param_2,local_38);
    *(ulong *)(param_1 + 0x138) = local_38;
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  return;
}


