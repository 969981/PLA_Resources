/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a959c; name: FUN_007a959c
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_007a959c(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  byte *local_68;
  
  local_68 = param_2;
  uVar8 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
  puVar6 = PTR_DAT_043730c0;
  if ((uVar8 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    puVar2 = (ulong *)(param_1 + 8);
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      pbVar11 = local_68 + 1;
      bVar4 = *local_68;
      uVar15 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        uVar15 = (uVar15 + (uint)*pbVar11 * 0x80) - 0x80;
        if ((char)*pbVar11 < '\0') {
          auVar17 = FUN_00323230(local_68,uVar15);
          local_68 = auVar17._0_8_;
          uVar15 = auVar17._8_4_;
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar12 = (uint)(auVar17._8_8_ >> 3) & 0x1fffffff;
        }
        else {
          local_68 = local_68 + 2;
          uVar12 = uVar15 >> 3;
        }
        if (uVar12 != 3) goto LAB_007a961c;
LAB_007a968c:
        if ((uVar15 & 0xff) == 0x1a) {
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
          goto LAB_007a96c4;
        }
LAB_007a9844:
        if ((uVar15 == 0) || ((uVar15 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar15 - 1;
          return local_68;
        }
        if ((*puVar2 & 1) == 0) {
          lVar9 = FUN_0033aecc(puVar2);
        }
        else {
          lVar9 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        local_68 = (byte *)FUN_00323c60(uVar15,lVar9,local_68,param_3);
        pbVar11 = local_68;
joined_r0x007a98a8:
        if (pbVar11 == (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        uVar12 = (uint)(bVar4 >> 3);
        local_68 = pbVar11;
        if (uVar12 == 3) goto LAB_007a968c;
LAB_007a961c:
        if (uVar12 != 2) {
          if ((uVar12 != 1) || ((uVar15 & 0xff) != 10)) goto LAB_007a9844;
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
LAB_007a96c4:
          local_68 = (byte *)FUN_003234c0(pbVar11,local_68,param_3);
          bVar4 = *pbVar11;
          pbVar14 = *(byte **)(pbVar11 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar14 = pbVar11 + 1;
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
          uVar8 = FUN_00323380(pbVar14,uVar8,0);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar11 = (byte *)(uVar8 & 1);
          goto joined_r0x007a98a8;
        }
        if ((uVar15 & 0xff) != 0x12) goto LAB_007a9844;
        local_68 = local_68 + -1;
        do {
          local_68 = local_68 + 1;
          piVar13 = *(int **)(param_1 + 0x20);
          if (piVar13 == (int *)0x0) {
            iVar7 = *(int *)(param_1 + 0x1c);
LAB_007a9770:
            FUN_0032bcac(param_1 + 0x10,iVar7 + 1);
            piVar13 = *(int **)(param_1 + 0x20);
            iVar7 = *piVar13;
LAB_007a9784:
            *piVar13 = iVar7 + 1;
            uVar16 = FUN_007aff44(*(undefined8 *)(param_1 + 0x10));
            iVar7 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 8 + 8) = uVar16;
            uVar8 = (ulong)*local_68;
            if ((char)*local_68 < '\0') goto LAB_007a9744;
LAB_007a97c0:
            auVar17._8_8_ = uVar8;
            auVar17._0_8_ = local_68 + 1;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x18);
            iVar7 = *piVar13;
            if (iVar7 <= iVar5) {
              if (iVar7 == *(int *)(param_1 + 0x1c)) goto LAB_007a9770;
              goto LAB_007a9784;
            }
            *(int *)(param_1 + 0x18) = iVar5 + 1;
            uVar16 = *(undefined8 *)(piVar13 + (long)iVar5 * 2 + 2);
            uVar8 = (ulong)*local_68;
            if (-1 < (char)*local_68) goto LAB_007a97c0;
LAB_007a9744:
            auVar17 = FUN_003232c0(local_68,uVar8);
            if (auVar17._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          iVar7 = FUN_0031e1b4(param_3,auVar17._0_8_,auVar17._8_8_);
          uVar8 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar8 + -1;
          if ((int)uVar8 < 1) {
            return (byte *)0x0;
          }
          local_68 = (byte *)FUN_007ae738(uVar16,auVar17._0_8_,param_3);
          if (local_68 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar15 = *(int *)((long)param_3 + 0x1c) + iVar7;
          *(uint *)((long)param_3 + 0x1c) = uVar15;
          pbVar11 = (byte *)(param_3[1] + (long)(int)(uVar15 & (int)uVar15 >> 0x1f));
          *param_3 = (ulong)pbVar11;
        } while ((local_68 < pbVar11) && (*local_68 == 0x12));
      }
      uVar8 = FUN_0030c7bc(param_3,&local_68,*(undefined4 *)((long)param_3 + 0x5c));
    } while ((uVar8 & 1) == 0);
  }
  return local_68;
}


