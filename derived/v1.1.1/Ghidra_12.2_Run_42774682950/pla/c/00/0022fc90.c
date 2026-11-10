/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022fc90; name: FUN_0022fc90
 */


void FUN_0022fc90(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  short sVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong local_120 [2];
  undefined1 local_110 [4];
  undefined2 auStack_10c [2];
  uint local_108 [2];
  char *apcStack_100 [13];
  undefined8 local_98;
  undefined1 *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock();
  uVar12 = (ulong)*(uint *)(lVar3 + 0x1c);
  if (0 < (int)*(uint *)(lVar3 + 0x1c)) {
    lVar13 = 0;
    lVar3 = 0;
    do {
      lVar6 = nn::util::BinaryFileHeader::GetFirstBlock();
      uVar11 = *(undefined8 *)
                (*(long *)(*(long *)(lVar6 + 0x20) +
                           *(long *)(PTR_DAT_04372850 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8) +
                          lVar13) + 0x68);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (ulong *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = (undefined1 *)0x0;
      FUN_00876d5c(&local_98);
      _local_110 = 0;
      apcStack_100[0xb] = (char *)0x0;
      apcStack_100[0xc] = (char *)0x0;
      apcStack_100[9] = (char *)0x0;
      apcStack_100[10] = (char *)0x0;
      apcStack_100[7] = (char *)0x0;
      apcStack_100[8] = (char *)0x0;
      apcStack_100[5] = (char *)0x0;
      apcStack_100[6] = (char *)0x0;
      apcStack_100[3] = (char *)0x0;
      apcStack_100[4] = (char *)0x0;
      apcStack_100[1] = (char *)0x0;
      apcStack_100[2] = (char *)0x0;
      local_108[0] = 0;
      local_108[1] = 0;
      apcStack_100[0] = (char *)0x0;
      iVar2 = FUN_0087d8bc(uVar11,0,0,"aVertexIndex");
      if (iVar2 < 0) {
        uVar7 = 0;
      }
      else {
        FUN_00876d40(local_110);
        uVar7 = 8;
        _local_110 = (uint6)(uint)local_110;
        local_108[0] = 0;
        local_108[1] = 0x1705;
        apcStack_100[0] = "aVertexIndex";
      }
      bVar1 = iVar2 >= 0;
      uVar9 = (ulong)bVar1;
      iVar2 = FUN_0087d8bc(uVar11,0,0,"aPosition");
      uVar10 = uVar9;
      if (-1 < iVar2) {
        FUN_00876d40(local_110 + uVar9 * 0x28);
        local_108[uVar9 * 10] = uVar7;
        local_108[uVar9 * 10 + 1] = 0x1805;
        uVar10 = (ulong)(bVar1 + 1);
        uVar7 = uVar7 + 0xc;
        apcStack_100[uVar9 * 5] = "aPosition";
        auStack_10c[uVar9 * 0x14] = 0;
      }
      iVar2 = FUN_0087d8bc(uVar11,0,0,"aPositionVg");
      if (-1 < iVar2) {
        FUN_00876d40(local_110 + uVar10 * 0x28);
        apcStack_100[uVar10 * 5] = "aPositionVg";
        local_108[uVar10 * 10] = uVar7;
        local_108[uVar10 * 10 + 1] = 0x1705;
        uVar7 = uVar7 + 8;
        auStack_10c[uVar10 * 0x14] = 0;
        uVar10 = (ulong)((int)uVar10 + 1);
      }
      sVar8 = (short)uVar10;
      iVar2 = FUN_0087d8bc(uVar11,0,0,"aTexCoord");
      if (-1 < iVar2) {
        FUN_00876d40(local_110 + uVar10 * 0x28);
        local_108[uVar10 * 10] = uVar7;
        local_108[uVar10 * 10 + 1] = 0x1705;
        sVar8 = sVar8 + 1;
        uVar7 = uVar7 + 8;
        apcStack_100[uVar10 * 5] = "aTexCoord";
        auStack_10c[uVar10 * 0x14] = 0;
      }
      local_120[0] = 0;
      local_120[1] = 0;
      FUN_00876d54(local_120);
      local_88 = local_120;
      local_120[0] = (ulong)uVar7;
      local_98._0_4_ = CONCAT22(1,sVar8);
      local_90 = local_110;
      uVar4 = FUN_0087e3b0(&local_98);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar5 = FUN_00232638(uVar4,8);
      FUN_0087e430(lVar6 + lVar3,uVar5,uVar4);
      FUN_0087e444(*(long *)(param_1 + 0x10) + lVar3,param_2,&local_98,uVar11);
      lVar3 = lVar3 + 0x20;
      lVar13 = lVar13 + 0x40;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}


