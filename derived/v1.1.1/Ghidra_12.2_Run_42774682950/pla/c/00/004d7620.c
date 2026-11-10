/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7620; name: FUN_004d7620
 */


undefined4 FUN_004d7620(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar3 = FUN_004d82f0(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 0x798));
  if (iVar3 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_004d7ad0(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 0x7b0),
                               *(undefined8 *)(param_1 + 0x798));
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_004d7c00(*(undefined8 *)(param_1 + 0x7b8),*(undefined8 *)(param_1 + 2000),lVar5,
                           *(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x798));
      if (lVar6 != 0) {
        iVar3 = FUN_0040c070(lVar6);
        uVar1 = iVar3 + 0xe;
        if (-1 < (int)(iVar3 + 7U)) {
          uVar1 = iVar3 + 7U;
        }
        lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
        lVar7 = FUN_00400260(lVar2,"external/openssl/ssl/tls_srp.c",0x108);
        if (lVar7 != 0) {
          FUN_0040caa0(lVar6,lVar7);
          uVar4 = FUN_004c1c90(param_1,lVar7,lVar2,1);
          goto LAB_004d7710;
        }
        FUN_004c99a0(param_1,0x50,0x24d,0x41,"external/openssl/ssl/tls_srp.c",0x10a);
      }
    }
  }
  uVar4 = 0xffffffff;
LAB_004d7710:
  FUN_0040c140(lVar6);
  FUN_0040c140(lVar5);
  return uVar4;
}


