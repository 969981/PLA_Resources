/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00903ad4; name: FUN_00903ad4
 */


void FUN_00903ad4(long param_1)

{
  long lVar1;
  size_t sVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *__s;
  long lVar14;
  undefined8 *puVar15;
  undefined1 *local_7b8;
  undefined8 uStack_7b0;
  long local_7a8;
  long lStack_7a0;
  undefined8 local_798;
  undefined *puStack_790;
  undefined4 local_788 [2];
  long local_780;
  undefined4 local_778;
  long local_770;
  undefined4 local_768;
  undefined8 auStack_760 [74];
  undefined8 auStack_510 [74];
  int local_2bc;
  undefined8 auStack_2b8 [75];
  
  lVar9 = FUN_00904108();
  lVar1 = lVar9 + 8;
  memset(auStack_2b8,0,0x250);
  local_2bc = 0;
  FUN_0090439c(lVar9,auStack_2b8,&local_2bc,*(undefined8 *)(lVar9 + 0x90));
  FUN_009044c8(lVar9,auStack_2b8,&local_2bc,*(undefined8 *)(lVar9 + 0x98));
  FUN_009045f4(lVar9,auStack_2b8,&local_2bc);
  lVar14 = (long)local_2bc;
  auStack_2b8[lVar14 * 2] = 0;
  auStack_2b8[lVar14 * 2 + 1] = 0;
  memcpy(auStack_510,auStack_2b8,0x250);
  memcpy(auStack_760,auStack_2b8,0x250);
  lVar10 = FUN_008cca50();
  lVar14 = lVar14 + -1;
  __s = (char *)auStack_2b8[lVar14 * 2];
  sVar11 = strlen(__s);
  sVar2 = (ulong)(*(byte *)(lVar10 + 0x1c8) >> 1);
  if ((*(byte *)(lVar10 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar10 + 0x1d0);
  }
  if ((sVar11 == sVar2) &&
     (iVar8 = std::string::compare(lVar10 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)__s),
     iVar8 == 0)) {
    auStack_510[lVar14 * 2] = 0;
    auStack_510[lVar14 * 2 + 1] = 0;
  }
  auStack_760[lVar14 * 2] = __s;
  auStack_760[lVar14 * 2 + 1] = FUN_00904670;
  FUN_00151fe0(param_1,0,2);
  uVar6 = FUN_0014feb0(param_1,0xffffffff);
  local_770 = param_1;
  local_768 = uVar6;
  pbVar12 = (byte *)FUN_008d9d20();
  uVar4 = *(ulong *)(pbVar12 + 8);
  pbVar13 = *(byte **)(pbVar12 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar13 = pbVar12 + 1;
    uVar4 = (ulong)(*pbVar12 >> 1);
  }
  FUN_001514f0(param_1,pbVar13,uVar4);
  FUN_00152550(param_1,uVar6,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_009032d0,0);
  FUN_00152550(param_1,uVar6,&DAT_0397bfcb);
  lVar10 = 0;
  do {
    if (lVar10 == 1) {
      puVar15 = auStack_760;
      pbVar13 = (byte *)FUN_008da13c();
    }
    else if (lVar10 == 0) {
      puVar15 = auStack_510;
      pbVar13 = (byte *)FUN_008d8d9c();
    }
    else {
      puVar15 = auStack_2b8;
      pbVar13 = (byte *)FUN_008d9b38();
    }
    pbVar12 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar12 = pbVar13 + 1;
    }
    FUN_00154450(param_1,pbVar12);
    local_778 = FUN_0014feb0(param_1,0xffffffff);
    local_7b8 = (undefined1 *)CONCAT44(local_7b8._4_4_,0x1e);
    local_780 = param_1;
    FUN_008fe304(local_788,param_1,&local_7b8,&local_770,local_778);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar9);
    FUN_00155a20(param_1,puVar15,2);
    uVar6 = local_778;
    if (*(long *)(lVar9 + 0xd0) == 0) {
      lVar14 = *(long *)(lVar9 + 0xd8);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar6,"class_check");
      lVar14 = *(long *)(lVar9 + 0xd8);
      uVar6 = local_778;
    }
    local_778 = uVar6;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar6,"class_cast");
    }
    local_7b8 = *(undefined1 **)(lVar9 + 0xb0);
    uStack_7b0 = 0;
    local_7a8 = lVar9;
    lStack_7a0 = lVar1;
    FUN_009046c0(param_1,&local_7b8,local_778);
    local_7b8 = *(undefined1 **)(lVar9 + 0xb8);
    uStack_7b0 = 0;
    local_7a8 = lVar9;
    lStack_7a0 = lVar1;
    FUN_00904730(param_1,&local_7b8,local_778);
    if (*(char *)(lVar9 + 0x58) == '\0') {
      local_7b8 = (undefined1 *)CONCAT44(local_7b8._4_4_,1);
      FUN_008fe304(local_788,param_1,&local_7b8,&local_780,local_778);
    }
    else {
      local_788[0] = 1;
      local_7b8 = &LAB_00904798;
      uStack_7b0 = 0;
      local_7a8 = lVar9;
      lStack_7a0 = lVar1;
      FUN_009057c4(param_1,local_788,&local_7b8,local_778);
      local_788[0] = 2;
      local_7b8 = &LAB_00904aa4;
      uStack_7b0 = 0;
      local_7a8 = lVar9;
      lStack_7a0 = lVar1;
      FUN_009057c4(param_1,local_788,&local_7b8,local_778);
    }
    FUN_00151fe0(param_1,0,3);
    uVar6 = FUN_0014feb0(param_1,0xffffffff);
    local_7b8 = (undefined1 *)CONCAT44(local_7b8._4_4_,0x1e);
    FUN_008fe304(local_788,param_1,&local_7b8,&local_770,uVar6);
    if (*(undefined1 **)(lVar9 + 0xa8) == (undefined1 *)0x0) {
      cVar5 = *(char *)(lVar9 + 0xe0);
    }
    else {
      local_788[0] = 4;
      uStack_7b0 = 0;
      local_7b8 = *(undefined1 **)(lVar9 + 0xa8);
      local_7a8 = lVar9;
      lStack_7a0 = lVar1;
      FUN_009057c4(param_1,local_788,&local_7b8,uVar6);
      cVar5 = *(char *)(lVar9 + 0xe0);
    }
    if (cVar5 != '\0') {
      local_788[0] = 1;
      local_7b8 = &LAB_00904798;
      uStack_7b0 = 0;
      local_7a8 = lVar9;
      lStack_7a0 = lVar1;
      FUN_009057c4(param_1,local_788,&local_7b8,uVar6);
      local_788[0] = 2;
      local_7b8 = &LAB_00904aa4;
      uStack_7b0 = 0;
      local_7a8 = lVar9;
      lStack_7a0 = lVar1;
      FUN_009057c4(param_1,local_788,&local_7b8,uVar6);
    }
    uVar7 = local_778;
    if (param_1 == 0) {
      FUN_00151490(0);
    }
    else {
      FUN_00150260(param_1,uVar6);
    }
    FUN_00152ae0(param_1,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_780,0xfffffffe);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  FUN_00902084();
  puVar3 = DAT_043a80e0;
  if ((DAT_043a80d0 & 1) == 0) {
    puVar3 = &DAT_043a80d1;
  }
  FUN_00154450(param_1,puVar3);
  uVar6 = FUN_0014feb0(param_1,0xffffffff);
  local_7b8._0_4_ = 0x1e;
  FUN_008fe304(&local_780,param_1,&local_7b8,&local_770,uVar6);
  FUN_00151490(param_1);
  FUN_00151810(param_1,lVar9);
  FUN_00155a20(param_1,auStack_2b8,2);
  FUN_00151fe0(param_1,0,3);
  uVar7 = FUN_0014feb0(param_1,0xffffffff);
  local_7b8 = (undefined1 *)CONCAT44(local_7b8._4_4_,0x1e);
  FUN_008fe304(&local_780,param_1,&local_7b8,&local_770,uVar7);
  local_7b8 = *(undefined1 **)(lVar9 + 0xa8);
  if (local_7b8 != (undefined1 *)0x0) {
    local_780 = CONCAT44(local_780._4_4_,4);
    uStack_7b0 = 0;
    local_7a8 = lVar9;
    lStack_7a0 = lVar1;
    FUN_009057c4(param_1,&local_780,&local_7b8,uVar7);
  }
  local_780._0_4_ = 1;
  local_7b8 = &LAB_00904aa8;
  uStack_7b0 = 0;
  local_798 = 0;
  puStack_790 = &DAT_03a756f8;
  local_7a8 = lVar9;
  lStack_7a0 = lVar1;
  FUN_00905b6c(param_1,&local_780,&local_7b8,uVar7);
  local_780 = CONCAT44(local_780._4_4_,2);
  local_7b8 = &LAB_00904aac;
  uStack_7b0 = 0;
  local_798 = 0;
  puStack_790 = &DAT_03a756f8;
  local_7a8 = lVar9;
  lStack_7a0 = lVar1;
  FUN_00905b6c(param_1,&local_780,&local_7b8,uVar7);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar7);
  }
  FUN_00152ae0(param_1,uVar6);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_0014ff70(param_1,local_768,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  return;
}


