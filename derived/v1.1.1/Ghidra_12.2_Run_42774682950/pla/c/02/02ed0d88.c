/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed0d88; name: FUN_02ed0d88
 */


undefined4 FUN_02ed0d88(float param_1,long param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  long *plVar15;
  long *plVar16;
  double dVar17;
  double dVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulong local_68;
  
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  puVar12 = *(undefined8 **)(param_3 + 0x22);
  if (puVar12 == (undefined8 *)0x0) {
    local_80 = (undefined8 *)(*DAT_0442d138)(0,0x18);
    if (local_80 == (undefined8 *)0x0) {
      return 2;
    }
    *(undefined4 *)(local_80 + 2) = 1;
    puVar12 = &local_98;
    *local_80 = 0;
    local_80[1] = 0;
  }
  puVar2 = local_80;
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  plVar5 = (long *)FUN_02e8d36c(0x503,0,puVar12 + 3);
  if (plVar5 == (long *)0x0) {
    uVar4 = 0x34;
    goto joined_r0x02ed1028;
  }
  *(undefined4 *)(plVar5 + 0x1d) = *(undefined4 *)(puVar12 + 4);
  plVar5[0xd] = *(long *)(param_3 + 0xe);
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(param_3 + 0x12);
  lVar10 = *(long *)(param_3 + 0x16);
  plVar5[0x10] = *(long *)(param_3 + 0x14);
  plVar5[0x11] = lVar10;
  plVar5[0xe] = lVar9;
  plVar5[0xf] = lVar11;
  lVar10 = *(long *)(param_3 + 0x1c);
  lVar9 = *(long *)(param_3 + 0x18);
  lVar11 = *(long *)(param_3 + 0x1a);
  *(undefined4 *)(plVar5 + 0x15) = param_3[0x1e];
  plVar5[0x13] = lVar11;
  plVar5[0x14] = lVar10;
  plVar5[0x12] = lVar9;
  *(undefined4 *)((long)plVar5 + 0xac) = param_3[0x1f];
  (**(code **)(*plVar5 + 0x28))(plVar5,uVar4);
  plVar6 = *(long **)(param_3 + 2);
  plVar5[0x1c] = (long)plVar6;
  (**(code **)(*plVar6 + 0x10))();
  *(byte *)((long)plVar5 + 0x36) =
       (*(byte *)(param_3 + 0xa2) & 4) << 5 | *(byte *)((long)plVar5 + 0x36) & 0x7f;
  *(undefined4 *)(plVar5 + 0x18) = param_3[0x24];
  *(byte *)((long)plVar5 + 0xc5) = *(byte *)(param_3 + 0xa2) >> 1 & 1;
  *(undefined4 *)((long)plVar5 + 0xbc) = param_3[0x20];
  plVar6 = *(long **)(param_3 + 6);
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    *(int *)(plVar5 + 0x20) = (int)plVar6[1];
    plVar5[0x1f] = lVar9;
  }
  bVar1 = *(byte *)(param_3 + 0xa1);
  *(undefined4 *)(plVar5 + 0x19) = param_3[0xa0];
  *(byte *)((long)plVar5 + 0xcc) = bVar1 | 1;
  *(undefined4 *)(plVar5 + 0x1a) = *param_3;
  iVar3 = FUN_02ed135c(param_2);
  if (iVar3 == 2) {
    uVar8 = 1;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x80);
    uVar8 = *(uint *)(param_2 + 0xaa);
    if ((lVar9 != 0) && ((uVar8 >> 0x17 & 1) == 0)) {
      lVar11 = *(long *)(lVar9 + 0x80);
      uVar8 = *(uint *)(lVar9 + 0xaa);
      if ((lVar11 != 0) && ((uVar8 >> 0x17 & 1) == 0)) {
        lVar9 = *(long *)(lVar11 + 0x80);
        uVar8 = *(uint *)(lVar11 + 0xaa);
        if ((lVar9 != 0) && ((uVar8 >> 0x17 & 1) == 0)) {
          lVar11 = *(long *)(lVar9 + 0x80);
          uVar8 = *(uint *)(lVar9 + 0xaa);
          if ((lVar11 != 0) && ((uVar8 >> 0x17 & 1) == 0)) {
            do {
              uVar8 = *(uint *)(lVar11 + 0xaa);
              lVar11 = *(long *)(lVar11 + 0x80);
            } while (lVar11 != 0 && (uVar8 & 0x800000) == 0);
          }
        }
      }
    }
    uVar8 = uVar8 >> 0x19 & 2;
  }
  lVar9 = *(long *)(param_3 + 0x28);
  *(undefined4 *)((long)plVar5 + 0x104) = param_3[0x26];
  plVar5[0x21] = lVar9;
  if (lVar9 == 0) {
LAB_02ed0f3c:
    lVar9 = *(long *)(param_3 + 0x22);
  }
  else {
    FUN_02e7b4cc();
    puVar7 = (uint *)FUN_02e8e400(plVar5[0x21] + 0x68);
    if (puVar7 == (uint *)0x0) goto LAB_02ed0f3c;
    *puVar7 = uVar8;
    *(long **)(puVar7 + 2) = plVar5;
    lVar9 = *(long *)(param_3 + 0x22);
  }
  if (lVar9 != 0) {
    plVar6 = plVar5 + 0x22;
    if ((int)plVar5[0x23] != 0) {
      plVar15 = (long *)*plVar6;
      do {
        *(int *)(*plVar15 + 0x84) = *(int *)(*plVar15 + 0x84) + -1;
        plVar16 = plVar15 + 1;
        FUN_02eb939c(*plVar15);
        plVar15 = plVar16;
      } while (plVar16 != (long *)(plVar5[0x22] + (ulong)*(uint *)(plVar5 + 0x23) * 8));
    }
    *(undefined4 *)(plVar5 + 0x23) = 0;
    uVar8 = *(uint *)(lVar9 + 0x30);
    if (uVar8 != 0) {
      lVar11 = (*DAT_0442d138)(0,(ulong)uVar8 << 3);
      *plVar6 = lVar11;
      if ((lVar11 != 0) && (*(uint *)((long)plVar5 + 0x11c) = uVar8, *(int *)(lVar9 + 0x30) != 0)) {
        puVar13 = *(undefined8 **)(lVar9 + 0x28);
        do {
          puVar14 = puVar13 + 1;
          FUN_02ec6948(plVar6,*puVar13);
          puVar13 = puVar14;
        } while (puVar14 !=
                 (undefined8 *)(*(long *)(lVar9 + 0x28) + (ulong)*(uint *)(lVar9 + 0x30) * 8));
      }
    }
  }
  dVar17 = (double)NEON_ucvtf((ulong)DAT_042ab258);
  dVar18 = 0.5;
  if (dVar17 * (double)param_1 <= 0.0) {
    dVar18 = -0.5;
  }
  uVar4 = FUN_02ed11b0(puVar12,param_3,(int)(dVar18 + dVar17 * (double)param_1),plVar5);
  (**(code **)(*plVar5 + 0x18))(plVar5);
joined_r0x02ed1028:
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = local_68 & 0xffffffff00000000;
    iVar3 = *(int *)(puVar2 + 2);
    *(int *)(puVar2 + 2) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      FUN_02ea7e60(puVar2);
      (*DAT_0442d150)(0,puVar2);
    }
  }
  return uVar4;
}


