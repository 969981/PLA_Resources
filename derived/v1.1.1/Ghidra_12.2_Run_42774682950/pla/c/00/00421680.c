/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00421680; name: FUN_00421680
 */


undefined8 FUN_00421680(int *param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  size_t __n;
  int iVar4;
  long lVar5;
  int iVar6;
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  bVar3 = (byte)(1 << (ulong)(~param_2 & 7));
  bVar1 = bVar3;
  if (param_3 == 0) {
    bVar1 = 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar4 = (int)uVar2 >> 3;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if ((*param_1 <= iVar4) || (lVar5 = *(long *)(param_1 + 2), lVar5 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    iVar6 = (int)((long)iVar4 + 1);
    lVar5 = FUN_00400450(*(undefined8 *)(param_1 + 2),(long)*param_1,(long)iVar6,
                         "external/openssl/crypto/asn1/a_bitstr.c",0xa5);
    if (lVar5 == 0) {
      FUN_004014b0(0xd,0xb7,0x41,"external/openssl/crypto/asn1/a_bitstr.c",0xa7);
      return 0;
    }
    __n = ((long)iVar4 + 1) - (long)*param_1;
    if (0 < (int)__n) {
      memset((void *)(lVar5 + *param_1),0,__n);
    }
    *(long *)(param_1 + 2) = lVar5;
    *param_1 = iVar6;
  }
  *(byte *)(lVar5 + iVar4) = (bVar3 ^ 0xff) & *(byte *)(lVar5 + iVar4) | bVar1;
  iVar4 = *param_1;
  lVar5 = (long)iVar4;
  if (0 < iVar4) {
    do {
      iVar4 = iVar4 + -1;
      if (*(char *)(*(long *)(param_1 + 2) + -1 + lVar5) != '\0') {
        return 1;
      }
      lVar5 = lVar5 + -1;
      *param_1 = iVar4;
    } while (0 < lVar5);
  }
  return 1;
}


