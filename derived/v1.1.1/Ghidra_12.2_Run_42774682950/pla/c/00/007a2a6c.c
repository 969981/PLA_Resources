/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a2a6c; name: FUN_007a2a6c
 */


byte * FUN_007a2a6c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar7 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      pbVar10 = local_58 + 1;
      bVar3 = *local_58;
      uVar7 = (ulong)(uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar7 = (ulong)(((uint)bVar3 + (uint)*pbVar10 * 0x80) - 0x80);
        if (-1 < (char)*pbVar10) {
          pbVar10 = local_58 + 2;
          goto LAB_007a2b20;
        }
        auVar14 = FUN_00323230(local_58,uVar7);
        uVar13 = auVar14._8_4_;
        if (auVar14._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar11 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
        local_58 = auVar14._0_8_;
      }
      else {
LAB_007a2b20:
        uVar13 = (uint)uVar7;
        uVar11 = (uint)(uVar7 >> 3);
        local_58 = pbVar10;
      }
      if (uVar11 == 2) {
        if ((uVar13 & 0xff) != 0x12) goto LAB_007a2c20;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) {
          puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar8 = FUN_0079f934(puVar9);
          *(long *)(param_1 + 0x18) = lVar8;
          uVar7 = (ulong)*local_58;
          if (-1 < (char)*local_58) goto LAB_007a2c18;
LAB_007a2c80:
          auVar14 = FUN_003232c0(local_58,uVar7);
          if (auVar14._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          uVar7 = (ulong)*local_58;
          if ((char)*local_58 < '\0') goto LAB_007a2c80;
LAB_007a2c18:
          auVar14._8_8_ = uVar7;
          auVar14._0_8_ = local_58 + 1;
        }
        iVar6 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff);
        lVar4 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar4 + -1;
        if ((((int)lVar4 < 1) ||
            (local_58 = (byte *)FUN_0079dc1c(lVar8,auVar14._0_8_,param_3), local_58 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar13 = *(int *)((long)param_3 + 0x1c) + iVar6;
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      }
      else {
        if ((uVar11 == 1) && ((uVar13 & 0xff) == 10)) {
          puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) == 0) {
            pbVar10 = (byte *)*puVar2;
          }
          else {
            puVar9 = (ulong *)*puVar9;
            pbVar10 = (byte *)*puVar2;
          }
          if (pbVar10 == puVar5) {
            FUN_0029175c(puVar2,puVar9,puVar5);
            pbVar10 = (byte *)*puVar2;
          }
          local_58 = (byte *)FUN_003234c0(pbVar10,local_58,param_3);
          bVar3 = *pbVar10;
          pbVar12 = *(byte **)(pbVar10 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar12 = pbVar10 + 1;
          }
          if ((bVar3 & 1) == 0) {
            uVar7 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar7 = *(ulong *)(pbVar10 + 8);
            if ((long)uVar7 < 0) {
              FUN_0031f284(uVar7,"size_t to int conversion");
            }
          }
          uVar7 = FUN_00323380(pbVar12,uVar7,0);
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar10 = (byte *)(uVar7 & 1);
        }
        else {
LAB_007a2c20:
          if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar13 - 1;
            return local_58;
          }
          if ((*puVar1 & 1) == 0) {
            lVar8 = FUN_0033aecc(puVar1);
          }
          else {
            lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_58 = (byte *)FUN_00323c60(uVar13,lVar8,local_58,param_3);
          pbVar10 = local_58;
        }
        if (pbVar10 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_58;
}


