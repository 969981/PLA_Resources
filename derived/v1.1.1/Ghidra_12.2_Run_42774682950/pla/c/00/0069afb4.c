/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0069afb4; name: FUN_0069afb4
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0069afb4(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar7 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      bVar3 = *local_58;
      uVar9 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        bVar3 = local_58[1];
        uVar9 = (uVar9 + (uint)bVar3 * 0x80) - 0x80;
        if ((char)bVar3 < '\0') {
          auVar15 = FUN_00323230(local_58,uVar9);
          local_58 = auVar15._0_8_;
          uVar9 = auVar15._8_4_;
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar11 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
        }
        else {
          local_58 = local_58 + 2;
          uVar11 = uVar9 >> 3;
        }
      }
      else {
        uVar11 = (uint)(bVar3 >> 3);
        local_58 = local_58 + 1;
      }
      if (uVar11 == 3) {
        if ((uVar9 & 0xff) != 0x1a) goto LAB_0069b144;
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) {
          puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
          lVar8 = FUN_006e5fb4(puVar10);
          *(long *)(param_1 + 0x18) = lVar8;
          uVar7 = (ulong)*local_58;
          if (-1 < (char)*local_58) goto LAB_0069b110;
LAB_0069b200:
          auVar15 = FUN_003232c0(local_58,uVar7);
          if (auVar15._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          uVar7 = (ulong)*local_58;
          if ((char)*local_58 < '\0') goto LAB_0069b200;
LAB_0069b110:
          auVar15._8_8_ = uVar7;
          auVar15._0_8_ = local_58 + 1;
        }
        iVar6 = FUN_0031e1b4(param_3,auVar15._0_8_,auVar15._8_8_ & 0xffffffff);
        lVar4 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar4 + -1;
        if ((int)lVar4 < 1) {
          return (byte *)0x0;
        }
        local_58 = (byte *)FUN_006e550c(lVar8,auVar15._0_8_,param_3);
        if (local_58 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar9 = *(int *)((long)param_3 + 0x1c) + iVar6;
        *(uint *)((long)param_3 + 0x1c) = uVar9;
        *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
      }
      else {
        if (uVar11 == 2) {
          if ((uVar9 & 0xff) == 0x10) {
            bVar3 = *local_58;
            uVar9 = (uint)bVar3;
            if ((char)bVar3 < '\0') {
              uVar9 = ((uint)bVar3 + (uint)local_58[1] * 0x80) - 0x80;
              if (-1 < (char)local_58[1]) {
                lVar8 = 2;
                goto LAB_0069b00c;
              }
              auVar14 = FUN_003230f0(local_58);
              if (auVar14._0_8_ == 0) {
                return (byte *)0x0;
              }
            }
            else {
              lVar8 = 1;
LAB_0069b00c:
              auVar14._8_4_ = uVar9;
              auVar14._0_8_ = local_58 + lVar8;
            }
            local_58 = auVar14._0_8_;
            *(int *)(param_1 + 0x20) = auVar14._8_4_;
            goto LAB_0069b018;
          }
LAB_0069b144:
          if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar9 - 1;
            return local_58;
          }
          if ((*puVar1 & 1) == 0) {
            lVar8 = FUN_0033aecc(puVar1);
          }
          else {
            lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_58 = (byte *)FUN_00323c60(uVar9,lVar8,local_58,param_3);
          pbVar13 = local_58;
        }
        else {
          if ((uVar11 != 1) || ((uVar9 & 0xff) != 10)) goto LAB_0069b144;
          puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) == 0) {
            pbVar13 = (byte *)*puVar2;
          }
          else {
            puVar10 = (ulong *)*puVar10;
            pbVar13 = (byte *)*puVar2;
          }
          if (pbVar13 == puVar5) {
            FUN_0029175c(puVar2,puVar10,puVar5);
            pbVar13 = (byte *)*puVar2;
          }
          local_58 = (byte *)FUN_003234c0(pbVar13,local_58,param_3);
          bVar3 = *pbVar13;
          pbVar12 = *(byte **)(pbVar13 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar12 = pbVar13 + 1;
          }
          if ((bVar3 & 1) == 0) {
            uVar7 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar7 = *(ulong *)(pbVar13 + 8);
            if ((long)uVar7 < 0) {
              FUN_0031f284(uVar7,"size_t to int conversion");
            }
          }
          uVar7 = FUN_00323380(pbVar12,uVar7,0);
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar13 = (byte *)(uVar7 & 1);
        }
        if (pbVar13 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
LAB_0069b018:
      uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar7 & 1) == 0);
  }
  return local_58;
}


