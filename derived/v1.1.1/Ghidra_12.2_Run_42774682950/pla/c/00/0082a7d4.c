/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082a7d4; name: FUN_0082a7d4
 */


void FUN_0082a7d4(long param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_50;
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    *(int *)(param_1 + 0x118) = param_3;
    if (**(int **)(param_1 + 0xa8) == 1) {
      FUN_007ee660(param_1 + 0x120);
    }
    else {
      uVar2 = *(undefined8 *)PTR_DAT_04377458;
      FUN_007ee578(auStack_40);
      FUN_007e8aec(uVar2,auStack_40);
    }
    FUN_00839584(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x118));
    return;
  }
  if (*(int *)(param_1 + 0x118) == 1) {
    if (**(int **)(param_1 + 0xa8) == 1) {
      FUN_007ee660(param_1 + 0x120);
      return;
    }
    uVar2 = *(undefined8 *)PTR_DAT_04377458;
    FUN_007ee578(auStack_30);
    puVar1 = auStack_30;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_04377458;
    FUN_007ee578(auStack_50);
  }
  FUN_007e8aec(uVar2,puVar1);
  return;
}


