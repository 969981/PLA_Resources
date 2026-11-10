/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039a498; name: FUN_0039a498
 */


void FUN_0039a498(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_48 [24];
  
  puVar4 = *(undefined8 **)(param_2 + param_3 * 8);
  plVar6 = (long *)*puVar4;
  do {
    puVar5 = (undefined8 *)plVar6[4];
    lVar1 = FUN_00399990(param_1,*puVar5);
    FUN_0039a140(auStack_48,param_1,*(long *)(param_1 + 8) - 1U & *(long *)(param_1 + 0x10) + lVar1,
                 puVar5);
    plVar2 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar2 = plVar6 + 2;
      plVar3 = (long *)*plVar2;
      if ((long *)*plVar3 != plVar6) {
        do {
          lVar1 = *plVar2;
          plVar2 = (long *)(lVar1 + 0x10);
          plVar3 = (long *)*plVar2;
        } while (*plVar3 != lVar1);
      }
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
    plVar6 = plVar3;
  } while (plVar3 != puVar4 + 1);
  lVar1 = *(long *)(param_1 + 0x28);
  FUN_00399464(puVar4,puVar4[1]);
  if (lVar1 == 0) {
    FUN_002ee710(puVar4);
  }
  return;
}


