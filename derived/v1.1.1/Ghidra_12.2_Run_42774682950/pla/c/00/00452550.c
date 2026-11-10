/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00452550; name: FUN_00452550
 */


long * FUN_00452550(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  pthread_t pVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)FUN_004002a0(0x50,"external/openssl/crypto/bn/bn_blind.c",0x24);
  if (plVar2 == (long *)0x0) {
    FUN_004014b0(3,0x66,0x41,"external/openssl/crypto/bn/bn_blind.c",0x25);
    return (long *)0x0;
  }
  lVar3 = FUN_004000a0();
  plVar2[9] = lVar3;
  if (lVar3 == 0) {
    FUN_004014b0(3,0x66,0x41,"external/openssl/crypto/bn/bn_blind.c",0x2b);
    uVar5 = 0x2c;
    goto LAB_00452680;
  }
  pVar4 = pthread_self();
  plVar2[4] = pVar4;
  if (param_1 == 0) {
LAB_004525ac:
    if (param_2 != 0) {
      lVar3 = FUN_0040c480(param_2);
      plVar2[1] = lVar3;
      if (lVar3 == 0) goto LAB_00452618;
    }
    lVar3 = FUN_0040c480(param_3);
    plVar2[3] = lVar3;
    if (lVar3 != 0) {
      iVar1 = FUN_0040c1d0(param_3,4);
      if (iVar1 != 0) {
        FUN_0040d3b0(plVar2[3],4);
      }
      *(undefined4 *)(plVar2 + 5) = 0xffffffff;
      return plVar2;
    }
  }
  else {
    lVar3 = FUN_0040c480(param_1);
    *plVar2 = lVar3;
    if (lVar3 != 0) goto LAB_004525ac;
  }
LAB_00452618:
  FUN_0040c1e0(*plVar2);
  FUN_0040c1e0(plVar2[1]);
  FUN_0040c1e0(plVar2[2]);
  FUN_0040c1e0(plVar2[3]);
  FUN_00400180(plVar2[9]);
  uVar5 = 0x5a;
LAB_00452680:
  FUN_00400420(plVar2,"external/openssl/crypto/bn/bn_blind.c",uVar5);
  return (long *)0x0;
}


