/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f26970; name: FUN_02f26970
 */


void FUN_02f26970(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(long **)(param_1 + 0x118);
  if (plVar1 == (long *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x120);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x118) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x120);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(5,puVar2);
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0xb0) + 0x28))((long *)(param_1 + 0xb0));
  if (*(long *)(param_1 + 0x2b0) == 0) {
    plVar1 = *(long **)(param_1 + 0x198);
  }
  else {
    (*DAT_0442d158)(5);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0x2b00000000;
    plVar1 = *(long **)(param_1 + 0x198);
  }
  if (plVar1 == (long *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x1a0);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x198) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x1a0);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(5,puVar2);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x130) + 0x28))(param_1 + 0x130);
  if (*(long *)(param_1 + 0x2c8) == 0) {
    plVar1 = *(long **)(param_1 + 0x218);
  }
  else {
    (*DAT_0442d158)(5);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0x2b00000000;
    plVar1 = *(long **)(param_1 + 0x218);
  }
  if (plVar1 == (long *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x220);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x218) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x220);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(5,puVar2);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x1b0) + 0x28))(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x2e0) == 0) {
    plVar1 = *(long **)(param_1 + 0x298);
  }
  else {
    (*DAT_0442d158)(5);
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0x2b00000000;
    plVar1 = *(long **)(param_1 + 0x298);
  }
  if (plVar1 == (long *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x2a0);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&PTR_PTR_042a9250);
    *(undefined8 *)(param_1 + 0x298) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x2a0);
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (*DAT_0442d150)(5,puVar2);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
  (**(code **)(*(long *)(param_1 + 0x230) + 0x28))(param_1 + 0x230);
  if (*(long *)(param_1 + 0x2f8) != 0) {
    (*DAT_0442d158)(5);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0x2b00000000;
  }
  *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfc;
  return;
}


