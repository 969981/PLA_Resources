/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f26ec4; name: FUN_02f26ec4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f26ec4(long param_1,uint param_2,int *param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  void *__s;
  size_t __n;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  int *piVar15;
  int *piVar16;
  undefined8 *puVar17;
  long *plVar18;
  int *piVar19;
  ulong uVar20;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_86;
  int local_80;
  byte bStack_7c;
  undefined2 uStack_7b;
  undefined4 uStack_79;
  undefined1 uStack_75;
  long *local_70;
  undefined2 local_68;
  
  uVar20 = (ulong)param_2;
  lVar4 = param_1 + uVar20 * 0x80;
  plVar9 = *(long **)(lVar4 + 0x118);
  plVar2 = (long *)(lVar4 + 0x118);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9,&PTR_PTR_042a9250);
    *plVar2 = 0;
  }
  puVar17 = *(undefined8 **)(lVar4 + 0x120);
  plVar9 = (long *)(lVar4 + 0x120);
  if (puVar17 != (undefined8 *)0x0) {
    (**(code **)*puVar17)(puVar17);
    (*DAT_0442d150)(5,puVar17);
    *plVar9 = 0;
  }
  plVar18 = (long *)(lVar4 + 0xb0);
  piVar19 = (int *)(lVar4 + 0x110);
  *piVar19 = -1;
  (**(code **)(*plVar18 + 0x28))(plVar18);
  lVar12 = param_1 + uVar20 * 0x18;
  plVar3 = (long *)(lVar12 + 0x2b0);
  if (*(long *)(lVar12 + 0x2b0) != 0) {
    (*DAT_0442d158)(5);
    *plVar3 = 0;
    lVar12 = param_1 + uVar20 * 0x18;
    *(undefined4 *)(lVar12 + 0x2c0) = 0;
    *(undefined8 *)(lVar12 + 0x2b8) = 0x2b00000000;
  }
  local_70 = (long *)0x0;
  plVar10 = *(long **)(param_1 + 0x68);
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 != -1) && (uVar5 = *(uint *)(DAT_0440a140 + 0x38), uVar5 != 0)) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (uint)lVar12 / uVar5;
    }
    for (plVar14 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                             (ulong)((uint)lVar12 - uVar6 * uVar5) * 8); plVar14 != (long *)0x0;
        plVar14 = (long *)*plVar14) {
      if (plVar14[1] == lVar12) {
        *(int *)(plVar14[2] + 0x50) = *(int *)(plVar14[2] + 0x50) + 1;
        puVar17 = (undefined8 *)plVar14[2];
        goto joined_r0x02f26fc8;
      }
    }
  }
  puVar17 = (undefined8 *)0x0;
