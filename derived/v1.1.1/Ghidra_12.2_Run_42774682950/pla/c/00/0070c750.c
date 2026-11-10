/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070c750; name: FUN_0070c750
 */


undefined * FUN_0070c750(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  if (((*PTR_DAT_04376520 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04376520), iVar5 != 0))
  {
    FUN_00617a0c(PTR_DAT_04376538);
    __cxa_guard_release(PTR_DAT_04376520);
    bVar2 = *PTR_DAT_04376528;
  }
  else {
    bVar2 = *PTR_DAT_04376528;
  }
  if (((bVar2 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04376528), puVar4 = PTR_DAT_04376530, iVar5 != 0)) {
    uVar6 = FUN_00617a90(PTR_DAT_04376538);
    lVar7 = 0;
    iVar5 = 1;
    *(uint *)puVar4 = uVar6;
    while( true ) {
      uVar6 = (int)lVar7 + (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
      *(uint *)(puVar4 + lVar7 * 4 + 4) = uVar6;
      if (lVar7 == 0x26e) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 2;
      iVar3 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965;
      uVar6 = iVar3 + iVar1;
      *(int *)(puVar4 + lVar7 * 4 + 8) = (int)lVar7 + iVar3 + 2;
      lVar7 = lVar7 + 2;
    }
    *(undefined8 *)(puVar4 + 0x9c0) = 0;
    __cxa_guard_release(PTR_DAT_04376528);
  }
  return PTR_DAT_04376530;
}


