/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ba094; name: FUN_003ba094
 */


byte * FUN_003ba094(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar5 = PTR_DAT_04373c30;
  uVar14 = 0;
  if ((uVar7 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    uVar14 = 0;
    do {
      pbVar10 = local_68 + 1;
      uVar8 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar8 = (uVar8 + (uint)*pbVar10 * 0x80) - 0x80;
        if (-1 < (char)*pbVar10) {
          pbVar10 = local_68 + 2;
          goto LAB_003ba140;
        }
        auVar16 = FUN_00323230();
        if (auVar16._0_8_ != 0) {
          uVar8 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x003ba1c4;
        }
LAB_003ba464:
        local_68 = (byte *)0x0;
        break;
      }
LAB_003ba140:
      auVar16._8_4_ = uVar8;
      auVar16._0_8_ = pbVar10;
      auVar16._12_4_ = 0;
      uVar8 = uVar8 >> 3;
joined_r0x003ba1c4:
      local_68 = auVar16._0_8_;
      uVar9 = auVar16._8_4_;
      if (uVar8 == 999) {
        if ((uVar9 & 0xff) != 0x3a) goto LAB_003ba318;
        local_68 = local_68 + -2;
        do {
          local_68 = local_68 + 2;
          piVar12 = *(int **)(param_1 + 0x40);
          if (piVar12 == (int *)0x0) {
            iVar6 = *(int *)(param_1 + 0x3c);
LAB_003ba244:
            FUN_0032bcac(param_1 + 0x30,iVar6 + 1);
            piVar12 = *(int **)(param_1 + 0x40);
            iVar6 = *piVar12;
LAB_003ba258:
            *piVar12 = iVar6 + 1;
            uVar13 = FUN_003c0f0c(*(undefined8 *)(param_1 + 0x30));
            iVar6 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar6 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar6 * 8 + 8) = uVar13;
            uVar7 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_003ba294;
LAB_003ba218:
            auVar15 = FUN_003232c0(local_68,uVar7);
            if (auVar15._0_8_ == 0) goto LAB_003ba464;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x38);
            iVar6 = *piVar12;
            if (iVar6 <= iVar3) {
              if (iVar6 == *(int *)(param_1 + 0x3c)) goto LAB_003ba244;
              goto LAB_003ba258;
            }
            *(int *)(param_1 + 0x38) = iVar3 + 1;
            uVar13 = *(undefined8 *)(piVar12 + (long)iVar3 * 2 + 2);
            uVar7 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_003ba218;
LAB_003ba294:
            auVar15._8_8_ = uVar7;
            auVar15._0_8_ = local_68 + 1;
          }
          iVar6 = FUN_0031e1b4(param_3,auVar15._0_8_,auVar15._8_8_);
          uVar7 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((((int)uVar7 < 1) ||
              (local_68 = (byte *)FUN_003bb6f0(uVar13,auVar15._0_8_,param_3),
              local_68 == (byte *)0x0)) ||
             (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_003ba464;
          uVar8 = *(int *)((long)param_3 + 0x1c) + iVar6;
          *(uint *)((long)param_3 + 0x1c) = uVar8;
          pbVar10 = (byte *)(param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f));
          *param_3 = (ulong)pbVar10;
        } while ((local_68 < pbVar10) && (*(short *)local_68 == 0x3eba));
      }
      else if (uVar8 == 0x22) {
        if ((uVar9 & 0xff) != 0x10) goto LAB_003ba318;
        bVar2 = *local_68;
        if ((char)bVar2 < '\0') {
          uVar8 = ((uint)bVar2 + (uint)local_68[1] * 0x80) - 0x80;
          if ((char)local_68[1] < '\0') {
            auVar17 = FUN_003230f0(local_68,uVar8);
            if (auVar17._0_8_ == 0) goto LAB_003ba464;
            uVar8 = auVar17._8_4_;
          }
          else {
            auVar17._8_4_ = uVar8;
            auVar17._0_8_ = local_68 + 2;
            auVar17._12_4_ = 0;
          }
          auVar4 = auVar17._0_12_;
          if (uVar8 < 3) goto LAB_003ba3b0;
        }
        else {
          auVar4[8] = bVar2;
          auVar4._0_8_ = local_68 + 1;
          auVar4._9_3_ = 0;
          auVar17[8] = bVar2;
          auVar17._0_8_ = local_68 + 1;
          auVar17._9_7_ = 0;
          if (bVar2 < 3) {
LAB_003ba3b0:
            local_68 = auVar4._0_8_;
            *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
            *(int *)(param_1 + 0x4c) = auVar4._8_4_;
            goto LAB_003ba3c0;
          }
        }
        local_68 = auVar17._0_8_;
        if ((*puVar1 & 1) == 0) {
          lVar11 = FUN_0030c8c0(puVar1);
        }
        else {
          lVar11 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        FUN_0030d5b0(lVar11,0x22,auVar17._8_8_);
      }
      else if ((uVar8 == 0x21) && ((uVar9 & 0xff) == 8)) {
        bVar2 = *local_68;
        uVar8 = (uint)bVar2;
        uVar14 = 1;
        if ((char)bVar2 < '\0') {
          uVar8 = ((uint)bVar2 + (uint)local_68[1] * 0x80) - 0x80;
          if ((char)local_68[1] < '\0') {
            auVar16 = FUN_003230f0(local_68);
            local_68 = auVar16._0_8_;
            *(bool *)(param_1 + 0x48) = auVar16._8_8_ != 0;
            goto joined_r0x003ba10c;
          }
          lVar11 = 2;
        }
        else {
          lVar11 = 1;
        }
        local_68 = local_68 + lVar11;
        *(bool *)(param_1 + 0x48) = uVar8 != 0;
      }
      else {
LAB_003ba318:
        if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar9 - 1;
          break;
        }
        uVar7 = auVar16._8_8_ & 0xffffffff;
        if (uVar9 >> 6 < 0x7d) {
          if ((*puVar1 & 1) == 0) {
            lVar11 = FUN_0030c8c0(puVar1);
          }
          else {
            lVar11 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_0030e020(uVar7,lVar11,local_68,param_3);
        }
        else {
          local_68 = (byte *)FUN_0039dd58(param_1 + 0x10,uVar7,local_68,puVar5,puVar1,param_3);
        }
joined_r0x003ba10c:
        if (local_68 == (byte *)0x0) goto LAB_003ba464;
      }
LAB_003ba3c0:
      uVar7 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar14;
  return local_68;
}


