/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cd520; name: FUN_031cd520
 */


void FUN_031cd520(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < *(int *)(param_1 + 0x13c)) && (*(long *)(param_1 + 0x130) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x130),*(int *)(param_1 + 0x13c) << 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 300)) && (*(long *)(param_1 + 0x120) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x120),((ulong)*(uint *)(param_1 + 300) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x11c)) && (*(long *)(param_1 + 0x110) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x110),
               ((ulong)*(uint *)(param_1 + 0x11c) & 0x3fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x10c)) && (*(long *)(param_1 + 0x100) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x100),
               ((ulong)*(uint *)(param_1 + 0x10c) & 0x3fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if ((-1 < *(int *)(param_1 + 0xf4)) && (*(long *)(param_1 + 0xe8) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0xe8),*(int *)(param_1 + 0xf4) << 2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((-1 < *(int *)(param_1 + 0xdc)) && (*(long *)(param_1 + 0xd0) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0xd0),*(int *)(param_1 + 0xdc) << 2);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xc4)) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0xb8),(*(uint *)(param_1 + 0xc4) & 0x3fffffff) << 1);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0xa8),(*(uint *)(param_1 + 0xb4) & 0x3fffffff) << 1);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x9c)) && (*(long *)(param_1 + 0x90) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x90),((ulong)*(uint *)(param_1 + 0x9c) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  return;
}


