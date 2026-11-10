/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b2f0c; name: FUN_002b2f0c
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_002b2f0c(long param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  byte *local_58;
  
  local_58 = param_2;
  auVar14 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
  puVar6 = PTR_DAT_043730c0;
  uVar11 = auVar14._8_8_;
  if ((auVar14._0_8_ & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 8);
    do {
      pbVar9 = local_58 + 1;
      bVar3 = *local_58;
      auVar5[8] = bVar3;
      auVar5._0_8_ = pbVar9;
      auVar5._9_3_ = 0;
      auVar4[8] = bVar3;
      auVar4._0_8_ = pbVar9;
      auVar4._9_3_ = 0;
      if ((char)bVar3 < '\0') {
        uVar10 = ((uint)bVar3 + (uint)*pbVar9 * 0x80) - 0x80;
        if ((char)*pbVar9 < '\0') {
          auVar14 = FUN_00323230(local_58,uVar10);
          auVar4 = auVar14._0_12_;
          uVar11 = auVar14._8_8_;
          if (auVar14._0_8_ == 0) {
            return (byte *)0x0;
          }
          uVar10 = (uint)(uVar11 >> 3) & 0x1fffffff;
          auVar5 = auVar4;
        }
        else {
          auVar4._8_4_ = uVar10;
          auVar4._0_8_ = local_58 + 2;
          uVar10 = uVar10 >> 3;
          auVar5 = auVar4;
        }
      }
      else {
        uVar10 = (uint)(bVar3 >> 3);
      }
      if (uVar10 == 2) {
        local_58 = auVar5._0_8_;
        uVar13 = auVar5._8_4_;
        if ((uVar13 & 0xff) != 0x12) goto LAB_002b3070;
        if (*(int *)(param_1 + 0x1c) == 2) goto LAB_002b3018;
        FUN_002b2e20(param_1,uVar11,local_58);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        *(undefined **)(param_1 + 0x10) = puVar6;
        puVar8 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) goto LAB_002b3024;
LAB_002b2fc4:
        puVar8 = (ulong *)*puVar8;
        pbVar9 = (byte *)*puVar1;
joined_r0x002b2fd0:
        if (pbVar9 == puVar6) {
          FUN_0029175c(puVar1,puVar8,puVar6);
          pbVar9 = (byte *)*puVar1;
        }
        local_58 = (byte *)FUN_003234c0(pbVar9,local_58,param_3);
        bVar3 = *pbVar9;
        pbVar12 = *(byte **)(pbVar9 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar12 = pbVar9 + 1;
        }
        if ((bVar3 & 1) == 0) {
          uVar11 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar11 = *(ulong *)(pbVar9 + 8);
          if ((long)uVar11 < 0) {
            FUN_0031f284(uVar11,"size_t to int conversion");
          }
        }
        uVar11 = FUN_00323380(pbVar12,uVar11,0);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar9 = (byte *)(uVar11 & 1);
      }
      else {
        local_58 = auVar4._0_8_;
        uVar13 = auVar4._8_4_;
        if ((uVar10 == 1) && ((uVar13 & 0xff) == 10)) {
          if (*(int *)(param_1 + 0x1c) == 1) {
LAB_002b3018:
            uVar11 = *puVar2;
          }
          else {
            FUN_002b2e20(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 1;
            *(undefined **)(param_1 + 0x10) = puVar6;
            uVar11 = *puVar2;
          }
          puVar8 = (ulong *)(uVar11 & 0xfffffffffffffffe);
          if ((uVar11 & 1) != 0) goto LAB_002b2fc4;
LAB_002b3024:
          pbVar9 = (byte *)*puVar1;
          goto joined_r0x002b2fd0;
        }
LAB_002b3070:
        if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
          *(uint *)(param_3 + 0x50) = uVar13 - 1;
          return local_58;
        }
        if ((*puVar2 & 1) == 0) {
          lVar7 = FUN_0033aecc(puVar2);
        }
        else {
          lVar7 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_00323c60(uVar13,lVar7,local_58,param_3);
        pbVar9 = local_58;
      }
      if (pbVar9 == (byte *)0x0) {
        return (byte *)0x0;
      }
      auVar14 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)(param_3 + 0x5c));
      uVar11 = auVar14._8_8_;
    } while ((auVar14._0_8_ & 1) == 0);
  }
  return local_58;
}


