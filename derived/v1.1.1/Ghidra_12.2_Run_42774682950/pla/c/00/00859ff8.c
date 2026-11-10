/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00859ff8; name: FUN_00859ff8
 */


void FUN_00859ff8(undefined2 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined2 *puVar4;
  
  *param_1 = 0;
  FUN_007e3400(param_1 + 4);
  param_1[0x20] = 1;
  *(undefined2 **)(param_1 + 0x2c) = param_1 + 0x3c;
  *(undefined8 *)(param_1 + 0x30) = 0x100;
  puVar2 = PTR_DAT_043780f0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined **)(param_1 + 0x28) = puVar2 + 0x10;
  *(undefined **)(param_1 + 0x38) = puVar2 + 0x68;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  puVar4 = param_1;
  do {
    *(undefined2 *)((long)puVar4 + 0x79) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)puVar4 + 0x7b) = 0;
    puVar4 = (undefined2 *)((long)param_1 + lVar3);
    *(undefined1 *)(puVar4 + 0x3c) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x32) = 0;
  puVar1 = PTR_DAT_04377498 + 0x68;
  *(undefined **)(param_1 + 0xc0) = PTR_DAT_04377498 + 0x10;
  *(undefined2 **)(param_1 + 0xc4) = param_1 + 0xd4;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined **)(param_1 + 0xd0) = puVar1;
  *(undefined8 *)(param_1 + 200) = 0x50;
  FUN_02cbbc50(param_1 + 0xc0);
  *(undefined **)(param_1 + 0x100) = puVar2 + 0x10;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined2 **)(param_1 + 0x104) = param_1 + 0x114;
  *(undefined **)(param_1 + 0x110) = puVar2 + 0x68;
  *(undefined8 *)(param_1 + 0x108) = 0x100;
  *(undefined1 *)(param_1 + 0x114) = 0;
  puVar4 = param_1;
  do {
    *(undefined2 *)((long)puVar4 + 0x229) = 0;
    *(undefined1 *)((long)puVar4 + 0x22b) = 0;
    lVar3 = lVar3 + 4;
    puVar4 = (undefined2 *)((long)param_1 + lVar3);
    *(undefined1 *)(puVar4 + 0x114) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  return;
}


