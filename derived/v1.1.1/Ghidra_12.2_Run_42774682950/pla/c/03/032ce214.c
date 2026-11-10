/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce214; name: FUN_032ce214
 */


void FUN_032ce214(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_032cd60c(param_1,*(undefined8 *)(param_1 + 0x18));
  lVar2 = FUN_032cd60c(param_1,*(undefined8 *)(param_1 + 0x20));
  *param_2 = lVar2 + lVar1;
  lVar1 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x68);
  lVar3 = *(long *)(param_1 + 8) * lVar2;
  param_2[3] = lVar3;
  param_2[1] = *(long *)(param_1 + 8) * (lVar1 - lVar2);
  lVar1 = *(long *)(param_1 + 8);
  param_2[4] = lVar3;
  param_2[5] = lVar1;
  return;
}


