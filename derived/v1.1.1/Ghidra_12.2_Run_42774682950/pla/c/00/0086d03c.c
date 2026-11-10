/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086d03c; name: FUN_0086d03c
 */


void FUN_0086d03c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_18 [2];
  
  FUN_0086d138();
  FUN_007e5b70(param_1 + 0xa20);
  FUN_007e5b70(param_1 + 0xa50);
  puVar2 = PTR_DAT_04378110;
  *(undefined4 *)(param_1 + 0xa98) = 0;
  *(undefined **)(param_1 + 0xa80) = puVar2 + 0x10;
  *(undefined **)(param_1 + 0xaa0) = puVar2 + 0x68;
  lVar3 = 0;
  *(long *)(param_1 + 0xa88) = param_1 + 0xaa8;
  *(undefined8 *)(param_1 + 0xa90) = 0x200;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 3;
    *(undefined2 *)(lVar1 + 0xaa8) = 0;
    *(undefined1 *)(lVar1 + 0xaaa) = 0;
  } while (lVar3 != 0x201);
  *(undefined8 *)(param_1 + 0xa94) = 0;
  *(undefined **)(param_1 + 0xcd0) = puVar2 + 0x68;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  *(undefined **)(param_1 + 0xcb0) = puVar2 + 0x10;
  *(long *)(param_1 + 0xcb8) = param_1 + 0xcd8;
  *(undefined8 *)(param_1 + 0xcc0) = 0x200;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 3;
    *(undefined2 *)(lVar1 + 0xcd8) = 0;
    *(undefined1 *)(lVar1 + 0xcda) = 0;
  } while (lVar3 != 0x201);
  *(undefined8 *)(param_1 + 0xcc4) = 0;
  *(undefined4 *)(param_1 + 0xee0) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0xee4),(Result *)local_18);
  *(undefined2 *)(param_1 + 0xef0) = 0;
  FUN_007e3400(param_1 + 0xef8);
  *(undefined8 *)(param_1 + 0xf18) = 0;
  *(undefined8 *)(param_1 + 0xf20) = 0;
  *(undefined1 *)(param_1 + 0xf28) = 0;
  *(undefined4 *)(param_1 + 0xf2c) = 0;
  *(undefined2 *)(param_1 + 0xf30) = 1;
  return;
}


