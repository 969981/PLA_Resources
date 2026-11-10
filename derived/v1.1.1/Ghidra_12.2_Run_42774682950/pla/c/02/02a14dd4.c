/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14dd4; name: FUN_02a14dd4
 */


void FUN_02a14dd4(long param_1,undefined1 param_2,uint param_3,uint param_4,undefined1 param_5)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x10) + 0x28);
  *puVar1 = param_2;
  *(uint *)(puVar1 + 4) = param_3 & 0xff;
  *(uint *)(puVar1 + 8) = param_4 & 0xff;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[0x10] = param_5;
  return;
}


