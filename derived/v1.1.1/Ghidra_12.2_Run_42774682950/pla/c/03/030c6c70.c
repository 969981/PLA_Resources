/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c6c70; name: FUN_030c6c70
 */


void FUN_030c6c70(long param_1,int param_2,int param_3,uint param_4,int param_5,byte param_6,
                 byte param_7,long param_8,long param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long *plVar25;
  float fVar26;
  undefined8 uVar27;
  uint *local_a0;
  long local_88;
  int local_80 [2];
  undefined8 local_78;
  uint local_70;
  long local_68;
  
  if (param_9 == 0) {
LAB_030c6ccc:
    if (param_2 != 2) goto LAB_030c6cd4;
LAB_030c6d88:
    if (param_9 == 0) goto LAB_030c6da0;
    puVar23 = *(undefined8 **)(param_9 + 8);
    uVar13 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_9 + 0x10) < uVar13) ||
       (*(ulong *)(param_9 + 8) = uVar13, puVar23 == (undefined8 *)0x0)) goto LAB_030c6da0;
    pcVar14 = "TtSolveJacobians2";
  }
  else {
    puVar23 = *(undefined8 **)(param_9 + 8);
    uVar13 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(param_9 + 0x10) < uVar13) ||
       (*(ulong *)(param_9 + 8) = uVar13, puVar23 == (undefined8 *)0x0)) goto LAB_030c6ccc;
    *puVar23 = "TtSolveConstraints";
    uVar7 = nn::os::GetSystemTick();
    puVar23[1] = uVar7;
    if (param_2 == 2) goto LAB_030c6d88;
LAB_030c6cd4:
    if (param_2 == 1) {
      if (param_9 == 0) goto LAB_030c6da0;
      puVar23 = *(undefined8 **)(param_9 + 8);
      uVar13 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(param_9 + 0x10) < uVar13) ||
         (*(ulong *)(param_9 + 8) = uVar13, puVar23 == (undefined8 *)0x0)) goto LAB_030c6da0;
      pcVar14 = "TtSolveJacobians1";
    }
    else if (param_2 == 0) {
      if (param_9 == 0) goto LAB_030c6da0;
      puVar23 = *(undefined8 **)(param_9 + 8);
      uVar13 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(param_9 + 0x10) < uVar13) ||
         (*(ulong *)(param_9 + 8) = uVar13, puVar23 == (undefined8 *)0x0)) goto LAB_030c6da0;
      pcVar14 = "TtSolveJacobians0";
    }
    else {
      if (param_9 == 0) goto LAB_030c6da0;
      puVar23 = *(undefined8 **)(param_9 + 8);
      uVar13 = (long)puVar23 + 0x17U & 0xfffffffffffffff8;
      if ((*(ulong *)(param_9 + 0x10) < uVar13) ||
         (*(ulong *)(param_9 + 8) = uVar13, puVar23 == (undefined8 *)0x0)) goto LAB_030c6da0;
      pcVar14 = "TtSolveJacobians3+";
    }
  }
  *puVar23 = pcVar14;
  uVar7 = nn::os::GetSystemTick();
  puVar23[1] = uVar7;
