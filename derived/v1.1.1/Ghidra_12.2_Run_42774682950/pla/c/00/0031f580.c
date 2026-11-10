/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f580; name: FUN_0031f580
 */


void FUN_0031f580(byte *param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  void *pvVar6;
  byte *pbVar7;
  size_t sVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  puVar4 = PTR_LAB_04373088;
  puVar3 = PTR_FUN_04373078;
  bVar2 = *param_2;
  if ((bVar2 != 0) && (param_2[1] == 0)) {
    uVar13 = *(ulong *)(param_1 + 8);
    pbVar9 = *(byte **)(param_1 + 0x10);
    if ((*param_1 & 1) == 0) {
      pbVar9 = param_1 + 1;
      uVar13 = (ulong)(*param_1 >> 1);
    }
    if (uVar13 == 0) {
      return;
    }
    pbVar11 = pbVar9 + uVar13;
    pbVar16 = pbVar9 + (uVar13 - 1);
    pbVar7 = pbVar9;
    pbVar10 = pbVar9;
    if (*pbVar9 != bVar2) goto LAB_0031f828;
LAB_0031f808:
    pbVar9 = pbVar9 + 1;
LAB_0031f80c:
    if (pbVar9 == pbVar11) {
      return;
    }
    do {
      pbVar7 = pbVar9;
      pbVar10 = pbVar9;
      if (*pbVar9 == bVar2) goto LAB_0031f808;
LAB_0031f828:
      do {
        if (pbVar16 == pbVar7) {
          pbVar9 = pbVar11;
          break;
        }
        pbVar9 = pbVar7 + 1;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar9;
      } while (*pbVar1 != bVar2);
      uVar13 = (long)pbVar9 - (long)pbVar10;
      local_78 = 0;
      local_70 = 0;
      local_68 = (void *)0x0;
      if (0xffffffffffffffef < uVar13) goto LAB_0031f99c;
      if (uVar13 < 0x17) {
        local_78 = (ulong)(byte)((int)uVar13 << 1);
        pvVar6 = (void *)((ulong)&local_78 | 1);
        if (uVar13 != 0) goto LAB_0031f8a0;
      }
      else {
        uVar14 = uVar13 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)FUN_002e2e80(puVar3,uVar14);
        local_78 = uVar14 | 1;
        local_70 = uVar13;
        local_68 = pvVar6;
LAB_0031f8a0:
        memcpy(pvVar6,pbVar10,uVar13);
      }
      *(undefined1 *)((long)pvVar6 + uVar13) = 0;
                    /* try { // try from 0031f8b4 to 0031f8bf has its CatchHandler @ 0031f9cc */
      FUN_00321d30(param_3,&local_78);
      if ((local_78 & 1) == 0) goto LAB_0031f80c;
      FUN_002e2ea0(puVar4,local_68);
      if (pbVar9 == pbVar11) {
        return;
      }
    } while( true );
  }
  bVar2 = *param_1;
  uVar13 = *(ulong *)(param_1 + 8);
  pbVar9 = *(byte **)(param_1 + 0x10);
  if ((bVar2 & 1) == 0) {
    uVar14 = (ulong)(bVar2 >> 1);
    pbVar11 = param_1 + 1;
  }
  else {
    uVar14 = uVar13;
    pbVar11 = pbVar9;
  }
  sVar5 = strlen((char *)param_2);
  if (uVar14 == 0) {
    return;
  }
  pbVar7 = pbVar11;
  if (sVar5 != 0) {
    while (pvVar6 = memchr(param_2,(uint)*pbVar7,sVar5), pvVar6 != (void *)0x0) {
      pbVar7 = pbVar7 + 1;
      uVar14 = uVar14 - 1;
      if (uVar14 == 0) {
        return;
      }
    }
  }
  uVar14 = (long)pbVar7 - (long)pbVar11;
  if (uVar14 == 0xffffffffffffffff) {
    return;
  }
  while( true ) {
    uVar12 = (ulong)(bVar2 >> 1);
    pbVar11 = param_1 + 1;
    if ((bVar2 & 1) != 0) {
      uVar12 = uVar13;
      pbVar11 = pbVar9;
    }
    sVar5 = strlen((char *)param_2);
    if ((sVar5 == 0) || (uVar12 <= uVar14)) break;
    pbVar7 = pbVar11 + uVar14;
LAB_0031f670:
    sVar8 = 0;
    while (*pbVar7 != param_2[sVar8]) {
      sVar8 = sVar8 + 1;
      if (sVar5 == sVar8) goto code_r0x0031f690;
    }
    if ((pbVar7 == pbVar11 + uVar12) ||
       (uVar15 = (long)pbVar7 - (long)pbVar11, uVar15 == 0xffffffffffffffff)) break;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_78 = 0;
    if (uVar12 < uVar14) goto LAB_0031f9a4;
    uVar13 = uVar12 - uVar14;
    if (uVar15 - uVar14 <= uVar12 - uVar14) {
      uVar13 = uVar15 - uVar14;
    }
    if (0xffffffffffffffef < uVar13) goto LAB_0031f99c;
    if (uVar13 < 0x17) {
      local_78 = (ulong)(byte)((int)uVar13 << 1);
      pvVar6 = (void *)((ulong)&local_78 | 1);
      if (uVar13 != 0) goto LAB_0031f71c;
    }
    else {
      uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
      local_78 = uVar12 | 1;
      local_70 = uVar13;
      local_68 = pvVar6;
LAB_0031f71c:
      memcpy(pvVar6,pbVar11 + uVar14,uVar13);
    }
    *(undefined1 *)((long)pvVar6 + uVar13) = 0;
                    /* try { // try from 0031f730 to 0031f73b has its CatchHandler @ 0031f9bc */
    FUN_00321d30(param_3,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
    }
    bVar2 = *param_1;
    uVar13 = *(ulong *)(param_1 + 8);
    pbVar9 = *(byte **)(param_1 + 0x10);
    uVar14 = (ulong)(bVar2 >> 1);
    pbVar10 = param_1 + 1;
    if ((bVar2 & 1) != 0) {
      uVar14 = uVar13;
      pbVar10 = pbVar9;
    }
    sVar5 = strlen((char *)param_2);
    if (uVar14 <= uVar15) {
      return;
    }
    pbVar16 = pbVar10 + uVar15;
    if (sVar5 != 0) {
      pbVar11 = pbVar11 + (uVar14 - (long)pbVar7);
      while (pvVar6 = memchr(param_2,(uint)*pbVar16,sVar5), pvVar6 != (void *)0x0) {
        pbVar16 = pbVar16 + 1;
        pbVar11 = pbVar11 + -1;
        if (pbVar11 == (byte *)0x0) {
          return;
        }
      }
    }
    uVar14 = (long)pbVar16 - (long)pbVar10;
    if (uVar14 == 0xffffffffffffffff) {
      return;
    }
  }
