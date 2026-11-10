/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032182cc; name: FUN_032182cc
 */


void FUN_032182cc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  
  plVar1 = (long *)(*param_1 & 0xfffffffffffffffc);
  *param_1 = (ulong)plVar1 | 1;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = param_1;
    do {
      while( true ) {
        puVar5 = (ulong *)(plVar1 + 1);
        uVar2 = *puVar5;
        plVar3 = (long *)(uVar2 & 0xfffffffffffffffc);
        if ((uVar2 & 3) == 0) break;
        (**(code **)(*plVar1 + 8))();
        *puVar4 = *puVar4 & 3 | (ulong)plVar3;
        plVar1 = plVar3;
        if (plVar3 == (long *)0x0) goto LAB_03218378;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
      plVar1 = plVar3;
      puVar4 = puVar5;
    } while (plVar3 != (long *)0x0);
LAB_03218378:
    uVar2 = *param_1 & 0xfffffffffffffffc;
  }
  *param_1 = uVar2;
  return;
}


