/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00276f60; name: FUN_00276f60
 */


void FUN_00276f60(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372ed0;
  if (*(long *)(PTR_DAT_04372ed0 + 0x250) != 0) {
    FUN_0087eb6c(PTR_DAT_04372ed0 + 0x168,param_1);
    FUN_0087ecf8(puVar1 + 0x120,param_1);
    FUN_00878520(puVar1,param_1);
    FUN_002716e0(*(undefined8 *)(puVar1 + 0x250));
    *(undefined8 *)(puVar1 + 0x250) = 0;
  }
  return;
}


