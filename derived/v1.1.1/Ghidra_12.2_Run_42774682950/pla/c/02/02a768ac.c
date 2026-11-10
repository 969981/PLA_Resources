/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a768ac; name: FUN_02a768ac
 */


undefined1  [16] FUN_02a768ac(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  byte *__s;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  long *local_c8;
  long local_c0;
  char local_b8 [16];
  char local_a8;
  long *local_a0 [4];
  long *local_80;
  undefined **local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_1 + 0x1c8) != 0) {
    lVar14 = *(long *)(param_1 + 0x1b0);
    if ((lVar14 != 0) && (*(uint *)(lVar14 + 0x10) != 0)) {
      lVar15 = 0;
      plVar16 = *(long **)(lVar14 + 0x20);
      do {
        if (*plVar16 == *(long *)(param_1 + 0x70)) {
          uVar9 = *(uint *)(*(long *)(lVar14 + 0x18) + lVar15 + 4);
          *(ulong *)(param_1 + 0x240) = (ulong)uVar9;
          if (uVar9 == 0) goto LAB_02a76914;
          uVar18 = 0;
          uVar17 = 0;
          goto LAB_02a76bd8;
        }
        lVar15 = lVar15 + 0x18;
        plVar16 = plVar16 + 1;
      } while ((ulong)*(uint *)(lVar14 + 0x10) * 0x18 != lVar15);
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
LAB_02a76914:
  puVar6 = PTR_DAT_04379d30;
  lVar14 = *(long *)(param_1 + 0x68);
  puVar2 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar14 != 0) {
    puVar2 = (undefined8 *)(lVar14 + 0x60);
  }
  __s = (byte *)*puVar2;
  if (((*PTR_DAT_04379d30 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379d30);
  }
  puVar8 = PTR_DAT_04379d40;
  puVar7 = PTR_DAT_04379d38;
  uVar11 = *(undefined8 *)PTR_DAT_04379d38;
  *(undefined8 *)PTR_DAT_04379d40 = uVar11;
  FUN_02a7c7ac(local_b8,uVar11,(long *)(param_1 + 0x68));
  if ((local_b8[0] != '\0') && (local_a8 != '\0')) {
    if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379d30), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_0437a0c8,PTR_DAT_04379d38,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379d30);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = &PTR_LAB_0427f0c0;
    local_68 = (long *)0x0;
    FUN_00938764(&local_70,0,local_a0,0,0,0);
    plVar16 = local_68;
    bVar5 = false;
    if (local_68 != (long *)0x0) {
      lVar14 = local_68[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02a76c98;
      puVar19 = (uint *)local_68[0x4a];
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_c0 = (long)puVar19 + (ulong)*puVar19;
      local_c8 = plVar16;
      bVar5 = true;
    }
    FUN_00936104(&local_70);
    plVar16 = local_c8;
    if (bVar5) {
      if (local_c8 != (long *)0x0) {
        lVar14 = local_c8[0xb];
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_02a76c98:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar12 = *(long **)(param_1 + 0x1d0);
      *(long **)(param_1 + 0x1d0) = plVar16;
      if (plVar12 != (long *)0x0) {
        lVar14 = plVar12[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*plVar12 + 0x20))();
        }
      }
      *(long *)(param_1 + 0x1d8) = local_c0;
      puVar20 = &DAT_cbf29ce484222645;
      pcVar13 = strchr((char *)__s,0x3a);
      if (pcVar13 != (char *)0x0) {
        __s = (byte *)(pcVar13 + 2);
      }
      bVar3 = *__s;
      while (bVar3 != 0) {
        __s = __s + 1;
        puVar20 = (undefined1 *)(((ulong)puVar20 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *__s;
      }
      *(undefined1 **)(param_1 + 200) = puVar20;
      uVar11 = FUN_02a78d44(&local_c8,puVar20);
      *(undefined8 *)(param_1 + 0x240) = uVar11;
      if (local_c8 != (long *)0x0) {
        lVar14 = local_c8[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_c8 + 0x20))();
        }
      }
      uVar18 = 0;
      uVar17 = 0;
      goto joined_r0x02a76bb4;
    }
  }
  uVar9 = nn::fs::OpenFile((FileHandle *)(param_1 + 0xe0),(char *)__s,1);
  if (uVar9 == 0) {
    uVar9 = nn::fs::GetFileSize(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xe0));
    uVar18 = 0x100000001;
  }
  else {
    uVar18 = 0x100000000;
  }
  uVar17 = (ulong)uVar9;
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined1 *)(param_1 + 0x1e2) = 1;
joined_r0x02a76bb4:
  if (local_b8[0] != '\0') {
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_a0[0] != (long *)0x0) {
      (**(code **)(*local_a0[0] + 0x20))();
    }
  }
LAB_02a76bd8:
  auVar21._0_8_ = uVar18 | 0x100000000;
  auVar21._8_8_ = uVar17;
  return auVar21;
}


