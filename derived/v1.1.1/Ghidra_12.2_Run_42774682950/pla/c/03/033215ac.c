/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033215ac; name: FUN_033215ac
 */


void FUN_033215ac(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_03321518();
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  plVar2 = (long *)param_1[7];
  param_1[7] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar1 = (long *)param_1[7];
  }
  if (plVar1 == (long *)0x0) {
    lVar3 = param_2[1];
    param_1[2] = lVar3;
    *param_1 = lVar3;
    param_1[1] = param_2[2] + lVar3;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


