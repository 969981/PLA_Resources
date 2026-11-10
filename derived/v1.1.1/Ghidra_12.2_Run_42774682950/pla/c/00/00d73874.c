/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d73874; name: FUN_00d73874
 */


void FUN_00d73874(long param_1,uint param_2)

{
  undefined *puVar1;
  
  if (param_2 < 6) {
    puVar1 = (&PTR_DAT_041ec1e0)[(int)param_2];
    FUN_00d2e5c8(param_1 + 0x180,puVar1);
    FUN_00d2e4b8(param_1 + 0x180,puVar1);
    return;
  }
  return;
}


