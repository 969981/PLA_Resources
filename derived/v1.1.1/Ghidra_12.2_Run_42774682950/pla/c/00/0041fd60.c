/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041fd60; name: FUN_0041fd60
 */


void FUN_0041fd60(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


