/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068e79c; name: FUN_0068e79c
 */


byte * FUN_0068e79c(long param_1,byte *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  byte *pbVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  byte *local_58;
  
  local_58 = param_2;
  uVar7 = FUN_0030c7bc(param_3,&local_58,*(undefined4 *)((long)param_3 + 0x5c));
  puVar5 = PTR_DAT_043730c0;
  if ((uVar7 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 8);
    do {
      pbVar10 = local_58 + 1;
      bVar3 = *local_58;
      uVar7 = (ulong)(uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar7 = (ulong)(((uint)bVar3 + (uint)*pbVar10 * 0x80) - 0x80);
        if (-1 < (char)*pbVar10) {
          pbVar10 = local_58 + 2;
          goto LAB_0068e81c;
        }
        auVar16 = FUN_00323230(local_58,uVar7);
        uVar14 = auVar16._8_4_;
        if (auVar16._0_8_ == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar11 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
        local_58 = auVar16._0_8_;
      }
      else {
LAB_0068e81c:
        uVar14 = (uint)uVar7;
        uVar11 = (uint)(uVar7 >> 3);
        local_58 = pbVar10;
      }
      if (uVar11 == 2) {
        if ((uVar14 & 0xff) != 0x12) goto LAB_0068ea44;
        local_58 = local_58 + -1;
        do {
          local_58 = local_58 + 1;
          piVar12 = *(int **)(param_1 + 0x20);
          if (piVar12 == (int *)0x0) {
            iVar6 = *(int *)(param_1 + 0x1c);
LAB_0068e970:
            FUN_0032bcac(param_1 + 0x10,iVar6 + 1);
            piVar12 = *(int **)(param_1 + 0x20);
            iVar6 = *piVar12;
LAB_0068e984:
            *piVar12 = iVar6 + 1;
            uVar15 = FUN_0069cba0(*(undefined8 *)(param_1 + 0x10));
            iVar6 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar6 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8 + 8) = uVar15;
            uVar7 = (ulong)*local_58;
            if (-1 < (char)*local_58) goto LAB_0068e9c0;
LAB_0068e944:
            auVar16 = FUN_003232c0(local_58,uVar7);
            if (auVar16._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x18);
            iVar6 = *piVar12;
            if (iVar6 <= iVar4) {
              if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_0068e970;
              goto LAB_0068e984;
            }
            *(int *)(param_1 + 0x18) = iVar4 + 1;
            uVar15 = *(undefined8 *)(piVar12 + (long)iVar4 * 2 + 2);
            uVar7 = (ulong)*local_58;
            if ((char)*local_58 < '\0') goto LAB_0068e944;
LAB_0068e9c0:
            auVar16._8_8_ = uVar7;
            auVar16._0_8_ = local_58 + 1;
          }
          iVar6 = FUN_0031e1b4(param_3,auVar16._0_8_,auVar16._8_8_);
          uVar7 = param_3[0xb];
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          local_58 = (byte *)FUN_00690b8c(uVar15,auVar16._0_8_,param_3);
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar14 = *(int *)((long)param_3 + 0x1c) + iVar6;
          *(uint *)((long)param_3 + 0x1c) = uVar14;
          pbVar10 = (byte *)(param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f));
          *param_3 = (ulong)pbVar10;
        } while ((local_58 < pbVar10) && (*local_58 == 0x12));
      }
      else {
        if ((uVar11 == 1) && ((uVar14 & 0xff) == 10)) {
          puVar9 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) == 0) {
            pbVar10 = (byte *)*puVar1;
          }
          else {
            puVar9 = (ulong *)*puVar9;
            pbVar10 = (byte *)*puVar1;
          }
          if (pbVar10 == puVar5) {
            FUN_0029175c(puVar1,puVar9,puVar5);
            pbVar10 = (byte *)*puVar1;
          }
          local_58 = (byte *)FUN_003234c0(pbVar10,local_58,param_3);
          bVar3 = *pbVar10;
          pbVar13 = *(byte **)(pbVar10 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar13 = pbVar10 + 1;
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
          uVar7 = FUN_00323380(pbVar13,uVar7,0);
          if (local_58 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar10 = (byte *)(uVar7 & 1);
        }
        else {
LAB_0068ea44:
          if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar14 - 1;
            return local_58;
          }
          if ((*puVar2 & 1) == 0) {
            lVar8 = FUN_0033aecc(puVar2);
          }
          else {
            lVar8 = (*puVar2 & 0xfffffffffffffffe) + 8;
          }
          local_58 = (byte *)FUN_00323c60(uVar14,lVar8,local_58,param_3);
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


