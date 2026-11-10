/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3ad0; name: FUN_004c3ad0
 */


undefined8 FUN_004c3ad0(long param_1)

{
  undefined8 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if ((((*(byte *)(*(long *)(piVar2 + 0x30) + 0x60) >> 3 & 1) == 0) && (0x303 < *piVar2)) &&
     (*piVar2 != 0x10000)) {
    FUN_004014b0(0x14,0x204,0x10a,"external/openssl/ssl/ssl_lib.c",0x846);
    return 0;
  }
  if ((*(byte *)(param_1 + 0x5cf) >> 6 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x740) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x004c3b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(piVar2 + 0x16))();
    return uVar1;
  }
  FUN_004014b0(0x14,0x204,0x153,"external/openssl/ssl/ssl_lib.c",0x84b);
  return 0;
}


