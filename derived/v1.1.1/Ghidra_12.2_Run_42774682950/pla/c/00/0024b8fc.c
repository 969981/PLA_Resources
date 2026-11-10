/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024b8fc; name: FUN_0024b8fc
 */


void FUN_0024b8fc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    FUN_0022ff14(plVar3 + 3,param_2,(char)plVar3[0xb] == '\0');
    if (param_1 != plVar3) {
      plVar1 = (long *)plVar3[1];
      lVar2 = *plVar1;
      *(long **)(*plVar3 + 8) = plVar1;
      *plVar1 = *plVar3;
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
    }
    FUN_00232674(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}


