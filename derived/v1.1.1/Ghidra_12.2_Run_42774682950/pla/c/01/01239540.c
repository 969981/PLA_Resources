/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01239540; name: FUN_01239540
 */


undefined4 * FUN_01239540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      plVar5 = *(long **)(param_1 + 2);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar3 = *(long **)(param_3 + 2);
      *(long **)(param_3 + 2) = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
      plVar5 = *(long **)(param_1 + 6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar3 = *(long **)(param_3 + 6);
      *(long **)(param_3 + 6) = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      plVar5 = *(long **)(param_1 + 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar3 = *(long **)(param_3 + 8);
      *(long **)(param_3 + 8) = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_1 + 10);
      plVar5 = *(long **)(param_1 + 0xc);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar3 = *(long **)(param_3 + 0xc);
      *(long **)(param_3 + 0xc) = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      puVar1 = (undefined8 *)(param_1 + 0xe);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x12);
      param_1 = param_1 + 0x14;
      *(undefined8 *)(param_3 + 0xe) = *puVar1;
      *(undefined8 *)(param_3 + 0x10) = uVar2;
      *(undefined8 *)(param_3 + 0x12) = uVar4;
      param_3 = param_3 + 0x14;
    } while (param_1 != param_2);
  }
  return param_3;
}


