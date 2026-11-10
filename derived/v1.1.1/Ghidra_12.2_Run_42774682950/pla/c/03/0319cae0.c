/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319cae0; name: FUN_0319cae0
 */


void FUN_0319cae0(long *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  void *pvVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  void *pvVar16;
  uint uVar17;
  ulong local_a0;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  uVar8 = FUN_0319db40();
  if (*(uint *)(param_1 + 1) == uVar8) {
    uVar17 = *(uint *)((long)param_1 + 0xc);
    uVar2 = uVar17 & 0x3fffffff;
    piVar15 = (int *)*param_1;
    uVar1 = uVar8 + 1;
    piVar9 = piVar15;
    if ((int)uVar2 <= (int)uVar8) {
      if (0x3ffffffe < (int)uVar8) {
        FUN_032bd0a8(uVar1);
        uVar17 = *(uint *)((long)param_1 + 0xc);
        uVar2 = uVar17 & 0x3fffffff;
      }
      puVar7 = PTR_PTR_0434a080;
      uVar11 = (uVar17 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar11) {
        uVar11 = 0x3fffffff;
      }
      local_7c = uVar1;
      if ((int)uVar1 <= (int)uVar11) {
        local_7c = uVar11;
      }
      local_88 = (ulong)local_7c << 6;
      if (((int)local_7c < (int)uVar2) || (0x3fffffff < (int)local_7c)) {
        local_78 = 1;
        puStack_68 = &local_7c;
        local_70 = &DAT_0411b3b8;
        FUN_03320b50(0x65816502,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x5a,"Invalid requestedCapacity {}",&local_78);
        uVar17 = *(uint *)((long)param_1 + 0xc);
        uVar2 = uVar17 & 0x3fffffff;
      }
      local_a0 = (ulong)uVar2;
      piVar9 = (int *)(**(code **)(*(long *)puVar7 + 0x10))(puVar7,local_88,&local_88);
      if (0 < (int)uVar8) {
        iVar5 = *piVar15;
        piVar9[2] = 0;
        piVar9[3] = 0;
        piVar9[4] = 0;
        piVar9[5] = -0x80000000;
        piVar9[0xc] = 0;
        piVar9[0xd] = 0;
        piVar9[0xe] = 0;
        piVar9[0xf] = -0x80000000;
        *piVar9 = iVar5;
        if (piVar15 != piVar9) {
          iVar5 = piVar15[4];
          pvVar16 = *(void **)(piVar15 + 2);
          if (iVar5 < 1) {
            pvVar10 = (void *)0x0;
          }
          else {
            pvVar10 = (void *)FUN_032bd1d4(puVar7,iVar5,0x14,0,0,piVar9 + 5);
            *(void **)(piVar9 + 2) = pvVar10;
          }
          memcpy(pvVar10,pvVar16,(long)iVar5 * 0x14);
          piVar9[4] = iVar5;
        }
        lVar13 = (ulong)uVar8 - 1;
        if (lVar13 != 0) {
          piVar14 = piVar15 + 0x14;
          piVar6 = piVar9;
          do {
            iVar5 = piVar14[-4];
            piVar6[0x12] = 0;
            piVar6[0x13] = 0;
            piVar6[0x14] = 0;
            piVar6[0x15] = -0x80000000;
            piVar6[0x10] = iVar5;
            piVar6[0x1c] = 0;
            piVar6[0x1d] = 0;
            piVar6[0x1e] = 0;
            piVar6[0x1f] = -0x80000000;
            if (piVar15 != piVar9) {
              iVar5 = *piVar14;
              pvVar16 = *(void **)(piVar14 + -2);
              if (iVar5 < 1) {
                pvVar10 = (void *)0x0;
              }
              else {
                pvVar10 = (void *)FUN_032bd1d4(puVar7,iVar5,0x14,0,0,piVar6 + 0x15);
                *(void **)(piVar6 + 0x12) = pvVar10;
              }
              memcpy(pvVar10,pvVar16,(long)iVar5 * 0x14);
              piVar6[0x14] = iVar5;
            }
            lVar13 = lVar13 + -1;
            piVar14 = piVar14 + 0x10;
            piVar6 = piVar6 + 0x10;
          } while (lVar13 != 0);
        }
        piVar15[0xe] = 0;
        if ((-1 < piVar15[0xf]) && (*(long *)(piVar15 + 0xc) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar15 + 0xc),piVar15[0xf] << 2);
        }
        piVar15[0xc] = 0;
        piVar15[0xd] = 0;
        piVar15[0xf] = -0x80000000;
        piVar15[4] = 0;
        if ((-1 < piVar15[5]) && (*(long *)(piVar15 + 2) != 0)) {
          (**(code **)(*(long *)puVar7 + 0x18))
                    (puVar7,*(long *)(piVar15 + 2),((ulong)(uint)piVar15[5] & 0x3fffffff) * 0x14);
        }
        lVar13 = (ulong)uVar8 - 1;
        piVar15[2] = 0;
        piVar15[3] = 0;
        piVar15[5] = -0x80000000;
        if (lVar13 != 0) {
          piVar14 = piVar15 + 0x1f;
          do {
            piVar14[-1] = 0;
            if ((-1 < *piVar14) && (*(long *)(piVar14 + -3) != 0)) {
              (**(code **)(*(long *)puVar7 + 0x18))(puVar7,*(long *)(piVar14 + -3),*piVar14 << 2);
            }
            piVar14[-3] = 0;
            piVar14[-2] = 0;
            *piVar14 = -0x80000000;
            piVar14[-0xb] = 0;
            if ((-1 < piVar14[-10]) && (*(long *)(piVar14 + -0xd) != 0)) {
              (**(code **)(*(long *)puVar7 + 0x18))
                        (puVar7,*(long *)(piVar14 + -0xd),
                         ((ulong)(uint)piVar14[-10] & 0x3fffffff) * 0x14);
            }
            piVar14[-0xd] = 0;
            piVar14[-0xc] = 0;
            lVar13 = lVar13 + -1;
            piVar14[-10] = -0x80000000;
            piVar14 = piVar14 + 0x10;
          } while (lVar13 != 0);
        }
      }
      if (-1 < (int)uVar17) {
        (**(code **)(*(long *)puVar7 + 0x18))(puVar7,piVar15,local_a0 << 6);
      }
      if (local_88 < 0xfffffffc0) {
        uVar12 = (undefined4)(local_88 >> 6);
      }
      else {
        uVar12 = 0x3fffffff;
      }
      *param_1 = (long)piVar9;
      uVar8 = *(uint *)(param_1 + 1);
      *(undefined4 *)((long)param_1 + 0xc) = uVar12;
    }
    piVar9 = piVar9 + (long)(int)uVar8 * 0x10;
    *piVar9 = *param_2;
    piVar14 = piVar9 + 2;
    piVar14[0] = 0;
    piVar14[1] = 0;
    piVar15 = piVar9 + 4;
    piVar15[0] = 0;
    piVar15[1] = -0x80000000;
    piVar9[0xc] = 0;
    piVar9[0xd] = 0;
    piVar9[0xe] = 0;
    piVar9[0xf] = -0x80000000;
    if (piVar14 != param_3) {
      iVar5 = param_3[2];
      pvVar16 = *(void **)param_3;
      if (iVar5 < 1) {
        pvVar10 = (void *)0x0;
      }
      else {
        pvVar10 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,0x14,0,0,piVar9 + 5);
        *(void **)piVar14 = pvVar10;
      }
      memcpy(pvVar10,pvVar16,(long)iVar5 * 0x14);
      *piVar15 = iVar5;
    }
    *(uint *)(param_1 + 1) = uVar1;
  }
  else {
    lVar13 = *param_1;
    piVar9 = (int *)(lVar13 + ((long)((ulong)uVar8 << 0x20) >> 0x1a) + 8);
    if (piVar9 == param_3) {
      lVar13 = lVar13 + (long)(int)uVar8 * 0x40;
      uVar3 = *(undefined8 *)(param_3 + 4);
      uVar4 = *(undefined8 *)(param_3 + 6);
      *(int *)(lVar13 + 0x28) = param_3[8];
      *(undefined8 *)(lVar13 + 0x18) = uVar3;
      *(undefined8 *)(lVar13 + 0x20) = uVar4;
    }
    else {
      lVar13 = lVar13 + (long)(int)uVar8 * 0x40;
      iVar5 = param_3[2];
      pvVar10 = *(void **)param_3;
      pvVar16 = *(void **)piVar9;
      if ((int)(*(uint *)(lVar13 + 0x14) & 0x3fffffff) < iVar5) {
        pvVar16 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,0x14,pvVar16,
                                       *(undefined4 *)(lVar13 + 0x10));
        *(void **)piVar9 = pvVar16;
      }
      memcpy(pvVar16,pvVar10,(long)iVar5 * 0x14);
      pvVar16 = *(void **)(lVar13 + 0x30);
      *(int *)(lVar13 + 0x10) = iVar5;
      uVar3 = *(undefined8 *)(param_3 + 4);
      uVar4 = *(undefined8 *)(param_3 + 6);
      *(int *)(lVar13 + 0x28) = param_3[8];
      *(undefined8 *)(lVar13 + 0x18) = uVar3;
      *(undefined8 *)(lVar13 + 0x20) = uVar4;
      iVar5 = param_3[0xc];
      pvVar10 = *(void **)(param_3 + 10);
      if ((int)(*(uint *)(lVar13 + 0x3c) & 0x3fffffff) < iVar5) {
        pvVar16 = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,4,pvVar16,
                                       *(undefined4 *)(lVar13 + 0x38));
        *(void **)(lVar13 + 0x30) = pvVar16;
      }
      memcpy(pvVar16,pvVar10,(long)iVar5 << 2);
      *(int *)(lVar13 + 0x38) = iVar5;
    }
  }
  return;
}


