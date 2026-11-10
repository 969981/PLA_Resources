/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006929b0; name: FUN_006929b0
 */


byte * FUN_006929b0(long param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar3 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar3 & 1) == 0) {
    do {
      pbVar6 = local_58 + 1;
      bVar1 = *local_58;
      uVar3 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar3 = (ulong)(((uint)bVar1 + (uint)*pbVar6 * 0x80) - 0x80);
        if (-1 < (char)*pbVar6) {
          pbVar6 = local_58 + 2;
          goto LAB_00692a70;
        }
        auVar12 = FUN_00323230(local_58,uVar3);
        uVar8 = auVar12._8_4_;
        if (auVar12._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar7 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
        local_58 = auVar12._0_8_;
      }
      else {
LAB_00692a70:
        uVar8 = (uint)uVar3;
        uVar7 = (uint)(uVar3 >> 3);
        local_58 = pbVar6;
      }
      if (uVar7 == 3) {
        if ((uVar8 & 0xff) != 0x1a) goto LAB_00692b80;
        if (*(int *)(param_1 + 0x1c) == 3) {
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = (ulong)*local_58;
          if (-1 < (char)*local_58) goto LAB_00692cd4;
LAB_00692b64:
          auVar12 = FUN_003232c0(local_58,uVar3);
          if (auVar12._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          FUN_00692798(param_1);
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 3;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar9 = FUN_0069ccd0(puVar4);
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          uVar3 = (ulong)*local_58;
          if ((char)*local_58 < '\0') goto LAB_00692b64;
LAB_00692cd4:
          auVar12._8_8_ = uVar3;
          auVar12._0_8_ = local_58 + 1;
        }
        iVar2 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
        lVar5 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
        if ((int)lVar5 < 1) {
          return (byte *)0x0;
        }
        local_58 = (byte *)FUN_00691d74(uVar9,auVar12._0_8_,param_3);
joined_r0x00692d0c:
        if ((local_58 == (byte *)0x0) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar8 = *(int *)((long)param_3 + 0x1c) + iVar2;
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      }
      else {
        if (uVar7 == 2) {
          if ((uVar8 & 0xff) != 0x12) goto LAB_00692b80;
          if (*(int *)(param_1 + 0x1c) == 2) {
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            uVar3 = (ulong)*local_58;
            if (-1 < (char)*local_58) goto LAB_00692c60;
LAB_00692afc:
            auVar11 = FUN_003232c0(local_58,uVar3);
            if (auVar11._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            FUN_00692798(param_1);
            puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
            *(undefined4 *)(param_1 + 0x1c) = 2;
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar4 = (ulong *)*puVar4;
            }
            uVar9 = FUN_0069cd40(puVar4);
            *(undefined8 *)(param_1 + 0x10) = uVar9;
            uVar3 = (ulong)*local_58;
            if ((char)*local_58 < '\0') goto LAB_00692afc;
LAB_00692c60:
            auVar11._8_8_ = uVar3;
            auVar11._0_8_ = local_58 + 1;
          }
          iVar2 = FUN_0031e1b4(param_3,auVar11._0_8_,auVar11._8_8_ & 0xffffffff);
          lVar5 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
          if ((int)lVar5 < 1) {
            return (byte *)0x0;
          }
          local_58 = (byte *)FUN_006921d8(uVar9,auVar11._0_8_,param_3);
          goto joined_r0x00692d0c;
        }
        if ((uVar7 == 1) && ((uVar8 & 0xff) == 10)) {
          if (*(int *)(param_1 + 0x1c) == 1) {
            uVar9 = *(undefined8 *)(param_1 + 0x10);
            uVar3 = (ulong)*local_58;
            if (-1 < (char)*local_58) goto LAB_00692bec;
LAB_00692ab8:
            auVar10 = FUN_003232c0(local_58,uVar3);
            if (auVar10._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            FUN_00692798(param_1);
            puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
            *(undefined4 *)(param_1 + 0x1c) = 1;
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar4 = (ulong *)*puVar4;
            }
            uVar9 = FUN_0069cc60(puVar4);
            *(undefined8 *)(param_1 + 0x10) = uVar9;
            uVar3 = (ulong)*local_58;
            if ((char)*local_58 < '\0') goto LAB_00692ab8;
LAB_00692bec:
            auVar10._8_8_ = uVar3;
            auVar10._0_8_ = local_58 + 1;
          }
          iVar2 = FUN_0031e1b4(param_3,auVar10._0_8_,auVar10._8_8_ & 0xffffffff);
          lVar5 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
          if ((int)lVar5 < 1) {
            return (byte *)0x0;
          }
          local_58 = (byte *)FUN_00691950(uVar9,auVar10._0_8_,param_3);
          goto joined_r0x00692d0c;
        }
LAB_00692b80:
        if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar8 - 1;
          return local_58;
        }
        uVar3 = *(ulong *)(param_1 + 8);
        if ((uVar3 & 1) == 0) {
          lVar5 = FUN_0033aecc((ulong *)(param_1 + 8));
        }
        else {
          lVar5 = (uVar3 & 0xfffffffffffffffe) + 8;
        }
        local_58 = (byte *)FUN_00323c60(uVar8,lVar5,local_58,param_3);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar3 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar3 & 1) == 0);
  }
  return local_58;
}


