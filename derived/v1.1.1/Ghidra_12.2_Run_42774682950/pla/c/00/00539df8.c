/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00539df8; name: FUN_00539df8
 */


long FUN_00539df8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  void *__ptr;
  long lVar1;
  undefined8 uVar2;
  void *local_28;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x60);
  if (lVar1 != 0) {
    local_28 = (void *)*param_2;
    uVar2 = *param_1;
    *param_2 = 0;
                    /* try { // try from 00539e3c to 00539e47 has its CatchHandler @ 00539e70 */
    FUN_00539e90(lVar1,uVar2,&local_28,*param_3);
    __ptr = local_28;
    local_28 = (void *)0x0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 00539e54 to 00539e57 has its CatchHandler @ 00539e6c */
      free(__ptr);
    }
  }
  return lVar1;
}


