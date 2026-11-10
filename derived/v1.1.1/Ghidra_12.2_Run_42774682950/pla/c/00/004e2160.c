/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e2160; name: FUN_004e2160
 */


bool FUN_004e2160(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0x140);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x488);
  }
  lVar4 = *(long *)*puVar1;
  if (lVar4 != 0) {
    iVar2 = FUN_004e0190();
    if (iVar2 == 1) {
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 == 0) {
        lVar3 = FUN_004071e0();
        *(long *)(lVar4 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return false;
        }
      }
      iVar2 = FUN_00407800(lVar3,param_3);
      return iVar2 != 0;
    }
    FUN_004014b0(0x14,0x15a,iVar2,"external/openssl/ssl/ssl_cert.c",0x128);
  }
  return false;
}


