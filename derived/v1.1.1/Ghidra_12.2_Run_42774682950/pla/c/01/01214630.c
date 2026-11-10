/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214630; name: FUN_01214630
 */


void FUN_01214630(long param_1,undefined2 *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  *param_2 = 0x101;
  if (**(int **)(param_1 + 0x1648) == 1) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (**(int **)(param_1 + 0x1648) == 2) {
    uVar3 = 0;
    uVar2 = 0;
    *(undefined1 *)((long)param_2 + 1) = 0;
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
  }
  plVar1 = *(long **)(param_2 + 0x10);
  *(undefined1 *)((long)param_2 + 3) = uVar2;
  *(undefined1 *)(param_2 + 1) = uVar3;
  *(undefined8 *)(param_2 + 4) = 0x5bafd4a4dafa939b;
  *(char **)(param_2 + 8) = "work_box_top_00";
  *(undefined8 *)(param_2 + 0xc) = 0xf;
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_01214708(param_1);
  FUN_01214800(param_1);
  FUN_01214a48(param_1);
  FUN_01214c08(param_1);
  FUN_01214dc8(param_1);
  FUN_00d5fcfc(param_1,0x80,0xc9);
  return;
}


