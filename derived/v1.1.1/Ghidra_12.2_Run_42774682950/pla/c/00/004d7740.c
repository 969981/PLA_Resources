/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7740; name: FUN_004d7740
 */


undefined4 FUN_004d7740(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  char *__s;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  
  iVar3 = FUN_004d8250(*(undefined8 *)(param_1 + 0x7b0),*(undefined8 *)(param_1 + 0x798));
  if (iVar3 == 0) {
    lVar5 = 0;
LAB_004d7834:
    FUN_004c99a0(param_1,0x50,0x253,0x44,"external/openssl/ssl/tls_srp.c",0x126);
    lVar6 = 0;
    lVar7 = 0;
    __s = (char *)0x0;
  }
  else {
    lVar5 = thunk_FUN_004d7ad0(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 0x7b0),
                               *(undefined8 *)(param_1 + 0x798));
    if ((lVar5 == 0) || (*(code **)(param_1 + 0x788) == (code *)0x0)) goto LAB_004d7834;
    __s = (char *)(**(code **)(param_1 + 0x788))(param_1,*(undefined8 *)(param_1 + 0x770));
    if (__s == (char *)0x0) {
      FUN_004c99a0(param_1,0x50,0x253,0xea,"external/openssl/ssl/tls_srp.c",0x12e);
      lVar6 = 0;
LAB_004d7900:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_004d7e40(*(undefined8 *)(param_1 + 0x7a8),*(undefined8 *)(param_1 + 0x790),__s);
      if ((lVar6 == 0) ||
         (lVar7 = FUN_004d80a0(*(undefined8 *)(param_1 + 0x798),*(undefined8 *)(param_1 + 0x7b0),
                               *(undefined8 *)(param_1 + 0x7a0),lVar6,
                               *(undefined8 *)(param_1 + 0x7c0),lVar5), lVar7 == 0)) {
        FUN_004c99a0(param_1,0x50,0x253,0x44,"external/openssl/ssl/tls_srp.c",0x136);
        goto LAB_004d7900;
      }
      iVar3 = FUN_0040c070();
      uVar1 = iVar3 + 0xe;
      if (-1 < (int)(iVar3 + 7U)) {
        uVar1 = iVar3 + 7U;
      }
      lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      lVar8 = FUN_00400260(lVar2,"external/openssl/ssl/tls_srp.c",0x13b);
      if (lVar8 != 0) {
        FUN_0040caa0(lVar7,lVar8);
        uVar4 = FUN_004c1c90(param_1,lVar8,lVar2,1);
        goto LAB_004d7864;
      }
      FUN_004c99a0(param_1,0x50,0x253,0x41,"external/openssl/ssl/tls_srp.c",0x13d);
    }
  }
  uVar4 = 0xffffffff;
LAB_004d7864:
  FUN_0040c140(lVar7);
  FUN_0040c140(lVar6);
  if (__s != (char *)0x0) {
    sVar9 = strlen(__s);
    FUN_00400620(__s,sVar9,"external/openssl/ssl/tls_srp.c",0x147);
  }
  FUN_0040c140(lVar5);
  return uVar4;
}


