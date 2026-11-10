/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041fed0; name: FUN_0041fed0
 */


undefined8 FUN_0041fed0(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_3 == (long *)0x0) || (*param_3 == 0)) ||
      (lVar2 = *(long *)(param_4 + 0x20), lVar2 == 0)) ||
     (((*(byte *)(lVar2 + 8) >> 1 & 1) == 0 ||
      (puVar1 = (undefined8 *)(*param_3 + (long)*(int *)(lVar2 + 0x20)), *(int *)(puVar1 + 2) != 0))
     )) {
    return 0;
  }
  if (param_2 != (long *)0x0) {
    memcpy((void *)*param_2,(void *)*puVar1,puVar1[1]);
    *param_2 = *param_2 + puVar1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (int)puVar1[1];
  }
  return 1;
}


