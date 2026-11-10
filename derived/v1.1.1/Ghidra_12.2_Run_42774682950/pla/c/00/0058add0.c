/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058add0; name: FUN_0058add0
 */


void FUN_0058add0(undefined8 param_1,byte *param_2,tm *param_3)

{
  byte *__format;
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  char *local_58;
  char *local_50;
  
  bVar3 = *param_2;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  sVar5 = uVar2 * 2;
  local_58 = (char *)0x0;
  if (sVar5 != 0) {
    if ((uVar2 & 0x7fffffffffffffff) >> 0x3e != 0) goto LAB_0058b184;
    local_58 = (char *)FUN_002e2e80(PTR_FUN_04373078,sVar5);
    lVar4 = uVar2 * -2;
    local_50 = local_58;
    do {
      *local_50 = '\0';
      local_50[1] = '\0';
      local_50 = local_50 + 2;
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0);
    bVar3 = *param_2;
  }
  __format = param_2 + 1;
  pbVar1 = __format;
  if ((bVar3 & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 0058ae88 to 0058b153 has its CatchHandler @ 0058b19c */
  sVar5 = strftime(local_58,sVar5,(char *)pbVar1,param_3);
  if (sVar5 != 0) {
    FUN_002e4094(param_1,local_58,sVar5);
  }
  if (local_58 != (char *)0x0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if (sVar5 == 0) {
    bVar3 = *param_2;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    local_58 = (char *)0x0;
    sVar5 = uVar2 * 4;
    if (sVar5 != 0) {
      if ((uVar2 & 0x3fffffffffffffff) >> 0x3d != 0) goto LAB_0058b184;
      local_58 = (char *)FUN_002e2e80(PTR_FUN_04373078,sVar5);
      lVar4 = uVar2 * -4;
      local_50 = local_58;
      do {
        *local_50 = '\0';
        local_50[1] = '\0';
        local_50 = local_50 + 2;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0);
      bVar3 = *param_2;
    }
    pbVar1 = __format;
    if ((bVar3 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    sVar5 = strftime(local_58,sVar5,(char *)pbVar1,param_3);
    if (sVar5 != 0) {
      FUN_002e4094(param_1,local_58,sVar5);
    }
    if (local_58 != (char *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    if (sVar5 != 0) {
      return;
    }
    bVar3 = *param_2;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    local_58 = (char *)0x0;
    sVar5 = uVar2 * 8;
    if (sVar5 != 0) {
      if ((uVar2 & 0x1fffffffffffffff) >> 0x3c != 0) goto LAB_0058b184;
      local_58 = (char *)FUN_002e2e80(PTR_FUN_04373078,sVar5);
      lVar4 = uVar2 * -8;
      local_50 = local_58;
      do {
        *local_50 = '\0';
        local_50[1] = '\0';
        local_50 = local_50 + 2;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0);
      bVar3 = *param_2;
    }
    pbVar1 = __format;
    if ((bVar3 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
    sVar5 = strftime(local_58,sVar5,(char *)pbVar1,param_3);
    if (sVar5 != 0) {
      FUN_002e4094(param_1,local_58,sVar5);
    }
    if (local_58 != (char *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    if (sVar5 == 0) {
      bVar3 = *param_2;
      uVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
      local_58 = (char *)0x0;
      sVar5 = uVar2 * 0x10;
      if (sVar5 != 0) {
        if ((uVar2 & 0xfffffffffffffff) >> 0x3b != 0) {
LAB_0058b184:
                    /* try { // try from 0058b184 to 0058b18b has its CatchHandler @ 0058b18c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        local_58 = (char *)FUN_002e2e80(PTR_FUN_04373078,sVar5);
        lVar4 = uVar2 * -0x10;
        local_50 = local_58;
        do {
          *local_50 = '\0';
          local_50[1] = '\0';
          local_50 = local_50 + 2;
          lVar4 = lVar4 + 2;
        } while (lVar4 != 0);
        bVar3 = *param_2;
      }
      if ((bVar3 & 1) != 0) {
        __format = *(byte **)(param_2 + 0x10);
      }
      sVar5 = strftime(local_58,sVar5,(char *)__format,param_3);
      if (sVar5 != 0) {
        FUN_002e4094(param_1,local_58,sVar5);
      }
      if (local_58 != (char *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
  }
  return;
}


