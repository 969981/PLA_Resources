/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b0bc8; name: FUN_007b0bc8
 */


byte * FUN_007b0bc8(long param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar7;
  byte *pbVar6;
  ulong *puVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  byte *local_58;
  
  puVar4 = PTR_DAT_043730c0;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  local_58 = param_2;
  do {
    uVar5 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar5 & 1) != 0) {
      return local_58;
    }
    pbVar9 = local_58 + 1;
    uVar7 = (uint)*local_58;
    if ((char)*local_58 < '\0') {
      uVar7 = (uVar7 + (uint)*pbVar9 * 0x80) - 0x80;
      if (-1 < (char)*pbVar9) {
        pbVar9 = local_58 + 2;
        goto LAB_007b0c70;
      }
      auVar12 = FUN_00323230();
      if (auVar12._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
LAB_007b0c70:
      auVar12._8_4_ = uVar7;
      auVar12._0_8_ = pbVar9;
    }
    uVar7 = auVar12._8_4_;
    local_58 = auVar12._0_8_;
    if (uVar7 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar9 = (byte *)*puVar2;
        if (pbVar9 != puVar4) goto LAB_007b0cd0;
LAB_007b0d40:
        FUN_0029175c(puVar2,puVar8,puVar4);
        pbVar9 = (byte *)*puVar2;
        bVar3 = *local_58;
        if ((char)bVar3 < '\0') goto LAB_007b0d60;
LAB_007b0cdc:
        auVar13[8] = bVar3;
        auVar13._0_8_ = local_58 + 1;
        auVar13._9_3_ = 0;
LAB_007b0d70:
        lVar10 = auVar13._0_8_;
        lVar11 = (long)auVar13._8_4_;
        if ((*(long *)(param_3 + 8) - lVar10) + 0x10 < lVar11) {
          pbVar6 = (byte *)FUN_00322ab0(param_3,lVar10,auVar13._8_4_,pbVar9);
          goto LAB_007b0d9c;
        }
        FUN_00291910(pbVar9,lVar10,lVar11);
        bVar3 = *pbVar9;
        local_58 = (byte *)(lVar10 + lVar11);
      }
      else {
        puVar8 = (ulong *)*puVar8;
        pbVar9 = (byte *)*puVar2;
        if (pbVar9 == puVar4) goto LAB_007b0d40;
LAB_007b0cd0:
        bVar3 = *local_58;
        if (-1 < (char)bVar3) goto LAB_007b0cdc;
LAB_007b0d60:
        auVar13 = FUN_003232c0(local_58);
        pbVar6 = (byte *)0x0;
        if (auVar13._0_8_ != 0) goto LAB_007b0d70;
LAB_007b0d9c:
        bVar3 = *pbVar9;
        local_58 = pbVar6;
      }
      if ((bVar3 & 1) == 0) {
        uVar5 = FUN_0033b628(pbVar9 + 1,bVar3 >> 1,0,
                             "nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.key");
      }
      else {
        uVar5 = FUN_0033b628(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8),0,
                             "nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.key");
      }
joined_r0x007b0df4:
      if ((uVar5 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar7 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
        pbVar9 = (byte *)*puVar1;
        if (pbVar9 == puVar4) goto LAB_007b0e0c;
LAB_007b0d08:
        bVar3 = *local_58;
        if (-1 < (char)bVar3) goto LAB_007b0d14;
LAB_007b0e2c:
        auVar14 = FUN_003232c0(local_58);
        pbVar6 = (byte *)0x0;
        if (auVar14._0_8_ != 0) goto LAB_007b0e3c;
LAB_007b0e68:
        bVar3 = *pbVar9;
        local_58 = pbVar6;
        if ((bVar3 & 1) != 0) goto LAB_007b0c10;
LAB_007b0e98:
        uVar5 = FUN_0033b628(pbVar9 + 1,bVar3 >> 1,0,
                             "nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.value");
        goto joined_r0x007b0df4;
      }
      pbVar9 = (byte *)*puVar1;
      if (pbVar9 != puVar4) goto LAB_007b0d08;
LAB_007b0e0c:
      FUN_0029175c(puVar1,puVar8,puVar4);
      pbVar9 = (byte *)*puVar1;
      bVar3 = *local_58;
      if ((char)bVar3 < '\0') goto LAB_007b0e2c;
LAB_007b0d14:
      auVar14[8] = bVar3;
      auVar14._0_8_ = local_58 + 1;
      auVar14._9_3_ = 0;
LAB_007b0e3c:
      lVar10 = auVar14._0_8_;
      lVar11 = (long)auVar14._8_4_;
      if ((*(long *)(param_3 + 8) - lVar10) + 0x10 < lVar11) {
        pbVar6 = (byte *)FUN_00322ab0(param_3,lVar10,auVar14._8_4_,pbVar9);
        goto LAB_007b0e68;
      }
      FUN_00291910(pbVar9,lVar10,lVar11);
      local_58 = (byte *)(lVar10 + lVar11);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) == 0) goto LAB_007b0e98;
LAB_007b0c10:
      uVar5 = FUN_0033b628(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8),0,
                           "nn.npln.hydro.v1.TrackContentRequest.TargetsEntry.value");
      if ((uVar5 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar7 - 1;
        return local_58;
      }
      local_58 = (byte *)FUN_00323c60(uVar7,0,local_58,param_3);
    }
    if (local_58 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


