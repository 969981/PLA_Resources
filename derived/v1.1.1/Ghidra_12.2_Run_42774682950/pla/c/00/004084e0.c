/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004084e0; name: FUN_004084e0
 */


undefined4 FUN_004084e0(char *param_1)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined1 auStack_78 [8];
  char *local_70;
  
  local_70 = param_1;
  if (DAT_0439e6e8 != 0) {
    local_88[0] = 2;
    local_80 = auStack_78;
    lVar3 = FUN_00405c90(DAT_0439e6e8,local_88);
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(lVar3 + 8);
LAB_004085a8:
      return *(undefined4 *)(ppuVar4 + 2);
    }
  }
  __s1 = local_70;
  iVar5 = 0;
  iVar6 = 0x4a2;
  do {
    iVar7 = iVar5 + iVar6;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
    uVar1 = *(uint *)(&DAT_03a00058 + (long)iVar7 * 4);
    iVar2 = strcmp(__s1,(&PTR_s_undefined_04157c58)[(ulong)uVar1 * 5]);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        ppuVar4 = &PTR_s_UNDEF_04157c50 + (ulong)uVar1 * 5;
        goto LAB_004085a8;
      }
      iVar5 = iVar7 + 1;
      iVar7 = iVar6;
    }
    iVar6 = iVar7;
    if (iVar7 <= iVar5) {
      return 0;
    }
  } while( true );
}


