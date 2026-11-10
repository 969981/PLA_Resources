/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00917390; name: FUN_00917390
 */


void FUN_00917390(long param_1)

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
  undefined1 *local_cf8;
  undefined8 uStack_cf0;
  long local_ce8;
  long lStack_ce0;
  undefined8 local_cd8;
  undefined *puStack_cd0;
  undefined4 local_cc8 [2];
  long local_cc0;
  undefined4 local_cb8;
  long local_cb0;
  undefined4 local_ca8;
  undefined8 auStack_ca0 [130];
  undefined8 auStack_890 [130];
  int local_47c;
  undefined8 auStack_478 [131];
  
  lVar9 = FUN_009179c4();
  lVar1 = lVar9 + 8;
  memset(auStack_478,0,0x410);
  local_47c = 0;
  FUN_00917c58(lVar9,auStack_478,&local_47c,*(undefined8 *)(lVar9 + 0x250));
  FUN_00917d84(lVar9,auStack_478,&local_47c,*(undefined8 *)(lVar9 + 600));
  FUN_00917eb0(lVar9,auStack_478,&local_47c);
  lVar14 = (long)local_47c;
  auStack_478[lVar14 * 2] = 0;
  auStack_478[lVar14 * 2 + 1] = 0;
  memcpy(auStack_890,auStack_478,0x410);
  memcpy(auStack_ca0,auStack_478,0x410);
  lVar10 = FUN_008cca50();
  lVar14 = lVar14 + -1;
  __s = (char *)auStack_478[lVar14 * 2];
  sVar11 = strlen(__s);
  sVar2 = (ulong)(*(byte *)(lVar10 + 0x1c8) >> 1);
  if ((*(byte *)(lVar10 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar10 + 0x1d0);
  }
  if ((sVar11 == sVar2) &&
     (iVar8 = std::string::compare(lVar10 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)__s),
     iVar8 == 0)) {
    auStack_890[lVar14 * 2] = 0;
    auStack_890[lVar14 * 2 + 1] = 0;
  }
  auStack_ca0[lVar14 * 2] = __s;
  auStack_ca0[lVar14 * 2 + 1] = &LAB_00917f30;
  FUN_00151fe0(param_1,0,2);
  uVar6 = FUN_0014feb0(param_1,0xffffffff);
  local_cb0 = param_1;
  local_ca8 = uVar6;
  pbVar12 = (byte *)FUN_008ecc30();
  uVar4 = *(ulong *)(pbVar12 + 8);
  pbVar13 = *(byte **)(pbVar12 + 0x10);
  if ((*pbVar12 & 1) == 0) {
    pbVar13 = pbVar12 + 1;
    uVar4 = (ulong)(*pbVar12 >> 1);
  }
  FUN_001514f0(param_1,pbVar13,uVar4);
  FUN_00152550(param_1,uVar6,&DAT_038f8fce);
  FUN_001516f0(param_1,PTR_LAB_04379b48,0);
  FUN_00152550(param_1,uVar6,&DAT_0397bfcb);
  lVar10 = 0;
  do {
    if (lVar10 == 1) {
      puVar15 = auStack_ca0;
      pbVar13 = (byte *)FUN_008ede04();
    }
    else if (lVar10 == 0) {
      puVar15 = auStack_890;
      pbVar13 = (byte *)FUN_008ed7b8();
    }
    else {
      puVar15 = auStack_478;
      pbVar13 = (byte *)FUN_008ec734();
    }
    pbVar12 = *(byte **)(pbVar13 + 0x10);
    if ((*pbVar13 & 1) == 0) {
      pbVar12 = pbVar13 + 1;
    }
    FUN_00154450(param_1,pbVar12);
    local_cb8 = FUN_0014feb0(param_1,0xffffffff);
    local_cf8 = (undefined1 *)CONCAT44(local_cf8._4_4_,0x1e);
    local_cc0 = param_1;
    FUN_008fe304(local_cc8,param_1,&local_cf8,&local_cb0,local_cb8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar9);
    FUN_00155a20(param_1,puVar15,2);
    uVar6 = local_cb8;
    if (*(long *)(lVar9 + 0x290) == 0) {
      lVar14 = *(long *)(lVar9 + 0x298);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar6,"class_check");
      lVar14 = *(long *)(lVar9 + 0x298);
      uVar6 = local_cb8;
    }
    local_cb8 = uVar6;
    if (lVar14 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar6,"class_cast");
    }
    local_cf8 = *(undefined1 **)(lVar9 + 0x270);
    uStack_cf0 = 0;
    local_ce8 = lVar9;
    lStack_ce0 = lVar1;
    FUN_00917f80(param_1,&local_cf8,local_cb8);
    local_cf8 = *(undefined1 **)(lVar9 + 0x278);
    uStack_cf0 = 0;
    local_ce8 = lVar9;
    lStack_ce0 = lVar1;
    FUN_00917ff0(param_1,&local_cf8,local_cb8);
    if (*(char *)(lVar9 + 0x58) == '\0') {
      local_cf8 = (undefined1 *)CONCAT44(local_cf8._4_4_,1);
      FUN_008fe304(local_cc8,param_1,&local_cf8,&local_cc0,local_cb8);
    }
    else {
      local_cc8[0] = 1;
      local_cf8 = &LAB_00918058;
      uStack_cf0 = 0;
      local_ce8 = lVar9;
      lStack_ce0 = lVar1;
      FUN_00919084(param_1,local_cc8,&local_cf8,local_cb8);
      local_cc8[0] = 2;
      local_cf8 = &LAB_00918364;
      uStack_cf0 = 0;
      local_ce8 = lVar9;
      lStack_ce0 = lVar1;
      FUN_00919084(param_1,local_cc8,&local_cf8,local_cb8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar6 = FUN_0014feb0(param_1,0xffffffff);
    local_cf8 = (undefined1 *)CONCAT44(local_cf8._4_4_,0x1e);
    FUN_008fe304(local_cc8,param_1,&local_cf8,&local_cb0,uVar6);
    if (*(undefined1 **)(lVar9 + 0x268) == (undefined1 *)0x0) {
      cVar5 = *(char *)(lVar9 + 0x2a0);
    }
    else {
      local_cc8[0] = 4;
      uStack_cf0 = 0;
      local_cf8 = *(undefined1 **)(lVar9 + 0x268);
      local_ce8 = lVar9;
      lStack_ce0 = lVar1;
      FUN_00919084(param_1,local_cc8,&local_cf8,uVar6);
      cVar5 = *(char *)(lVar9 + 0x2a0);
    }
    if (cVar5 != '\0') {
      local_cc8[0] = 1;
      local_cf8 = &LAB_00918058;
      uStack_cf0 = 0;
      local_ce8 = lVar9;
      lStack_ce0 = lVar1;
      FUN_00919084(param_1,local_cc8,&local_cf8,uVar6);
      local_cc8[0] = 2;
      local_cf8 = &LAB_00918364;
      uStack_cf0 = 0;
      local_ce8 = lVar9;
      lStack_ce0 = lVar1;
      FUN_00919084(param_1,local_cc8,&local_cf8,uVar6);
    }
    uVar7 = local_cb8;
    if (param_1 == 0) {
      FUN_00151490(0);
    }
    else {
      FUN_00150260(param_1,uVar6);
    }
    FUN_00152ae0(param_1,uVar7);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_cc0,0xfffffffe);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  FUN_00916938();
  puVar3 = DAT_043a83e0;
  if ((DAT_043a83d0 & 1) == 0) {
    puVar3 = &DAT_043a83d1;
  }
  FUN_00154450(param_1,puVar3);
  uVar6 = FUN_0014feb0(param_1,0xffffffff);
  local_cf8._0_4_ = 0x1e;
  FUN_008fe304(&local_cc0,param_1,&local_cf8,&local_cb0,uVar6);
  FUN_00151490(param_1);
  FUN_00151810(param_1,lVar9);
  FUN_00155a20(param_1,auStack_478,2);
  FUN_00151fe0(param_1,0,3);
  uVar7 = FUN_0014feb0(param_1,0xffffffff);
  local_cf8 = (undefined1 *)CONCAT44(local_cf8._4_4_,0x1e);
  FUN_008fe304(&local_cc0,param_1,&local_cf8,&local_cb0,uVar7);
  local_cf8 = *(undefined1 **)(lVar9 + 0x268);
  if (local_cf8 != (undefined1 *)0x0) {
    local_cc0 = CONCAT44(local_cc0._4_4_,4);
    uStack_cf0 = 0;
    local_ce8 = lVar9;
    lStack_ce0 = lVar1;
    FUN_00919084(param_1,&local_cc0,&local_cf8,uVar7);
  }
  local_cc0._0_4_ = 1;
  local_cf8 = &LAB_00918368;
  uStack_cf0 = 0;
  local_cd8 = 0;
  puStack_cd0 = &DAT_03a756f8;
  local_ce8 = lVar9;
  lStack_ce0 = lVar1;
  FUN_0091942c(param_1,&local_cc0,&local_cf8,uVar7);
  local_cc0 = CONCAT44(local_cc0._4_4_,2);
  local_cf8 = &LAB_0091836c;
  uStack_cf0 = 0;
  local_cd8 = 0;
  puStack_cd0 = &DAT_03a756f8;
  local_ce8 = lVar9;
  lStack_ce0 = lVar1;
  FUN_0091942c(param_1,&local_cc0,&local_cf8,uVar7);
  if (param_1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00150260(param_1,uVar7);
  }
  FUN_00152ae0(param_1,uVar6);
  FUN_0014ff10(param_1,0xfffffffe);
  FUN_0014ff70(param_1,local_ca8,0xffffffff);
  FUN_0014ff10(param_1,0xfffffffe);
  return;
}


