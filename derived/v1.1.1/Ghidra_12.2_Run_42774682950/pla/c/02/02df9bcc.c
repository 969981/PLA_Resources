/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df9bcc; name: FUN_02df9bcc
 */


undefined8 FUN_02df9bcc(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0xe0);
  uVar5 = *(uint *)(param_1 + 200);
  uVar2 = uVar5 - uVar3;
  if (uVar3 <= uVar5 && uVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x68);
    if (uVar2 <= *(uint *)(param_1 + 0x68)) {
      uVar1 = uVar2;
    }
    if (uVar1 != 0) {
      memcpy((void *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3),*(void **)(param_1 + 0x60),
             (ulong)uVar1);
      uVar3 = *(int *)(param_1 + 0xe0) + uVar1;
      *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar1;
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar1;
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar1;
      uVar5 = *(uint *)(param_1 + 200);
      *(uint *)(param_1 + 0xe0) = uVar3;
    }
  }
  if (uVar3 != uVar5) {
    return 0x3f;
  }
  iVar4 = *(int *)(param_1 + 0x30) + uVar5;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(int *)(param_1 + 0x78) = iVar4;
  if (*(short *)(param_1 + 0x54) == 1) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xb0) + -1;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x98);
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = *(uint *)(param_1 + 0x34) / uVar5;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x9c) + iVar4;
    uVar2 = *(int *)(param_1 + 0xb0) - 1;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0xa8) = uVar3;
    if (*(uint *)(param_1 + 0x38) != *(int *)(param_1 + 0x24) - 1U) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = *(uint *)(param_1 + 0x38) / uVar5;
      }
      if (uVar2 <= uVar3) {
        uVar3 = uVar2;
      }
      *(uint *)(param_1 + 0xac) = uVar3;
      iVar4 = *(int *)(param_1 + 0xa0) + iVar4;
      goto LAB_02df9c80;
    }
    *(uint *)(param_1 + 0xac) = uVar2;
  }
  iVar4 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
LAB_02df9c80:
  *(int *)(param_1 + 0x7c) = iVar4;
  return 1;
}


