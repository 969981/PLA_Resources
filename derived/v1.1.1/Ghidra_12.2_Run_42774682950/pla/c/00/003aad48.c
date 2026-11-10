/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003aad48; name: FUN_003aad48
 */


byte * FUN_003aad48(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar5 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar3 = PTR_DAT_04373c18;
  if ((uVar5 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    do {
      pbVar8 = local_68 + 1;
      uVar7 = (uint)*local_68;
      if ((char)*local_68 < '\0') {
        uVar7 = (uVar7 + (uint)*pbVar8 * 0x80) - 0x80;
        if (-1 < (char)*pbVar8) {
          pbVar8 = local_68 + 2;
          goto LAB_003aadcc;
        }
        auVar11 = FUN_00323230();
        if (auVar11._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar7 = auVar11._8_4_;
      }
      else {
LAB_003aadcc:
        auVar11._8_4_ = uVar7;
        auVar11._0_8_ = pbVar8;
        auVar11._12_4_ = 0;
      }
      local_68 = auVar11._0_8_;
      if (uVar7 == 0x1f3a) {
        local_68 = local_68 + -2;
        do {
          local_68 = local_68 + 2;
          piVar9 = *(int **)(param_1 + 0x38);
          if (piVar9 == (int *)0x0) {
            iVar4 = *(int *)(param_1 + 0x34);
LAB_003aaecc:
            FUN_0032bcac(param_1 + 0x28,iVar4 + 1);
            piVar9 = *(int **)(param_1 + 0x38);
            iVar4 = *piVar9;
LAB_003aaee0:
            *piVar9 = iVar4 + 1;
            uVar10 = FUN_003c0f0c(*(undefined8 *)(param_1 + 0x28));
            iVar4 = *(int *)(param_1 + 0x30);
            *(int *)(param_1 + 0x30) = iVar4 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar4 * 8 + 8) = uVar10;
            uVar5 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_003aaf1c;
LAB_003aaea0:
            auVar12 = FUN_003232c0(local_68,uVar5);
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar2 = *(int *)(param_1 + 0x30);
            iVar4 = *piVar9;
            if (iVar4 <= iVar2) {
              if (iVar4 == *(int *)(param_1 + 0x34)) goto LAB_003aaecc;
              goto LAB_003aaee0;
            }
            *(int *)(param_1 + 0x30) = iVar2 + 1;
            uVar10 = *(undefined8 *)(piVar9 + (long)iVar2 * 2 + 2);
            uVar5 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_003aaea0;
LAB_003aaf1c:
            auVar12._8_8_ = uVar5;
            auVar12._0_8_ = local_68 + 1;
          }
          iVar4 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_);
          uVar5 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar5 + -1;
          if ((int)uVar5 < 1) {
            return (byte *)0x0;
          }
          local_68 = (byte *)FUN_003bb6f0(uVar10,auVar12._0_8_,param_3);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar7 = *(int *)((long)param_3 + 0x1c) + iVar4;
          *(uint *)((long)param_3 + 0x1c) = uVar7;
          pbVar8 = (byte *)(param_3[1] + (long)(int)(uVar7 & (int)uVar7 >> 0x1f));
          *param_3 = (ulong)pbVar8;
        } while ((local_68 < pbVar8) && (*(short *)local_68 == 0x3eba));
      }
      else {
        uVar7 = auVar11._8_4_;
        if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar7 - 1;
          return local_68;
        }
        uVar5 = auVar11._8_8_ & 0xffffffff;
        if (uVar7 >> 6 < 0x7d) {
          if ((*puVar1 & 1) == 0) {
            lVar6 = FUN_0030c8c0(puVar1);
          }
          else {
            lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_0030e020(uVar5,lVar6,local_68,param_3);
        }
        else {
          local_68 = (byte *)FUN_0039dd58(param_1 + 0x10,uVar5,local_68,puVar3,puVar1,param_3);
        }
        if (local_68 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar5 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar5 & 1) == 0);
  }
  return local_68;
}


