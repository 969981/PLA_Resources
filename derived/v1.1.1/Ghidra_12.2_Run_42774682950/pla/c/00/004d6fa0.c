/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d6fa0; name: FUN_004d6fa0
 */


undefined8 FUN_004d6fa0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004cb590(param_2,*(undefined4 *)(param_1 + 0x640),1);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_004cb8e0(param_2,*(undefined8 *)(param_1 + 0x668),*(undefined8 *)(param_1 + 0x670)
                           ,3), iVar1 == 0)) {
    FUN_004c99a0(param_1,0x50,0x1ee,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x1050);
    return 0;
  }
  return 1;
}


