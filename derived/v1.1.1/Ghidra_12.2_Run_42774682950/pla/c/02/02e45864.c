/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e45864; name: FUN_02e45864
 */


undefined8 FUN_02e45864(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 0x30) << 3;
    plVar2 = *(long **)(param_1 + 0x28);
    do {
      if (*plVar2 == param_2) goto LAB_02e458cc;
      lVar4 = lVar4 + -8;
      plVar2 = plVar2 + 1;
    } while (lVar4 != 0);
  }
  plVar2 = (long *)FUN_02e466c4();
  if ((plVar2 == (long *)0x0) ||
     ((*plVar2 = param_2, (param_3 & 1) != 0 &&
      (iVar1 = FUN_02e45864(param_2,param_1,0), iVar1 != 1)))) {
    FUN_02e465cc(param_1,param_2,1);
    uVar3 = 0x34;
  }
  else {
LAB_02e458cc:
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  return uVar3;
}


