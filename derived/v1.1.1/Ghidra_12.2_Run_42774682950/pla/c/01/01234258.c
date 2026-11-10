/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234258; name: FUN_01234258
 */


void FUN_01234258(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x850);
    plVar5 = *(long **)(param_1 + 0x858);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)(param_2 + 2);
    *(long **)(param_2 + 2) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x860);
    plVar5 = *(long **)(param_1 + 0x868);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)(param_2 + 6);
    *(long **)(param_2 + 6) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    plVar5 = *(long **)(param_1 + 0x870);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)(param_2 + 8);
    *(long **)(param_2 + 8) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0x878);
    plVar5 = *(long **)(param_1 + 0x880);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar2 = *(long **)(param_2 + 0xc);
    *(long **)(param_2 + 0xc) = plVar5;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x888);
    uVar4 = *(undefined8 *)(param_1 + 0x898);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x890);
    *(undefined8 *)(param_2 + 0x12) = uVar4;
    *(undefined8 *)(param_2 + 0xe) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x8a0);
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_1 + 0x8a4);
    param_2[0x14] = uVar1;
  }
  return;
}


