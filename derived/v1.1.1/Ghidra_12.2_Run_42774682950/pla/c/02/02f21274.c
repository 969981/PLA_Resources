/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f21274; name: FUN_02f21274
 */


undefined8 FUN_02f21274(long param_1,uint *param_2)

{
  void *__dest;
  
  if ((*(byte *)(param_1 + 0x82) >> 4 & 1) == 0) {
    __dest = (void *)FUN_02f59e30(5,*param_2);
    *(void **)(param_1 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    memcpy(__dest,*(void **)(param_2 + 2),(ulong)*param_2);
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
  }
  return 1;
}


