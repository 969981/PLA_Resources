/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a950; name: FUN_0044a950
 */


undefined8 FUN_0044a950(undefined4 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_78 [10];
  
  if ((DAT_0439e918 != 0) || (DAT_0439e918 = FUN_00407340(&LAB_0044ab60), DAT_0439e918 != 0)) {
    local_78[0] = param_1;
    iVar1 = FUN_00407710(DAT_0439e918,local_78);
    if (iVar1 < 0) {
      puVar2 = (undefined4 *)FUN_00408a60(local_78,&DAT_03a0bf90,0x1b,0x28,&LAB_0044ab50);
    }
    else {
      puVar2 = (undefined4 *)FUN_00407970(DAT_0439e918,iVar1);
    }
    if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 8) & 1) != 0)) {
joined_r0x0044ab00:
      if (-1 < param_2) {
        *(long *)(puVar2 + 2) = param_2;
      }
      if (-1 < param_3) {
        *(long *)(puVar2 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(long *)(puVar2 + 6) = param_4;
      }
      if (param_5 != 0) {
        *(ulong *)(puVar2 + 8) = param_5 | 1;
      }
      return 1;
    }
    puVar3 = (undefined4 *)FUN_004002a0(0x28,"external/openssl/crypto/asn1/a_strnid.c",0x9f);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004014b0(0xd,0x8a,0x41,"external/openssl/crypto/asn1/a_strnid.c",0xa0);
    }
    else {
      iVar1 = FUN_00407800(DAT_0439e918,puVar3);
      if (iVar1 != 0) {
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
          *puVar3 = param_1;
          *(undefined8 *)(puVar3 + 8) = 1;
          puVar2 = puVar3;
        }
        else {
          *puVar3 = *puVar2;
          uVar4 = *(undefined8 *)(puVar2 + 2);
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *(undefined8 *)(puVar3 + 2) = uVar4;
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(puVar2 + 6);
          *(ulong *)(puVar3 + 8) = *(ulong *)(puVar2 + 8) | 1;
          puVar2 = puVar3;
        }
        goto joined_r0x0044ab00;
      }
      FUN_00400420(puVar3,"external/openssl/crypto/asn1/a_strnid.c",0xa4);
    }
  }
  FUN_004014b0(0xd,0x81,0x41,"external/openssl/crypto/asn1/a_strnid.c",0xbe);
  return 0;
}


