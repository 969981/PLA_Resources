/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086d138; name: FUN_0086d138
 */


void FUN_0086d138(undefined4 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  FUN_007eb6cc(param_1 + 2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_0086d548(param_1 + 0xc);
  pcVar4 = *(code **)(PTR_DAT_043783c0 + 0x38);
  puVar1 = PTR_DAT_043783c0 + 0x10;
  *(undefined **)(param_1 + 0xf4) = puVar1;
  (*pcVar4)(param_1 + 0xf4);
  param_1[0xfa] = 0;
  *(undefined **)(param_1 + 0xfc) = puVar1;
  (*pcVar4)(param_1 + 0xfc);
  param_1[0x102] = 0;
  *(undefined **)(param_1 + 0x104) = puVar1;
  (*pcVar4)(param_1 + 0x104);
  param_1[0x10a] = 0;
  puVar1 = PTR_DAT_04378110;
  *(undefined4 **)(param_1 + 0x10e) = param_1 + 0x116;
  *(undefined8 *)(param_1 + 0x110) = 0x200;
  param_1[0x112] = 0;
  *(undefined **)(param_1 + 0x10c) = puVar1 + 0x10;
  *(undefined **)(param_1 + 0x114) = puVar1 + 0x68;
  lVar3 = 0;
  do {
    lVar2 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x458) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x45a) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x201);
  *(undefined8 *)(param_1 + 0x111) = 0;
  *(undefined **)(param_1 + 0x1a0) = puVar1 + 0x68;
  param_1[0x19e] = 0;
  *(undefined **)(param_1 + 0x198) = puVar1 + 0x10;
  *(undefined4 **)(param_1 + 0x19a) = param_1 + 0x1a2;
  *(undefined8 *)(param_1 + 0x19c) = 0x200;
  lVar3 = 0;
  do {
    lVar2 = lVar3 + 3;
    *(undefined2 *)((long)param_1 + lVar3 + 0x688) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x68a) = 0;
    lVar3 = lVar2;
  } while (lVar2 != 0x201);
  *(undefined8 *)(param_1 + 0x19d) = 0;
  param_1[0x224] = 0;
  FUN_007e3400(param_1 + 0x226);
  FUN_007e3400(param_1 + 0x22e);
  FUN_007e3400(param_1 + 0x236);
  FUN_007e3400(param_1 + 0x23e);
  FUN_007e3400(param_1 + 0x246);
  FUN_007e3400(param_1 + 0x24e);
  FUN_0086f040(param_1 + 0x256);
  *(undefined8 *)(param_1 + 0x27e) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x282) = 0;
  *(undefined2 *)(param_1 + 0x284) = 0;
  param_1[0x285] = 0;
  *(undefined1 *)(param_1 + 0x286) = 0;
  return;
}


