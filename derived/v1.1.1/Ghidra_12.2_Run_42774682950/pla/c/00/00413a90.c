/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00413a90; name: FUN_00413a90
 */


char * FUN_00413a90(long *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  iVar5 = FUN_0040c130();
  if (iVar5 != 0) {
    pcVar6 = (char *)FUN_00404f10(&DAT_0390f9d5,"external/openssl/crypto/bn/bn_print.c",0x1b);
    return pcVar6;
  }
  pcVar6 = (char *)FUN_00400260((long)(int)param_1[1] << 3 | 2,
                                "external/openssl/crypto/bn/bn_print.c",0x1c);
  if (pcVar6 == (char *)0x0) {
    FUN_004014b0(3,0x69,0x41,"external/openssl/crypto/bn/bn_print.c",0x1e);
    return (char *)0x0;
  }
  pcVar7 = pcVar6;
  if ((int)param_1[2] != 0) {
    pcVar7 = pcVar6 + 1;
    *pcVar6 = '-';
  }
  if (0 < (int)param_1[1]) {
    lVar8 = (long)(int)param_1[1] + -1;
    uVar3 = *(uint *)(*param_1 + lVar8 * 4);
    uVar10 = (ulong)uVar3;
    if (uVar3 >> 0x18 != 0) goto LAB_00413b40;
    bVar1 = false;
    while( true ) {
      uVar3 = (uint)uVar10 >> 0x10 & 0xff;
      bVar1 = uVar3 != 0 || bVar1;
      if (bVar1) {
        *pcVar7 = "0123456789ABCDEF"[uVar3 >> 4];
        pcVar7[1] = "0123456789ABCDEF"[uVar10 >> 0x10 & 0xf];
        uVar10 = (ulong)*(uint *)(*param_1 + lVar8 * 4);
        pcVar7 = pcVar7 + 2;
      }
      uVar3 = (uint)uVar10 >> 8 & 0xff;
      bVar1 = uVar3 != 0 || bVar1;
      if (bVar1) {
        cVar4 = "0123456789ABCDEF"[uVar10 >> 8 & 0xf];
        *pcVar7 = "0123456789ABCDEF"[uVar3 >> 4];
        pcVar7[1] = cVar4;
        uVar10 = (ulong)*(byte *)(*param_1 + lVar8 * 4);
        pcVar7 = pcVar7 + 2;
      }
      bVar2 = (uVar10 & 0xff) != 0 || bVar1;
      if (bVar2) {
        *pcVar7 = "0123456789ABCDEF"[((uint)uVar10 & 0xff) >> 4];
        pcVar7[1] = "0123456789ABCDEF"[uVar10 & 0xf];
        pcVar7 = pcVar7 + 2;
      }
      lVar9 = lVar8 + -1;
      if (lVar8 < 1) break;
      uVar3 = *(uint *)(*param_1 + lVar9 * 4);
      uVar10 = (ulong)uVar3;
      bVar1 = false;
      lVar8 = lVar9;
      if (bVar2 || uVar3 >> 0x18 != 0) {
LAB_00413b40:
        *pcVar7 = "0123456789ABCDEF"[uVar10 >> 0x1c];
        pcVar7[1] = "0123456789ABCDEF"[uVar10 >> 0x18 & 0xf];
        uVar10 = (ulong)*(uint *)(*param_1 + lVar8 * 4);
        pcVar7 = pcVar7 + 2;
        bVar1 = true;
      }
    }
  }
  *pcVar7 = '\0';
  return pcVar6;
}


