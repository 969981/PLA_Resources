/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025da5c; name: FUN_0025da5c
 */


/* WARNING: Removing unreachable block (ram,0x0025dac8) */

void FUN_0025da5c(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,ushort *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  long lVar17;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined4 uStack_9e;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[1] = *(undefined8 *)(param_6 + 4);
  uVar4 = *param_6;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_3 == 0) {
    return;
  }
  uVar5 = *param_6;
  uVar14 = (ulong)uVar5;
  if (uVar14 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    return;
  }
  if (uVar5 == 1) {
    lVar12 = 0;
    iVar10 = 0;
  }
  else {
    lVar12 = 0;
    iVar10 = 0;
    piVar13 = (int *)(*(long *)(param_6 + 4) + 0x3c);
    do {
      if (piVar13[-0xe] != 0) {
        iVar10 = iVar10 + 1;
      }
      lVar12 = lVar12 + 2;
      if (*piVar13 != 0) {
        iVar10 = iVar10 + 1;
      }
      piVar13 = piVar13 + 0x1c;
    } while (uVar14 - (uVar14 & 1) != lVar12);
    if ((uVar5 & 1) == 0) goto LAB_0025db20;
  }
  if (*(int *)(*(long *)(param_6 + 4) + lVar12 * 0x38 + 4) != 0) {
    iVar10 = iVar10 + 1;
  }
LAB_0025db20:
  *(int *)(param_1 + 2) = iVar10;
  if (iVar10 != 0) {
    plVar16 = *(long **)(param_1[8] + 0x10);
    *(long **)(param_1[8] + 0x10) = plVar16 + 0x1b;
    if (plVar16 != (long *)0x0) {
      *(undefined4 *)(plVar16 + 2) = 0;
      puVar1 = PTR_DAT_04372a50 + 0x10;
      plVar16[3] = 0;
      plVar16[4] = 0;
      plVar16[7] = 0;
      plVar16[5] = 0;
      plVar16[6] = 0;
      *plVar16 = (long)puVar1;
      plVar16[1] = -1;
      FUN_0087ed04(plVar16 + 8);
      FUN_0087e7c0(plVar16 + 0x11);
      plVar16[0x1a] = -0x100000000;
    }
    *param_1 = plVar16;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_9f = 0;
    uStack_9e = 0;
    uStack_9a = 0;
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    FUN_00876d98(&local_a0);
    uStack_94 = 0x201;
    local_90 = 0xa0;
    uStack_9f = 2;
    uStack_88 = CONCAT44(uStack_88._4_4_,param_5);
    uStack_9a = 1;
    uStack_98 = 1;
    uStack_8c = param_4;
    uVar14 = (**(code **)(*(long *)*param_1 + 0x30))();
    if ((uVar14 & 1) == 0) {
      FUN_002500f8(*param_1,param_2,param_3,&local_a0,0);
    }
    uVar6 = *(uint *)(param_1 + 2);
    pvVar15 = *(void **)(param_1[8] + 0x10);
    *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar15 + (long)(int)uVar6 * 0x28);
    if ((pvVar15 != (void *)0x0) && (0 < (int)uVar6)) {
      memset(pvVar15,0,(ulong)uVar6 * 0x28);
    }
    param_1[3] = pvVar15;
    uVar6 = *(uint *)(param_1 + 2);
    pvVar15 = *(void **)(param_1[8] + 0x10);
    *(void **)(param_1[8] + 0x10) = (void *)((long)pvVar15 + (long)(int)uVar6 * 0x28);
    if ((pvVar15 != (void *)0x0) && (0 < (int)uVar6)) {
      memset(pvVar15,0,(ulong)uVar6 * 0x28);
    }
    param_1[4] = pvVar15;
    if (uVar4 != 0) {
      uVar14 = 0;
      iVar10 = 0;
      puVar1 = PTR_DAT_04372e08 + 0x10;
      iVar3 = *(int *)(param_1[1] + 4);
      do {
        if (iVar3 != 0) {
          lVar17 = (long)iVar10;
          lVar8 = (lVar17 + (long)iVar10 * 4) * 8;
          *(undefined1 *)(param_1[4] + lVar8) = 0;
          *(undefined1 *)(param_1[4] + lVar8 + 1) = 0;
          *(undefined2 *)(param_1[4] + lVar8 + 4) = 1;
          *(undefined2 *)(param_1[4] + lVar8 + 2) = 0;
          lVar12 = param_1[1] + uVar14 * 0x38;
          lVar11 = param_1[4];
          uVar2 = *(undefined8 *)(lVar12 + 0x10);
          *(undefined8 *)(lVar11 + lVar8 + 0x18) = *(undefined8 *)(lVar12 + 8);
          *(undefined8 *)(lVar11 + lVar8 + 0x20) = uVar2;
          lVar12 = param_1[8];
          plVar16 = *(long **)(lVar12 + 0x10);
          lVar8 = param_1[4];
          *(long **)(lVar12 + 0x10) = plVar16 + 7;
          if (plVar16 != (long *)0x0) {
            lVar11 = lVar8 + lVar17 * 0x28;
            *(undefined4 *)(plVar16 + 2) = 0;
            *plVar16 = (long)puVar1;
            plVar16[1] = 0x3f80000000000000;
            *(undefined1 *)((long)plVar16 + 0x14) = 0;
            plVar16[5] = 0;
            *(undefined4 *)(plVar16 + 6) = 0x3dcccccd;
            plVar16[3] = lVar12;
            plVar16[4] = lVar11;
            uVar6 = *(uint *)(lVar11 + 0x18);
            uVar7 = (ulong)uVar6;
            if (uVar6 != 0) {
              puVar9 = (ushort *)(*(long *)(lVar8 + lVar17 * 0x28 + 0x20) + 0x30);
              do {
                if ((((1 < puVar9[-0x18]) || (1 < puVar9[-0x10])) || (1 < puVar9[-8])) ||
                   (((1 < *puVar9 || (1 < puVar9[8])) || (1 < puVar9[0x10])))) {
                  *(undefined1 *)((long)plVar16 + 0x14) = 1;
                  break;
                }
                uVar7 = uVar7 - 1;
                puVar9 = puVar9 + 0x30;
              } while (uVar7 != 0);
            }
          }
          *(undefined4 *)(plVar16 + 6) = 0x3dcccccd;
          (**(code **)(*plVar16 + 0x10))(plVar16);
          iVar10 = iVar10 + 1;
          *(long **)(param_1[3] + lVar17 * 0x28 + 8) = plVar16;
        }
        uVar14 = uVar14 + 1;
        if (uVar14 == uVar4) {
          return;
        }
        iVar3 = *(int *)(param_1[1] + uVar14 * 0x38 + 4);
      } while( true );
    }
  }
  return;
}


