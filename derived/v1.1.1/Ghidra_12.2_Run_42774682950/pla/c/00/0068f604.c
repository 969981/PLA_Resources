/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068f604; name: FUN_0068f604
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0068f604(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar4 = PTR_DAT_043730c0;
  if ((uVar6 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      pbVar9 = local_68 + 1;
      bVar3 = *local_68;
      uVar6 = (ulong)(uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar6 = (ulong)(((uint)bVar3 + (uint)*pbVar9 * 0x80) - 0x80);
        if (-1 < (char)*pbVar9) {
          pbVar9 = local_68 + 2;
          goto LAB_0068f6d8;
        }
        auVar15 = FUN_00323230(local_68,uVar6);
        uVar12 = auVar15._8_4_;
        if (auVar15._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar10 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
        local_68 = auVar15._0_8_;
      }
      else {
LAB_0068f6d8:
        uVar12 = (uint)uVar6;
        uVar10 = (uint)(uVar6 >> 3);
        local_68 = pbVar9;
      }
      if (uVar10 == 3) {
        if ((uVar12 & 0xff) != 0x1a) goto LAB_0068f81c;
        if (*(int *)(param_1 + 0x24) == 2) {
          puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          if ((puVar8 == (ulong *)0x0) && (lVar7 = *(long *)(param_1 + 0x18), lVar7 != 0)) {
            FUN_006993c4(lVar7);
            FUN_002e2ea0(PTR_LAB_04373088,lVar7);
          }
LAB_0068f93c:
          puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x24) = 3;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          uVar13 = FUN_0069d6c0(puVar8);
          *(undefined8 *)(param_1 + 0x18) = uVar13;
          uVar6 = (ulong)*local_68;
          if ((char)*local_68 < '\0') goto LAB_0068f800;
LAB_0068f968:
          auVar15._8_8_ = uVar6;
          auVar15._0_8_ = local_68 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x24) != 3) goto LAB_0068f93c;
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          uVar6 = (ulong)*local_68;
          if (-1 < (char)*local_68) goto LAB_0068f968;
LAB_0068f800:
          auVar15 = FUN_003232c0(local_68,uVar6);
          if (auVar15._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        iVar5 = FUN_0031e1b4(param_3,auVar15._0_8_,auVar15._8_8_ & 0xffffffff);
        lVar7 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
        if ((int)lVar7 < 1) {
          return (byte *)0x0;
        }
        local_68 = (byte *)FUN_00699cc8(uVar13,auVar15._0_8_,param_3);
joined_r0x0068f9a0:
        if ((local_68 == (byte *)0x0) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar12 = *(int *)((long)param_3 + 0x1c) + iVar5;
        *(uint *)((long)param_3 + 0x1c) = uVar12;
        *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
      }
      else {
        if (uVar10 == 2) {
          if ((uVar12 & 0xff) != 0x12) goto LAB_0068f81c;
          if (*(int *)(param_1 + 0x24) == 3) {
            puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
            if ((*puVar1 & 1) != 0) {
              puVar8 = (ulong *)*puVar8;
            }
            if (puVar8 == (ulong *)0x0) {
              FUN_0069dce8(*(undefined8 *)(param_1 + 0x18));
            }
LAB_0068f8a0:
            puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
            *(undefined4 *)(param_1 + 0x24) = 2;
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar8 = (ulong *)*puVar8;
            }
            uVar13 = FUN_0069d5b4(puVar8);
            *(undefined8 *)(param_1 + 0x18) = uVar13;
            uVar6 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_0068f790;
LAB_0068f8cc:
            auVar14._8_8_ = uVar6;
            auVar14._0_8_ = local_68 + 1;
          }
          else {
            if (*(int *)(param_1 + 0x24) != 2) goto LAB_0068f8a0;
            uVar13 = *(undefined8 *)(param_1 + 0x18);
            uVar6 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_0068f8cc;
LAB_0068f790:
            auVar14 = FUN_003232c0(local_68,uVar6);
            if (auVar14._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          iVar5 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff);
          lVar7 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
          if ((int)lVar7 < 1) {
            return (byte *)0x0;
          }
          local_68 = (byte *)FUN_00699528(uVar13,auVar14._0_8_,param_3);
          goto joined_r0x0068f9a0;
        }
        if ((uVar10 == 1) && ((uVar12 & 0xff) == 10)) {
          puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) == 0) {
            pbVar9 = (byte *)*puVar2;
          }
          else {
            puVar8 = (ulong *)*puVar8;
            pbVar9 = (byte *)*puVar2;
          }
          if (pbVar9 == puVar4) {
            FUN_0029175c(puVar2,puVar8,puVar4);
            pbVar9 = (byte *)*puVar2;
          }
          local_68 = (byte *)FUN_003234c0(pbVar9,local_68,param_3);
          bVar3 = *pbVar9;
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
          if ((bVar3 & 1) == 0) {
            uVar6 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar6 = *(ulong *)(pbVar9 + 8);
            if ((long)uVar6 < 0) {
              FUN_0031f284(uVar6,"size_t to int conversion");
            }
          }
          uVar6 = FUN_00323380(pbVar11,uVar6,0);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar9 = (byte *)(uVar6 & 1);
        }
        else {
LAB_0068f81c:
          if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar12 - 1;
            return local_68;
          }
          if ((*puVar1 & 1) == 0) {
            lVar7 = FUN_0033aecc(puVar1);
          }
          else {
            lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_00323c60(uVar12,lVar7,local_68,param_3);
          pbVar9 = local_68;
        }
        if (pbVar9 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  return local_68;
}


