/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071ebf8; name: FUN_0071ebf8
 */


byte * FUN_0071ebf8(long param_1,byte *param_2,ulong *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  byte *local_38;
  
  local_38 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar6 & 1) == 0) {
    do {
      bVar4 = *local_38;
      auVar9[8] = bVar4;
      auVar9._0_8_ = local_38 + 1;
      auVar9._9_3_ = 0;
      if ((char)bVar4 < '\0') {
        bVar3 = local_38[1];
        iVar5 = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        if ((char)bVar3 < '\0') {
          auVar9 = FUN_00323230(local_38,iVar5);
          if (auVar9._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar9._8_4_ = iVar5;
          auVar9._0_8_ = local_38 + 2;
        }
      }
      uVar2 = auVar9._8_4_;
      local_38 = auVar9._0_8_;
      if (uVar2 == 10) {
        pbVar7 = local_38 + -1;
        do {
          local_38 = pbVar7 + 1;
          bVar4 = pbVar7[1];
          if ((char)bVar4 < '\0') {
            auVar10 = FUN_003232c0(local_38,bVar4);
            if (auVar10._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            auVar10[8] = bVar4;
            auVar10._0_8_ = pbVar7 + 2;
            auVar10._9_7_ = 0;
          }
          iVar5 = FUN_0031e1b4(param_3,auVar10._0_8_,auVar10._8_8_);
          uVar6 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar6 + -1;
          if ((int)uVar6 < 1) {
            return (byte *)0x0;
          }
          pbVar7 = (byte *)FUN_00726c7c(param_1 + 0x10,auVar10._0_8_,param_3);
          if (pbVar7 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar2 = *(int *)((long)param_3 + 0x1c) + iVar5;
          *(uint *)((long)param_3 + 0x1c) = uVar2;
          pbVar1 = (byte *)(param_3[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f));
          *param_3 = (ulong)pbVar1;
          local_38 = pbVar7;
        } while ((pbVar7 < pbVar1) && (*pbVar7 == 10));
      }
      else {
        if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar2 - 1;
          return local_38;
        }
        uVar6 = *(ulong *)(param_1 + 8);
        if ((uVar6 & 1) == 0) {
          lVar8 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar8 = (uVar6 & 0xfffffffffffffffe) + 8;
        }
        local_38 = (byte *)FUN_00323c60(uVar2,lVar8,local_38,param_3);
        if (local_38 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar6 = FUN_0030c7bc(param_3,&local_38,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  return local_38;
}


