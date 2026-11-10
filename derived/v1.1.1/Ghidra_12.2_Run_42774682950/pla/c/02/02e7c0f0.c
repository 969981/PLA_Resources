/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7c0f0; name: FUN_02e7c0f0
 */


void FUN_02e7c0f0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_042a71e8;
  if ((puVar3 == (undefined8 *)0x0) ||
     (iVar1 = *(int *)(puVar3 + 10), *(int *)(puVar3 + 10) = iVar1 + -1, iVar1 + -1 != 0)) {
    plVar2 = (long *)param_1[8];
  }
  else {
    (**(code **)*puVar3)(puVar3);
    FUN_02f59e60(4,puVar3);
    plVar2 = (long *)param_1[8];
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN_02e771a8();
  return;
}


