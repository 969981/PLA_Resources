/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4fa0; name: FUN_004c4fa0
 */


undefined8 FUN_004c4fa0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_0046f640();
    lVar1 = FUN_00403d80();
    if ((lVar1 == 0) || (lVar2 = FUN_00404900(lVar1,0x75,1,0), lVar2 == 0)) {
      FUN_00403ee0(lVar1);
      FUN_004014b0(0x14,0xb8,7,"external/openssl/ssl/ssl_lib.c",0xf54);
      return 0;
    }
    *(long *)(param_1 + 0x20) = lVar1;
    uVar3 = FUN_00404be0(lVar1,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return 1;
}


