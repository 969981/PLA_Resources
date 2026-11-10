/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b383d8; name: FUN_02b383d8
 */


undefined4 FUN_02b383d8(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = (long *)param_2[1];
  uVar4 = param_3;
  for (param_2 = (long *)*param_2; param_2 != plVar2; param_2 = param_2 + 1) {
    lVar3 = *(long *)(*param_2 + 0xe8);
    for (lVar1 = *(long *)(*param_2 + 0xe0); lVar1 != lVar3; lVar1 = lVar1 + 8) {
      uVar4 = FUN_02b384fc(param_1,lVar1,param_3);
    }
  }
  return uVar4;
}


