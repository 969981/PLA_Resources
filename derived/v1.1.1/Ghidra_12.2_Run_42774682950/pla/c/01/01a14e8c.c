/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a14e8c; name: FUN_01a14e8c
 */


void FUN_01a14e8c(long *param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 in_q3 [16];
  long lVar19;
  long *local_b0;
  long *local_a8;
  undefined1 local_a0 [16];
  long *local_90;
  long lStack_88;
  
  puVar5 = PTR_DAT_04379578;
  lVar19 = in_q3._8_8_;
  lVar18 = in_q3._0_8_;
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  lVar12 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar12;
  lVar12 = *(long *)(lVar12 + 200);
  uVar9 = FUN_00ab0c78();
  if ((uVar9 & 1) == 0) {
    plVar13 = (long *)**(long **)(lVar12 + 0xd0);
    if ((*(ulong *)(lVar12 + 0xd8) & *(ulong *)(lVar12 + 0xd8) - 1) == 0) {
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != 0);
      } while (*(int *)(plVar13 + 2) != 0);
    }
    else {
      do {
        do {
          plVar13 = (long *)*plVar13;
        } while (plVar13[1] != 0);
      } while ((int)plVar13[2] != 0);
    }
    plVar13 = (long *)plVar13[3];
    if (plVar13 == (long *)0x0) {
      local_b0 = (long *)0x0;
    }
    else {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_01a153c8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar15 = plVar13[0xb];
      local_b0 = plVar13;
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01a153c8;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_01a4ad9c(param_1,&local_b0);
    if (local_b0 != (long *)0x0) {
      lVar15 = local_b0[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        pcVar14 = *(code **)(*plVar13 + 0x20);
        local_a8 = plVar13;
LAB_01a152d4:
        (*pcVar14)(local_a8);
      }
    }
  }
  else {
    FUN_00ab0f5c(&local_a8);
    FUN_01a4ad9c(param_1,&local_a8);
    if (local_a8 != (long *)0x0) {
      lVar15 = local_a8[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        pcVar14 = *(code **)(*local_a8 + 0x20);
        goto LAB_01a152d4;
      }
    }
  }
  for (plVar13 = *(long **)(lVar12 + 0x98); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (*(int *)(plVar13 + 4) != 0) {
      uVar11 = *(undefined1 *)(plVar13 + 2);
      goto LAB_01a15004;
    }
  }
  uVar11 = 0x1f;
LAB_01a15004:
  FUN_01a153e0(param_1,0,2,uVar11);
  param_1[0x1da8] = 1;
  param_1[0x1dab] = 0;
  param_1[0x1daa] = 0;
  *(undefined4 *)(param_1 + 0x1dae) = 0x40400000;
  *(undefined1 *)((long)param_1 + 0xed74) = 0;
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379578), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
  *(undefined4 *)((long)param_1 + 0xed6c) = 0;
  *(undefined4 *)(param_1 + 0x1dad) = 0;
  *(undefined4 *)((long)param_1 + 0xed64) = 0;
  *(undefined4 *)(param_1 + 0x1dac) = 0;
  for (plVar13 = *(long **)(lVar12 + 0x98); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    if (*(int *)(plVar13 + 4) == 0) {
      uVar11 = *(undefined1 *)(plVar13 + 2);
      goto LAB_01a1508c;
    }
  }
  uVar11 = 0x1f;
LAB_01a1508c:
  FUN_01a153e0(param_1,2,2,uVar11);
  FUN_01a163a8(param_1,0);
  iVar8 = *(int *)((long)param_1 + 0xecf4);
  if (iVar8 == 0) {
    if ((char)param_1[0x6e] == '\0') goto LAB_01a150b8;
LAB_01a15154:
    lVar12 = param_1[0x69];
    plVar13 = (long *)param_1[0x68];
    bVar2 = *puVar5;
  }
  else {
    *(int *)((long)param_1 + 0xecf4) = 0;
    *(int *)(param_1 + 0x1d9f) = iVar8;
    if ((char)param_1[0x6e] != '\0') goto LAB_01a15154;
LAB_01a150b8:
    local_a0 = FUN_01a4b7e0(param_1);
    FUN_01831870(&local_90,param_1 + 0x68,local_a0);
    bVar2 = *puVar5;
    plVar13 = local_90;
    lVar12 = lStack_88;
  }
  if ((bVar2 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar8 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  lVar15 = *(long *)puVar6;
  *(long *)puVar7 = lVar15;
  lVar15 = *(long *)(lVar15 + 200);
  uVar17 = *(undefined8 *)(lVar15 + 0x538);
  uVar10 = *(undefined8 *)(lVar15 + 0x530);
  param_1[0x1dcf] =
       CONCAT44((float)((ulong)lVar12 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                (float)lVar12 - (float)uVar17);
  param_1[0x1dce] =
       CONCAT44((float)((ulong)plVar13 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                SUB84(plVar13,0) - (float)uVar10);
  if ((char)param_1[0x6e] == '\0') {
    FUN_009c69bc(&local_90,param_1);
    (**(code **)(*local_90 + 0x40))();
    if (local_90 != (long *)0x0) {
      lVar12 = local_90[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
        bVar2 = *puVar5;
        goto joined_r0x01a15260;
      }
    }
    bVar2 = *puVar5;
  }
  else {
    lVar19 = param_1[0x6b];
    lVar18 = param_1[0x6a];
    bVar2 = *puVar5;
  }
joined_r0x01a15260:
  if ((bVar2 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379578);
    if (iVar8 != 0) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  lVar12 = *(long *)(lVar12 + 200);
  uVar17 = *(undefined8 *)(lVar12 + 0x538);
  uVar10 = *(undefined8 *)(lVar12 + 0x530);
  param_1[0x1dcd] =
       CONCAT44((float)((ulong)lVar19 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                (float)lVar19 - (float)uVar17);
  param_1[0x1dcc] =
       CONCAT44((float)((ulong)lVar18 >> 0x20) - (float)((ulong)uVar10 >> 0x20),
                (float)lVar18 - (float)uVar10);
  *(undefined1 *)(param_1 + 0x1db8) = 1;
  *(undefined1 *)((long)param_1 + 0x3e2) = 1;
  *(undefined1 *)(param_1 + 0x1de4) = 1;
  lVar18 = param_1[0x6c];
  fVar16 = (float)FUN_01904460(*(undefined4 *)((long)param_1 + 0x364),param_1 + 0xb6);
  param_1[0xe0] = (long)(double)fVar16;
  FUN_01a1656c((int)lVar18,0xbf800000,0,param_1,5,0,1);
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}


