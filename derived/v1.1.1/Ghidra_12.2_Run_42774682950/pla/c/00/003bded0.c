/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bded0; name: FUN_003bded0
 */


byte * FUN_003bded0(long param_1,byte *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte *local_48;
  
  local_48 = param_2;
  uVar3 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar3 & 1) == 0) {
    do {
      pbVar6 = local_48 + 1;
      uVar5 = (uint)*local_48;
      if ((char)*local_48 < '\0') {
        uVar5 = (uVar5 + (uint)*pbVar6 * 0x80) - 0x80;
        if (-1 < (char)*pbVar6) {
          pbVar6 = local_48 + 2;
          goto LAB_003bdf38;
        }
        auVar9 = FUN_00323230();
        if (auVar9._0_8_ == 0) {
          return (byte *)0x0;
        }
        uVar5 = auVar9._8_4_;
      }
      else {
LAB_003bdf38:
        auVar9._8_4_ = uVar5;
        auVar9._0_8_ = pbVar6;
        auVar9._12_4_ = 0;
      }
      local_48 = auVar9._0_8_;
      if (uVar5 == 10) {
        local_48 = local_48 + -1;
        do {
          local_48 = local_48 + 1;
          piVar7 = *(int **)(param_1 + 0x20);
          if (piVar7 == (int *)0x0) {
            iVar2 = *(int *)(param_1 + 0x1c);
LAB_003be008:
            FUN_0032bcac(param_1 + 0x10,iVar2 + 1);
            piVar7 = *(int **)(param_1 + 0x20);
            iVar2 = *piVar7;
LAB_003be01c:
            *piVar7 = iVar2 + 1;
            uVar8 = FUN_003c0f94(*(undefined8 *)(param_1 + 0x10));
            iVar2 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar2 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8 + 8) = uVar8;
            uVar3 = (ulong)*local_48;
            if (-1 < (char)*local_48) goto LAB_003be058;
LAB_003bdfdc:
            auVar10 = FUN_003232c0(local_48,uVar3);
            if (auVar10._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0x18);
            iVar2 = *piVar7;
            if (iVar2 <= iVar1) {
              if (iVar2 == *(int *)(param_1 + 0x1c)) goto LAB_003be008;
              goto LAB_003be01c;
            }
            *(int *)(param_1 + 0x18) = iVar1 + 1;
            uVar8 = *(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2);
            uVar3 = (ulong)*local_48;
            if ((char)*local_48 < '\0') goto LAB_003bdfdc;
LAB_003be058:
            auVar10._8_8_ = uVar3;
            auVar10._0_8_ = local_48 + 1;
          }
          iVar2 = FUN_0031e1b4(param_3,auVar10._0_8_,auVar10._8_8_);
          uVar3 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar3 + -1;
          if ((int)uVar3 < 1) {
            return (byte *)0x0;
          }
          local_48 = (byte *)FUN_003bc96c(uVar8,auVar10._0_8_,param_3);
          if (local_48 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar5 = *(int *)((long)param_3 + 0x1c) + iVar2;
          *(uint *)((long)param_3 + 0x1c) = uVar5;
          pbVar6 = (byte *)(param_3[1] + (long)(int)(uVar5 & (int)uVar5 >> 0x1f));
          *param_3 = (ulong)pbVar6;
        } while ((local_48 < pbVar6) && (*local_48 == 10));
      }
      else {
        uVar5 = auVar9._8_4_;
        if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar5 - 1;
          return local_48;
        }
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) == 0) {
          lVar4 = FUN_0030c8c0((ulong *)(param_1 + 8));
        }
        else {
          lVar4 = (uVar3 & 0xfffffffffffffffe) + 8;
        }
        local_48 = (byte *)FUN_0030e020(auVar9._8_8_ & 0xffffffff,lVar4,local_48,param_3);
        if (local_48 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar3 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar3 & 1) == 0);
  }
  return local_48;
}


