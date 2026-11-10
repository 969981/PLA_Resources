/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03264350; name: FUN_03264350
 */


void FUN_03264350(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_03260bd4(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x108) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  puVar1 = PTR_PTR_0434a080;
  uVar2 = FUN_032bd1d4(PTR_PTR_0434a080,0x100,0x20,0,0,param_1 + 0x10c);
  uVar3 = *(uint *)(param_1 + 0x11c);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  if ((uVar3 & 0x3fffff00) == 0) {
    uVar3 = (uVar3 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    if (uVar3 < 0x101) {
      uVar3 = 0x100;
    }
    uVar2 = FUN_032bd1d4(puVar1,uVar3,8,*(undefined8 *)(param_1 + 0x110),
                         *(undefined4 *)(param_1 + 0x118),(uint *)(param_1 + 0x11c));
    *(undefined8 *)(param_1 + 0x110) = uVar2;
  }
  uVar3 = *(uint *)(param_1 + 300);
  if ((uVar3 & 0x3fffff00) == 0) {
    uVar3 = (uVar3 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    if (uVar3 < 0x101) {
      uVar3 = 0x100;
    }
    uVar2 = FUN_032bd1d4(puVar1,uVar3,8,*(undefined8 *)(param_1 + 0x120),
                         *(undefined4 *)(param_1 + 0x128),(uint *)(param_1 + 300));
    *(undefined8 *)(param_1 + 0x120) = uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x13c);
  if ((uVar3 & 0x3fffff00) == 0) {
    uVar3 = (uVar3 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar3) {
      uVar3 = 0x3fffffff;
    }
    if (uVar3 < 0x101) {
      uVar3 = 0x100;
    }
    uVar2 = FUN_032bd1d4(puVar1,uVar3,4,*(undefined8 *)(param_1 + 0x130),
                         *(undefined4 *)(param_1 + 0x138),(uint *)(param_1 + 0x13c));
    *(undefined8 *)(param_1 + 0x130) = uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0xb4);
  if ((uVar3 & 0x3fffff00) == 0) {
    uVar3 = (uVar3 & 0x3fffffff) * 2;
    if (uVar3 < 0x3fffffff) {
      if (uVar3 < 0x101) {
        uVar3 = 0x100;
      }
    }
    else {
      uVar3 = 0x3fffffff;
    }
    uVar2 = FUN_032bd1d4(puVar1,uVar3,2,*(undefined8 *)(param_1 + 0xa8),
                         *(undefined4 *)(param_1 + 0xb0),(uint *)(param_1 + 0xb4));
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0xc4);
  if ((uVar3 & 0x3fffff00) == 0) {
    uVar3 = (uVar3 & 0x3fffffff) * 2;
    if (uVar3 < 0x3fffffff) {
      if (uVar3 < 0x101) {
        uVar3 = 0x100;
      }
    }
    else {
      uVar3 = 0x3fffffff;
    }
    uVar2 = FUN_032bd1d4(puVar1,uVar3,2,*(undefined8 *)(param_1 + 0xb8),
                         *(undefined4 *)(param_1 + 0xc0),(uint *)(param_1 + 0xc4));
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
  }
  return;
}


