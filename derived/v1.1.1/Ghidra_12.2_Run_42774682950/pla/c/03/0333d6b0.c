/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d6b0; name: FUN_0333d6b0
 */


void FUN_0333d6b0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x118);
  lVar2 = *(long *)(param_3 + 0x120);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x120) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x118) = lVar1;
  }
  if (*param_1 == param_2) {
    *param_1 = lVar2;
  }
  if (param_1[1] == param_3) {
    param_1[1] = lVar1;
  }
  *(undefined8 *)(param_3 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  return;
}


