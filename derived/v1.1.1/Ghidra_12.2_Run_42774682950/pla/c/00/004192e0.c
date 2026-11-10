/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004192e0; name: FUN_004192e0
 */


long * FUN_004192e0(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = FUN_004001b0(&DAT_0439e774,&LAB_00418f20);
  plVar3 = (long *)0x0;
  if (((iVar1 == 0) || (DAT_0439e778 == 0)) ||
     (plVar3 = (long *)FUN_00405540(&DAT_0439e788), plVar3 != (long *)0x0)) {
    return plVar3;
  }
  iVar1 = FUN_00405f70(4);
  lVar2 = DAT_0439e780;
  if (iVar1 == 0) {
    return (long *)0x0;
  }
  plVar3 = (long *)FUN_00418200(1,DAT_04163858,DAT_0439e770,DAT_0439e780);
  if (plVar3 == (long *)0x0) goto LAB_00419488;
  if (lVar2 == 0) {
    if ((int)plVar3[0x13] == 0) {
      if (*plVar3 != 0) goto LAB_00419370;
      if (((long *)plVar3[1] == (long *)0x0) || (*(long *)plVar3[1] != 0)) {
        lVar2 = FUN_004000a0();
        *plVar3 = lVar2;
        if (lVar2 != 0) goto LAB_00419370;
        FUN_004014b0(0x24,0x77,0x7e,"external/openssl/crypto/rand/drbg_lib.c",0x346);
        lVar2 = plVar3[0x28];
      }
      else {
        FUN_004014b0(0x24,0x77,0x82,"external/openssl/crypto/rand/drbg_lib.c",0x33f);
        lVar2 = plVar3[0x28];
      }
    }
    else {
      FUN_004014b0(0x24,0x77,0x81,"external/openssl/crypto/rand/drbg_lib.c",0x338);
      lVar2 = plVar3[0x28];
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(plVar3);
    }
    FUN_00427700(plVar3[5]);
    FUN_00400180(*plVar3);
    FUN_00400e80(0xf,plVar3,plVar3 + 0x14);
    if ((int)plVar3[2] == 0) {
      FUN_00400620(plVar3,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x115);
    }
    else {
      FUN_00406700(plVar3,0x168,"external/openssl/crypto/rand/drbg_lib.c",0x113);
    }
    plVar3 = (long *)0x0;
  }
  else {
LAB_00419370:
    *(undefined4 *)(plVar3 + 0x11) = 1;
    FUN_00418400(plVar3,"OpenSSL NIST SP 800-90A DRBG",0x1c);
  }
LAB_00419488:
  FUN_00405560(&DAT_0439e788,plVar3);
  return plVar3;
}


