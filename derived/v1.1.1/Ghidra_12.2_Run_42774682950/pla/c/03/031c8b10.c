/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c8b10; name: FUN_031c8b10
 */


void FUN_031c8b10(ulong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined4 local_48 [2];
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  uVar1 = *param_3;
  *param_1 = (ulong)plVar2 | 1;
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = param_1;
    do {
      while( true ) {
        puVar6 = (ulong *)(plVar2 + 1);
        uVar3 = *puVar6;
        plVar4 = (long *)(uVar3 & 0xfffffffffffffffc);
        if ((uVar3 & 3) == 0) break;
        (**(code **)(*plVar2 + 8))();
        *puVar5 = *puVar5 & 3 | (ulong)plVar4;
        plVar2 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_031c8bcc;
      }
      local_48[0] = uVar1;
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_48);
      plVar2 = plVar4;
      puVar5 = puVar6;
    } while (plVar4 != (long *)0x0);
LAB_031c8bcc:
    uVar3 = *param_1 & 0xfffffffffffffffc;
  }
  *param_1 = uVar3;
  return;
}


