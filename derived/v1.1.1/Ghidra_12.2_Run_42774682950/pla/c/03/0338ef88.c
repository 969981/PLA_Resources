/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338ef88; name: FUN_0338ef88
 */


void FUN_0338ef88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_0436f008;
  param_1[1] = 0;
  param_1[2] = 0x8000000000000000;
  FUN_03395780(param_1 + 3);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x8000000000000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0x8000000000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x8000000000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x36);
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3d] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((long)param_1 + 500) = 0x80000000;
  FUN_03377b54(param_1 + 0x40,0,0);
  param_1[0x41] = param_1 + 3;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = param_2;
  if (param_2 == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = FUN_03376578(param_2);
  }
  puVar1 = param_1 + 0x45;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  FUN_032f7698(puVar1);
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x53] = param_2;
  FUN_032e80d0(param_1 + 0x54,0xffffffffffffffff);
  FUN_032e8760(param_1 + 0x59);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x8000000000000000;
  FUN_032c2320(param_1 + 0x5f);
  FUN_032da910(param_1 + 0x61,PTR_PTR_0434a080,0x4000);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  FUN_032fc650(puVar1);
  uVar3 = FUN_032cf5b0(8);
  FUN_032fdb20();
  FUN_032f7ce0(puVar1,uVar3);
  *(undefined2 *)(param_1 + 0x45) = 0x100;
  *(undefined1 *)((long)param_1 + 0x22d) = 0;
  return;
}


