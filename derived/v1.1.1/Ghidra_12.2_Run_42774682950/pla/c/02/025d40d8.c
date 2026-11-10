/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025d40d8; name: FUN_025d40d8
 */


undefined8 FUN_025d40d8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar5 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar5;
  puVar6 = *(ulong **)(lVar5 + 0xd8);
  uVar2 = *puVar6;
  uVar3 = puVar6[1];
  uVar7 = uVar3 ^ uVar2;
  *puVar6 = uVar7 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar7 << 0x10;
  puVar6[1] = uVar7 >> 0x1b | uVar7 << 0x25;
  uVar1 = 0xeaaa3234ef9be65;
  if (((int)uVar3 + (int)uVar2 & 1U) != 0) {
    uVar1 = 0xbd03ab58925661be;
  }
  return uVar1;
}


