/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3845c; name: FUN_02b3845c
 */


undefined4 FUN_02b3845c(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  uVar4 = param_3;
  if (plVar5 != plVar2) {
    do {
      lVar3 = *(long *)(*plVar5 + 0xe8);
      for (lVar1 = *(long *)(*plVar5 + 0xe0); lVar1 != lVar3; lVar1 = lVar1 + 8) {
        uVar4 = FUN_02b384fc(param_1 + -0x58,lVar1,param_3);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
  }
  return uVar4;
}


