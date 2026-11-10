/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c9870; name: FUN_004c9870
 */


undefined8 FUN_004c9870(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x810);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0x28 + 0x818);
    do {
      lVar1 = lVar1 + -1;
      FUN_00400420(*puVar2,"external/openssl/ssl/record/ssl3_buffer.c",0xa3);
      *puVar2 = 0;
      puVar2 = puVar2 + -5;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x810) = 0;
  return 1;
}


