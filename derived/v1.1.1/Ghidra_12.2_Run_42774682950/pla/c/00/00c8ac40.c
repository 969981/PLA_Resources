/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c8ac40; name: FUN_00c8ac40
 */


uint FUN_00c8ac40(void)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04379678), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar4 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar4;
  puVar5 = *(ulong **)(lVar4 + 0xd8);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar6 = uVar2 ^ uVar1;
  *puVar5 = uVar6 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar6 << 0x10;
  puVar5[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  return (int)uVar2 + (int)uVar1 & 1;
}


