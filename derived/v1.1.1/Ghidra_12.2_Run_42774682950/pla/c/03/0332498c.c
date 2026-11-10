/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332498c; name: FUN_0332498c
 */


void FUN_0332498c(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  uVar2 = FUN_032cf7a8(*(undefined8 *)(*(long *)(lVar3 + 8) + 0x58),(long)param_2,0x40);
  *param_1 = uVar2;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  return;
}


