/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001037f0; name: FUN_001037f0
 */


undefined8 FUN_001037f0(int param_1,int param_2)

{
  void *pvVar1;
  
  if (param_1 != 1) {
    return 0x16;
  }
  if (DAT_0411a068 == 0xffffffff) {
    return 0;
  }
  pvVar1 = pthread_getspecific(DAT_0411a068);
  if (pvVar1 != (void *)0x0) {
    *(uint *)((long)pvVar1 + 0x24) = (uint)(param_2 != 0);
  }
  return 0;
}


