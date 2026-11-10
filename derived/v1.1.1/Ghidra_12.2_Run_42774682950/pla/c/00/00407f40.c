/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407f40; name: FUN_00407f40
 */


int FUN_00407f40(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined4 local_60 [2];
  long local_58;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(int *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 != 0) {
    if (DAT_0439e6e8 != 0) {
      local_60[0] = 0;
      local_58 = param_1;
      lVar3 = FUN_00405c90(DAT_0439e6e8,local_60);
      if (lVar3 != 0) {
        ppuVar5 = *(undefined ***)(lVar3 + 8);
LAB_00408094:
        return *(int *)(ppuVar5 + 2);
      }
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
        iVar4 = 0;
        iVar6 = 0x42f;
        while( true ) {
          iVar7 = iVar4 + iVar6;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          iVar7 = iVar7 >> 1;
          uVar8 = (ulong)*(uint *)(&DAT_039fef9c + (long)iVar7 * 4);
          if (*(int *)(&DAT_04157c64 + uVar8 * 0x28) == 0) break;
          if (*(int *)(&DAT_04157c64 + uVar8 * 0x28) < 1) {
            iVar4 = iVar7 + 1;
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
          if (iVar7 <= iVar4) {
            return 0;
          }
        }
LAB_00408084:
        ppuVar5 = &PTR_s_UNDEF_04157c50 + uVar8 * 5;
        goto LAB_00408094;
      }
    }
    iVar6 = 0;
    iVar7 = 0x42f;
    do {
      while( true ) {
        iVar1 = iVar6 + iVar7;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        uVar8 = (ulong)*(uint *)(&DAT_039fef9c + (long)iVar1 * 4);
        iVar2 = iVar4 - *(int *)(&DAT_04157c64 + uVar8 * 0x28);
        if (iVar2 != 0) break;
        iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(&DAT_04157c68 + uVar8 * 0x28),
                       (long)iVar4);
        if (iVar2 < 0) goto LAB_00407fc4;
LAB_00407ff8:
        if (iVar2 == 0) goto LAB_00408084;
        iVar6 = iVar1 + 1;
        if (iVar7 <= iVar6) {
          return 0;
        }
      }
      if (-1 < iVar2) goto LAB_00407ff8;
LAB_00407fc4:
      iVar7 = iVar1;
    } while (iVar6 < iVar1);
  }
  return 0;
}


