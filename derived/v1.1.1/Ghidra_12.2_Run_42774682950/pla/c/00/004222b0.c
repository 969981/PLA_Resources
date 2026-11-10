/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004222b0; name: thunk_FUN_0040a280
 */


undefined8 thunk_FUN_0040a280(int *param_1,char *param_2,int param_3)

{
  void *__dest;
  size_t sVar1;
  void *pvVar2;
  
  if (param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    sVar1 = strlen(param_2);
    param_3 = (int)sVar1;
    __dest = *(void **)(param_1 + 2);
    if (*param_1 <= param_3) goto LAB_0040a2d8;
LAB_0040a2ac:
    if (__dest != (void *)0x0) goto LAB_0040a300;
    pvVar2 = (void *)0x0;
  }
  else {
    __dest = *(void **)(param_1 + 2);
    if (param_3 < *param_1) goto LAB_0040a2ac;
LAB_0040a2d8:
    pvVar2 = __dest;
  }
  __dest = (void *)FUN_00400350(pvVar2,(long)(param_3 + 1),"external/openssl/crypto/asn1/asn1_lib.c"
                                ,0x11c);
  *(void **)(param_1 + 2) = __dest;
  if (__dest == (void *)0x0) {
    FUN_004014b0(0xd,0xba,0x41,"external/openssl/crypto/asn1/asn1_lib.c",0x11e);
    *(void **)(param_1 + 2) = pvVar2;
    return 0;
  }
LAB_0040a300:
  *param_1 = param_3;
  if (param_2 != (char *)0x0) {
    memcpy(__dest,param_2,(long)param_3);
    *(undefined1 *)(*(long *)(param_1 + 2) + (long)param_3) = 0;
  }
  return 1;
}


