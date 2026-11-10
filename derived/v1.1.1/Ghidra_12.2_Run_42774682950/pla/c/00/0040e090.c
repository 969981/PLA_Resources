/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040e090; name: FUN_0040e090
 */


void FUN_0040e090(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *__dest;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if ((iVar3 != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_0040e0b0:
    *(int *)(param_1 + 0x34) = iVar3 + 1;
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 == *(uint *)(param_1 + 0x2c)) {
    uVar1 = 0x20;
    if (uVar4 != 0) {
      uVar1 = uVar4 * 3 >> 1;
    }
    __dest = (void *)FUN_00400260((ulong)uVar1 << 2,"external/openssl/crypto/bn/bn_ctx.c",0x108);
    if (__dest == (void *)0x0) {
      FUN_004014b0(3,0x94,0x41,"external/openssl/crypto/bn/bn_ctx.c",0x109);
      FUN_004014b0(3,0x81,0x6d,"external/openssl/crypto/bn/bn_ctx.c",0xbd);
      iVar3 = *(int *)(param_1 + 0x34);
      goto LAB_0040e0b0;
    }
    if (*(uint *)(param_1 + 0x28) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x20),(ulong)*(uint *)(param_1 + 0x28) << 2);
    }
    FUN_00400420(*(undefined8 *)(param_1 + 0x20),"external/openssl/crypto/bn/bn_ctx.c",0x10e);
    uVar4 = *(uint *)(param_1 + 0x28);
    *(void **)(param_1 + 0x20) = __dest;
    *(uint *)(param_1 + 0x2c) = uVar1;
  }
  else {
    __dest = *(void **)(param_1 + 0x20);
  }
  *(uint *)(param_1 + 0x28) = uVar4 + 1;
  *(undefined4 *)((long)__dest + (ulong)uVar4 * 4) = uVar2;
  return;
}


