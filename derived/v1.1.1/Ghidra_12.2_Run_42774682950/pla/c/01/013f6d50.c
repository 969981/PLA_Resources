/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f6d50; name: FUN_013f6d50
 */


void FUN_013f6d50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_0437a508 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_LAB_0420c690;
  param_1[1] = puVar1;
  puVar2 = param_1 + 8;
  puVar3 = puVar2;
  do {
    *(undefined2 *)puVar3 = 0;
    *(undefined2 *)((long)puVar3 + 10) = 0;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *(undefined2 *)(puVar3 + 2) = 0;
    *(undefined2 *)((long)puVar3 + 0x1a) = 0;
    *(undefined4 *)((long)puVar3 + 0x1c) = 0;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined2 *)((long)puVar3 + 0x2a) = 0;
    *(undefined4 *)((long)puVar3 + 0x2c) = 0;
    puVar3 = puVar3 + 6;
  } while (puVar3 != param_1 + 0x71c);
  do {
    *(undefined2 *)puVar2 = 0;
    *(undefined8 *)((long)puVar2 + 2) = 0xffffffffffff0;
    *(undefined2 *)((long)puVar2 + 10) = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined8 *)((long)puVar2 + 0x12) = 0xffffffffffff0;
    *(undefined2 *)((long)puVar2 + 0x1a) = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined2 *)(puVar2 + 4) = 0;
    *(undefined8 *)((long)puVar2 + 0x22) = 0xffffffffffff0;
    *(undefined2 *)((long)puVar2 + 0x2a) = 0;
    *(undefined4 *)((long)puVar2 + 0x2c) = 0;
    puVar2 = puVar2 + 6;
  } while (puVar2 != param_1 + 0x71c);
  return;
}


