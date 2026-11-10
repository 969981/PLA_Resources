/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040a150; name: FUN_0040a150
 */


undefined8 FUN_0040a150(int *param_1,int *param_2)

{
  size_t sVar1;
  ulong uVar2;
  char *__s;
  int iVar3;
  void *__dest;
  void *pvVar4;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  param_1[1] = param_2[1];
  __s = *(char **)(param_2 + 2);
  iVar3 = *param_2;
  if (iVar3 < 0) {
    if (__s == (char *)0x0) {
      return 0;
    }
    sVar1 = strlen(__s);
    iVar3 = (int)sVar1;
    __dest = *(void **)(param_1 + 2);
    pvVar4 = __dest;
    if (iVar3 < *param_1) goto LAB_0040a18c;
  }
  else {
    __dest = *(void **)(param_1 + 2);
    pvVar4 = __dest;
    if (iVar3 < *param_1) {
LAB_0040a18c:
      pvVar4 = (void *)0x0;
      if (__dest != (void *)0x0) {
        *param_1 = iVar3;
        goto joined_r0x0040a1e8;
      }
    }
  }
  __dest = (void *)FUN_00400350(pvVar4,(long)(iVar3 + 1),"external/openssl/crypto/asn1/asn1_lib.c",
                                0x11c);
  *(void **)(param_1 + 2) = __dest;
  if (__dest == (void *)0x0) {
    FUN_004014b0(0xd,0xba,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x11e);
    *(void **)(param_1 + 2) = pvVar4;
    return 0;
  }
  *param_1 = iVar3;
joined_r0x0040a1e8:
  if (__s != (char *)0x0) {
    memcpy(__dest,__s,(long)iVar3);
    *(undefined1 *)(*(long *)(param_1 + 2) + (long)iVar3) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  *(ulong *)(param_1 + 4) = uVar2 & 0x80;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_2 + 4) & 0xffffffffffffff7f | uVar2 & 0x80;
  return 1;
}


