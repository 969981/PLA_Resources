/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009f2810; name: FUN_009f2810
 */


void FUN_009f2810(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  char acStack_80 [96];
  
  FUN_00a41c08();
  *param_1 = &PTR_LAB_041c7e20;
  param_1[9] = &PTR_LAB_041c7ec8;
  param_1[10] = &PTR_LAB_041c7f10;
  if (param_1[0x12] == 0) {
    puVar3 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar3 = (undefined8 *)(param_1[0x12] + 0x60);
  }
  snprintf(acStack_80,0x60,"bin/test/effect/battle/particle/%s",(char *)*puVar3);
  FUN_009e0d04(&local_b0,acStack_80);
  plVar2 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  plVar2 = local_b0;
  local_b0 = (long *)0x0;
  param_1[0x15] = plVar2;
  param_1[0x16] = local_a8;
  param_1[0x17] = local_a0;
  plVar2 = (long *)param_1[0x19];
  param_1[0x18] = local_98;
  param_1[0x19] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar1 = local_90;
  local_90 = 0;
  param_1[0x19] = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = local_88;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


