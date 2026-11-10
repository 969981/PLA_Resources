/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c7770; name: FUN_031c7770
 */


void FUN_031c7770(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  
  plVar1 = (long *)(*param_1 & 0xfffffffffffffffc);
  *param_1 = (ulong)plVar1 | 1;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = param_1;
    do {
      while( true ) {
        puVar5 = (ulong *)(plVar1 + 1);
        uVar2 = *puVar5;
        plVar4 = (long *)(uVar2 & 0xfffffffffffffffc);
        if ((uVar2 & 3) == 0) break;
        (**(code **)(*plVar1 + 8))();
        *puVar3 = *puVar3 & 3 | (ulong)plVar4;
        plVar1 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_031c77fc;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      plVar1 = plVar4;
      puVar3 = puVar5;
    } while (plVar4 != (long *)0x0);
LAB_031c77fc:
    uVar2 = *param_1 & 0xfffffffffffffffc;
  }
  *param_1 = uVar2;
  return;
}


