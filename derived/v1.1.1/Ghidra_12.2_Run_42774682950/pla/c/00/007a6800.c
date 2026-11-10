/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a6800; name: FUN_007a6800
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_007a6800(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar8 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar6 = PTR_DAT_043730c0;
  if ((uVar8 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    puVar2 = (ulong *)(param_1 + 8);
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      pbVar11 = local_58 + 1;
      bVar4 = *local_58;
      auVar5[8] = bVar4;
      auVar5._0_8_ = pbVar11;
      auVar5._9_7_ = 0;
      auVar15[8] = bVar4;
      auVar15._0_8_ = pbVar11;
      auVar15._9_7_ = 0;
      if ((char)bVar4 < '\0') {
        uVar12 = ((uint)bVar4 + (uint)*pbVar11 * 0x80) - 0x80;
        if ((char)*pbVar11 < '\0') {
          auVar15 = FUN_00323230();
          if (auVar15._0_8_ == 0) {
            return (byte *)0x0;
          }
          uVar12 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          auVar5 = auVar15;
        }
        else {
          auVar5._8_4_ = uVar12;
          auVar5._0_8_ = local_58 + 2;
          auVar5._12_4_ = 0;
          auVar15._8_4_ = uVar12;
          auVar15._0_8_ = local_58 + 2;
          auVar15._12_4_ = 0;
          uVar12 = uVar12 >> 3;
        }
      }
      else {
        uVar12 = (uint)(bVar4 >> 3);
      }
      if (uVar12 == 3) {
        local_58 = auVar5._0_8_;
        if ((auVar5._8_4_ & 0xff) != 0x1a) goto LAB_007a6a1c;
        pbVar11 = local_58 + -1;
        do {
          local_58 = pbVar11 + 1;
          bVar4 = pbVar11[1];
          if ((char)bVar4 < '\0') {
            auVar14 = FUN_003232c0(local_58,bVar4);
            if (auVar14._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            auVar14[8] = bVar4;
            auVar14._0_8_ = pbVar11 + 2;
            auVar14._9_7_ = 0;
          }
          iVar7 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_);
          uVar8 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar8 + -1;
          if ((int)uVar8 < 1) {
            return (byte *)0x0;
          }
          pbVar11 = (byte *)FUN_007b2e0c(param_1 + 0x10,auVar14._0_8_,param_3);
          if (pbVar11 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar12 = *(int *)((long)param_3 + 0x1c) + iVar7;
          *(uint *)((long)param_3 + 0x1c) = uVar12;
          pbVar13 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
          *param_3 = (ulong)pbVar13;
          local_58 = pbVar11;
        } while ((pbVar11 < pbVar13) && (*pbVar11 == 0x1a));
      }
      else {
        local_58 = auVar15._0_8_;
        auVar5 = auVar15;
        if (uVar12 == 2) {
          if ((auVar15._8_4_ & 0xff) == 0x12) {
            puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
            if ((*puVar2 & 1) == 0) {
              pbVar11 = (byte *)*puVar1;
            }
            else {
              puVar10 = (ulong *)*puVar10;
              pbVar11 = (byte *)*puVar1;
            }
            if (pbVar11 == puVar6) {
              FUN_0029175c(puVar1,puVar10,puVar6);
              pbVar11 = (byte *)*puVar1;
            }
            goto LAB_007a69ec;
          }
LAB_007a6a1c:
          local_58 = auVar5._0_8_;
          uVar12 = auVar5._8_4_;
          if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar12 - 1;
            return local_58;
          }
          if ((*puVar2 & 1) == 0) {
            lVar9 = FUN_0033aecc(puVar2);
          }
          else {
            lVar9 = (*puVar2 & 0xfffffffffffffffe) + 8;
          }
          local_58 = (byte *)FUN_00323c60(auVar5._8_8_ & 0xffffffff,lVar9,local_58,param_3);
          pbVar11 = local_58;
        }
        else {
          if ((uVar12 != 1) || ((auVar15._8_4_ & 0xff) != 10)) goto LAB_007a6a1c;
          puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) == 0) {
            pbVar11 = (byte *)*puVar3;
          }
          else {
            puVar10 = (ulong *)*puVar10;
            pbVar11 = (byte *)*puVar3;
          }
          if (pbVar11 == puVar6) {
            FUN_0029175c(puVar3,puVar10,puVar6);
            pbVar11 = (byte *)*puVar3;
          }
LAB_007a69ec:
          local_58 = (byte *)FUN_003234c0(pbVar11,local_58,param_3);
          bVar4 = *pbVar11;
          pbVar13 = *(byte **)(pbVar11 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar13 = pbVar11 + 1;
          }
          if ((bVar4 & 1) == 0) {
            uVar8 = (ulong)(bVar4 >> 1);
          }
          else {
            uVar8 = *(ulong *)(pbVar11 + 8);
            if ((long)uVar8 < 0) {
              FUN_0031f284(uVar8,"size_t to int conversion");
            }
          }
          uVar8 = FUN_00323380(pbVar13,uVar8,0);
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar11 = (byte *)(uVar8 & 1);
        }
        if (pbVar11 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar8 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar8 & 1) == 0);
  }
  return local_58;
}


