/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302d690; name: FUN_0302d690
 */


void FUN_0302d690(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  
  plVar1 = (long *)(*param_1 & 0xfffffffffffffffc);
  *param_1 = (ulong)plVar1 | 1;
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar2 = param_1;
    do {
      while( true ) {
        puVar5 = (ulong *)(plVar1 + 1);
        uVar3 = *puVar5;
        plVar4 = (long *)(uVar3 & 0xfffffffffffffffc);
        if ((uVar3 & 3) != 0) break;
        (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
        plVar1 = plVar4;
        puVar2 = puVar5;
        if (plVar4 == (long *)0x0) goto LAB_0302d6f0;
      }
      (**(code **)(*plVar1 + 8))();
      *puVar2 = *puVar2 & 3 | (ulong)plVar4;
      plVar1 = plVar4;
    } while (plVar4 != (long *)0x0);
LAB_0302d6f0:
    uVar3 = *param_1 & 0xfffffffffffffffc;
  }
  *param_1 = uVar3;
  return;
}


