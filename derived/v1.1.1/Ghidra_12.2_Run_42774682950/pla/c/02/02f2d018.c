/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2d018; name: FUN_02f2d018
 */


void FUN_02f2d018(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  bool bVar10;
  uint uVar11;
  long *plVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  long *local_80;
  undefined2 local_78;
  ulong local_70;
  undefined4 local_68;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  iVar2 = param_2 + 1;
  uVar16 = (ulong)param_2;
  if (iVar2 < 4) {
    iVar5 = param_2 - 3;
    puVar17 = (undefined8 *)(param_1 + (long)iVar2 * 8 + 0xf0);
    do {
      plVar12 = (long *)*puVar17;
      if (plVar12 != (long *)0x0) {
        bVar4 = true;
        goto LAB_02f2d07c;
      }
      bVar4 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      puVar17 = puVar17 + 1;
    } while (bVar4);
  }
  bVar4 = false;
  plVar12 = (long *)0x0;
LAB_02f2d07c:
  uVar11 = param_2;
  plVar3 = (long *)(param_1 + 0x68);
  if (plVar12 != (long *)0x0) {
    plVar3 = plVar12;
  }
  do {
    uVar11 = uVar11 - 1;
    if ((int)uVar11 < 0) {
      plVar12 = *(long **)(param_1 + 0x138);
      if (plVar12 == (long *)0x0) {
        plVar12 = *(long **)(param_1 + 0x128);
        bVar10 = false;
      }
      else {
        bVar10 = false;
      }
      goto LAB_02f2d0a4;
    }
    plVar12 = *(long **)(param_1 + (long)(int)uVar11 * 8 + 0xf0);
  } while (plVar12 == (long *)0x0);
  bVar10 = true;
LAB_02f2d0a4:
  lVar20 = *(long *)(*(long *)(param_1 + 0x128) + 0x18);
  local_70 = *(ulong *)(lVar20 + 0x240);
  local_68 = *(uint *)(lVar20 + 0x248);
  if (bVar10) {
    uVar6 = (**(code **)(*plVar12 + 0x98))(plVar12);
    local_70 = uVar6 << 0x20;
  }
  else {
    uVar6 = local_70 >> 0x20;
  }
  uVar19 = (uint)uVar6;
  local_70 = CONCAT44(local_70._4_4_,DAT_042ab258);
  local_68 = CONCAT13(local_68._3_1_,
                      (uint3)((local_68 >> 0x10 & 0xf8) << 0x10) | (uint3)((uVar19 & 0xff) << 8)) |
             0x50020;
  puVar17 = (undefined8 *)(param_1 + uVar16 * 8 + 0xf0);
  plVar18 = (long *)*puVar17;
  uVar11 = uVar19;
  if (plVar18 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar18 + 0x98))(plVar18);
    if ((int)param_2 < 4) {
      lVar15 = 0;
      plVar9 = (long *)(param_1 + (long)(int)param_2 * 8 + 0xf0);
      plVar7 = (long *)*plVar9;
      if (plVar7 != (long *)0x0) goto LAB_02f2d188;
      do {
        do {
          lVar15 = lVar15 + 1;
          if (4 - param_2 == (int)lVar15) goto LAB_02f2d19c;
          plVar7 = (long *)plVar9[lVar15];
        } while (plVar7 == (long *)0x0);
LAB_02f2d188:
        uVar8 = (**(code **)(*plVar7 + 0x78))();
      } while ((lVar15 == 0) || ((uVar8 & 1) == 0));
    }
