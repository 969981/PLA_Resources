/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c480; name: FUN_0040c480
 */


undefined8 * FUN_0040c480(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar4 = *(uint *)((long)param_1 + 0x14);
  puVar2 = (undefined8 *)FUN_004002a0(0x18,"external/openssl/crypto/bn/bn_lib.c",0xbe);
  if ((uVar4 >> 3 & 1) == 0) {
    if (puVar2 == (undefined8 *)0x0) {
LAB_0040c544:
      FUN_004014b0(3,0x71,0x41,"external/openssl/crypto/bn/bn_lib.c",0xbf);
      return (undefined8 *)0x0;
    }
    *(undefined4 *)((long)puVar2 + 0x14) = 1;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) goto LAB_0040c544;
    *(undefined4 *)((long)puVar2 + 0x14) = 9;
  }
  if (puVar2 == param_1) {
    return param_1;
  }
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 <= *(int *)((long)puVar2 + 0xc)) {
LAB_0040c4e4:
    if (0 < (int)uVar4) {
      memcpy((void *)*puVar2,(void *)*param_1,
             -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 2);
    *(uint *)(puVar2 + 1) = uVar4;
    return puVar2;
  }
  lVar3 = FUN_0040c320(puVar2);
  if (lVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    goto LAB_0040c4e4;
  }
  if ((*(uint *)((long)puVar2 + 0x14) >> 1 & 1) == 0) {
    if ((*(uint *)((long)puVar2 + 0x14) >> 3 & 1) == 0) {
      FUN_00400420(*puVar2,"external/openssl/crypto/bn/bn_lib.c",0x96);
      bVar1 = *(byte *)((long)puVar2 + 0x14);
      goto joined_r0x0040c5ac;
    }
    thunk_FUN_00400420(*puVar2,"external/openssl/crypto/bn/bn_lib.c",0x94);
  }
  bVar1 = *(byte *)((long)puVar2 + 0x14);
joined_r0x0040c5ac:
  if ((bVar1 & 1) != 0) {
    FUN_00400420(puVar2,"external/openssl/crypto/bn/bn_lib.c",0xaf);
  }
  return (undefined8 *)0x0;
}


