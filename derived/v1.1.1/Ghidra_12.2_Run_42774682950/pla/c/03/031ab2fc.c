/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ab2fc; name: FUN_031ab2fc
 */


void FUN_031ab2fc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  
  plVar4 = (long *)(*param_1 & 0xfffffffffffffffc);
  *param_1 = (ulong)plVar4 | 1;
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = plVar4[1];
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffc);
    if ((uVar2 & 3) == 0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      puVar1 = (ulong *)(plVar4 + 1);
    }
    else {
      (**(code **)(*plVar4 + 8))();
      *param_1 = *param_1 & 3 | (ulong)plVar3;
      puVar1 = param_1;
    }
    while (plVar3 != (long *)0x0) {
      puVar5 = (ulong *)(plVar3 + 1);
      uVar2 = *puVar5;
      plVar4 = (long *)(uVar2 & 0xfffffffffffffffc);
      if ((uVar2 & 3) == 0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
        plVar3 = plVar4;
        puVar1 = puVar5;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3);
        *puVar1 = *puVar1 & 3 | (ulong)plVar4;
        plVar3 = plVar4;
      }
    }
    uVar2 = *param_1 & 0xfffffffffffffffc;
  }
  *param_1 = uVar2;
  return;
}


