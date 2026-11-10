/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea82a0; name: FUN_02ea82a0
 */


undefined8 * FUN_02ea82a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = *param_1;
  local_30 = param_1[1];
  uStack_28 = param_1[2];
  puVar3 = (undefined8 *)FUN_02ea815c(&local_38);
  if ((puVar3 == (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)FUN_02ea8430(), puVar3 = puVar4, puVar4 != (undefined8 *)0x0)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 2);
    puVar3 = puVar4 + 3;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
  }
  return puVar3;
}


