/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029388c8; name: FUN_029388c8
 */


undefined4 FUN_029388c8(long *param_1,char *param_2)

{
  long *__dest;
  uint uVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  ulong __n;
  ulong uVar8;
  int local_44;
  
  sVar3 = strlen(param_2);
  iVar2 = (int)sVar3;
  if (iVar2 == 0) {
    lVar7 = 0x10;
  }
  else {
    uVar1 = iVar2 + 1U;
    if (param_2[iVar2 - 1] != '/') {
      uVar1 = iVar2 + 2;
    }
    lVar7 = (ulong)(uVar1 - 1) + 0x10;
  }
  uVar8 = (ulong)(iVar2 + 1U);
  sVar4 = strlen(&DAT_0440a0c9);
  if (sVar4 + uVar8 < 0x104) {
    plVar5 = (long *)(*DAT_0442d138)(7,lVar7);
    if (plVar5 == (long *)0x0) {
      uVar6 = 0x34;
    }
    else {
      __dest = plVar5 + 1;
      sVar4 = strlen(param_2);
      __n = uVar8 - 1;
      if (sVar4 + 1 <= uVar8 - 1) {
        __n = sVar4 + 1;
      }
      strncpy((char *)__dest,param_2,__n);
      *(char *)((long)__dest + __n) = '\0';
      if ((iVar2 != 0) && (param_2[iVar2 - 1] != '/')) {
        *(char *)((long)__dest + (sVar3 & 0xffffffff)) = '/';
        *(char *)((long)__dest + uVar8) = '\0';
      }
      *plVar5 = 0;
      if (*param_1 == 0) {
        *param_1 = (long)plVar5;
        *plVar5 = 0;
      }
      else {
        *plVar5 = *param_1;
        *param_1 = (long)plVar5;
      }
      iVar2 = nn::fs::GetEntryType((DirectoryEntryType *)&local_44,param_2);
      uVar6 = 0x24;
      if (local_44 == 0 && iVar2 == 0) {
        uVar6 = 1;
      }
    }
  }
  else {
    uVar6 = 0x1f;
  }
  return uVar6;
}


