/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004096a0; name: FUN_004096a0
 */


int FUN_004096a0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [80];
  
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    iVar1 = FUN_004042b0(param_1,&DAT_038da8c3,4);
  }
  else {
    iVar1 = FUN_004085d0(auStack_80,0x50,param_2,0);
    if (iVar1 < 0x50) {
      if (iVar1 < 1) {
        iVar2 = FUN_004042b0(param_1,"<INVALID>",9);
        iVar1 = FUN_0040aa40(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x14)
                            );
        iVar1 = iVar1 + iVar2;
      }
      else {
        FUN_004042b0(param_1,auStack_80,iVar1);
      }
    }
    else {
      puVar3 = (undefined1 *)
               FUN_00400260((long)(iVar1 + 1),"external/openssl/crypto/asn1/a_object.c",0xc2);
      if (puVar3 == (undefined1 *)0x0) {
        FUN_004014b0(0xd,0x7e,0x41,"external/openssl/crypto/asn1/a_object.c",0xc3);
        iVar1 = -1;
      }
      else {
        FUN_004085d0(puVar3,iVar1 + 1,param_2,0);
        FUN_004042b0(param_1,puVar3,iVar1);
        if (puVar3 != auStack_80) {
          FUN_00400420(puVar3,"external/openssl/crypto/asn1/a_object.c",0xcf);
        }
      }
    }
  }
  return iVar1;
}


