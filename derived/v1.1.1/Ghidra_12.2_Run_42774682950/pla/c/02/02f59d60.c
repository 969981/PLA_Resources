/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59d60; name: FUN_02f59d60
 */


int FUN_02f59d60(TlsSlot *param_1)

{
  int iVar1;
  
  iVar1 = nn::os::AllocateTlsSlot(param_1,(_func_void_ulong *)0x0);
  return -(uint)(iVar1 != 0);
}


