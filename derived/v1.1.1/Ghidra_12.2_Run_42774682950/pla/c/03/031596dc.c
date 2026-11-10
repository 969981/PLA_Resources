/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031596dc; name: FUN_031596dc
 */


undefined4
FUN_031596dc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar7 = tpidr_el0;
  if (*(long *)(lVar7 + 0x38d490) == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar3;
    lVar7 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38d490) + 0x10);
  }
  if (lVar7 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtgetCellForPathfinding";
      uVar5 = nn::os::GetSystemTick();
      puVar1[1] = uVar5;
    }
  }
  if (((*(char *)(param_4 + 1) != '\0') &&
      (uVar11 = *(uint *)((long)param_4 + 0xc), uVar11 != 0xffffffff)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar11 >> 0x16) * 0xf0 + 8), lVar3 != 0)
     ) {
    if ((int)(uVar11 & 0x3fffff) < *(int *)(*(long *)(lVar3 + 0x20) + 0x20)) {
      FUN_03159b7c(lVar3,*(long *)(*(long *)(lVar3 + 0x20) + 0x18) +
                         (ulong)(uVar11 & 0x3fffff) * 0x18,&local_a0);
      uVar5 = *param_2;
      iVar14 = -(uint)((float)uVar5 <= (float)uStack_90);
      fVar8 = (float)((ulong)uVar5 >> 0x20);
      iVar15 = -(uint)(fVar8 <= (float)((ulong)uStack_90 >> 0x20));
      fVar9 = (float)param_2[1];
      iVar16 = -(uint)(fVar9 <= (float)local_88);
      iVar10 = -(uint)(SUB84(local_a0,0) <= (float)uVar5);
      iVar12 = -(uint)((float)((ulong)local_a0 >> 0x20) <= fVar8);
      iVar13 = -(uint)((float)uStack_98 <= fVar9);
      uVar11 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                        CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                                 CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar10 >> 8),
                                          (byte)iVar14 & (byte)iVar10)));
      if ((uVar11 & (uint)(CONCAT17((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                                    CONCAT16((byte)((uint)iVar15 >> 0x10) &
                                             (byte)((uint)iVar12 >> 0x10),
                                             CONCAT15((byte)((uint)iVar15 >> 8) &
                                                      (byte)((uint)iVar12 >> 8),
                                                      CONCAT14((byte)iVar15 & (byte)iVar12,uVar11)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                   CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                            CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar13 >> 8),
                                     (byte)iVar16 & (byte)iVar13)))) != 0) {
        param_5[1] = param_2[1];
        *param_5 = uVar5;
        uVar2 = *(undefined4 *)((long)param_4 + 0xc);
        goto joined_r0x03159828;
      }
    }
  }
  local_a0 = PTR_DAT_04388cd8 + 0x10;
  uStack_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  local_60 = *param_4;
  plVar4 = (long *)FUN_0317a2c4(param_1);
  uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_a0,param_5);
joined_r0x03159828:
  if (lVar7 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar7 + 0x10)) &&
       (*(ulong *)(lVar7 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar5 = nn::os::GetSystemTick();
      puVar1[1] = uVar5;
    }
  }
  return uVar2;
}


