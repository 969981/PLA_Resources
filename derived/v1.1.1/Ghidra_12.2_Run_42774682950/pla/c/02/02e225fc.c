/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e225fc; name: FUN_02e225fc
 */


undefined8 FUN_02e225fc(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*DAT_044094f8;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,0x20000);
  }
  plVar1 = (long *)FUN_02e226a4(param_1 + 0x10);
  if ((lVar4 == 0) || (plVar1 == (long *)0x0)) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  else {
    *plVar1 = lVar4;
    uVar2 = 1;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return uVar2;
}


