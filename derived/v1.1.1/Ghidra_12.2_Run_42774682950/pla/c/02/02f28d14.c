/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f28d14; name: FUN_02f28d14
 */


void FUN_02f28d14(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1 + -0x15;
  *puVar2 = &PTR_FUN_042ac6b8;
  *param_1 = &PTR_FUN_042ac808;
  FUN_02f24810(puVar2);
  FUN_02f26970(puVar2);
  plVar1 = (long *)param_1[-0x14];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0);
    puVar3 = (undefined8 *)param_1[-0x14];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (*DAT_0442d150)(5,puVar3);
    }
    param_1[-0x14] = 0;
  }
  if (param_1[-6] != 0) {
    (*DAT_0442d158)(5);
    param_1[-6] = 0;
  }
  FUN_02f267e4(puVar2);
  return;
}


