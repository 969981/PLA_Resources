/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00102160; name: FUN_00102160
 */


undefined8 FUN_00102160(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_once((pthread_once_t *)PTR_DAT_043722e8,(__init_routine *)PTR_LAB_043722f0);
  if (iVar1 != 0) {
    return 0xffffffffffffffff;
  }
  pvVar2 = calloc(1,0x100);
  if (pvVar2 == (void *)0x0) {
    *param_1 = 0;
    return 0xfffffffffffffff7;
  }
  *(undefined4 *)((long)pvVar2 + 0x20) = param_2;
  *param_1 = pvVar2;
  return 0;
}


