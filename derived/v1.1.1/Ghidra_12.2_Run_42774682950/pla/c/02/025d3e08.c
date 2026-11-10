/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d3e08; name: FUN_025d3e08
 */


undefined8 FUN_025d3e08(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379678), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar3 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar3;
  puVar4 = *(ulong **)(lVar3 + 0xd8);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  do {
    uVar7 = uVar5 ^ uVar6;
    iVar2 = (int)uVar6;
    uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
    uVar1 = (int)uVar5 + iVar2 & 3;
    uVar5 = uVar7 ^ (uVar5 >> 0x28 | uVar5 << 0x18) ^ uVar7 << 0x10;
  } while (uVar1 == 3);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  return *(undefined8 *)(&DAT_03a7d8b8 + (ulong)uVar1 * 8);
}


