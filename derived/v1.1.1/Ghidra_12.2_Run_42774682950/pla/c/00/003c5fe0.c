/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c5fe0; name: FUN_003c5fe0
 */


bool FUN_003c5fe0(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulong __n;
  ulong uVar1;
  byte *__s1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  bVar2 = *param_2;
  uVar6 = (ulong)(bVar2 >> 1);
  bVar3 = *param_3;
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(ulong *)(param_2 + 8);
  }
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (__n == uVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar8 = *(byte **)(param_3 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar8) goto LAB_003c6080;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      return true;
    }
    if (__n == 0) {
      return true;
    }
    iVar5 = memcmp(pbVar7,pbVar8,__n);
    if (iVar5 == 0) {
      return true;
    }
  }
LAB_003c6080:
  if (uVar1 < __n) {
LAB_003c60b8:
    bVar4 = false;
  }
  else {
    if (__n == 0) {
      pbVar7 = *(byte **)(param_3 + 0x10);
    }
    else {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar8 = *(byte **)(param_2 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      pbVar7 = *(byte **)(param_3 + 0x10);
      __s1 = pbVar7;
      if ((bVar3 & 1) == 0) {
        __s1 = param_3 + 1;
      }
      iVar5 = memcmp(__s1,pbVar8,__n);
      if (iVar5 != 0) goto LAB_003c60b8;
    }
    if ((bVar3 & 1) == 0) {
      pbVar7 = param_3 + 1;
    }
    bVar4 = pbVar7[__n] == 0x2e;
  }
  return bVar4;
}


