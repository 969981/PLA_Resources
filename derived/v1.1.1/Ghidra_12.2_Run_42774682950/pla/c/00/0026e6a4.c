/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e6a4; name: FUN_0026e6a4
 */


undefined8 FUN_0026e6a4(long param_1)

{
  int iVar1;
  
  if ((((*(char *)(*(long *)(param_1 + 0x78) + 0xe) != '\0') &&
       (iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x260), -1 < iVar1)) &&
      (*(float *)(param_1 + 0x68) + (float)*(int *)(*(long *)(param_1 + 0xa0) + 0x8b8) +
       (float)iVar1 <= *(float *)(param_1 + 0x44))) &&
     ((*(char *)(*(long *)(param_1 + 0xa0) + 0x752) != '\0' || (*(int *)(param_1 + 0x2c) < 1)))) {
    return 1;
  }
  return 0;
}


