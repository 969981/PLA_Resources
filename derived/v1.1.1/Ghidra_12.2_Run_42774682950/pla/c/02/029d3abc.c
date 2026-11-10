/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d3abc; name: FUN_029d3abc
 */


void FUN_029d3abc(long param_1,undefined1 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int local_e0 [3];
  undefined1 local_d3;
  int local_d0;
  undefined4 uStack_cc;
  undefined5 uStack_c8;
  undefined1 local_c3;
  int local_c0;
  undefined4 uStack_bc;
  undefined5 uStack_b8;
  undefined1 local_b3;
  int local_b0;
  undefined4 uStack_ac;
  undefined5 uStack_a8;
  undefined1 local_a3;
  int local_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  undefined1 local_93;
  int local_90;
  undefined4 uStack_8c;
  undefined5 uStack_88;
  undefined1 local_83;
  long local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_58 [8];
  
  *param_2 = 0;
  lVar14 = *(long *)(param_1 + 8);
  if (1 < **(uint **)(lVar14 + 0x58)) {
    return;
  }
  if (*(char *)((long)*(uint **)(lVar14 + 0x58) + 0x106f) != '\0') {
    return;
  }
  stack0xffffffffffffff28 = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_d3 = 1;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  local_c3 = 1;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_b3 = 1;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_a3 = 1;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_93 = 1;
  uStack_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_83 = 1;
  lVar9 = *(long *)(param_1 + 0x10);
  pbVar5 = *(byte **)(lVar9 + 200);
  uVar7 = (ulong)*pbVar5;
  if (uVar7 != 0) {
    bVar1 = *(byte *)(lVar14 + 0x130);
    lVar15 = 0;
    lVar11 = *(long *)(lVar9 + 8);
    lVar16 = uVar7 - 1;
    do {
      uVar6 = (uint)uVar7;
      if (((uint)lVar15 & 0xff) < uVar6) {
        if (pbVar5[lVar15 + 1] == 0) {
          uVar7 = (ulong)pbVar5[lVar15 + 0x1f];
          goto LAB_029d3bb0;
        }
      }
      else {
        uVar7 = 0x1f;
LAB_029d3bb0:
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 8) + uVar7 * 8 + 0x120) + 0x2b0) | 1) != 0x2d) {
          uVar10 = (uint)uVar7;
          uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
          if (uVar10 < 6) {
            lVar12 = 0;
          }
          else if (uVar10 < 0xc) {
            lVar12 = 2;
          }
          else if (uVar10 < 0x12) {
            lVar12 = 1;
          }
          else if (uVar10 < 0x18) {
            lVar12 = 3;
          }
          else {
            lVar12 = (ulong)(uVar10 < 0x1e) << 2;
          }
          if ((uVar2 < 3) && ((&PTR_DAT_04277490)[(int)uVar2][lVar12] == '\x01')) {
            local_70 = *(undefined8 *)(*(long *)(lVar9 + 8) + uVar7 * 8 + 0x120);
            local_68 = 1;
            local_80 = lVar14;
            puStack_78 = (undefined1 *)(lVar11 + (ulong)bVar1 * 0x38 + 8);
            FUN_029d3fd8(local_e0,&local_80);
            lVar9 = *(long *)(param_1 + 0x20);
            *(undefined1 *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0x10) + 0x1a8) + 9) = 1;
            FUN_02a3e6b8(*(undefined8 *)(lVar9 + 0x18),0x29,1);
            pbVar5 = *(byte **)(*(long *)(param_1 + 0x10) + 200);
            uVar6 = (uint)*pbVar5;
          }
        }
        if (((uint)lVar15 & 0xff) < uVar6) {
          pbVar5[lVar15 + 1] = 1;
        }
      }
      if (lVar16 == lVar15) goto LAB_029d3ce0;
      lVar9 = *(long *)(param_1 + 0x10);
      lVar15 = lVar15 + 1;
      pbVar5 = *(byte **)(lVar9 + 200);
      uVar7 = (ulong)*pbVar5;
    } while( true );
  }
LAB_029d3ce8:
  if ((((local_d0 == 0) && (local_c0 == 0)) && (local_b0 == 0)) &&
     ((local_a0 == 0 && (local_90 == 0)))) {
    return;
  }
LAB_029d3d10:
  if ((**(int **)(*(long *)(param_1 + 8) + 0x58) != 0) ||
     (uVar7 = FUN_029cddec(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)), (uVar7 & 1) == 0
     )) goto LAB_029d3db8;
  lVar14 = *(long *)(param_1 + 8);
  iVar3 = *(int *)(lVar14 + 0x110);
  bVar1 = *(byte *)(lVar14 + 0x130);
  if (iVar3 == 2) {
LAB_029d3d4c:
    if (4 < bVar1) goto LAB_029d3d68;
    puVar8 = &DAT_03a7ebe0;
LAB_029d3d78:
    uVar4 = puVar8[bVar1];
  }
  else {
    if (iVar3 == 1) {
      if (bVar1 < 5) {
        puVar8 = &DAT_03a7ebe5;
        goto LAB_029d3d78;
      }
    }
    else if (iVar3 == 0) goto LAB_029d3d4c;
LAB_029d3d68:
    uVar4 = 2;
  }
  uVar7 = FUN_029cdf30(lVar14,*(undefined8 *)(param_1 + 0x10),uVar4);
  if ((uVar7 & 1) == 0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    plVar13 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar13 == (long *)0x0) {
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x94,0);
    }
    else {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x94,0);
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
LAB_029d3db8:
  local_58[0] = 0;
  local_80 = *(long *)(*(long *)(param_1 + 0x10) + 8) +
             (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x130) * 0x38 + 8;
  puStack_78 = (undefined1 *)local_e0;
  FUN_029e966c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x680),local_58,&local_80);
  *param_2 = local_58[0];
  return;
LAB_029d3ce0:
  if (local_e0[0] == 0) goto LAB_029d3ce8;
  goto LAB_029d3d10;
}