joined_r0x02f26fc8:
  if (plVar10 == (long *)0x0) {
    local_70 = (long *)0x0;
    local_68 = 0;
    goto joined_r0x02f27290;
  }
  (**(code **)(*plVar10 + 0x1d0))(plVar10,param_2,&local_70,puVar17);
  if ((local_70 == (long *)0x0) || (*piVar19 = (int)local_70[6], local_70[7] == 0))
  goto joined_r0x02f27290;
  uVar13 = *(undefined8 *)param_3;
  local_80 = (int)uVar13;
  bStack_7c = (byte)((ulong)uVar13 >> 0x20);
  uStack_7b = (undefined2)((ulong)uVar13 >> 0x28);
  uStack_79._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
  uStack_79._1_3_ = (uint3)param_3[2];
  uStack_75 = (undefined1)((uint)param_3[2] >> 0x18);
  local_90 = 0;
  local_88 = 1;
  local_86 = 0;
  lVar12 = FUN_02eaeebc(plVar18,local_70,0,*(long *)(param_1 + 8) + 0x10,
                        *(long *)(param_1 + 8) + 0x50,1);
  if (lVar12 == 0) {
LAB_02f27230:
    plVar10 = (long *)*plVar2;
  }
  else {
    *(undefined2 *)(lVar4 + 0x128) = local_68;
    puVar11 = (undefined8 *)(*DAT_0442d138)(5,0x38);
    if (puVar11 == (undefined8 *)0x0) {
      *plVar9 = 0;
      goto LAB_02f27230;
    }
    *(uint *)(puVar11 + 1) = param_2;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = &PTR_FUN_042ac058;
    puVar11[4] = param_1;
    uVar13 = *(undefined8 *)(param_1 + 0x70);
    puVar11[5] = *(long *)(param_1 + 0x68);
    puVar11[6] = uVar13;
    *plVar9 = (long)puVar11;
    *plVar2 = 0;
    if ((DAT_0440a430 == 0) || (*DAT_0440a428 == *piVar19)) {
      piVar15 = DAT_0440a428;
    }
    else {
      lVar12 = (ulong)DAT_0440a430 * 0x20;
      piVar16 = DAT_0440a428;
      do {
        lVar12 = lVar12 + -0x20;
        if (lVar12 == 0) goto LAB_02f27230;
        piVar1 = piVar16 + 8;
        piVar15 = piVar16 + 8;
        piVar16 = piVar16 + 8;
      } while (*piVar1 != *piVar19);
    }
    if (piVar15 == DAT_0440a428 + (ulong)DAT_0440a430 * 8) goto LAB_02f27230;
    plVar14 = (long *)(**(code **)(piVar15 + 2))(&PTR_PTR_042a9250);
    *plVar2 = (long)plVar14;
    plVar10 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_90);
      if (((local_90._4_4_ - 0x7e201U < 0x102) && ((int)local_90 == 3)) &&
         (iVar7 = (**(code **)(*(long *)*plVar2 + 0x38))
                            ((long *)*plVar2,&PTR_PTR_042a9250,*plVar9,*(undefined8 *)(lVar4 + 0xb8)
                             ,&local_80), iVar8 = _DAT_042ab268, iVar7 == 1)) {
        if ((char)local_88 == '\0') {
          *(undefined4 *)(param_1 + uVar20 * 0x18 + 700) = 0x11;
          __n = (ulong)bStack_7c * ((ulong)(uint)(iVar8 << 2) & 0x3fffc);
          __s = (void *)(*DAT_0442d140)(5,__n,0x10);
          if (__s != (void *)0x0) {
            memset(__s,0,__n);
            *plVar3 = (long)__s;
            lVar12 = param_1 + uVar20 * 0x18;
            *(short *)(lVar12 + 0x2c0) = (short)iVar8;
            *(undefined2 *)(lVar12 + 0x2c2) = 0;
            *(uint *)(lVar12 + 0x2b8) =
                 CONCAT13((undefined1)uStack_79,CONCAT21(uStack_7b,bStack_7c));
            goto LAB_02f271e4;
          }
        }
        else if (((local_80 == *param_3) &&
                 (CONCAT13((undefined1)uStack_79,CONCAT21(uStack_7b,bStack_7c)) == param_3[1])) &&
                (((*(uint3 *)(param_3 + 2) ^ uStack_79._1_3_) & 0x7ffff) == 0)) {
LAB_02f271e4:
          iVar8 = (**(code **)(*(long *)*plVar2 + 0x18))();
          if (iVar8 == 1) {
            if ((*(short *)(lVar4 + 0x128) == 0) && (*(short *)(param_1 + 0x338) == 0)) {
              *(undefined4 *)((long)param_3 + 7) = uStack_79;
              *(ulong *)param_3 =
                   CONCAT17((undefined1)uStack_79,CONCAT25(uStack_7b,CONCAT14(bStack_7c,local_80)));
            }
            goto joined_r0x02f27290;
          }
        }
      }
      goto LAB_02f27230;
    }
  }
  if (plVar10 == (long *)0x0) {
    puVar11 = (undefined8 *)*plVar9;
  }
  else {
    (**(code **)(*plVar10 + 0x10))(plVar10,&PTR_PTR_042a9250);
    *plVar2 = 0;
    puVar11 = (undefined8 *)*plVar9;
  }
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11);
    (*DAT_0442d150)(5,puVar11);
    *plVar9 = 0;
  }
  *piVar19 = -1;
  (**(code **)(*plVar18 + 0x28))(plVar18);
  if (*plVar3 != 0) {
    (*DAT_0442d158)(5);
    param_1 = param_1 + uVar20 * 0x18;
    *plVar3 = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0x2b00000000;
  }
joined_r0x02f27290:
  if ((puVar17 != (undefined8 *)0x0) &&
     (iVar8 = *(int *)(puVar17 + 10), *(int *)(puVar17 + 10) = iVar8 + -1, iVar8 + -1 == 0)) {
    (**(code **)*puVar17)(puVar17);
    (*DAT_0442d150)(4,puVar17);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  return;
}


