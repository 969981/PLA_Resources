/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00277000; name: FUN_00277000
 */


void FUN_00277000(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372ed0;
  (*param_1)(PTR_DAT_04372ed0 + 0x260,PTR_DAT_04372ed0 + 0x120,param_2);
  *(undefined8 *)(puVar1 + 0x260) = 0xffffffffffffffff;
  return;
}


