/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ae738; name: FUN_007ae738
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_007ae738(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar4 = PTR_DAT_043730c0;
  if ((uVar6 & 1) == 0) {
    puVar1 = (ulong *)(param_1 + 8);
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      bVar3 = *local_68;
      uVar8 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        bVar3 = local_68[1];
        uVar8 = (uVar8 + (uint)bVar3 * 0x80) - 0x80;
        if ((char)bVar3 < '\0') {
          auVar14 = FUN_00323230(local_68,uVar8);
          local_68 = auVar14._0_8_;
          uVar8 = auVar14._8_4_;
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar10 = (uint)(auVar14._8_8_ >> 3) & 0x1fffffff;
        }
        else {
          local_68 = local_68 + 2;
          uVar10 = uVar8 >> 3;
        }
      }
      else {
        uVar10 = (uint)(bVar3 >> 3);
        local_68 = local_68 + 1;
      }
      if (uVar10 == 3) {
        if ((uVar8 & 0xff) != 0x1a) goto LAB_007ae90c;
        if (*(int *)(param_1 + 0x24) == 3) {
LAB_007ae8e0:
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          uVar6 = (ulong)*local_68;
          if ((char)*local_68 < '\0') goto LAB_007ae8f0;
LAB_007ae9d4:
          auVar14._8_8_ = uVar6;
          auVar14._0_8_ = local_68 + 1;
        }
        else {
          FUN_007ae44c(param_1);
          uVar6 = *(ulong *)(param_1 + 8);
          *(undefined4 *)(param_1 + 0x24) = 3;
joined_r0x007ae8bc:
          puVar9 = (ulong *)(uVar6 & 0xfffffffffffffffe);
          if ((uVar6 & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          uVar13 = FUN_002e17cc(puVar9);
          *(undefined8 *)(param_1 + 0x18) = uVar13;
          uVar6 = (ulong)*local_68;
          if (-1 < (char)*local_68) goto LAB_007ae9d4;
LAB_007ae8f0:
          auVar14 = FUN_003232c0(local_68,uVar6);
          if (auVar14._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        iVar5 = FUN_0031e1b4(param_3,auVar14._0_8_,auVar14._8_8_ & 0xffffffff);
        lVar7 = param_3[0xb];
        *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
        if ((int)lVar7 < 1) {
          return (byte *)0x0;
        }
        local_68 = (byte *)FUN_002dee80(uVar13,auVar14._0_8_,param_3);
        if (local_68 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar8 = *(int *)((long)param_3 + 0x1c) + iVar5;
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      }
      else {
        if (uVar10 == 2) {
          if ((uVar8 & 0xff) == 0x12) {
            if (*(int *)(param_1 + 0x24) != 2) {
              FUN_007ae44c(param_1);
              uVar6 = *(ulong *)(param_1 + 8);
              *(undefined4 *)(param_1 + 0x24) = 2;
              goto joined_r0x007ae8bc;
            }
            goto LAB_007ae8e0;
          }
LAB_007ae90c:
          if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar8 - 1;
            return local_68;
          }
          if ((*puVar1 & 1) == 0) {
            lVar7 = FUN_0033aecc(puVar1);
          }
          else {
            lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          local_68 = (byte *)FUN_00323c60(uVar8,lVar7,local_68,param_3);
          pbVar12 = local_68;
        }
        else {
          if ((uVar10 != 1) || ((uVar8 & 0xff) != 10)) goto LAB_007ae90c;
          puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) == 0) {
            pbVar12 = (byte *)*puVar2;
          }
          else {
            puVar9 = (ulong *)*puVar9;
            pbVar12 = (byte *)*puVar2;
          }
          if (pbVar12 == puVar4) {
            FUN_0029175c(puVar2,puVar9,puVar4);
            pbVar12 = (byte *)*puVar2;
          }
          local_68 = (byte *)FUN_003234c0(pbVar12,local_68,param_3);
          bVar3 = *pbVar12;
          pbVar11 = *(byte **)(pbVar12 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar11 = pbVar12 + 1;
          }
          if ((bVar3 & 1) == 0) {
            uVar6 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar6 = *(ulong *)(pbVar12 + 8);
            if ((long)uVar6 < 0) {
              FUN_0031f284(uVar6,"size_t to int conversion");
            }
          }
          uVar6 = FUN_00323380(pbVar11,uVar6,0);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar12 = (byte *)(uVar6 & 1);
        }
        if (pbVar12 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      uVar6 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar6 & 1) == 0);
  }
  return local_68;
}


