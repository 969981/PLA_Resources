/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304af0; name: FUN_00304af0
 */


void FUN_00304af0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  void *local_20;
  undefined8 local_18;
  
  lVar1 = (long)param_2 + 9;
  if (*param_2 != 0) {
    lVar1 = param_2[2];
  }
  uVar2 = param_2[1] & 0xff;
  if (*param_2 != 0) {
    uVar2 = param_2[1];
  }
  local_20 = (void *)FUN_002ec480(lVar1,uVar2,param_3,&local_18);
                    /* try { // try from 00304b2c to 00304b37 has its CatchHandler @ 00304b58 */
  FUN_002f30a0(param_1,&local_20,local_18);
  __ptr = local_20;
  local_20 = (void *)0x0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00304b44 to 00304b47 has its CatchHandler @ 00304b54 */
    free(__ptr);
  }
  return;
}


