/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e18e80; name: FUN_00e18e80
 */


void FUN_00e18e80(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = FUN_008cca50();
  puVar3 = PTR_LAB_0437c038;
  lVar2 = lVar4 + 0x91;
  if ((*(byte *)(lVar4 + 0x90) & 1) != 0) {
    lVar2 = *(long *)(lVar4 + 0xa0);
  }
  plVar1 = (long *)(param_1 + (long)*param_2 * 0x10);
  *plVar1 = lVar2;
  plVar1[1] = (long)puVar3;
  *param_2 = *param_2 + 1;
  return;
}


