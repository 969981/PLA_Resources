/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4400; name: FUN_004c4400
 */


undefined8 FUN_004c4400(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  FUN_00400420(*(undefined8 *)(param_1 + 600),"external/openssl/ssl/ssl_lib.c",0xad2);
  lVar1 = FUN_00405020(param_2,(ulong)param_3,"external/openssl/ssl/ssl_lib.c",0xad3);
  *(long *)(param_1 + 600) = lVar1;
  if (lVar1 == 0) {
    FUN_004014b0(0x14,0x157,0x41,"external/openssl/ssl/ssl_lib.c",0xad5);
    return 1;
  }
  *(ulong *)(param_1 + 0x260) = (ulong)param_3;
  return 0;
}


