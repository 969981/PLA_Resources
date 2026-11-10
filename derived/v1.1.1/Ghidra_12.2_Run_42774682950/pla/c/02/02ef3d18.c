/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef3d18; name: FUN_02ef3d18
 */


void FUN_02ef3d18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_042ab200;
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 5) = 0;
    (*DAT_0442d150)(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  *param_1 = &PTR_LAB_042ab228;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  puVar2 = PTR_DAT_043885d8;
  lVar3 = param_1[3];
  puVar1 = (undefined8 *)(PTR_DAT_043885d8 + 0x10);
  if (*(undefined8 **)(PTR_DAT_043885d8 + 0x10) != param_1) {
    puVar1 = (undefined8 *)(lVar3 + 0x10);
  }
  *puVar1 = uVar4;
  if (*(undefined8 **)(puVar2 + 8) == param_1) {
    *(long *)(puVar2 + 8) = lVar3;
  }
  *(int *)puVar2 = *(int *)puVar2 + -1;
  return;
}


