/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023bd040; name: FUN_023bd040
 */


undefined8 FUN_023bd040(byte *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  byte *__s1;
  ulong uVar7;
  byte *pbVar8;
  byte *__s2;
  
  puVar4 = PTR_DAT_04381708;
  if (((*PTR_DAT_04381700 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04381700), iVar6 != 0))
  {
    if ((*PTR_DAT_04381710 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_04381710);
      puVar5 = PTR_DAT_04381718;
      if (iVar6 != 0) {
        FUN_017c7150(PTR_DAT_04381718);
        FUN_00100250(PTR__string_04379718,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04381710);
      }
    }
    *(undefined **)puVar4 = PTR_DAT_04381718;
    __cxa_guard_release(PTR_DAT_04381700);
  }
  pbVar8 = *(byte **)puVar4;
  bVar2 = *param_1;
  uVar7 = (ulong)(bVar2 >> 1);
  bVar3 = *pbVar8;
  __n = uVar7;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(pbVar8 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    __s2 = *(byte **)(pbVar8 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = pbVar8 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n == 0) {
        return 1;
      }
      while (param_1 = param_1 + 1, *param_1 == *__s2) {
        uVar7 = uVar7 - 1;
        __s2 = __s2 + 1;
        if (uVar7 == 0) {
          return 1;
        }
      }
    }
    else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) {
      return 1;
    }
  }
  return 0;
}


