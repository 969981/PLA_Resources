/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5200; name: FUN_004c5200
 */


undefined8 FUN_004c5200(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8);
  FUN_0041cd10(uVar4);
  iVar1 = FUN_0041ccc0();
  if ((iVar1 < 0) || (param_3 < (ulong)(long)iVar1)) {
    FUN_004c99a0(param_1,0x50,0x230,0x44,"external/openssl/ssl/ssl_lib.c",0x116a);
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_00444930();
    if (lVar3 != 0) {
      iVar2 = FUN_00444d20(lVar3,uVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_00444b90(lVar3,param_2,0), 0 < iVar2)) {
        uVar4 = 1;
        *param_4 = (long)iVar1;
        goto LAB_004c526c;
      }
      FUN_004c99a0(param_1,0x50,0x230,0x44,"external/openssl/ssl/ssl_lib.c",0x1175);
    }
  }
  uVar4 = 0;
LAB_004c526c:
  FUN_00444950(lVar3);
  return uVar4;
}


