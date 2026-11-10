/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2000; name: FUN_004e2000
 */


undefined8 FUN_004e2000(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x140);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x488);
  }
  lVar5 = *(long *)*puVar1;
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = FUN_00407950(param_3);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = FUN_00407970(param_3,iVar2);
      iVar3 = FUN_004e0190(param_1,param_2,uVar4,0,0);
      if (iVar3 != 1) {
        FUN_004014b0(0x14,0x154,iVar3,"external/openssl/ssl/ssl_cert.c",0x108);
        return 0;
      }
      iVar2 = iVar2 + 1;
      iVar3 = FUN_00407950(param_3);
    } while (iVar2 < iVar3);
  }
  FUN_004078c0(*(undefined8 *)(lVar5 + 0x10),PTR_FUN_04374180);
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  return 1;
}


