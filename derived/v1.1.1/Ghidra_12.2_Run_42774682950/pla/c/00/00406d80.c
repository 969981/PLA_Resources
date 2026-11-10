/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00406d80; name: FUN_00406d80
 */


void FUN_00406d80(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_00405540(&DAT_0439e6e0);
  if (plVar2 != (long *)0x0) {
    if ((*plVar2 != 0) && (lVar3 = FUN_00407890(), lVar3 != 0)) {
      FUN_00400420(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60);
      FUN_00400420(lVar3,"external/openssl/crypto/async/async.c",0x62);
      lVar3 = FUN_00407890(*plVar2);
      if (lVar3 != 0) {
        do {
          FUN_00400420(*(undefined8 *)(lVar3 + 0x10),"external/openssl/crypto/async/async.c",0x60);
          FUN_00400420(lVar3,"external/openssl/crypto/async/async.c",0x62);
          lVar3 = FUN_00407890(*plVar2);
        } while (lVar3 != 0);
      }
    }
    FUN_00407010(*plVar2);
    FUN_00400420(plVar2,"external/openssl/crypto/async/async.c",0x180);
    FUN_00405560(&DAT_0439e6e0,0);
  }
  FUN_00414af0();
  uVar4 = FUN_00405540(&DAT_0439e6d8);
  iVar1 = FUN_00405560(&DAT_0439e6d8,0);
  if (iVar1 == 0) {
    return;
  }
  FUN_00400420(uVar4,"external/openssl/crypto/async/async.c",0x49);
  return;
}


