/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed184c; name: FUN_02ed184c
 */


uint FUN_02ed184c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 auStack_48 [4];
  undefined2 local_44 [2];
  
  lVar8 = *(long *)(param_2 + 0x88);
  if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0x18), plVar9 == (long *)0x0)) {
    uVar4 = 2;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 != 0) {
      uVar10 = (ulong)(iVar2 - 1);
      do {
        if (((uint)uVar10 < 0x20) &&
           ((1L << (uVar10 & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) != 0)) break;
        *(uint *)(param_2 + 0x38) = (uint)uVar10;
        uVar10 = uVar10 - 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      plVar9 = *(long **)(lVar8 + 0x18);
    }
    local_44[0] = 0;
    uVar4 = *(uint *)(plVar9 + 1);
    if (uVar4 != 0) {
      puVar7 = (undefined8 *)(lVar8 + 0x18);
LAB_02ed1910:
      lVar8 = *plVar9 + (ulong)uVar4 * 0x28;
      puVar12 = (undefined8 *)(lVar8 + -0x28);
      if (*(long *)(lVar8 + -0x10) != 0) {
        FUN_02ec761c(*(long *)(lVar8 + -0x10),*(undefined8 *)(lVar8 + -8),puVar7);
        plVar9 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        FUN_02ea7df0(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x28 + -0x28);
        *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
        lVar8 = *(long *)(param_2 + 0x88);
        if (*(long *)(lVar8 + 0x18) != 0) goto LAB_02ed1904;
        uVar4 = 3;
        goto LAB_02ed1c58;
      }
      plVar9 = (long *)FUN_02eec0d0(*puVar12,*(undefined8 *)(param_2 + 0x10),local_44,auStack_48,
                                    lVar8 + -0x20,lVar8 + -0x18);
      if (plVar9 == (long *)0x0) {
        iVar2 = *(int *)(param_2 + 0x38);
        iVar3 = iVar2 + -1;
        *(int *)(param_2 + 0x38) = iVar3;
        if (iVar3 != 0) {
          uVar10 = (ulong)(iVar2 - 2);
          do {
            if (((uint)uVar10 < 0x20) &&
               ((1L << (uVar10 & 0x3f) & (ulong)*(uint *)(param_2 + 0x7c)) != 0)) break;
            *(uint *)(param_2 + 0x38) = (uint)uVar10;
            uVar10 = uVar10 - 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        plVar9 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
        FUN_02ea7df0(*plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x28 + -0x28);
        *(int *)(plVar9 + 1) = (int)plVar9[1] + -1;
        lVar8 = *(long *)(param_2 + 0x88);
        goto LAB_02ed1904;
      }
      *(undefined2 *)(param_2 + 0x38 + (ulong)(*(int *)(param_2 + 0x38) - 1) * 2 + 4) = local_44[0];
      lVar8 = plVar9[2];
      (**(code **)(*plVar9 + 0x18))();
      iVar2 = FUN_02eec74c(*puVar12);
      local_80 = *(undefined8 *)(param_2 + 0x10);
      local_78 = *(undefined4 *)(param_2 + 0x34);
      local_68 = 0xff;
      local_60 = 0xff;
      local_58 = 0;
      local_70 = 0;
      fVar16 = (float)FUN_02eec758(*puVar12,&local_80);
      if ((int)lVar8 != 0) {
        lVar13 = *(long *)(param_2 + 0x88);
        plVar9 = (long *)FUN_02e8d36c(0x503,0,lVar13 + 0x18);
        if (plVar9 != (long *)0x0) {
          *(undefined4 *)(plVar9 + 0x1d) = *(undefined4 *)(lVar13 + 0x20);
          plVar9[0xd] = *(long *)(param_2 + 0x38);
          lVar13 = *(long *)(param_2 + 0x40);
          lVar1 = *(long *)(param_2 + 0x48);
          lVar11 = *(long *)(param_2 + 0x58);
          plVar9[0x10] = *(long *)(param_2 + 0x50);
          plVar9[0x11] = lVar11;
          plVar9[0xe] = lVar13;
          plVar9[0xf] = lVar1;
          lVar11 = *(long *)(param_2 + 0x70);
          lVar13 = *(long *)(param_2 + 0x60);
          lVar1 = *(long *)(param_2 + 0x68);
          *(undefined4 *)(plVar9 + 0x15) = *(undefined4 *)(param_2 + 0x78);
          plVar9[0x13] = lVar1;
          plVar9[0x14] = lVar11;
          plVar9[0x12] = lVar13;
          *(undefined4 *)((long)plVar9 + 0xac) = *(undefined4 *)(param_2 + 0x7c);
          (**(code **)(*plVar9 + 0x28))(plVar9,(int)lVar8);
          plVar5 = *(long **)(param_2 + 8);
          plVar9[0x1c] = (long)plVar5;
          (**(code **)(*plVar5 + 0x10))();
          *(byte *)((long)plVar9 + 0x36) =
               (*(byte *)(param_2 + 0x288) & 4) << 5 | *(byte *)((long)plVar9 + 0x36) & 0x7f;
          *(undefined4 *)(plVar9 + 0x18) = *(undefined4 *)(param_2 + 0x90);
          *(byte *)((long)plVar9 + 0xc5) = *(byte *)(param_2 + 0x288) >> 1 & 1;
          *(undefined4 *)((long)plVar9 + 0xbc) = *(undefined4 *)(param_2 + 0x80);
          plVar5 = *(long **)(param_2 + 0x18);
          if (plVar5 != (long *)0x0) {
            lVar8 = *plVar5;
            *(int *)(plVar9 + 0x20) = (int)plVar5[1];
            plVar9[0x1f] = lVar8;
          }
          iVar3 = FUN_02ed135c(param_1);
          if (iVar3 == 2) {
            uVar4 = 1;
          }
          else {
            lVar8 = *(long *)(param_1 + 0x80);
            uVar4 = *(uint *)(param_1 + 0xaa);
            if ((lVar8 != 0) && ((uVar4 >> 0x17 & 1) == 0)) {
              lVar13 = *(long *)(lVar8 + 0x80);
              uVar4 = *(uint *)(lVar8 + 0xaa);
              if ((lVar13 != 0) && ((uVar4 >> 0x17 & 1) == 0)) {
                lVar8 = *(long *)(lVar13 + 0x80);
                uVar4 = *(uint *)(lVar13 + 0xaa);
                if ((lVar8 != 0) && ((uVar4 >> 0x17 & 1) == 0)) {
                  lVar13 = *(long *)(lVar8 + 0x80);
                  uVar4 = *(uint *)(lVar8 + 0xaa);
                  if ((lVar13 != 0) && ((uVar4 >> 0x17 & 1) == 0)) {
                    do {
                      uVar4 = *(uint *)(lVar13 + 0xaa);
                      lVar13 = *(long *)(lVar13 + 0x80);
                    } while (lVar13 != 0 && (uVar4 & 0x800000) == 0);
                  }
                }
              }
            }
            uVar4 = uVar4 >> 0x19 & 2;
          }
          lVar8 = *(long *)(param_2 + 0xa0);
          *(undefined4 *)((long)plVar9 + 0x104) = *(undefined4 *)(param_2 + 0x98);
          plVar9[0x21] = lVar8;
          if (lVar8 != 0) {
            FUN_02e7b4cc();
            puVar6 = (uint *)FUN_02e8e400(plVar9[0x21] + 0x68);
            if (puVar6 != (uint *)0x0) {
              *puVar6 = uVar4;
              *(long **)(puVar6 + 2) = plVar9;
            }
          }
          lVar8 = *(long *)(param_2 + 0x88);
          plVar5 = plVar9 + 0x22;
          if ((int)plVar9[0x23] != 0) {
            plVar14 = (long *)*plVar5;
            do {
              *(int *)(*plVar14 + 0x84) = *(int *)(*plVar14 + 0x84) + -1;
              plVar15 = plVar14 + 1;
              FUN_02eb939c(*plVar14);
              plVar14 = plVar15;
            } while (plVar15 != (long *)(plVar9[0x22] + (ulong)*(uint *)(plVar9 + 0x23) * 8));
          }
          *(undefined4 *)(plVar9 + 0x23) = 0;
          uVar4 = *(uint *)(lVar8 + 0x30);
          if (uVar4 != 0) {
            lVar13 = (*DAT_0442d138)(0,(ulong)uVar4 << 3);
            *plVar5 = lVar13;
            if ((lVar13 != 0) &&
               (*(uint *)((long)plVar9 + 0x11c) = uVar4, *(int *)(lVar8 + 0x30) != 0)) {
              puVar7 = *(undefined8 **)(lVar8 + 0x28);
              do {
                puVar12 = puVar7 + 1;
                FUN_02ec6948(plVar5,*puVar7);
                puVar7 = puVar12;
              } while (puVar12 !=
                       (undefined8 *)(*(long *)(lVar8 + 0x28) + (ulong)*(uint *)(lVar8 + 0x30) * 8))
              ;
            }
          }
          iVar3 = (uint)DAT_042ab268 * 10;
          if ((iVar2 == 5) || (iVar2 == 3)) {
            dVar17 = (double)NEON_ucvtf((ulong)DAT_042ab258);
            dVar17 = (double)fVar16 * 0.001 * dVar17;
            dVar18 = 0.5;
            if (dVar17 <= 0.0) {
              dVar18 = -0.5;
            }
            iVar2 = (int)(dVar18 + dVar17);
            if (iVar3 <= iVar2) {
              iVar3 = iVar2;
            }
          }
          uVar4 = FUN_02ed11b0(*(undefined8 *)(param_2 + 0x88),param_2,iVar3,plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          goto LAB_02ed1c58;
        }
      }
    }
LAB_02ed1c54:
    uVar4 = 2;
LAB_02ed1c58:
    if ((uVar4 | 2) != 3) {
      lVar8 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
      if (lVar8 != 0) {
        *(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18) = 0;
        iVar2 = *(int *)(lVar8 + 0x10) + -1;
        *(int *)(lVar8 + 0x10) = iVar2;
        if (iVar2 == 0) {
          FUN_02ea7e60(lVar8);
          (*DAT_0442d150)(0,lVar8);
        }
      }
    }
    if (uVar4 == 3) {
      uVar4 = 1;
    }
  }
  return uVar4;
LAB_02ed1904:
  puVar7 = (undefined8 *)(lVar8 + 0x18);
  plVar9 = (long *)*puVar7;
  uVar4 = *(uint *)(plVar9 + 1);
  if (uVar4 == 0) goto LAB_02ed1c54;
  goto LAB_02ed1910;
}


