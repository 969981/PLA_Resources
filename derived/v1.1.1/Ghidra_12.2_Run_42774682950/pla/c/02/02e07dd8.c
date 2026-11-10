/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e07dd8; name: FUN_02e07dd8
 */


undefined8 FUN_02e07dd8(long param_1)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((*(int *)(param_1 + 0x20) != 0) && (uVar2 = *(uint *)(param_1 + 0x28), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0x18) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0x18),0,
             (ulong)(uint)(*(int *)(param_1 + 0x20) << 2));
      uVar2 = *(uint *)(param_1 + 0x28);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0x18) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0x20) << 2));
          uVar2 = *(uint *)(param_1 + 0x28);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(int *)(param_1 + 0x38) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0x30) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0x30),0,
             (ulong)(uint)(*(int *)(param_1 + 0x38) << 2));
      uVar2 = *(uint *)(param_1 + 0x40);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0x38) << 2));
          uVar2 = *(uint *)(param_1 + 0x40);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x48),0,(ulong)*(uint *)(param_1 + 0x60));
  }
  if ((*(int *)(param_1 + 0x80) != 0) && (uVar2 = *(uint *)(param_1 + 0x88), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0x78) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0x78),0,
             (ulong)(uint)(*(int *)(param_1 + 0x80) << 2));
      uVar2 = *(uint *)(param_1 + 0x88);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0x78) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0x80) << 2));
          uVar2 = *(uint *)(param_1 + 0x88);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if ((*(int *)(param_1 + 0x98) != 0) && (uVar2 = *(uint *)(param_1 + 0xa0), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0x90) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0x90),0,
             (ulong)(uint)(*(int *)(param_1 + 0x98) << 2));
      uVar2 = *(uint *)(param_1 + 0xa0);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0x90) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0x98) << 2));
          uVar2 = *(uint *)(param_1 + 0xa0);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    memset(*(void **)(param_1 + 0xa8),0,(ulong)*(uint *)(param_1 + 0xc0));
  }
  if ((*(int *)(param_1 + 0xe0) != 0) && (uVar2 = *(uint *)(param_1 + 0xe8), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0xd8) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0xd8),0,
             (ulong)(uint)(*(int *)(param_1 + 0xe0) << 2));
      uVar2 = *(uint *)(param_1 + 0xe8);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0xd8) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0xe0) << 2));
          uVar2 = *(uint *)(param_1 + 0xe8);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if ((*(int *)(param_1 + 0xf8) != 0) && (uVar2 = *(uint *)(param_1 + 0x100), uVar2 != 0)) {
    if ((void *)**(undefined8 **)(param_1 + 0xf0) != (void *)0x0) {
      memset((void *)**(undefined8 **)(param_1 + 0xf0),0,
             (ulong)(uint)(*(int *)(param_1 + 0xf8) << 2));
      uVar2 = *(uint *)(param_1 + 0x100);
    }
    if (1 < uVar2) {
      uVar3 = 1;
      do {
        pvVar1 = *(void **)(*(long *)(param_1 + 0xf0) + uVar3 * 8);
        if (pvVar1 != (void *)0x0) {
          memset(pvVar1,0,(ulong)(uint)(*(int *)(param_1 + 0xf8) << 2));
          uVar2 = *(uint *)(param_1 + 0x100);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x108),0,(ulong)*(uint *)(param_1 + 0x120));
  }
  return 1;
}


