/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00632cac; name: FUN_00632cac
 */


byte * FUN_00632cac(long param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar8 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
  puVar7 = PTR_DAT_043730c0;
  if ((uVar8 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar2 = (ulong *)(param_1 + 8);
    puVar3 = (undefined8 *)(param_1 + 0x18);
    puVar4 = (undefined8 *)(param_1 + 0x10);
    do {
      pbVar11 = local_58 + 1;
      bVar5 = *local_58;
      auVar6[8] = bVar5;
      auVar6._0_8_ = pbVar11;
      auVar6._9_7_ = 0;
      auVar14[8] = bVar5;
      auVar14._0_8_ = pbVar11;
      auVar14._9_7_ = 0;
      if ((char)bVar5 < '\0') {
        uVar12 = ((uint)bVar5 + (uint)*pbVar11 * 0x80) - 0x80;
        if ((char)*pbVar11 < '\0') {
          auVar14 = FUN_00323230();
          if (auVar14._0_8_ == 0) {
            return (byte *)0x0;
          }
          uVar12 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
          auVar6 = auVar14;
        }
        else {
          auVar6._8_4_ = uVar12;
          auVar6._0_8_ = local_58 + 2;
          auVar6._12_4_ = 0;
          auVar14._8_4_ = uVar12;
          auVar14._0_8_ = local_58 + 2;
          auVar14._12_4_ = 0;
          uVar12 = uVar12 >> 3;
        }
        if (uVar12 == 3) goto LAB_00632d98;
LAB_00632d28:
        local_58 = auVar14._0_8_;
        if (uVar12 == 2) {
          if ((auVar14._8_4_ & 0xff) == 0x12) {
            puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
            if ((*puVar2 & 1) == 0) {
              pbVar11 = (byte *)*puVar3;
            }
            else {
              puVar10 = (ulong *)*puVar10;
              pbVar11 = (byte *)*puVar3;
            }
            if (pbVar11 == puVar7) {
              FUN_0029175c(puVar3,puVar10,puVar7);
              pbVar11 = (byte *)*puVar3;
            }
            goto LAB_00632e08;
          }
          goto LAB_00632e6c;
        }
        if ((uVar12 != 1) || ((auVar14._8_4_ & 0xff) != 10)) goto LAB_00632e6c;
        puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          pbVar11 = (byte *)*puVar4;
        }
        else {
          puVar10 = (ulong *)*puVar10;
          pbVar11 = (byte *)*puVar4;
        }
        if (pbVar11 == puVar7) {
          FUN_0029175c(puVar4,puVar10,puVar7);
          pbVar11 = (byte *)*puVar4;
        }
LAB_00632e08:
        local_58 = (byte *)FUN_003234c0(pbVar11,local_58,param_3);
        bVar5 = *pbVar11;
        pbVar13 = *(byte **)(pbVar11 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar13 = pbVar11 + 1;
        }
        if ((bVar5 & 1) == 0) {
          uVar8 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar8 = *(ulong *)(pbVar11 + 8);
          if ((long)uVar8 < 0) {
            FUN_0031f284(uVar8,"size_t to int conversion");
          }
        }
        uVar8 = FUN_00323380(pbVar13,uVar8,0);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar11 = (byte *)(uVar8 & 1);
      }
      else {
        uVar12 = (uint)(bVar5 >> 3);
        if (uVar12 != 3) goto LAB_00632d28;
LAB_00632d98:
        auVar14 = auVar6;
        local_58 = auVar14._0_8_;
        if ((auVar14._8_4_ & 0xff) == 0x1a) {
          puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) == 0) {
            pbVar11 = (byte *)*puVar1;
          }
          else {
            puVar10 = (ulong *)*puVar10;
            pbVar11 = (byte *)*puVar1;
          }
          if (pbVar11 == puVar7) {
            FUN_0029175c(puVar1,puVar10,puVar7);
            pbVar11 = (byte *)*puVar1;
          }
          goto LAB_00632e08;
        }
LAB_00632e6c:
        local_58 = auVar14._0_8_;
        uVar12 = auVar14._8_4_;
        if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar12 - 1;
          return local_58;
        }
        if ((*puVar2 & 1) == 0) {
          lVar9 = FUN_0033aecc(puVar2);
        }
        else {
          lVar9 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_00323c60(auVar14._8_8_ & 0xffffffff,lVar9,local_58,param_3);
        pbVar11 = local_58;
      }
      if (pbVar11 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar8 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar8 & 1) == 0);
  }
  return local_58;
}


