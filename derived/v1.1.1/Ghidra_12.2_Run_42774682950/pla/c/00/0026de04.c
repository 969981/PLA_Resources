/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026de04; name: FUN_0026de04
 */


undefined8 FUN_0026de04(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x20;
  lVar2 = *(long *)(param_1 + 0x700);
  *(undefined8 *)(lVar1 + 0x720) = param_3;
  *(long *)(lVar1 + 0x718) = lVar2;
  uVar3 = FUN_0026e908(lVar2,param_3,*(undefined8 *)(lVar2 + 0x1c8));
  *(undefined8 *)(lVar1 + 0x708) = uVar3;
  return 1;
}


