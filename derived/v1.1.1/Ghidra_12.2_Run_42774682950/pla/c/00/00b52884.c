/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b52884; name: FUN_00b52884
 */


void FUN_00b52884(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x1f0);
  if (*(int *)(lVar4 + 0x88) == 0) {
    local_28 = *param_2;
    puVar1 = (undefined8 *)FUN_00b52d20(lVar4,&local_28);
    plVar5 = (long *)*puVar1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    plVar2 = *(long **)(lVar4 + 0x70);
    *(long **)(lVar4 + 0x70) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    *(undefined8 *)(lVar4 + 0x80) = local_28;
    if (*(long **)(lVar4 + 0x68) == (long *)0x0) {
      if (*(long **)(lVar4 + 0x70) == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        (**(code **)(**(long **)(lVar4 + 0x70) + 0x30))();
        uVar3 = 2;
      }
    }
    else {
      (**(code **)(**(long **)(lVar4 + 0x68) + 0x40))();
      uVar3 = 1;
    }
    *(undefined4 *)(lVar4 + 0x88) = uVar3;
  }
  return;
}


