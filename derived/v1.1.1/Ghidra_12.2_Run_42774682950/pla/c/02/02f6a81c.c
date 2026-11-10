/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6a81c; name: FUN_02f6a81c
 */


undefined8 * FUN_02f6a81c(long *param_1,uint param_2,long param_3,uint param_4,uint *param_5)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar15 = *param_5;
  uVar8 = (uVar15 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar8) {
    uVar8 = 0x3fffffff;
  }
  uVar16 = uVar15 & 0x3fffffff;
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar8) {
    local_7c = uVar8;
  }
  local_88 = (ulong)local_7c * 0x110;
  if ((int)local_7c < (int)uVar16 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar15 = *param_5;
    uVar16 = uVar15 & 0x3fffffff;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    puVar17 = (undefined1 *)(param_3 + 0x100);
    puVar13 = puVar3;
    uVar14 = (ulong)param_4;
    do {
      puVar13[2] = puVar13 + 6;
      *puVar13 = 0;
      puVar13[3] = 0x8000001800000000;
      uVar4 = FUN_0331fc10(&DAT_042afd88,"Not implemented");
      if ((uVar4 & 1) != 0) {
        CallSupervisor(0x26);
      }
      uVar2 = *puVar17;
      uVar14 = uVar14 - 1;
      puVar17 = puVar17 + 0x110;
      *(undefined1 *)(puVar13 + 0x20) = uVar2;
      puVar13 = puVar13 + 0x22;
    } while (uVar14 != 0);
    uVar14 = 0;
    do {
      plVar7 = (long *)(param_3 + uVar14 * 0x110);
      if (*plVar7 != 0) {
        lVar9 = param_3 + uVar14 * 0x110;
        iVar6 = *(int *)(lVar9 + 0x18);
        plVar1 = (long *)(lVar9 + 0x10);
        if (*(char *)(lVar9 + 0xc) != '\0') {
          plVar12 = (long *)*plVar1;
          if (iVar6 < 1) {
            plVar11 = plVar12;
          }
          else {
            plVar11 = plVar12;
            if (*plVar12 != 0) {
              *plVar12 = *plVar12;
              plVar11 = plVar12 + 1;
            }
            if (iVar6 != 1) {
              if (plVar12[1] != 0) {
                *plVar11 = plVar12[1];
                plVar11 = plVar11 + 1;
              }
              if (iVar6 != 2) {
                iVar6 = iVar6 + -2;
                plVar12 = plVar12 + 2;
                plVar10 = plVar11;
                do {
                  plVar11 = plVar10;
                  if (*plVar12 != 0) {
                    plVar11 = plVar10 + 1;
                    *plVar10 = *plVar12;
                  }
                  plVar12 = plVar12 + 1;
                  iVar6 = iVar6 + -1;
                  plVar10 = plVar11;
                } while (iVar6 != 0);
              }
            }
            plVar12 = plVar11;
            plVar11 = (long *)*plVar1;
          }
          *(char *)(lVar9 + 0xc) = '\0';
          iVar6 = (int)((ulong)((long)plVar12 - (long)plVar11) >> 3);
        }
        if (iVar6 != 0) {
          plVar7 = (long *)*plVar7;
          (**(code **)(*plVar7 + 0x28))(plVar7,*plVar1);
        }
        *(int *)(lVar9 + 0x18) = 0;
        *(undefined4 *)(param_3 + uVar14 * 0x110 + 8) = 0;
      }
      lVar9 = param_3 + uVar14 * 0x110;
      uVar8 = *(uint *)(lVar9 + 0x1c);
      *(undefined4 *)(lVar9 + 0x18) = 0;
      if ((-1 < (int)uVar8) && (lVar5 = *(long *)(lVar9 + 0x10), lVar5 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                  (PTR_PTR_0434a080,lVar5,((ulong)uVar8 & 0x3fffffff) << 3);
      }
      uVar14 = uVar14 + 1;
      *(long *)(lVar9 + 0x10) = 0;
      *(uint *)(lVar9 + 0x1c) = 0x80000000;
    } while (uVar14 != param_4);
  }
  if (-1 < (int)uVar15) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar16 * 0x110);
  }
  if (local_88 < 0x43fffffef0) {
    uVar8 = (uint)(local_88 / 0x110);
  }
  else {
    uVar8 = 0x3fffffff;
  }
  *param_5 = uVar8;
  return puVar3;
}


