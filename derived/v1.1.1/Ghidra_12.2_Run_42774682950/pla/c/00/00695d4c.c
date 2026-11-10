/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00695d4c; name: FUN_00695d4c
 */


byte * FUN_00695d4c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar5 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar3 = PTR_LAB_04373088;
  if ((uVar5 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    do {
      pbVar6 = local_58 + 1;
      bVar2 = *local_58;
      uVar5 = (ulong)(uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar5 = (ulong)(((uint)bVar2 + (uint)*pbVar6 * 0x80) - 0x80);
        if (-1 < (char)*pbVar6) {
          pbVar6 = local_58 + 2;
          goto LAB_00695de8;
        }
        auVar12 = FUN_00323230(local_58,uVar5);
        uVar9 = auVar12._8_4_;
        if (auVar12._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar7 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
        local_58 = auVar12._0_8_;
      }
      else {
LAB_00695de8:
        uVar9 = (uint)uVar5;
        uVar7 = (uint)(uVar5 >> 3);
        local_58 = pbVar6;
      }
      if (uVar7 == 2) {
        if ((uVar9 & 0xff) != 0x12) goto LAB_00695e9c;
        if (*(int *)(param_1 + 0x1c) == 2) {
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          uVar5 = (ulong)*local_58;
          if ((char)*local_58 < '\0') goto LAB_00695e80;
LAB_00695f00:
          auVar12._8_8_ = uVar5;
          auVar12._0_8_ = local_58 + 1;
        }
        else {
          puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          uVar10 = FUN_00602b5c(puVar8);
          *(undefined8 *)(param_1 + 0x10) = uVar10;
          uVar5 = (ulong)*local_58;
          if (-1 < (char)*local_58) goto LAB_00695f00;
LAB_00695e80:
          auVar12 = FUN_003232c0(local_58,uVar5);
          if (auVar12._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        iVar4 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
        lVar11 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar11 + -1;
        if ((((int)lVar11 < 1) ||
            (local_58 = (byte *)FUN_006023f8(uVar10,auVar12._0_8_,param_3), local_58 == (byte *)0x0)
            ) || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar9 = *(int *)((long)param_3 + 0x1c) + iVar4;
        *(uint *)((long)param_3 + 0x1c) = uVar9;
        *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
      }
      else {
        if ((uVar7 == 1) && ((uVar9 & 0xff) == 8)) {
          bVar2 = *local_58;
          if ((char)bVar2 < '\0') {
            if ((char)local_58[1] < '\0') {
              auVar13 = FUN_003230f0(local_58);
            }
            else {
              auVar13._8_4_ = (uint)bVar2 + (uint)local_58[1] * 0x80 + -0x80;
              auVar13._0_8_ = local_58 + 2;
              auVar13._12_4_ = 0;
            }
          }
          else {
            auVar13[8] = bVar2;
            auVar13._0_8_ = local_58 + 1;
            auVar13._9_7_ = 0;
          }
          local_58 = auVar13._0_8_;
          if (*(int *)(param_1 + 0x1c) != 1) {
            if (*(int *)(param_1 + 0x1c) == 2) {
              puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
              if ((*puVar1 & 1) != 0) {
                puVar8 = (ulong *)*puVar8;
              }
              if ((puVar8 == (ulong *)0x0) && (lVar11 = *(long *)(param_1 + 0x10), lVar11 != 0)) {
                FUN_00602294(lVar11);
                FUN_002e2ea0(puVar3,lVar11);
              }
            }
            *(undefined4 *)(param_1 + 0x1c) = 1;
          }
          *(bool *)(param_1 + 0x10) = auVar13._8_8_ != 0;
        }
        else {
LAB_00695e9c:
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar9 - 1;
            return local_58;
          }
          if ((*puVar1 & 1) == 0) {
            lVar11 = FUN_0033aecc(puVar1);
          }
          else {
            lVar11 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_58 = (byte *)FUN_00323c60(uVar9,lVar11,local_58,param_3);
        }
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar5 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar5 & 1) == 0);
  }
  return local_58;
}


