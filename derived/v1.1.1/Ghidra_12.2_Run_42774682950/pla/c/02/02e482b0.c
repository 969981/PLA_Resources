/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e482b0; name: FUN_02e482b0
 */


int FUN_02e482b0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  ushort *puVar15;
  ushort *puVar16;
  ulong uVar17;
  long lVar18;
  ulong local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  
  *(long *)(param_1 + 0x38) = param_2;
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  lVar6 = FUN_02f59e40(9,(ulong)*(ushort *)(param_1 + 0x30) << 6,0x10);
  *(long *)(param_1 + 0x20) = lVar6;
  if (lVar6 == 0) {
    return 0x34;
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(char *)(param_1 + 0x61) == '\0') {
LAB_02e4833c:
    if (*(short *)(param_1 + 0x30) != 0) {
      lVar18 = 0;
      lVar6 = 0;
      uVar17 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x10);
        puVar15 = (ushort *)(*(long *)(param_1 + 8) + lVar18);
        puVar9 = (undefined8 *)(lVar10 + (ulong)*puVar15 * 0xc);
        local_88 = *puVar9;
        local_80 = *(undefined4 *)(puVar9 + 1);
        puVar9 = (undefined8 *)(lVar10 + (ulong)puVar15[1] * 0xc);
        local_98 = *puVar9;
        local_90 = *(undefined4 *)(puVar9 + 1);
        puVar9 = (undefined8 *)(lVar10 + (ulong)puVar15[2] * 0xc);
        local_a8 = *puVar9;
        local_a0 = *(undefined4 *)(puVar9 + 1);
        lVar10 = *(long *)(param_1 + 0x20);
        if (lVar10 + lVar6 != 0) {
          *(long *)(lVar10 + lVar6 + 0x30) = param_1;
          *(undefined8 *)(lVar10 + lVar6 + 0x38) = 0;
          lVar10 = *(long *)(param_1 + 0x20);
        }
        iVar5 = FUN_02e487c0(lVar10 + lVar6,&local_88,&local_98,&local_a8);
        if (iVar5 == 1) {
          iVar5 = FUN_02e488e0(param_1,*(long *)(param_1 + 8) + lVar18,
                               *(long *)(param_1 + 0x20) + lVar6,&local_88,&local_98,&local_a8,
                               param_2 + 8,param_3,param_1 + 0x50,&local_78,
                               *(undefined1 *)(param_1 + 0x61));
        }
        else {
          snprintf((char *)&local_1a8,0x100,
                   "AK::SpatialAudio::SetGeometry - Triangle %i formed by vertices [%i, %i, %i] is too large.\n"
                   ,(int)uVar17,(uint)*puVar15,(uint)puVar15[1],(uint)puVar15[2]);
        }
        uVar17 = uVar17 + 1;
        lVar6 = lVar6 + 0x40;
        lVar18 = lVar18 + 8;
      } while (uVar17 < *(ushort *)(param_1 + 0x30));
      if (iVar5 != 1) {
        FUN_02e48b54(param_1,param_3);
        goto joined_r0x02e486cc;
      }
    }
