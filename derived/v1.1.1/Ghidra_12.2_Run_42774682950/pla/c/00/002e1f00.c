/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e1f00; name: FUN_002e1f00
 */


byte * FUN_002e1f00(long param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar8;
  byte *pbVar7;
  ulong *puVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  byte *local_48;
  
  puVar3 = PTR_DAT_043730c0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  local_48 = param_2;
  do {
    uVar4 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)(param_3 + 0x5c));
    if ((uVar4 & 1) != 0) {
      return local_48;
    }
    pbVar11 = local_48 + 1;
    uVar8 = (uint)*local_48;
    if ((char)*local_48 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar11 * 0x80) - 0x80;
      if (-1 < (char)*pbVar11) {
        pbVar11 = local_48 + 2;
        goto LAB_002e1f98;
      }
      auVar13 = FUN_00323230();
      if (auVar13._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
LAB_002e1f98:
      auVar13._8_4_ = uVar8;
      auVar13._0_8_ = pbVar11;
    }
    uVar8 = auVar13._8_4_;
    local_48 = auVar13._0_8_;
    if (uVar8 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar11 = (byte *)*puVar1;
        if (pbVar11 != puVar3) goto LAB_002e1ffc;
LAB_002e2078:
        FUN_0029175c(puVar1,puVar9,puVar3);
        pbVar11 = (byte *)*puVar1;
        bVar2 = *local_48;
        if ((char)bVar2 < '\0') goto LAB_002e2098;
LAB_002e2008:
        auVar14[8] = bVar2;
        auVar14._0_8_ = local_48 + 1;
        auVar14._9_3_ = 0;
LAB_002e20a8:
        lVar10 = auVar14._0_8_;
        lVar12 = (long)auVar14._8_4_;
        if ((*(long *)(param_3 + 8) - lVar10) + 0x10 < lVar12) {
          pbVar7 = (byte *)FUN_00322ab0(param_3,lVar10,auVar14._8_4_,pbVar11);
          goto LAB_002e20d4;
        }
        FUN_00291910(pbVar11,lVar10,lVar12);
        local_48 = (byte *)(lVar10 + lVar12);
        bVar2 = *pbVar11;
        if ((bVar2 & 1) != 0) goto LAB_002e2124;
LAB_002e20e0:
        uVar4 = FUN_0033b628(pbVar11 + 1,bVar2 >> 1,0,"nn.npln.common.MapValue.FieldsEntry.key");
      }
      else {
        puVar9 = (ulong *)*puVar9;
        pbVar11 = (byte *)*puVar1;
        if (pbVar11 == puVar3) goto LAB_002e2078;
LAB_002e1ffc:
        bVar2 = *local_48;
        if (-1 < (char)bVar2) goto LAB_002e2008;
LAB_002e2098:
        auVar14 = FUN_003232c0(local_48);
        pbVar7 = (byte *)0x0;
        if (auVar14._0_8_ != 0) goto LAB_002e20a8;
LAB_002e20d4:
        bVar2 = *pbVar11;
        local_48 = pbVar7;
        if ((bVar2 & 1) == 0) goto LAB_002e20e0;
LAB_002e2124:
        uVar4 = FUN_0033b628(*(undefined8 *)(pbVar11 + 0x10),*(undefined8 *)(pbVar11 + 8),0,
                             "nn.npln.common.MapValue.FieldsEntry.key");
      }
      if ((uVar4 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar8 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      puVar5 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x18);
      }
      else {
        puVar5 = (undefined8 *)*puVar5;
        lVar10 = *(long *)(param_1 + 0x18);
      }
      if (lVar10 == 0) {
        uVar6 = FUN_002e17cc(puVar5);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        local_48 = (byte *)FUN_002e0964(param_3,uVar6,local_48);
      }
      else {
        local_48 = (byte *)FUN_002e0964(param_3);
      }
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uVar8 - 1;
        return local_48;
      }
      local_48 = (byte *)FUN_00323c60(uVar8,0,local_48,param_3);
    }
    if (local_48 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