LAB_02f2d19c:
    FUN_02f2b494(plVar3);
    (**(code **)(*plVar18 + 0x68))(plVar18);
    (**(code **)*plVar18)(plVar18);
    (*DAT_0442d150)(5,plVar18);
    *puVar17 = 0;
  }
  local_80 = (long *)0x0;
  (**(code **)(**(long **)(lVar20 + 0x180) + 0x1d0))
            (*(long **)(lVar20 + 0x180),uVar16,&local_80,*(undefined8 *)(lVar20 + 0x28));
  if (local_80 == (long *)0x0) {
    plVar18 = (long *)0x0;
joined_r0x02f2d328:
    if (uVar19 != uVar11) {
      if (bVar4) {
        FUN_02f2d018(param_1,iVar2);
        goto joined_r0x02f2d45c;
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        (**(code **)(PTR_PTR_042a9250 + 0x18))();
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        (**(code **)(PTR_PTR_042a9250 + 0x18))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
      }
      FUN_02f212d4((undefined8 *)(param_1 + 0x78),uVar6 & 0xffffffff);
      *(int *)(param_1 + 0x198) = (int)uVar6;
    }
    lVar20 = *plVar3;
    if (plVar18 != (long *)0x0) {
      plVar12 = plVar18;
    }
  }
  else {
    local_88 = 1;
    local_90 = 0;
    local_86 = 0;
    if ((DAT_0440a430 == 0) || (*DAT_0440a428 == (int)local_80[6])) {
      piVar13 = DAT_0440a428;
    }
    else {
      lVar20 = (ulong)DAT_0440a430 * 0x20;
      piVar14 = DAT_0440a428;
      do {
        lVar20 = lVar20 + -0x20;
        if (lVar20 == 0) goto LAB_02f2d2e4;
        piVar1 = piVar14 + 8;
        piVar13 = piVar14 + 8;
        piVar14 = piVar14 + 8;
      } while (*piVar1 != (int)local_80[6]);
    }
    if ((piVar13 != DAT_0440a428 + (ulong)DAT_0440a430 * 8) &&
       (plVar9 = (long *)(**(code **)(piVar13 + 2))(&PTR_PTR_042a9250), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_90);
      if ((local_90._4_4_ - 0x7e201U < 0x102) && ((int)local_90 == 3)) {
        if ((char)local_88 == '\0') {
          plVar18 = (long *)(*DAT_0442d138)(5,0x128);
          if (plVar18 != (long *)0x0) {
            memset(plVar18 + 1,0,0x120);
            *(undefined1 *)(plVar18 + 10) = 0xff;
            *(undefined1 *)(plVar18 + 0xb) = 0xff;
            plVar18[4] = (long)&PTR_LAB_042aca38;
            *(undefined4 *)(plVar18 + 0x10) = 0xffffffff;
            *plVar18 = (long)&PTR_FUN_042acc48;
            *(undefined8 *)((long)plVar18 + 0xb4) = 0x2b;
            *(undefined4 *)(plVar18 + 0x16) = 0;
            plVar18[0x15] = 0;
            *(undefined8 *)((long)plVar18 + 0xbc) = 0;
            *(undefined4 *)(plVar18 + 0x1d) = 0;
            *(undefined8 *)((long)plVar18 + 0xec) = 0;
            plVar18[0xc] = 0;
            plVar18[0xd] = 0;
            plVar18[0xe] = 0;
            plVar18[0xf] = 0;
            plVar18[0x1b] = 0;
            plVar18[0x1c] = 0x2b00000000;
LAB_02f2d3dc:
            iVar5 = (**(code **)(*plVar18 + 0x60))
                              (plVar18,plVar9,&local_80,uVar16,param_1,&local_70);
            if (iVar5 == 1) {
              *puVar17 = plVar18;
              *(undefined2 *)((long)plVar18 + 0x8a) = local_78;
              (**(code **)(*plVar18 + 0x58))(plVar18,plVar12);
              uVar6 = (**(code **)(*plVar18 + 0x98))(plVar18);
              uVar19 = (uint)uVar6;
              goto joined_r0x02f2d328;
            }
            (**(code **)(*plVar18 + 0x68))(plVar18);
            (**(code **)*plVar18)(plVar18);
            (*DAT_0442d150)(5,plVar18);
          }
        }
        else {
          if (local_88._1_1_ != '\0') goto LAB_02f2d2cc;
          plVar18 = (long *)(*DAT_0442d138)(5,0xb0);
          if (plVar18 != (long *)0x0) {
            *plVar18 = (long)&PTR_FUN_042acae8;
            plVar18[1] = 0;
            plVar18[10] = 0;
            plVar18[0xb] = 0;
            *(undefined1 *)(plVar18 + 10) = 0xff;
            *(undefined1 *)(plVar18 + 0xb) = 0xff;
            plVar18[4] = 0;
            plVar18[5] = 0;
            plVar18[4] = (long)&PTR_LAB_042aca38;
            plVar18[0x14] = 0;
            plVar18[0x15] = 0;
            *(undefined4 *)(plVar18 + 0x15) = 0;
            plVar18[0x12] = 0;
            plVar18[0x13] = 0;
            plVar18[0x10] = 0;
            plVar18[0x11] = 0;
            *(undefined4 *)(plVar18 + 0x10) = 0xffffffff;
            plVar18[0xe] = 0;
            plVar18[0xf] = 0;
            plVar18[0xc] = 0;
            plVar18[0xd] = 0;
            plVar18[8] = 0;
            plVar18[9] = 0;
            plVar18[6] = 0;
            plVar18[7] = 0;
            plVar18[2] = 0;
            plVar18[3] = 0;
            plVar18[0xc] = 0;
            plVar18[0xd] = 0;
            plVar18[0xe] = 0;
            plVar18[0xf] = 0;
            goto LAB_02f2d3dc;
          }
        }
      }
      else {
LAB_02f2d2cc:
        (**(code **)(*plVar9 + 0x10))(plVar9,&PTR_PTR_042a9250);
      }
    }
LAB_02f2d2e4:
    lVar20 = *plVar3;
  }
  (**(code **)(lVar20 + 0x58))(plVar3,plVar12);
joined_r0x02f2d45c:
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  return;
}


