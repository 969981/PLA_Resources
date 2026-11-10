/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dbcf0; name: FUN_004dbcf0
 */


undefined8 FUN_004dbcf0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x768) == 0) {
    uVar2 = 0x958;
  }
  else {
    iVar1 = FUN_00444d20(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8));
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x95f;
  }
  FUN_004c99a0(param_1,0x50,0x269,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar2);
  return 0;
}


