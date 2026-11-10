/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fe120; name: thunk_FUN_003fddd0
 */


void thunk_FUN_003fddd0(undefined8 *param_1,void *param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_002ef660(param_2), iVar1 == 0)) {
    return;
  }
  (*(code *)*param_1)(*(undefined8 *)((long)param_2 + 8),param_3);
  (*(code *)param_1[3])(*(undefined8 *)((long)param_2 + 0x10),param_3);
  FUN_003fddd0(param_1,*(undefined8 *)((long)param_2 + 0x18),param_3);
  FUN_003fddd0(param_1,*(undefined8 *)((long)param_2 + 0x20),param_3);
  free(param_2);
  return;
}


