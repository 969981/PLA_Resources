/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e550c; name: FUN_006e550c
 */


byte * FUN_006e550c(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar7 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 8);
    do {
      pbVar11 = local_68 + 1;
      uVar12 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar12 = (uVar12 + (uint)*pbVar11 * 0x80) - 0x80;
        if (-1 < (char)*pbVar11) {
          pbVar11 = local_68 + 2;
          goto LAB_006e55bc;
        }
        auVar17 = FUN_00323230();
        if (auVar17._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar12 = (uint)(auVar17._8_8_ >> 3) & 0x1fffffff;
      }
      else {
LAB_006e55bc:
        auVar17._8_4_ = uVar12;
        auVar17._0_8_ = pbVar11;
        auVar17._12_4_ = 0;
        uVar12 = uVar12 >> 3;
      }
      local_68 = auVar17._0_8_;
      uVar9 = auVar17._8_4_;
      if (uVar12 == 3) {
        if ((uVar9 & 0xff) != 0x1a) goto LAB_006e57f0;
        local_68 = local_68 + -1;
        do {
          local_68 = local_68 + 1;
          piVar13 = *(int **)(param_1 + 0x20);
          if (piVar13 == (int *)0x0) {
            iVar6 = *(int *)(param_1 + 0x1c);
LAB_006e571c:
            FUN_0032bcac(param_1 + 0x10,iVar6 + 1);
            piVar13 = *(int **)(param_1 + 0x20);
            iVar6 = *piVar13;
LAB_006e5730:
            *piVar13 = iVar6 + 1;
            uVar15 = FUN_0060b34c(*(undefined8 *)(param_1 + 0x10));
            iVar6 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar6 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8 + 8) = uVar15;
            uVar7 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_006e576c;
LAB_006e56f0:
            auVar18 = FUN_003232c0(local_68,uVar7);
            if (auVar18._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x18);
            iVar6 = *piVar13;
            if (iVar6 <= iVar4) {
              if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_006e571c;
              goto LAB_006e5730;
            }
            *(int *)(param_1 + 0x18) = iVar4 + 1;
            uVar15 = *(undefined8 *)(piVar13 + (long)iVar4 * 2 + 2);
            uVar7 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_006e56f0;
LAB_006e576c:
            auVar18._8_8_ = uVar7;
            auVar18._0_8_ = local_68 + 1;
          }
          iVar6 = FUN_0031e1b4(param_3,auVar18._0_8_,auVar18._8_8_);
          uVar7 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          local_68 = (byte *)FUN_0060aa78(uVar15,auVar18._0_8_,param_3);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + iVar6;
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar11 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar11;
        } while ((local_68 < pbVar11) && (*local_68 == 0x1a));
      }
      else {
        if (uVar12 == 2) {
          if ((uVar9 & 0xff) != 0x12) goto LAB_006e57f0;
          puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) == 0) {
            pbVar11 = (byte *)*puVar1;
          }
          else {
            puVar10 = (ulong *)*puVar10;
            pbVar11 = (byte *)*puVar1;
          }
          if (pbVar11 == puVar5) {
            FUN_0029175c(puVar1,puVar10,puVar5);
            pbVar11 = (byte *)*puVar1;
          }
          local_68 = (byte *)FUN_003234c0(pbVar11,local_68,param_3);
          bVar3 = *pbVar11;
          pbVar14 = *(byte **)(pbVar11 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar14 = pbVar11 + 1;
          }
          if ((bVar3 & 1) == 0) {
            uVar7 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar7 = *(ulong *)(pbVar11 + 8);
            if ((long)uVar7 < 0) {
              FUN_0031f284(uVar7,"size_t to int conversion");
            }
          }
          uVar7 = FUN_00323380(pbVar14,uVar7,"google.rpc.Status.message");
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar11 = (byte *)(uVar7 & 1);
        }
        else {
          if ((uVar12 == 1) && ((uVar9 & 0xff) == 8)) {
            pbVar11 = local_68 + 1;
            uVar12 = (uint)*local_68;
            if ((char)*local_68 < '\0') {
              uVar12 = (uVar12 + (uint)*pbVar11 * 0x80) - 0x80;
              if ((char)*pbVar11 < '\0') {
                auVar16 = FUN_003230f0(local_68);
                local_68 = auVar16._0_8_;
                *(int *)(param_1 + 0x30) = auVar16._8_4_;
                pbVar11 = local_68;
                goto joined_r0x006e5858;
              }
              pbVar11 = local_68 + 2;
            }
            *(uint *)(param_1 + 0x30) = uVar12;
            local_68 = pbVar11;
            goto LAB_006e557c;
          }
LAB_006e57f0:
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar9 - 1;
            return local_68;
          }
          if ((*puVar2 & 1) == 0) {
            lVar8 = FUN_0030c8c0(puVar2);
          }
          else {
            lVar8 = (*puVar2 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_0030e020(auVar17._8_8_ & 0xffffffff,lVar8,local_68,param_3);
          pbVar11 = local_68;
        }
joined_r0x006e5858:
        if (pbVar11 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
LAB_006e557c:
      uVar7 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_68;
}


