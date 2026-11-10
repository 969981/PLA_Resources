/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2a690; name: FUN_01b2a690
 */


void FUN_01b2a690(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = *param_2;
  FUN_01b342cc(param_1 + 8,param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  plVar2 = *(long **)(param_2 + 0x58);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_01b342cc(param_1 + 0x68,param_2 + 0x68);
  plVar2 = *(long **)(param_2 + 0x98);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x98);
  *(long **)(param_1 + 0x98) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  plVar2 = *(long **)(param_2 + 0xb8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0xb8);
  *(long **)(param_1 + 0xb8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_01b342cc(param_1 + 200,param_2 + 200);
  plVar2 = *(long **)(param_2 + 0xf8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0xf8);
  *(long **)(param_1 + 0xf8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  plVar2 = *(long **)(param_2 + 0x118);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x118);
  *(long **)(param_1 + 0x118) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  FUN_01b342cc(param_1 + 0x128,param_2 + 0x128);
  plVar2 = *(long **)(param_2 + 0x158);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x158);
  *(long **)(param_1 + 0x158) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  plVar2 = *(long **)(param_2 + 0x178);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x178);
  *(long **)(param_1 + 0x178) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  FUN_01b342cc(param_1 + 0x188,param_2 + 0x188);
  plVar2 = *(long **)(param_2 + 0x1b8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x1b8);
  *(long **)(param_1 + 0x1b8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  plVar2 = *(long **)(param_2 + 0x1d8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x1d8);
  *(long **)(param_1 + 0x1d8) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  FUN_01b342cc(param_1 + 0x1e8,param_2 + 0x1e8);
  plVar2 = *(long **)(param_2 + 0x218);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x218);
  *(long **)(param_1 + 0x218) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_2 + 0x230);
  plVar2 = *(long **)(param_2 + 0x238);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x238);
  *(long **)(param_1 + 0x238) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  return;
}


