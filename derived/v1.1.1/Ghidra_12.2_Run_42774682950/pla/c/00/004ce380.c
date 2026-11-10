/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce380; name: FUN_004ce380
 */


void FUN_004ce380(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      FUN_00400420(*puVar1,"external/openssl/ssl/record/ssl3_record.c",0x37);
      param_2 = param_2 + -1;
      *puVar1 = 0;
      puVar1 = puVar1 + 10;
    } while (param_2 != 0);
  }
  return;
}


