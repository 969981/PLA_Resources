/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004083f0; name: FUN_004083f0
 */


undefined4 FUN_004083f0(char *param_1)

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
  char **local_80;
  char *local_78 [5];
  
  local_78[0] = param_1;
  if (DAT_0439e6e8 != 0) {
    local_88[0] = 1;
    local_80 = local_78;
    lVar3 = FUN_00405c90(DAT_0439e6e8,local_88);
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(lVar3 + 8);
LAB_004084b8:
      return *(undefined4 *)(ppuVar4 + 2);
    }
  }
  __s1 = local_78[0];
  iVar5 = 0;
  iVar6 = 0x4a2;
  do {
    iVar7 = iVar5 + iVar6;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = iVar7 >> 1;
    uVar1 = *(uint *)(&DAT_03a012e0 + (long)iVar7 * 4);
    iVar2 = strcmp(__s1,(&PTR_s_UNDEF_04157c50)[(ulong)uVar1 * 5]);
    if (-1 < iVar2) {
      if (iVar2 == 0) {
        ppuVar4 = &PTR_s_UNDEF_04157c50 + (ulong)uVar1 * 5;
        goto LAB_004084b8;
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


