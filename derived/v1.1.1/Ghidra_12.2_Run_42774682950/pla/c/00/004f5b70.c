/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5b70; name: FUN_004f5b70
 */


undefined8 * FUN_004f5b70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00400260(0x18,"external/openssl/ssl/pqueue.c",0x14);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004014b0(0x14,0x270,0x41,"external/openssl/ssl/pqueue.c",0x17);
    return (undefined8 *)0x0;
  }
  *puVar1 = *param_1;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return puVar1;
}


