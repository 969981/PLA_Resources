/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ff410; name: FUN_003ff410
 */


undefined8 FUN_003ff410(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong __n;
  
  puVar2 = (undefined4 *)FUN_003feb50();
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004c99a0(param_1,0x50,0xb5,0x41,"external/openssl/ssl/ssl_sess.c",0x18e);
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x1ca) + 0x50);
  if (lVar3 == 0) {
    lVar3 = FUN_004c3650(param_1);
  }
  *(long *)(puVar2 + 0x78) = lVar3;
  FUN_003fef10(*(undefined8 *)(param_1 + 0x142));
  *(undefined8 *)(param_1 + 0x142) = 0;
  if ((param_2 == 0) ||
     ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0 &&
       (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)))) {
    *(undefined8 *)(puVar2 + 0x54) = 0;
    __n = *(ulong *)(param_1 + 0x138);
  }
  else {
    iVar1 = FUN_003ff080(param_1,puVar2);
    if (iVar1 == 0) goto LAB_003ff4f8;
    __n = *(ulong *)(param_1 + 0x138);
  }
  if (__n < 0x21) {
    memcpy(puVar2 + 0x60,param_1 + 0x13a,__n);
    *(undefined8 *)(puVar2 + 0x5e) = *(undefined8 *)(param_1 + 0x138);
    *(undefined4 **)(param_1 + 0x142) = puVar2;
    *puVar2 = *param_1;
    *(undefined8 *)(puVar2 + 0x74) = 0;
    if ((*(byte *)(*(long *)(param_1 + 0x2a) + 1) >> 1 & 1) != 0) {
      puVar2[0xa8] = puVar2[0xa8] | 1;
    }
    return 1;
  }
  FUN_004c99a0(param_1,0x50,0xb5,0x44,"external/openssl/ssl/ssl_sess.c",0x1ae);
LAB_003ff4f8:
  FUN_003fef10(puVar2);
  return 0;
}


