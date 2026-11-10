/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b9758; name: FUN_003b9758
 */


byte * FUN_003b9758(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar4 = PTR_DAT_04373c08;
  uVar13 = 0;
  if ((uVar6 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    uVar13 = 0;
    do {
      pbVar9 = local_68 + 1;
      uVar7 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar7 = (uVar7 + (uint)*pbVar9 * 0x80) - 0x80;
        if (-1 < (char)*pbVar9) {
          pbVar9 = local_68 + 2;
          goto LAB_003b9804;
        }
        auVar15 = FUN_00323230();
        if (auVar15._0_8_ != 0) {
          uVar7 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x003b9880;
        }
LAB_003b9a68:
        local_68 = (byte *)0x0;
        break;
      }
LAB_003b9804:
      auVar15._8_4_ = uVar7;
      auVar15._0_8_ = pbVar9;
      auVar15._12_4_ = 0;
      uVar7 = uVar7 >> 3;
joined_r0x003b9880:
      local_68 = auVar15._0_8_;
      uVar8 = auVar15._8_4_;
      if (uVar7 == 999) {
        if ((uVar8 & 0xff) != 0x3a) goto LAB_003b99d4;
        local_68 = local_68 + -2;
        do {
          local_68 = local_68 + 2;
          piVar11 = *(int **)(param_1 + 0x40);
          if (piVar11 == (int *)0x0) {
            iVar5 = *(int *)(param_1 + 0x3c);
LAB_003b9900:
            FUN_0032bcac(param_1 + 0x30,iVar5 + 1);
            piVar11 = *(int **)(param_1 + 0x40);
            iVar5 = *piVar11;
LAB_003b9914:
            *piVar11 = iVar5 + 1;
            uVar12 = FUN_003c0f0c(*(undefined8 *)(param_1 + 0x30));
            iVar5 = *(int *)(param_1 + 0x38);
            *(int *)(param_1 + 0x38) = iVar5 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + (long)iVar5 * 8 + 8) = uVar12;
            uVar6 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_003b9950;
LAB_003b98d4:
            auVar14 = FUN_003232c0(local_68,uVar6);
            if (auVar14._0_8_ == 0) goto LAB_003b9a68;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x38);
            iVar5 = *piVar11;
            if (iVar5 <= iVar3) {
              if (iVar5 == *(int *)(param_1 + 0x3c)) goto LAB_003b9900;
              goto LAB_003b9914;
            }
            *(int *)(param_1 + 0x38) = iVar3 + 1;
            uVar12 = *(undefined8 *)(piVar11 + (long)iVar3 * 2 + 2);
            uVar6 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_003b98d4;
LAB_003b9950:
            auVar14._8_8_ = uVar6;
            auVar14._0_8_ = local_68 + 1;
          }
          iVar5 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_);
          uVar6 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar6 + -1;
          if ((((int)uVar6 < 1) ||
              (local_68 = (byte *)FUN_003bb6f0(uVar12,auVar14._0_8_,param_3),
              local_68 == (byte *)0x0)) ||
             (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
          goto LAB_003b9a68;
          uVar7 = *(int *)((long)param_3 + 0x1c) + iVar5;
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          pbVar9 = (byte *)(param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f));
          *param_3 = (ulong)pbVar9;
        } while ((local_68 < pbVar9) && (*(short *)local_68 == 0x3eba));
      }
      else if ((uVar7 == 0x21) && ((uVar8 & 0xff) == 8)) {
        bVar2 = *local_68;
        uVar7 = (uint)bVar2;
        uVar13 = 1;
        if ((char)bVar2 < '\0') {
          uVar7 = ((uint)bVar2 + (uint)local_68[1] * 0x80) - 0x80;
          if ((char)local_68[1] < '\0') {
            auVar15 = FUN_003230f0(local_68);
            local_68 = auVar15._0_8_;
            *(bool *)(param_1 + 0x48) = auVar15._8_8_ != 0;
            goto joined_r0x003b9a14;
          }
          lVar10 = 2;
        }
        else {
          lVar10 = 1;
        }
        local_68 = local_68 + lVar10;
        *(bool *)(param_1 + 0x48) = uVar7 != 0;
      }
      else {
LAB_003b99d4:
        if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
          break;
        }
        uVar6 = auVar15._8_8_ & 0xffffffff;
        if (uVar8 >> 6 < 0x7d) {
          if ((*puVar1 & 1) == 0) {
            lVar10 = FUN_0030c8c0(puVar1);
          }
          else {
            lVar10 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_0030e020(uVar6,lVar10,local_68,param_3);
        }
        else {
          local_68 = (byte *)FUN_0039dd58(param_1 + 0x10,uVar6,local_68,puVar4,puVar1,param_3);
        }
joined_r0x003b9a14:
        if (local_68 == (byte *)0x0) goto LAB_003b9a68;
      }
      uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar13;
  return local_68;
}


