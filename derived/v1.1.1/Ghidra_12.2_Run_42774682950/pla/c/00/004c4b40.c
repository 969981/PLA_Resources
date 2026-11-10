/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4b40; name: FUN_004c4b40
 */


undefined8 FUN_004c4b40(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e0);
  *param_3 = 0;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
    return 0;
  }
  *param_2 = *(long *)(lVar1 + 0x18);
  *param_3 = *(undefined8 *)(lVar1 + 0x20);
  return 1;
}


