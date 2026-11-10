/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334a7a0; name: FUN_0334a7a0
 */


void FUN_0334a7a0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_160 [19];
  undefined8 local_c8 [19];
  
  FUN_032c4d3c(local_c8);
  FUN_0334a400(param_1,param_2,local_c8);
  FUN_032c4d3c(local_160);
  FUN_0334a400(param_1 + 0x10,param_2,local_160);
  puVar1 = &DAT_03996322;
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar1 = &DAT_038d0274;
  }
  FUN_032c53d8(param_3,"%s%s/%s",puVar1,local_c8[0],local_160[0]);
  FUN_032c4ce8(local_160);
  FUN_032c4ce8(local_c8);
  return;
}


