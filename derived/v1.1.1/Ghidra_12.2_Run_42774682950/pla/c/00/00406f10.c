/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00406f10; name: FUN_00406f10
 */


undefined8 * FUN_00406f10(int *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00400260(0x20,"external/openssl/crypto/stack/stack.c",0x31);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(0xf,0x80,0x41,"external/openssl/crypto/stack/stack.c",0x32);
    return (undefined8 *)0x0;
  }
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 4);
  puVar1[1] = *(undefined8 *)(param_1 + 2);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  if (*param_1 == 0) {
    puVar1[1] = 0;
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
    return puVar1;
  }
  __dest = (void *)FUN_00400260((long)param_1[5] << 3,"external/openssl/crypto/stack/stack.c",0x40);
  puVar1[1] = __dest;
  if (__dest == (void *)0x0) {
    FUN_00400420(0,"external/openssl/crypto/stack/stack.c",0x178);
    FUN_00400420(puVar1,"external/openssl/crypto/stack/stack.c",0x179);
    return (undefined8 *)0x0;
  }
  memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
  return puVar1;
}


