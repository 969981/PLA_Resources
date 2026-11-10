/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0269b7f0; name: FUN_0269b7f0
 */


void FUN_0269b7f0(void)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379678), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar2 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar2;
  puVar3 = *(ulong **)(lVar2 + 0xd8);
  uVar4 = *puVar3;
  uVar6 = puVar3[1];
  do {
    uVar7 = uVar4 ^ uVar6;
    iVar5 = (int)uVar6;
    iVar1 = (int)uVar4;
    uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
    uVar4 = uVar7 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar7 << 0x10;
  } while (99 < (iVar1 + iVar5 & 0x7fU));
  *puVar3 = uVar4;
  puVar3[1] = uVar6;
  return;
}


