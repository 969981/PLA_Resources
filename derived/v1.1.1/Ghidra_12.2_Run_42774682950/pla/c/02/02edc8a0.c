/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc8a0; name: FUN_02edc8a0
 */


undefined8 FUN_02edc8a0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar2 = plVar5 + uVar3;
  if ((uVar3 != 0) && (*plVar5 != param_2)) {
    lVar7 = (ulong)uVar3 * 8;
    plVar6 = plVar5;
    do {
      lVar7 = lVar7 + -8;
      plVar5 = plVar2;
      if (lVar7 == 0) break;
      plVar5 = plVar6 + 1;
      plVar1 = plVar6 + 1;
      plVar6 = plVar5;
    } while (*plVar1 != param_2);
  }
  uVar4 = 2;
  if ((plVar5 != (long *)0x0) && (uVar4 = 2, plVar2 != plVar5)) {
    if (*(short *)(param_2 + 0x40) == -1) {
      return 2;
    }
    uVar4 = 1;
    *(short *)(param_2 + 0x40) = *(short *)(param_2 + 0x40) + 1;
  }
  return uVar4;
}


