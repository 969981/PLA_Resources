/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00697dd4; name: FUN_00697dd4
 */


byte * FUN_00697dd4(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *local_48;
  
  local_48 = param_2;
  uVar4 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
  if ((uVar4 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    do {
      pbVar7 = local_48 + 1;
      bVar2 = *local_48;
      uVar4 = (ulong)(uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar4 = (ulong)(((uint)bVar2 + (uint)*pbVar7 * 0x80) - 0x80);
        if (-1 < (char)*pbVar7) {
          pbVar7 = local_48 + 2;
          goto LAB_00697e8c;
        }
        auVar12 = FUN_00323230(local_48,uVar4);
        uVar9 = auVar12._8_4_;
        if (auVar12._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar8 = (uint)(auVar12._8_8_ >> 3) & 0x1fffffff;
        local_48 = auVar12._0_8_;
      }
      else {
LAB_00697e8c:
        uVar9 = (uint)uVar4;
        uVar8 = (uint)(uVar4 >> 3);
        local_48 = pbVar7;
      }
      if (uVar8 == 2) {
        if ((uVar9 & 0xff) != 0x12) goto LAB_00697f60;
        if (*(int *)(param_1 + 0x1c) == 1) {
          puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          if (puVar5 == (ulong *)0x0) {
            FUN_0069e0dc(*(undefined8 *)(param_1 + 0x10));
          }
LAB_00698034:
          puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          uVar10 = FUN_0069d4ec(puVar5);
          *(undefined8 *)(param_1 + 0x10) = uVar10;
          uVar4 = (ulong)*local_48;
          if ((char)*local_48 < '\0') goto LAB_00697f44;
LAB_00698060:
          auVar12._8_8_ = uVar4;
          auVar12._0_8_ = local_48 + 1;
        }
        else {
          if (*(int *)(param_1 + 0x1c) != 2) goto LAB_00698034;
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          uVar4 = (ulong)*local_48;
          if (-1 < (char)*local_48) goto LAB_00698060;
LAB_00697f44:
          auVar12 = FUN_003232c0(local_48,uVar4);
          if (auVar12._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        iVar3 = FUN_0031e1b4(param_3,auVar12._0_8_,auVar12._8_8_ & 0xffffffff);
        lVar6 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar6 + -1;
        if ((int)lVar6 < 1) {
          return (byte *)0x0;
        }
        local_48 = (byte *)FUN_00698fa0(uVar10,auVar12._0_8_,param_3);
joined_r0x00698098:
        if ((local_48 == (byte *)0x0) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar9 = *(int *)((long)param_3 + 0x1c) + iVar3;
        *(uint *)((long)param_3 + 0x1c) = uVar9;
        *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
      }
      else {
        if ((uVar8 == 1) && ((uVar9 & 0xff) == 10)) {
          if (*(int *)(param_1 + 0x1c) == 2) {
            puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
            if ((*puVar1 & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            if (puVar5 == (ulong *)0x0) {
              FUN_0069e168(*(undefined8 *)(param_1 + 0x10));
            }
LAB_00697fb0:
            puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
            *(undefined4 *)(param_1 + 0x1c) = 1;
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar5 = (ulong *)*puVar5;
            }
            uVar10 = FUN_0069d42c(puVar5);
            *(undefined8 *)(param_1 + 0x10) = uVar10;
            uVar4 = (ulong)*local_48;
            if ((char)*local_48 < '\0') goto LAB_00697ed4;
LAB_00697fdc:
            auVar11._8_8_ = uVar4;
            auVar11._0_8_ = local_48 + 1;
          }
          else {
            if (*(int *)(param_1 + 0x1c) != 1) goto LAB_00697fb0;
            uVar10 = *(undefined8 *)(param_1 + 0x10);
            uVar4 = (ulong)*local_48;
            if (-1 < (char)*local_48) goto LAB_00697fdc;
LAB_00697ed4:
            auVar11 = FUN_003232c0(local_48,uVar4);
            if (auVar11._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          iVar3 = FUN_0031e1b4(param_3,auVar11._0_8_,auVar11._8_8_ & 0xffffffff);
          lVar6 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)lVar6 + -1;
          if ((int)lVar6 < 1) {
            return (byte *)0x0;
          }
          local_48 = (byte *)FUN_00698958(uVar10,auVar11._0_8_,param_3);
          goto joined_r0x00698098;
        }
LAB_00697f60:
        if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar9 - 1;
          return local_48;
        }
        if ((*puVar1 & 1) == 0) {
          lVar6 = FUN_0033aecc(puVar1);
        }
        else {
          lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        local_48 = (byte *)FUN_00323c60(uVar9,lVar6,local_48,param_3);
        if (local_48 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar4 = FUN_0030c7bc(param_3,&local_48,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar4 & 1) == 0);
  }
  return local_48;
}


