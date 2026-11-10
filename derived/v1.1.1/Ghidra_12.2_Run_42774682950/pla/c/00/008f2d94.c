/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008f2d94; name: FUN_008f2d94
 */


void FUN_008f2d94(long param_1)

{
  long lVar1;
  size_t sVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *__s;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *local_16e8;
  undefined8 uStack_16e0;
  long local_16d8;
  long lStack_16d0;
  undefined8 local_16c8;
  undefined *puStack_16c0;
  undefined4 local_16b8 [2];
  long local_16b0;
  undefined4 local_16a8;
  long local_16a0;
  undefined4 local_1698;
  undefined8 auStack_1690 [236];
  undefined8 auStack_f30 [236];
  int local_7cc;
  undefined8 auStack_7c8 [237];
  
  lVar8 = FUN_008f3aa4();
  lVar1 = lVar8 + 8;
  memset(auStack_7c8,0,0x760);
  local_7cc = 0;
  FUN_008f3d38(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x60));
  FUN_008f3e64(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x78));
  FUN_008f3f90(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x90));
  FUN_008f40bc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0xa8));
  FUN_008f41e8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0xc0));
  FUN_008f4314(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0xd8));
  FUN_008f4440(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0xf0));
  FUN_008f456c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x108));
  FUN_008f4698(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x120));
  FUN_008f47c4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x138));
  FUN_008f48f0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x150));
  FUN_008f4a1c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x168));
  FUN_008f4b48(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x180));
  FUN_008f4c74(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x198));
  FUN_008f4da0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x1b0));
  FUN_008f4ecc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x1c8));
  FUN_008f4ff8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x1e0));
  FUN_008f5124(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x1f8));
  FUN_008f5250(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x210));
  FUN_008f537c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x228));
  FUN_008f54a8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x240));
  FUN_008f55d4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 600));
  FUN_008f5700(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x270));
  FUN_008f582c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x288));
  FUN_008f5958(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x2a0));
  FUN_008f5a84(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x2b8));
  FUN_008f5bb0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x2d0));
  FUN_008f5cdc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x2e8));
  FUN_008f5e08(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x300));
  FUN_008f5f34(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x318));
  FUN_008f6060(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x330));
  FUN_008f618c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x348));
  FUN_008f62b8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x360));
  FUN_008f63e4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x378));
  FUN_008f6510(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x390));
  FUN_008f663c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x3a8));
  FUN_008f6768(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x3c0));
  FUN_008f6894(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x3d8));
  FUN_008f69c0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x3f0));
  FUN_008f6aec(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x408));
  FUN_008f6c18(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x420));
  FUN_008f6d44(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x438));
  FUN_008f6e70(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x450));
  FUN_008f6f9c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x468));
  FUN_008f70c8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x480));
  FUN_008f71f4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x498));
  FUN_008f7320(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x4b0));
  FUN_008f744c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x4c8));
  FUN_008f7578(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x4e0));
  FUN_008f76a4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x4f8));
  FUN_008f77d0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x510));
  FUN_008f78fc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x528));
  FUN_008f7a28(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x540));
  FUN_008f7b54(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x558));
  FUN_008f7c80(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x570));
  FUN_008f7dac(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x588));
  FUN_008f7ed8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x5a0));
  FUN_008f8004(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x5b8));
  FUN_008f8130(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x5d0));
  FUN_008f825c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x5e8));
  FUN_008f8388(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x600));
  FUN_008f84b4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x618));
  FUN_008f85e0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x630));
  FUN_008f870c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x648));
  FUN_008f8838(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x660));
  FUN_008f8964(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x678));
  FUN_008f8a90(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x690));
  FUN_008f8bbc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x6a8));
  FUN_008f8ce8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x6c0));
  FUN_008f8e14(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x6d8));
  FUN_008f8f40(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x6f0));
  FUN_008f906c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x708));
  FUN_008f9198(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x720));
  FUN_008f92c4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x738));
  FUN_008f93f0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x750));
  FUN_008f951c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x768));
  FUN_008f9648(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x780));
  FUN_008f9774(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x798));
  FUN_008f98a0(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x7b0));
  FUN_008f99cc(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x7c8));
  FUN_008f9af8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x7e0));
  FUN_008f9c24(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x7f8));
  FUN_008f9d50(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x810));
  FUN_008f9e7c(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x828));
  FUN_008f9fa8(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x840));
  FUN_008fa0d4(lVar8,auStack_7c8,&local_7cc,*(undefined8 *)(lVar8 + 0x848));
  FUN_008fa200(lVar8,auStack_7c8,&local_7cc);
  lVar13 = (long)local_7cc;
  auStack_7c8[lVar13 * 2] = 0;
  auStack_7c8[lVar13 * 2 + 1] = 0;
  memcpy(auStack_f30,auStack_7c8,0x760);
  memcpy(auStack_1690,auStack_7c8,0x760);
  lVar9 = FUN_008cca50();
  lVar13 = lVar13 + -1;
  __s = (char *)auStack_7c8[lVar13 * 2];
  sVar10 = strlen(__s);
  sVar2 = (ulong)(*(byte *)(lVar9 + 0x1c8) >> 1);
  if ((*(byte *)(lVar9 + 0x1c8) & 1) != 0) {
    sVar2 = *(size_t *)(lVar9 + 0x1d0);
  }
  if ((sVar10 == sVar2) &&
     (iVar7 = std::string::compare(lVar9 + 0x1c8,0,(char *)0xffffffffffffffff,(ulong)__s),
     iVar7 == 0)) {
    auStack_f30[lVar13 * 2] = 0;
    auStack_f30[lVar13 * 2 + 1] = 0;
  }
  auStack_1690[lVar13 * 2] = __s;
  auStack_1690[lVar13 * 2 + 1] = &LAB_008fa280;
  FUN_00151fe0(param_1,0,2);
  uVar5 = FUN_0014feb0(param_1,0xffffffff);
  local_16a0 = param_1;
  local_1698 = uVar5;
  pbVar11 = (byte *)FUN_008cb130();
  uVar4 = *(ulong *)(pbVar11 + 8);
  pbVar12 = *(byte **)(pbVar11 + 0x10);
  if ((*pbVar11 & 1) == 0) {
    pbVar12 = pbVar11 + 1;
    uVar4 = (ulong)(*pbVar11 >> 1);
  }
  FUN_001514f0(param_1,pbVar12,uVar4);
  FUN_00152550(param_1,uVar5,&DAT_038f8fce);
  FUN_001516f0(param_1,&LAB_008f22d0,0);
  FUN_00152550(param_1,uVar5,&DAT_0397bfcb);
  lVar9 = 0;
  do {
    if (lVar9 == 1) {
      puVar14 = auStack_1690;
      pbVar12 = (byte *)FUN_008cb788();
    }
    else if (lVar9 == 0) {
      puVar14 = auStack_f30;
      pbVar12 = (byte *)FUN_008c986c();
    }
    else {
      puVar14 = auStack_7c8;
      pbVar12 = (byte *)FUN_008caf28();
    }
    pbVar11 = *(byte **)(pbVar12 + 0x10);
    if ((*pbVar12 & 1) == 0) {
      pbVar11 = pbVar12 + 1;
    }
    FUN_00154450(param_1,pbVar11);
    local_16a8 = FUN_0014feb0(param_1,0xffffffff);
    local_16e8 = (undefined1 *)CONCAT44(local_16e8._4_4_,0x1e);
    local_16b0 = param_1;
    FUN_008fe304(local_16b8,param_1,&local_16e8,&local_16a0,local_16a8);
    FUN_00151490(param_1);
    FUN_00151810(param_1,lVar8);
    FUN_00155a20(param_1,puVar14,2);
    uVar5 = local_16a8;
    if (*(long *)(lVar8 + 0x880) == 0) {
      lVar13 = *(long *)(lVar8 + 0x888);
    }
    else {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar5,"class_check");
      lVar13 = *(long *)(lVar8 + 0x888);
      uVar5 = local_16a8;
    }
    local_16a8 = uVar5;
    if (lVar13 != 0) {
      FUN_00151810(param_1);
      FUN_00152550(param_1,uVar5,"class_cast");
    }
    uVar5 = local_16a8;
    local_16e8 = *(undefined1 **)(lVar8 + 0x860);
    uStack_16e0 = 0;
    local_16d8 = lVar8;
    lStack_16d0 = lVar1;
    FUN_008fe3a8(param_1,&local_16e8);
    FUN_00152550(param_1,uVar5,&DAT_03955ac7);
    uVar5 = local_16a8;
    local_16e8 = *(undefined1 **)(lVar8 + 0x868);
    uStack_16e0 = 0;
    local_16d8 = lVar8;
    lStack_16d0 = lVar1;
    FUN_008fe3a8(param_1,&local_16e8);
    FUN_00152550(param_1,uVar5,&DAT_0397c077);
    if (*(char *)(lVar8 + 0x58) == '\0') {
      local_16e8 = (undefined1 *)CONCAT44(local_16e8._4_4_,1);
      FUN_008fe304(local_16b8,param_1,&local_16e8,&local_16b0,local_16a8);
    }
    else {
      local_16b8[0] = 1;
      local_16e8 = &LAB_008fa2d0;
      uStack_16e0 = 0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008fe424(param_1,local_16b8,&local_16e8,local_16a8);
      local_16b8[0] = 2;
      local_16e8 = &LAB_008fa2d4;
      uStack_16e0 = 0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008fe424(param_1,local_16b8,&local_16e8,local_16a8);
    }
    FUN_00151fe0(param_1,0,3);
    uVar5 = FUN_0014feb0(param_1,0xffffffff);
    local_16e8 = (undefined1 *)CONCAT44(local_16e8._4_4_,0x1e);
    FUN_008fe304(local_16b8,param_1,&local_16e8,&local_16a0,uVar5);
    if (*(undefined1 **)(lVar8 + 0x858) == (undefined1 *)0x0) {
      if (*(char *)(lVar8 + 0x890) != '\0') goto LAB_008f39dc;
LAB_008f3738:
      if (param_1 == 0) goto LAB_008f3a38;
LAB_008f3740:
      uVar6 = local_16a8;
      FUN_00150260(param_1,uVar5);
    }
    else {
      local_16b8[0] = 4;
      uStack_16e0 = 0;
      local_16e8 = *(undefined1 **)(lVar8 + 0x858);
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008fe424(param_1,local_16b8,&local_16e8,uVar5);
      if (*(char *)(lVar8 + 0x890) == '\0') goto LAB_008f3738;
LAB_008f39dc:
      local_16b8[0] = 1;
      local_16e8 = &LAB_008fa2d0;
      uStack_16e0 = 0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008fe424(param_1,local_16b8,&local_16e8,uVar5);
      local_16b8[0] = 2;
      local_16e8 = &LAB_008fa2d4;
      uStack_16e0 = 0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008fe424(param_1,local_16b8,&local_16e8,uVar5);
      if (param_1 != 0) goto LAB_008f3740;
LAB_008f3a38:
      uVar6 = local_16a8;
      FUN_00151490(0);
    }
    FUN_00152ae0(param_1,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
    FUN_0014ff10(local_16b0,0xfffffffe);
    lVar9 = lVar9 + 1;
    if (lVar9 == 3) {
      FUN_008e87b0();
      puVar3 = DAT_043a7dc8;
      if ((DAT_043a7db8 & 1) == 0) {
        puVar3 = &DAT_043a7db9;
      }
      FUN_00154450(param_1,puVar3);
      uVar5 = FUN_0014feb0(param_1,0xffffffff);
      local_16e8._0_4_ = 0x1e;
      FUN_008fe304(&local_16b0,param_1,&local_16e8,&local_16a0,uVar5);
      FUN_00151490(param_1);
      FUN_00151810(param_1,lVar8);
      FUN_00155a20(param_1,auStack_7c8,2);
      FUN_00151fe0(param_1,0,3);
      uVar6 = FUN_0014feb0(param_1,0xffffffff);
      local_16e8 = (undefined1 *)CONCAT44(local_16e8._4_4_,0x1e);
      FUN_008fe304(&local_16b0,param_1,&local_16e8,&local_16a0,uVar6);
      local_16e8 = *(undefined1 **)(lVar8 + 0x858);
      if (local_16e8 != (undefined1 *)0x0) {
        local_16b0 = CONCAT44(local_16b0._4_4_,4);
        uStack_16e0 = 0;
        local_16d8 = lVar8;
        lStack_16d0 = lVar1;
        FUN_008fe424(param_1,&local_16b0,&local_16e8,uVar6);
      }
      local_16b0._0_4_ = 1;
      local_16e8 = &LAB_008fa2d8;
      uStack_16e0 = 0;
      local_16c8 = 0;
      puStack_16c0 = &DAT_03a756f0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008feab4(param_1,&local_16b0,&local_16e8,uVar6);
      local_16b0 = CONCAT44(local_16b0._4_4_,2);
      local_16e8 = &LAB_008fa2dc;
      uStack_16e0 = 0;
      local_16c8 = 0;
      puStack_16c0 = &DAT_03a756f0;
      local_16d8 = lVar8;
      lStack_16d0 = lVar1;
      FUN_008feab4(param_1,&local_16b0,&local_16e8,uVar6);
      if (param_1 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00150260(param_1,uVar6);
      }
      FUN_00152ae0(param_1,uVar5);
      FUN_0014ff10(param_1,0xfffffffe);
      FUN_0014ff70(param_1,local_1698,0xffffffff);
      FUN_0014ff10(param_1,0xfffffffe);
      return;
    }
  } while( true );
}


