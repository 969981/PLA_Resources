/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc938; name: FUN_02edc938
 */


undefined8 FUN_02edc938(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  short sVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar6 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar2 = plVar6 + uVar3;
  if ((uVar3 != 0) && (*plVar6 != param_2)) {
    lVar8 = (ulong)uVar3 * 8;
    plVar7 = plVar6;
    do {
      lVar8 = lVar8 + -8;
      plVar6 = plVar2;
      if (lVar8 == 0) break;
      plVar6 = plVar7 + 1;
      plVar1 = plVar7 + 1;
      plVar7 = plVar6;
    } while (*plVar1 != param_2);
  }
  if ((((plVar6 == (long *)0x0) || (plVar2 == plVar6)) ||
      ((sVar4 = *(short *)(param_2 + 0x40), sVar4 != 0 &&
       (*(short *)(param_2 + 0x40) = sVar4 + -1, sVar4 != 1)))) || (*(short *)(param_2 + 0x42) != 0)
     ) {
    return 1;
  }
  uVar5 = FUN_02edc4dc();
  return uVar5;
}


