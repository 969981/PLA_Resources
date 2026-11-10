/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c94d0; name: FUN_001c94d0
 */


uint FUN_001c94d0(ulong param_1)

{
  uint uVar1;
  char cVar2;
  long local_30;
  long lStack_28;
  
  cVar2 = FUN_033292a0();
  if ((cVar2 == '\0') ||
     (FUN_032c3f5c(&local_30,
                   *(long *)PTR_DAT_04372550 + (param_1 & 0xff | (param_1 & 0xff) << 8) + 0x18),
     local_30 != lStack_28)) {
    uVar1 = *(uint *)PTR_DAT_043725f8 | 1 << (ulong)((uint)param_1 & 0x1f);
    *(uint *)PTR_DAT_043725f8 = uVar1;
    return uVar1;
  }
  return 0;
}


