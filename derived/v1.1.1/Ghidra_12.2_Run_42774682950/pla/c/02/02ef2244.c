/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef2244; name: FUN_02ef2244
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ef2244(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  bool bVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float fVar19;
  
  uVar12 = *(uint *)(param_1 + 0x38);
  uVar14 = (uint)param_2;
  if (uVar12 != 0) {
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = uVar14 / uVar12;
    }
    for (plVar16 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)(uVar14 - uVar5 * uVar12) * 8);
        plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      if (plVar16[1] == param_2) {
        puVar17 = plVar16 + 2;
        plVar16 = (long *)*puVar17;
        goto joined_r0x02ef2594;
      }
    }
  }
  plVar16 = (long *)(*DAT_0442d138)(4,0x58);
  if (plVar16 == (long *)0x0) {
    return 2;
  }
  FUN_02ef4588(plVar16 + 1);
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[9] = param_2;
  *(undefined4 *)(plVar16 + 10) = 1;
  *(undefined1 *)((long)plVar16 + 0x54) = 1;
  *plVar16 = (long)(PTR_DAT_043887a8 + 0x10);
  uVar12 = *(uint *)(param_1 + 0x38);
  if ((uVar12 == 0) ||
     (fVar19 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x40)), 0.9 < fVar19 / (float)uVar12)) {
    FUN_02ef39f4(param_1 + 0x28);
    uVar12 = *(uint *)(param_1 + 0x38);
    if (uVar12 != 0) goto LAB_02ef2308;
    puVar17 = (undefined8 *)0x0;
    iVar8 = (int)plVar16[8];
  }
  else {
LAB_02ef2308:
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = uVar14 / uVar12;
    }
    uVar18 = (ulong)(uVar14 - uVar5 * uVar12);
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x30) + uVar18 * 8); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9[1] == param_2) {
        puVar17 = plVar9 + 2;
        *puVar17 = plVar16;
        goto joined_r0x02ef2594;
      }
    }
    puVar7 = (undefined8 *)(*DAT_0442d138)(0,0x18);
    if (puVar7 == (undefined8 *)0x0) {
      puVar17 = (undefined8 *)0x0;
    }
    else {
      lVar11 = uVar18 * 8;
      puVar17 = puVar7 + 2;
      *puVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar11);
      puVar7[1] = param_2;
      *(undefined8 **)(*(long *)(param_1 + 0x30) + lVar11) = puVar7;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *puVar17 = plVar16;
    }
joined_r0x02ef2594:
    if (plVar16 == (long *)0x0) goto LAB_02ef25c0;
    iVar8 = (int)plVar16[8];
  }
  if ((iVar8 == 0) || (*(long *)plVar16[7] == 0)) {
    lVar11 = FUN_02e52664(plVar16);
    bVar15 = false;
    if (lVar11 != 0) {
      DAT_0440a988 = 0;
      _DAT_0440a990 = 0x3ff3f00000000;
      DAT_0440a970 = DAT_03a9f33c;
      DAT_0440a978._0_4_ = DAT_03a9f344;
      DAT_0440a978._4_4_ = (undefined4)DAT_03a9f348;
      DAT_0440a980._0_4_ = (undefined4)((ulong)DAT_03a9f348 >> 0x20);
      DAT_0440a980._4_4_ = DAT_03a9f350;
      if (*(short *)(lVar11 + 0x38) == 1) {
LAB_02ef23f4:
        puVar7 = *(undefined8 **)(lVar11 + 0x20);
        *puVar7 = DAT_0440a970;
        uVar13 = DAT_0440a988;
        uVar3 = CONCAT44(DAT_0440a978._4_4_,(undefined4)DAT_0440a978);
        uVar4 = CONCAT44(DAT_0440a980._4_4_,(undefined4)DAT_0440a980);
        *(undefined4 *)(puVar7 + 4) = DAT_0440a990;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar13;
        *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x24) = DAT_0440a994;
        if (1 < *(ushort *)(lVar11 + 0x38)) {
          lVar10 = 0;
          uVar18 = 1;
          do {
            lVar2 = *(long *)(lVar11 + 0x20) + lVar10;
            *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)((long)&DAT_0440a998 + lVar10);
            uVar13 = *(undefined8 *)((long)&DAT_0440a9b0 + lVar10);
            uVar3 = *(undefined8 *)((long)&DAT_0440a9a0 + lVar10);
            uVar4 = *(undefined8 *)((long)&DAT_0440a9a8 + lVar10);
            *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)((long)&DAT_0440a9b8 + lVar10);
            *(undefined8 *)(lVar2 + 0x38) = uVar4;
            *(undefined8 *)(lVar2 + 0x40) = uVar13;
            *(undefined8 *)(lVar2 + 0x30) = uVar3;
            lVar6 = lVar10 + 4;
            lVar2 = *(long *)(lVar11 + 0x20) + lVar10;
            lVar10 = lVar10 + 0x28;
            *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)((long)&DAT_0440a9b8 + lVar6);
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(ushort *)(lVar11 + 0x38));
        }
      }
      else {
        if (*(long *)(lVar11 + 0x20) != 0) {
          *(undefined2 *)(lVar11 + 0x38) = 0;
          (*DAT_0442d150)(5);
          *(undefined8 *)(lVar11 + 0x20) = 0;
        }
        puVar7 = (undefined8 *)(*DAT_0442d138)(5,0x28);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[3] = 0;
          puVar7[4] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *(undefined8 **)(lVar11 + 0x20) = puVar7;
          *(undefined2 *)(lVar11 + 0x38) = 1;
          goto LAB_02ef23f4;
        }
      }
      *(byte *)(lVar11 + 0x3a) = *(byte *)(lVar11 + 0x3a) & 0xf8;
      *(byte *)(lVar11 + 0x54) = *(byte *)(lVar11 + 0x54) | 1;
      goto LAB_02ef24a0;
    }
  }
  else {
LAB_02ef24a0:
    bVar15 = true;
  }
  for (lVar11 = *(long *)(PTR_DAT_043885c8 + 0x10); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10))
  {
    uVar12 = *(uint *)(lVar11 + 0xb0);
    if (uVar12 != 0) {
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar12 >> 1);
        uVar18 = *(ulong *)(*(long *)(lVar11 + 0xa8) + (long)iVar1 * 8);
        if (uVar18 == param_2) {
          if ((*(long *)(lVar11 + 0xa8) + (long)iVar1 * 8 != 0) &&
             (lVar10 = FUN_02e42e10(plVar16), lVar10 != 0)) {
            bVar15 = true;
          }
          break;
        }
        if (uVar18 < param_2) {
          iVar8 = iVar1 + 1;
        }
        uVar12 = uVar12 - (uVar18 < param_2) >> 1;
      } while (uVar12 != 0);
    }
  }
  if (bVar15) {
    return 1;
  }
  (**(code **)*plVar16)(plVar16);
  (*DAT_0442d150)(4,plVar16);
LAB_02ef25c0:
  if (puVar17 != (undefined8 *)0x0) {
    FUN_02ef2604(param_1 + 0x28,param_2);
  }
  return 2;
}


