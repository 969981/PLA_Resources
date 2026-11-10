/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003feb50; name: FUN_003feb50
 */


long FUN_003feb50(void)

{
  int iVar1;
  long lVar2;
  time_t tVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_004bcbe0(0x200000,0);
  if (iVar1 != 0) {
    lVar2 = FUN_004002a0(0x2b0,"external/openssl/ssl/ssl_sess.c",0x48);
    if (lVar2 == 0) {
      FUN_004014b0(0x14,0xbd,0x41,"external/openssl/ssl/ssl_sess.c",0x4a);
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x1d0) = 1;
    *(undefined4 *)(lVar2 + 0x1d8) = 1;
    *(undefined8 *)(lVar2 + 0x1e0) = 0x130;
    tVar3 = time((time_t *)0x0);
    *(time_t *)(lVar2 + 0x1e8) = tVar3;
    lVar4 = FUN_004000a0();
    *(long *)(lVar2 + 0x2a8) = lVar4;
    if (lVar4 == 0) {
      FUN_004014b0(0x14,0xbd,0x41,"external/openssl/ssl/ssl_sess.c",0x54);
      uVar5 = 0x55;
    }
    else {
      iVar1 = FUN_00400880(2,lVar2,lVar2 + 0x210);
      if (iVar1 != 0) {
        return lVar2;
      }
      FUN_00400180(*(undefined8 *)(lVar2 + 0x2a8));
      uVar5 = 0x5b;
    }
    FUN_00400420(lVar2,"external/openssl/ssl/ssl_sess.c",uVar5);
  }
  return 0;
}


