/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00725300; name: FUN_00725300
 */


byte * FUN_00725300(long param_1,byte *param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *local_48;
  
  puVar3 = PTR_DAT_043730c0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  local_48 = param_2;
  do {
    uVar5 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
    if ((uVar5 & 1) != 0) {
      return local_48;
    }
    pbVar9 = local_48 + 1;
    uVar8 = (uint)*local_48;
    if ((char)*local_48 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar9 * 0x80) - 0x80;
      if (-1 < (char)*pbVar9) {
        pbVar9 = local_48 + 2;
        goto LAB_00725388;
      }
      auVar13 = FUN_00323230();
      if (auVar13._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
LAB_00725388:
      auVar13._8_4_ = uVar8;
      auVar13._0_8_ = pbVar9;
      auVar13._12_4_ = 0;
    }
    local_48 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (uVar8 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar9 = (byte *)*puVar1;
        if (pbVar9 == puVar3) goto LAB_0072545c;
LAB_007253f0:
        bVar2 = *local_48;
        if ((char)bVar2 < '\0') goto LAB_0072547c;
LAB_007253fc:
        auVar12[8] = bVar2;
        auVar12._0_8_ = local_48 + 1;
        auVar12._9_3_ = 0;
LAB_0072548c:
        lVar10 = auVar12._0_8_;
        lVar11 = (long)auVar12._8_4_;
        if ((param_3[1] - lVar10) + 0x10 < lVar11) {
          pbVar7 = (byte *)FUN_00322ab0(param_3,lVar10,auVar12._8_4_,pbVar9);
          goto LAB_007254b8;
        }
        FUN_00291910(pbVar9,lVar10,lVar11);
        local_48 = (byte *)(lVar10 + lVar11);
        bVar2 = *pbVar9;
        if ((bVar2 & 1) != 0) goto LAB_00725508;
LAB_007254c4:
        uVar5 = FUN_0033b628(pbVar9 + 1,bVar2 >> 1,0,
                             "nn.npln.matchmaking.v1.LatencyData.LatenciesEntry.key");
      }
      else {
        puVar6 = (ulong *)*puVar6;
        pbVar9 = (byte *)*puVar1;
        if (pbVar9 != puVar3) goto LAB_007253f0;
LAB_0072545c:
        FUN_0029175c(puVar1,puVar6,puVar3);
        pbVar9 = (byte *)*puVar1;
        bVar2 = *local_48;
        if (-1 < (char)bVar2) goto LAB_007253fc;
LAB_0072547c:
        auVar12 = FUN_003232c0(local_48);
        pbVar7 = (byte *)0x0;
        if (auVar12._0_8_ != 0) goto LAB_0072548c;
LAB_007254b8:
        bVar2 = *pbVar9;
        local_48 = pbVar7;
        if ((bVar2 & 1) == 0) goto LAB_007254c4;
LAB_00725508:
        uVar5 = FUN_0033b628(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8),0,
                             "nn.npln.matchmaking.v1.LatencyData.LatenciesEntry.key");
      }
      pbVar9 = local_48;
      if ((uVar5 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar8 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) goto LAB_0072552c;
LAB_00725424:
        uVar5 = (ulong)*local_48;
        if ((char)*local_48 < '\0') goto LAB_00725548;
LAB_00725430:
        auVar14._8_8_ = uVar5;
        auVar14._0_8_ = local_48 + 1;
      }
      else {
        puVar6 = (ulong *)*puVar6;
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 != 0) goto LAB_00725424;
LAB_0072552c:
        lVar10 = FUN_0030c720(puVar6);
        *(long *)(param_1 + 0x18) = lVar10;
        uVar5 = (ulong)*local_48;
        if (-1 < (char)*local_48) goto LAB_00725430;
LAB_00725548:
        auVar14 = FUN_003232c0(local_48,uVar5);
        pbVar9 = (byte *)0x0;
        if (auVar14._0_8_ == 0) goto joined_r0x007255c8;
      }
      iVar4 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_);
      lVar11 = param_3[0xb];
      *(int *)(param_3 + 0xb) = (int)lVar11 + -1;
      if ((int)lVar11 < 1) {
        pbVar9 = (byte *)0x0;
      }
      else {
        pbVar9 = (byte *)FUN_0030bfbc(lVar10,auVar14._0_8_,param_3);
        if (pbVar9 != (byte *)0x0) {
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar8 = *(int *)((long)param_3 + 0x1c) + iVar4;
          *(uint *)((long)param_3 + 0x1c) = uVar8;
          *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
        }
      }
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return local_48;
      }
      pbVar9 = (byte *)FUN_00323c60(auVar13._8_8_ & 0xffffffff,0,local_48,param_3);
    }
joined_r0x007255c8:
    local_48 = pbVar9;
    if (local_48 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


