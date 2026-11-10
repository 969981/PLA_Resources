/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f30a0; name: FUN_002f30a0
 */


void FUN_002f30a0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *__src;
  
  __src = (void *)*param_2;
  if (param_3 < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)param_3;
    memcpy((void *)((long)param_1 + 9),__src,param_3);
    return;
  }
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = 0;
    *puVar2 = puVar2 + 5;
    puVar1 = PTR_LAB_043738a0;
    *(undefined4 *)(puVar2 + 1) = 3;
    puVar2[4] = puVar2;
    puVar2[2] = puVar2;
    puVar2[3] = puVar1;
    puVar2[6] = 1;
    uVar3 = *param_2;
    *param_2 = 0;
    puVar2[7] = uVar3;
  }
  param_1[1] = param_3;
  param_1[2] = __src;
  *param_1 = puVar2;
  return;
}