LAB_02e484a0:
    if (*(char *)(param_1 + 0x61) == '\0') {
LAB_02e4875c:
      *(undefined2 *)(param_1 + 0x36) = 0;
    }
    else {
      if (*(char *)(param_1 + 0x62) == '\0') {
        uVar17 = local_70 & 0xffffffff;
        if ((int)local_70 == 0) goto LAB_02e4875c;
        puVar9 = local_78;
        do {
          if (*(short *)((long)puVar9 + 6) == -1) {
            if (1 < (uint)uVar17) {
              puVar12 = local_78 + uVar17 * 3 + -3;
              uVar1 = *puVar12;
              uVar13 = puVar12[2];
              puVar9[1] = puVar12[1];
              puVar9[2] = uVar13;
              *puVar9 = uVar1;
            }
            uVar8 = (uint)uVar17 - 1;
            uVar17 = (ulong)uVar8;
            local_70 = CONCAT44(local_70._4_4_,uVar8);
          }
          else {
            puVar9 = puVar9 + 3;
          }
          uVar8 = (uint)uVar17;
        } while (puVar9 != local_78 + uVar17 * 3);
      }
      else {
        uVar8 = (uint)(ushort)local_70;
      }
      *(short *)(param_1 + 0x36) = (short)uVar8;
      if ((uVar8 & 0xffff) != 0) {
        lVar6 = FUN_02f59e40(9,(uVar8 & 0xffff) * 0x88,0x10);
        puVar9 = local_78;
        *(long *)(param_1 + 0x28) = lVar6;
        if (lVar6 == 0) {
          *(undefined2 *)(param_1 + 0x36) = 0;
          goto LAB_02e486e4;
        }
        if (*(short *)(param_1 + 0x36) != 0) {
          uVar17 = 0;
          while( true ) {
            puVar15 = (ushort *)(puVar9 + uVar17 * 3);
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar11 = (ulong)puVar15[2];
            uVar4 = puVar15[3];
            lVar18 = *(long *)(puVar15 + 4);
            lVar10 = *(long *)(puVar15 + 8);
            puVar12 = (undefined8 *)(lVar6 + uVar17 * 0x88);
            if (puVar12 != (undefined8 *)0x0) {
              lVar6 = lVar6 + uVar17 * 0x88;
              puVar12[4] = 0;
              puVar12[5] = 0;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *puVar12 = 0;
              puVar12[1] = 0;
              *(undefined8 *)(lVar6 + 0x40) = 0;
              *(undefined1 *)(lVar6 + 0x48) = 0;
              *(undefined1 *)(lVar6 + 0x60) = 0;
              *(undefined4 *)(lVar6 + 0x68) = 0;
              *(undefined1 *)(lVar6 + 0x80) = 0;
              *(long *)(lVar6 + 0x30) = param_1;
              *(undefined8 *)(lVar6 + 0x38) = 0;
              *(undefined8 *)(lVar6 + 0x50) = 0;
              *(undefined8 *)(lVar6 + 0x58) = 0;
              *(undefined8 *)(lVar6 + 0x70) = 0;
              *(undefined8 *)(lVar6 + 0x78) = 0;
            }
            lVar6 = *(long *)(param_1 + 0x10);
            puVar12 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0xc);
            local_1a8 = *puVar12;
            local_1a0 = *(undefined4 *)(puVar12 + 1);
            puVar12 = (undefined8 *)(lVar6 + (ulong)uVar3 * 0xc);
            local_88 = *puVar12;
            local_80 = *(undefined4 *)(puVar12 + 1);
            local_1b0 = *(ulong *)(*(long *)(param_1 + 8) + uVar11 * 8);
            uVar8 = (uint)uVar3;
            if (((uint)uVar2 == ((uint)local_1b0 & 0xffff)) ||
               (uVar14 = local_1b0, uVar8 == ((uint)local_1b0 & 0xffff))) {
              puVar15 = (ushort *)((ulong)&local_1b0 | 2);
              do {
                do {
                  puVar16 = puVar15 + 1;
                  uVar3 = *puVar15;
                  uVar14 = (ulong)uVar3;
                  puVar15 = puVar16;
                } while ((uint)uVar3 == (uint)uVar2);
              } while (uVar3 == uVar8);
            }
            puVar12 = (undefined8 *)(lVar6 + (uVar14 & 0xffff) * 0xc);
            local_98 = *puVar12;
            local_90 = *(undefined4 *)(puVar12 + 1);
            if (uVar4 == 0xffff) {
              FUN_02e4b768(*(long *)(param_1 + 0x28) + uVar17 * 0x88,&local_1a8,&local_88,&local_98,
                           *(long *)(param_1 + 0x20) + uVar11 * 0x40);
              lVar10 = lVar18;
            }
            else {
              local_1b8 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
              if (((uint)uVar2 == ((uint)local_1b8 & 0xffff)) ||
                 (uVar14 = local_1b8, uVar8 == ((uint)local_1b8 & 0xffff))) {
                puVar15 = (ushort *)((ulong)&local_1b8 | 2);
                do {
                  do {
                    puVar16 = puVar15 + 1;
                    uVar3 = *puVar15;
                    uVar14 = (ulong)uVar3;
                    puVar15 = puVar16;
                  } while ((uint)uVar3 == (uint)uVar2);
                } while (uVar3 == uVar8);
              }
              puVar12 = (undefined8 *)(lVar6 + (uVar14 & 0xffff) * 0xc);
              local_a8 = *puVar12;
              local_a0 = *(undefined4 *)(puVar12 + 1);
              FUN_02e4b8dc(*(long *)(param_1 + 0x28) + uVar17 * 0x88,&local_1a8,&local_88,&local_98,
                           *(long *)(param_1 + 0x20) + uVar11 * 0x40,&local_a8,
                           *(long *)(param_1 + 0x20) + (ulong)uVar4 * 0x40);
              lVar6 = *(long *)(param_1 + 0x28);
              plVar7 = (long *)FUN_02e4b104(lVar18 + 0x30);
              if (plVar7 != (long *)0x0) {
                *plVar7 = lVar6 + uVar17 * 0x88;
              }
            }
            lVar6 = *(long *)(param_1 + 0x28);
            plVar7 = (long *)FUN_02e4b104(lVar10 + 0x30);
            if (plVar7 != (long *)0x0) {
              *plVar7 = lVar6 + uVar17 * 0x88;
            }
            uVar17 = uVar17 + 1;
            if (*(ushort *)(param_1 + 0x36) <= uVar17) break;
            lVar6 = *(long *)(param_1 + 0x28);
          }
        }
      }
    }
    iVar5 = 1;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x30);
    if (uVar2 == 0) goto LAB_02e484a0;
    local_78 = (undefined8 *)FUN_02f59e30(0,(ulong)uVar2 * 0x48);
    if (local_78 != (undefined8 *)0x0) {
      local_70 = CONCAT44((uint)uVar2 + (uint)uVar2 * 2,(int)local_70);
      goto LAB_02e4833c;
    }
    FUN_02f59e70(9,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_02e486e4:
    iVar5 = 0x34;
  }
joined_r0x02e486cc:
  if (local_78 != (undefined8 *)0x0) {
    local_70 = local_70 & 0xffffffff00000000;
    FUN_02f59e60(0);
  }
  if (iVar5 == 1) {
    if (*(long *)(param_2 + 0x40) == 0) {
      *(long *)(param_2 + 0x40) = param_1;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x40);
      *(long *)(param_2 + 0x40) = param_1;
    }
    iVar5 = 1;
    *(undefined1 *)(param_2 + 0x4c) = 1;
  }
  return iVar5;
}


