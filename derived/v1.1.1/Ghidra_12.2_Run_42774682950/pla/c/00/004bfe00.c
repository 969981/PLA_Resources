/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bfe00; name: FUN_004bfe00
 */


ulong FUN_004bfe00(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_004002a0(0x410,"external/openssl/ssl/s3_lib.c",0xce4);
  uVar3 = 0;
  if (lVar2 != 0) {
    *(long *)(param_1 + 0xa8) = lVar2;
    uVar3 = FUN_004d72c0(param_1);
    if ((int)uVar3 != 0) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
      uVar3 = (ulong)(iVar1 != 0);
    }
  }
  return uVar3;
}


