/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060aa78; name: FUN_0060aa78
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0060aa78(long param_1,byte *param_2,long param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar6 & 1) == 0) {
    plVar1 = (long *)(param_1 + 0x18);
    puVar2 = (ulong *)(param_1 + 8);
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      pbVar11 = local_58 + 1;
      uVar12 = (uint)*local_58;
      if ((char)*local_58 < '\0') {
        uVar12 = (uVar12 + (uint)*pbVar11 * 0x80) - 0x80;
        if (-1 < (char)*pbVar11) {
          pbVar11 = local_58 + 2;
          goto LAB_0060ab04;
        }
        auVar14 = FUN_00323230();
        if (auVar14._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar12 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
      }
      else {
LAB_0060ab04:
        auVar14._8_4_ = uVar12;
        auVar14._0_8_ = pbVar11;
        auVar14._12_4_ = 0;
        uVar12 = uVar12 >> 3;
      }
      local_58 = auVar14._0_8_;
      uVar9 = auVar14._8_4_;
      if (uVar12 == 2) {
        if ((uVar9 & 0xff) != 0x12) goto LAB_0060ac24;
        puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          puVar7 = (undefined *)*plVar1;
        }
        else {
          puVar10 = (ulong *)*puVar10;
          puVar7 = (undefined *)*plVar1;
        }
        if (puVar7 == puVar5) {
          FUN_0029175c(plVar1,puVar10,puVar5);
          puVar7 = (undefined *)*plVar1;
        }
        local_58 = (byte *)FUN_003234c0(puVar7,local_58,param_3);
        pbVar11 = local_58;
      }
      else if ((uVar12 == 1) && ((uVar9 & 0xff) == 10)) {
        puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          pbVar11 = (byte *)*puVar3;
        }
        else {
          puVar10 = (ulong *)*puVar10;
          pbVar11 = (byte *)*puVar3;
        }
        if (pbVar11 == puVar5) {
          FUN_0029175c(puVar3,puVar10,puVar5);
          pbVar11 = (byte *)*puVar3;
        }
        local_58 = (byte *)FUN_003234c0(pbVar11,local_58,param_3);
        bVar4 = *pbVar11;
        pbVar13 = *(byte **)(pbVar11 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar13 = pbVar11 + 1;
        }
        if ((bVar4 & 1) == 0) {
          uVar6 = (ulong)(bVar4 >> 1);
        }
        else {
          uVar6 = *(ulong *)(pbVar11 + 8);
          if ((long)uVar6 < 0) {
            FUN_0031f284(uVar6,"size_t to int conversion");
          }
        }
        uVar6 = FUN_00323380(pbVar13,uVar6,"google.protobuf.Any.type_url");
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar11 = (byte *)(uVar6 & 1);
      }
      else {
LAB_0060ac24:
        if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar9 - 1;
          return local_58;
        }
        if ((*puVar2 & 1) == 0) {
          lVar8 = FUN_0030c8c0(puVar2);
        }
        else {
          lVar8 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_0030e020(auVar14._8_8_ & 0xffffffff,lVar8,local_58,param_3);
        pbVar11 = local_58;
      }
      if (pbVar11 == (byte *)0x0) {
        return (byte *)0x0;
      }
      uVar6 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  return local_58;
}


