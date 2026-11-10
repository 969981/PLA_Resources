/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025e684; name: FUN_0025e684
 */


long FUN_0025e684(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    lVar3 = 0;
  }
  else {
    iVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = FUN_00250f00(param_2,0x10,0x40);
      lVar2 = FUN_00250f00(param_2,0x10,0x10);
      iVar4 = iVar4 + 1;
      lVar3 = lVar1 + lVar3 + lVar2;
    } while (iVar4 < *(int *)(param_1 + 0x50));
  }
  return lVar3;
}


