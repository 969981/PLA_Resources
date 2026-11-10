/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b3f70; name: FUN_003b3f70
 */


byte * FUN_003b3f70(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar4 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar4 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    do {
      pbVar7 = local_68 + 1;
      uVar9 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar9 = (uVar9 + (uint)*pbVar7 * 0x80) - 0x80;
        if (-1 < (char)*pbVar7) {
          pbVar7 = local_68 + 2;
          goto LAB_003b4078;
        }
        auVar11 = FUN_00323230();
        if (auVar11._0_8_ != 0) {
          uVar9 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x003b4148;
        }
LAB_003b4f04:
        local_68 = (byte *)0x0;
        break;
      }
LAB_003b4078:
      auVar11._8_4_ = uVar9;
      auVar11._0_8_ = pbVar7;
      auVar11._12_4_ = 0;
      uVar9 = uVar9 >> 3;
joined_r0x003b4148:
      local_68 = auVar11._0_8_;
      if (uVar9 - 1 < 0x2d) {
                    /* WARNING: Could not recover jumptable at 0x003b4098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar7 = (byte *)(*(code *)(&UNK_003b409c +
                                   (ulong)*(ushort *)(&DAT_039fb8a0 + (ulong)(uVar9 - 1) * 2) * 4))
                                   ();
        return pbVar7;
      }
      uVar6 = auVar11._8_4_;
      if ((uVar9 == 999) && ((uVar6 & 0xff) == 0x3a)) {
        local_68 = local_68 + -2;
        do {
          local_68 = local_68 + 2;
          piVar8 = *(int **)(param_1 + 0x40);
          if (piVar8 == (int *)0x0) {
            iVar3 = *(int *)(param_1 + 0x3c);
LAB_003b41d0:
            FUN_0032bcac(param_1 + 0x30,iVar3 + 1);
            piVar8 = *(int **)(param_1 + 0x40);
            iVar3 = *piVar8;
LAB_003b41e4:
            *piVar8 = iVar3 + 1;
            uVar10 = FUN_003c0f0c(*(undefined8 *)(param_1 + 0x30));
            iVar3 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar3 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar3 * 8 + 8) = uVar10;
            uVar4 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_003b4220;
LAB_003b41a4:
            auVar12 = FUN_003232c0(local_68,uVar4);
            if (auVar12._0_8_ == 0) goto LAB_003b4f04;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x38);
            iVar3 = *piVar8;
            if (iVar3 <= iVar2) {
              if (iVar3 == *(int *)(param_1 + 0x3c)) goto LAB_003b41d0;
              goto LAB_003b41e4;
            }
            *(int *)(param_1 + 0x38) = iVar2 + 1;
            uVar10 = *(undefined8 *)(piVar8 + (long)iVar2 * 2 + 2);
            uVar4 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_003b41a4;
LAB_003b4220:
            auVar12._8_8_ = uVar4;
            auVar12._0_8_ = local_68 + 1;
          }
          iVar3 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_);
          uVar4 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar4 + -1;
          if ((((int)uVar4 < 1) ||
              (local_68 = (byte *)FUN_003bb6f0(uVar10,auVar12._0_8_,param_3),
              local_68 == (byte *)0x0)) ||
             (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_003b4f04;
          uVar9 = *(int *)((long)param_3 + 0x1c) + iVar3;
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          pbVar7 = (byte *)(param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f));
          *param_3 = (ulong)pbVar7;
        } while ((local_68 < pbVar7) && (*(short *)local_68 == 0x3eba));
      }
      else {
        if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar6 - 1;
          break;
        }
        uVar4 = auVar11._8_8_ & 0xffffffff;
        if (uVar6 >> 6 < 0x7d) {
          if ((*puVar1 & 1) == 0) {
            lVar5 = FUN_0030c8c0(puVar1);
          }
          else {
            lVar5 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_0030e020(uVar4,lVar5,local_68,param_3);
        }
        else {
          local_68 = (byte *)FUN_0039dd58(param_1 + 0x10,uVar4,local_68,PTR_DAT_04373bf0,puVar1,
                                          param_3);
        }
        if (local_68 == (byte *)0x0) goto LAB_003b4f04;
      }
      uVar4 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar4 & 1) == 0);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return local_68;
}


