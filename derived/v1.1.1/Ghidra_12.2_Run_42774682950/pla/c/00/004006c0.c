/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004006c0; name: FUN_004006c0
 */


int FUN_004006c0(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (0xf < param_1) {
    uVar5 = 0x37;
    uVar4 = 7;
LAB_004007c8:
    FUN_004014b0(0xf,0x71,uVar4,"external/openssl/crypto/ex_data.c",uVar5);
    return -1;
  }
  iVar1 = FUN_004001b0(&DAT_0439cda0,&LAB_00401100);
  if ((iVar1 == 0) || (DAT_0439cda4 == 0)) {
    uVar4 = 0x41;
    uVar5 = 0x3c;
    goto LAB_004007c8;
  }
  if (DAT_0439cda8 == 0) {
    return -1;
  }
  FUN_00400140();
  if (*(long *)(&DAT_0439cdb0 + (long)(int)param_1 * 8) == 0) {
    lVar3 = FUN_004071e0();
    *(long *)(&DAT_0439cdb0 + (long)(int)param_1 * 8) = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_00407800(lVar3,0), iVar1 != 0)) goto LAB_00400754;
    uVar4 = 0xac;
LAB_00400834:
    FUN_004014b0(0xf,100,0x41,"external/openssl/crypto/ex_data.c",uVar4);
  }
  else {
LAB_00400754:
    puVar2 = (undefined8 *)FUN_00400260(0x28,"external/openssl/crypto/ex_data.c",0xb1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar4 = 0xb3;
      goto LAB_00400834;
    }
    puVar2[3] = param_6;
    puVar2[4] = param_5;
    lVar3 = (long)(int)param_1 * 8;
    puVar2[2] = param_4;
    *puVar2 = param_2;
    puVar2[1] = param_3;
    iVar1 = FUN_00407800(*(undefined8 *)(&DAT_0439cdb0 + lVar3),0);
    if (iVar1 != 0) {
      iVar1 = FUN_00407950(*(undefined8 *)(&DAT_0439cdb0 + lVar3));
      iVar1 = iVar1 + -1;
      FUN_004079a0(*(undefined8 *)(&DAT_0439cdb0 + lVar3),iVar1,puVar2);
      goto LAB_00400874;
    }
    FUN_004014b0(0xf,100,0x41,"external/openssl/crypto/ex_data.c",0xbd);
    FUN_00400420(puVar2,"external/openssl/crypto/ex_data.c",0xbe);
  }
  iVar1 = -1;
LAB_00400874:
  FUN_00400160(DAT_0439cda8);
  return iVar1;
}


