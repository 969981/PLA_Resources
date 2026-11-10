/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ab9a0; name: FUN_031ab9a0
 */


void FUN_031ab9a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6,long *param_7)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int local_68;
  int local_64;
  long local_60;
  undefined *puStack_58;
  int *local_50;
  int *piStack_48;
  
  param_1[2] = 1;
  param_1[3] = param_3;
  *param_1 = &PTR_LAB_04301ce8;
  param_1[1] = 0xffffffff;
  param_1[5] = param_4[1];
  uVar13 = *param_4;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[4] = uVar13;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  puVar5 = PTR_PTR_0434a080;
  uVar8 = param_6 - (long)param_5;
  iVar16 = (int)(uVar8 >> 5);
  local_68 = iVar16;
  if (iVar16 < 1) {
    param_1[7] = 0;
    param_1[8] = 0x8000000000000000;
  }
  else {
    local_64 = 0x20;
    if ((ulong)((long)(uVar8 * 0x8000000) >> 0x1b) >> 0x1f != 0) {
      local_60 = 2;
      puStack_58 = &DAT_0411b3a0;
      local_50 = &local_64;
      piStack_48 = &local_68;
      FUN_03320b50(0xc69ddef,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x30,"Memory allocation request overflow {}*{}",&local_60);
    }
    local_60 = (long)(int)uVar8;
    puVar6 = (undefined8 *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_60,&local_60);
    param_1[7] = puVar6;
    iVar2 = 0;
    if (local_64 != 0) {
      iVar2 = (int)local_60 / local_64;
    }
    *(int *)(param_1 + 8) = iVar16;
    *(int *)((long)param_1 + 0x44) = iVar2;
    puVar6[1] = param_5[1];
    *puVar6 = *param_5;
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_5 + 2);
    iVar16 = iVar16 + -1;
    if (iVar16 != 0) {
      puVar14 = param_5 + 6;
      do {
        puVar6[5] = puVar14[-1];
        puVar6[4] = puVar14[-2];
        iVar16 = iVar16 + -1;
        *(undefined4 *)(puVar6 + 6) = *(undefined4 *)puVar14;
        puVar14 = puVar14 + 4;
        puVar6 = puVar6 + 4;
      } while (iVar16 != 0);
    }
  }
  lVar9 = *param_7;
  param_1[9] = lVar9;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
    plVar1 = (long *)(lVar9 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar15 = *(uint *)(param_2 + 0x20);
  if ((int)uVar15 < 1) {
    lVar9 = 0;
    goto joined_r0x031abbac;
  }
  if ((int)uVar15 < 0x40000000) {
    uVar7 = 0;
LAB_031abb80:
    if ((int)uVar15 <= (int)uVar7) {
LAB_031abc1c:
      uVar15 = uVar7;
    }
  }
  else {
    FUN_032bd0a8(uVar15);
    uVar7 = (*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) * 2;
    if (uVar7 < 0x3fffffff) goto LAB_031abb80;
    uVar7 = 0x3fffffff;
    if ((int)uVar15 < 0x40000000) goto LAB_031abc1c;
  }
  lVar9 = FUN_032bd1d4(puVar5,uVar15,4,0,0,(uint *)((long)param_1 + 0x5c));
  param_1[10] = lVar9;
  uVar15 = *(uint *)(param_2 + 0x20);
joined_r0x031abbac:
  if (uVar15 != 0) {
    lVar11 = *(long *)(param_2 + 0x18);
    iVar16 = *(int *)(param_1 + 0xb);
    lVar10 = (long)iVar16;
    *(undefined4 *)(lVar9 + lVar10 * 4) = *(undefined4 *)(lVar11 + 0x70);
    *(int *)(param_1 + 0xb) = (int)(lVar10 + 1);
    if (uVar15 != 1) {
      *(undefined4 *)(param_1[10] + (lVar10 + 1) * 4) = *(undefined4 *)(lVar11 + 0x100);
      *(int *)(param_1 + 0xb) = (int)(lVar10 + 2);
      if (uVar15 != 2) {
        *(undefined4 *)(param_1[10] + (lVar10 + 2) * 4) = *(undefined4 *)(lVar11 + 400);
        *(int *)(param_1 + 0xb) = iVar16 + 3;
        if (uVar15 != 3) {
          lVar9 = lVar10 * 4 + 0xc;
          lVar10 = (long)(int)uVar15 * 0x90 + -0x1b0;
          iVar16 = iVar16 + 4;
          puVar12 = (undefined4 *)(lVar11 + 0x220);
          do {
            lVar10 = lVar10 + -0x90;
            *(undefined4 *)(param_1[10] + lVar9) = *puVar12;
            *(int *)(param_1 + 0xb) = iVar16;
            lVar9 = lVar9 + 4;
            iVar16 = iVar16 + 1;
            puVar12 = puVar12 + 0x24;
          } while (lVar10 != 0);
        }
      }
    }
  }
  return;
}