LAB_0031f8e4:
  uVar13 = uVar12 - uVar14;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  if (uVar12 < uVar14) {
LAB_0031f9a4:
    local_68 = (void *)0x0;
    local_70 = 0;
    local_78 = 0;
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_out_of_range();
  }
  if (0xffffffffffffffef < uVar13) {
LAB_0031f99c:
    local_68 = (void *)0x0;
    local_70 = 0;
    local_78 = 0;
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    local_78 = (ulong)(byte)((int)uVar13 << 1);
    pvVar6 = (void *)((ulong)&local_78 | 1);
    if (uVar13 == 0) goto LAB_0031f954;
  }
  else {
    uVar12 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_78 = uVar12 | 1;
    local_70 = uVar13;
    local_68 = pvVar6;
  }
  memcpy(pvVar6,pbVar11 + uVar14,uVar13);
LAB_0031f954:
  *(undefined1 *)((long)pvVar6 + uVar13) = 0;
                    /* try { // try from 0031f958 to 0031f963 has its CatchHandler @ 0031f9ac */
  FUN_00321d30(param_3,&local_78);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
code_r0x0031f690:
  pbVar7 = pbVar7 + 1;
  if (pbVar7 == pbVar11 + uVar12) goto LAB_0031f8e4;
  goto LAB_0031f670;
}