LAB_030c6da0:
  plVar25 = *(long **)(param_8 + (ulong)param_4 * 8 + 0x78);
  lVar24 = (long)param_5;
  if (*(int *)(*plVar25 + lVar24 * 0x20 + 0xc) != 0) {
    lVar20 = *(long *)(param_1 + 8);
    lVar9 = *plVar25 + lVar24 * 0x20;
    lVar21 = *(long *)(param_8 + 0x10);
    lVar15 = *(long *)(param_8 + 0x40) + (ulong)param_6 * 8;
    uVar7 = NEON_scvtf(CONCAT44(param_2,param_2),4);
    lVar10 = *(long *)(param_8 + 0x40) + (ulong)param_7 * 8;
    iVar2 = *(int *)(lVar15 + 4);
    fVar26 = (float)*(undefined8 *)(lVar21 + 0xb0);
    uVar27 = NEON_fmov(0x3f800000,4);
    local_78 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar26 + (float)((ulong)uVar27 >> 0x20),
                        (float)uVar7 * fVar26 + (float)uVar27);
    local_70 = 2;
    if (*(int *)(lVar21 + 0x70) + -1 != param_2 || *(int *)(lVar21 + 0x78) + -1 != param_3) {
      local_70 = 0;
    }
    local_70 = (uint)(param_3 == 0 && param_2 == 0) | (uint)(param_3 == 0) << 2 | local_70;
    local_68 = param_9;
    uVar13 = (ulong)*(ushort *)
                     (DAT_04434b38 +
                      ((ulong)(byte)(param_7 + 1) * 0x21 + (ulong)(byte)(param_6 + 1)) * 2 + 0x18);
    puVar22 = *(undefined4 **)
               (*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
    uVar3 = *puVar22;
    uVar4 = *puVar22;
    *(undefined4 **)(param_1 + 0x730) = puVar22;
    *(short *)(param_1 + 0x738) = (short)((uint)uVar3 >> 0x10);
    *(short *)(param_1 + 0x73a) = (short)uVar4;
    *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
    local_88 = (plVar25[8] + 0x3fU & 0xffffffffffffffc0) +
               (long)*(int *)(*plVar25 + lVar24 * 0x20 + 0x1c);
    local_80[0] = param_2;
    if (iVar2 == 0) {
      do {
        plVar8 = *(long **)(lVar20 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
        lVar9 = (**(code **)(*plVar8 + 0x20))
                          (plVar8,param_1,param_8,local_80,lVar9,&local_88,lVar10,lVar10);
      } while (lVar9 != 0);
    }
    else {
      do {
        plVar8 = *(long **)(lVar20 + (ulong)*(byte *)(lVar9 + 0x18) * 8 + 0x658);
        lVar9 = (**(code **)(*plVar8 + 0x20))
                          (plVar8,param_1,param_8,local_80,lVar9,&local_88,lVar15,lVar10);
      } while (lVar9 != 0);
    }
    iVar2 = *(int *)(param_1 + 0x73c) + *(int *)(param_1 + 0x528);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x73c) = 0;
    }
    else {
      puVar19 = *(uint **)(param_1 + 0x730);
      if ((puVar19 !=
           *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8)) &&
         ((uint)*(ushort *)(param_1 + 0x73a) == (*puVar19 & 0xffff))) {
        puVar19 = *(uint **)(puVar19 + 2);
        *(undefined4 *)(param_1 + 0x738) = 0;
      }
      uVar11 = *puVar19;
      *(int *)(param_1 + 0x73c) = iVar2;
      lVar15 = *(long *)(param_1 + 0x720);
      *(uint **)(param_1 + 0x730) = puVar19;
      *(short *)(param_1 + 0x73a) = (short)uVar11 - *(short *)(param_1 + 0x73a);
      puVar23 = *(undefined8 **)(*(long *)(lVar15 + 0x10) + uVar13 * 8);
      if (*(int *)((long)puVar23 + 0xc) == 0) {
        puVar23[1] = *(undefined8 *)(param_1 + 0x738);
        uVar7 = *(undefined8 *)(param_1 + 0x730);
        puVar23[2] = *(undefined8 *)(param_1 + 0x740);
        *puVar23 = uVar7;
      }
      else {
        puVar16 = *(undefined8 **)(param_1 + 0x4e0);
        puVar19 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
        uVar11 = *puVar19;
        if (0x3a < uVar11 >> 0x16) {
          local_a0 = puVar19;
          do {
            iVar2 = *(int *)(puVar16 + 0xb) + -1;
            if (*(int *)(puVar16 + 0xb) < 1) {
              lVar10 = puVar16[1];
              (**(code **)(*(long *)*puVar16 + 0x20))((long *)*puVar16,lVar10,6);
              *(undefined4 *)(puVar16 + 0xb) = 5;
              puVar17 = (undefined8 *)(lVar10 + 0x28);
            }
            else {
              *(int *)(puVar16 + 0xb) = iVar2;
              puVar17 = (undefined8 *)(puVar16[1] + (long)iVar2 * 8);
            }
            puVar19 = (uint *)*puVar17;
            puVar19[4] = 0;
            puVar19[5] = 0;
            puVar19[6] = 0;
            puVar19[7] = 0;
            puVar19[0] = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar19[3] = 0;
            puVar19[1] = *(uint *)(param_1 + 0x538);
            iVar2 = *(int *)(param_1 + 0x538);
            uVar11 = iVar2 + 1;
            uVar12 = *(uint *)(param_1 + 0x53c);
            if (iVar2 < (int)(uVar12 & 0x3fffffff)) {
              lVar10 = *(long *)(param_1 + 0x530);
            }
            else {
              uVar7 = *(undefined8 *)(param_1 + 0x530);
              if (0x3ffffffe < iVar2) {
                FUN_032bd0a8(uVar11);
                uVar12 = *(uint *)(param_1 + 0x53c);
              }
              uVar12 = (uVar12 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar12) {
                uVar12 = 0x3fffffff;
              }
              uVar1 = uVar11;
              if ((int)uVar11 <= (int)uVar12) {
                uVar1 = uVar12;
              }
              lVar10 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar7,iVar2,(uint *)(param_1 + 0x53c));
              iVar2 = *(int *)(param_1 + 0x538);
              *(long *)(param_1 + 0x530) = lVar10;
            }
            *(uint **)(lVar10 + (long)iVar2 * 8) = puVar19;
            *(uint *)(param_1 + 0x538) = uVar11;
            *(uint **)(local_a0 + 2) = puVar19;
            uVar11 = *puVar19;
            local_a0 = puVar19;
          } while (0x3a < uVar11 >> 0x16);
        }
        uVar11 = uVar11 >> 0x10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar19,0x10);
          if (bVar6) {
            *puVar19 = *puVar19 + 0x200001;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
        uVar7 = *(undefined8 *)(param_1 + 0x738);
        uVar27 = *(undefined8 *)(param_1 + 0x740);
        puVar16 = (undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x20);
        *puVar16 = *(undefined8 *)(param_1 + 0x730);
        *(undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x28) = uVar7;
        *(undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x30) = uVar27;
        if (*(int *)((long)puVar23 + 0xc) == 0) {
          puVar23[1] = *(undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x28);
          uVar7 = *puVar16;
          puVar23[2] = *(undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x30);
          *puVar23 = uVar7;
        }
        else {
          *(undefined8 *)((long)puVar19 + (ulong)uVar11 + 0x30) = puVar23[2];
          puVar23[2] = puVar16;
        }
        *(undefined8 **)(*(long *)(lVar15 + 0x10) + uVar13 * 8) = puVar16;
      }
    }
    puVar22 = *(undefined4 **)
               (*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
    uVar3 = *puVar22;
    uVar4 = *puVar22;
    *(undefined4 **)(param_1 + 0x730) = puVar22;
    *(short *)(param_1 + 0x738) = (short)((uint)uVar3 >> 0x10);
    *(short *)(param_1 + 0x73a) = (short)uVar4;
    *(int *)(param_1 + 0x73c) = -*(int *)(param_1 + 0x528);
  }
  if ((*(int *)(*(long *)(param_8 + 0x10) + 0x70) + -1 == param_2) &&
     (*(int *)(*(long *)(param_8 + 0x10) + 0x78) + -1 == param_3)) {
    puVar23 = (undefined8 *)(*plVar25 + lVar24 * 0x20);
    *puVar23 = 0;
    *(undefined4 *)((long)puVar23 + 0xc) = 0;
    puVar23[2] = 0;
    *(undefined4 *)((long)puVar23 + 0x1c) = 0;
    *(long *)(plVar25[2] + lVar24 * 8) = *plVar25 + lVar24 * 0x20;
    *(undefined4 *)(*plVar25 + 0x1c) = 0;
    *(undefined1 *)(plVar25[4] + lVar24) = 0;
    *(undefined4 *)(plVar25[6] + lVar24 * 4) = 0;
  }
  if (param_9 != 0) {
    puVar23 = *(undefined8 **)(param_9 + 8);
    uVar13 = *(ulong *)(param_9 + 0x10);
    uVar18 = (ulong)((long)puVar23 + 0x17) & 0xfffffffffffffff8;
    if (uVar18 <= uVar13) {
      *(ulong *)(param_9 + 8) = uVar18;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)&DAT_00000010;
      }
      else {
        *puVar23 = &DAT_0390f40e;
        uVar7 = nn::os::GetSystemTick();
        puVar23[1] = uVar7;
        puVar23 = *(undefined8 **)(param_9 + 8);
        uVar13 = *(ulong *)(param_9 + 0x10);
      }
    }
    uVar18 = (ulong)((long)puVar23 + 0x17) & 0xfffffffffffffff8;
    if ((uVar18 <= uVar13) && (*(ulong *)(param_9 + 8) = uVar18, puVar23 != (undefined8 *)0x0)) {
      *puVar23 = &DAT_0390f40e;
      uVar7 = nn::os::GetSystemTick();
      puVar23[1] = uVar7;
    }
  }
  return;
}


