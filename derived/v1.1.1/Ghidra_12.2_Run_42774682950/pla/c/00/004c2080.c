/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c2080; name: FUN_004c2080
 */


long FUN_004c2080(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long local_18;
  
  local_18 = 0;
  puVar2 = (undefined4 *)FUN_004dbff0();
  if (puVar2 == (undefined4 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((*(ushort *)(puVar2 + 2) & 3) == 2) {
      lVar3 = FUN_004230e0();
      local_18 = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_00422f40(lVar3,*puVar2), iVar1 == 0)) {
        FUN_00423420(lVar3);
        return 0;
      }
      return lVar3;
    }
    lVar3 = FUN_004228f0(0x198,0);
    if ((((lVar3 != 0) && (iVar1 = FUN_00470280(lVar3), 0 < iVar1)) &&
        (iVar1 = FUN_00422a60(lVar3,0x198,6,0x1001,*puVar2,0), 0 < iVar1)) &&
       (iVar1 = FUN_00470310(lVar3,&local_18), iVar1 < 1)) {
      FUN_00423420(local_18);
      local_18 = 0;
    }
  }
  FUN_00422a10(lVar3);
  return local_18;
}


