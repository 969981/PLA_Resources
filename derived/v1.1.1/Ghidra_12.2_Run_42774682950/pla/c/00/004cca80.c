/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cca80; name: FUN_004cca80
 */


undefined8 FUN_004cca80(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 == 0x100) {
    lVar2 = *(long *)(param_1 + 0x2c);
    *(short *)(lVar2 + 0x10e) = *(short *)(lVar2 + 0x10e) + 1;
    iVar1 = FUN_004cb590(param_2,*(undefined2 *)(lVar2 + 0x10c),2);
    if (iVar1 == 0) {
      FUN_004c99a0(param_1,0x50,0x173,0x44,"external/openssl/ssl/statem/statem_dtls.c",0x396);
      return 0;
    }
  }
  return 1;
}


