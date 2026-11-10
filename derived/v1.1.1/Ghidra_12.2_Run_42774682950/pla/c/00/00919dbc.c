/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00919dbc; name: FUN_00919dbc
 */


void FUN_00919dbc(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar11 = (long *)FUN_00954890();
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar16 = *plVar11;
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar10 = *(int *)(lVar16 + 0xc);
    do {
      plVar11 = *(long **)(lVar16 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar12;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_00919e14;
        if (plVar11 == (long *)puVar8) break;
        plVar11 = (long *)*plVar11;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar16 = *(long *)(lVar16 + 0x18);
          if (lVar16 != 0) {
            plVar15 = (long *)(lVar16 + -0x50);
            FUN_019a034c(&local_88,plVar15);
            plVar11 = local_88;
            puVar7 = PTR_DAT_04379c40;
            if (local_88 == (long *)0x0) goto LAB_0091a070;
            if (*(int *)((long)local_88 + 0xc) == 0) goto LAB_0091a280;
            piVar1 = (int *)((long)local_88 + 0xc);
            iVar10 = *(int *)((long)local_88 + 0xc);
            goto LAB_0091a11c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_00919e14;
LAB_0091a11c:
  do {
    plVar17 = (long *)plVar11[2];
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar6 = uVar12;
        __cxa_guard_release(puVar5);
      }
      *(undefined **)PTR_DAT_04379c48 = puVar6;
      __cxa_guard_release(puVar7);
    }
    while( true ) {
      if (plVar17 == (long *)0x0) goto LAB_0091a280;
      if (plVar17 == (long *)PTR_DAT_04379c48) break;
      plVar17 = (long *)*plVar17;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar14 = plVar11[3];
        plVar11 = (long *)0x0;
        plVar17 = local_88;
        if (lVar14 != 0) {
          plVar11 = (long *)(lVar14 + -0x50);
        }
        goto joined_r0x0091a168;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_0091a280:
  plVar11 = (long *)0x0;
  plVar17 = local_88;
joined_r0x0091a168:
  if (plVar17 != (long *)0x0) {
    plVar2 = plVar17 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar17[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (plVar11 != (long *)0x0) {
    FUN_018d1334(plVar11);
    FUN_0199bf50(plVar15);
    FUN_018d132c(plVar11);
    uVar13 = FUN_018d0dc0(plVar11);
    if ((uVar13 & 1) != 0) {
      FUN_018d0e7c(plVar11,1);
    }
    lVar14 = plVar11[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
LAB_0091a070:
  lVar16 = *(long *)(lVar16 + 8);
  piVar1 = (int *)(lVar16 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
LAB_00919e14:
  local_68 = param_1;
  uVar12 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
  uVar13 = FUN_008c26d4(uVar12,0x1e1);
  if ((uVar13 & 1) == 0) {
    uVar12 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
    uVar13 = FUN_008c26d4(uVar12,0x1e2);
    if ((uVar13 & 1) == 0) {
      uVar12 = FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
      uVar13 = FUN_008c26d4(uVar12,0x1e0);
      if ((uVar13 & 1) == 0) {
        FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
        uVar13 = FUN_008c27a4();
        if ((uVar13 & 1) == 0) {
          FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
          uVar13 = FUN_008c2ba8();
          if ((uVar13 & 1) == 0) {
            FUN_00923bb4(*(undefined8 *)(param_1 + 0x68));
            uVar13 = FUN_008c2c7c();
            if ((uVar13 & 1) == 0) {
              local_88 = (long *)0xa081da9d2fedad76;
              pcStack_80 = "SET_STATE_VS_END_CAPTURE";
              local_78 = 0x18;
              goto LAB_00919ea4;
            }
            pcStack_80 = "SET_STATE_BOSS05_END_CAPTURE";
            local_88 = (long *)0xe8acc77adbf7711b;
          }
          else {
            pcStack_80 = "SET_STATE_BOSS06_END_CAPTURE";
            local_88 = (long *)0xeb3f2f86a439498e;
          }
          local_78 = 0x1c;
        }
        else {
          local_88 = (long *)0xbe31e95b2e23738d;
          pcStack_80 = "SET_STATE_VS_BOSS_MID_END_CAPTURE";
          local_78 = 0x21;
        }
        goto LAB_00919ea4;
      }
      pcStack_80 = "SET_STATE_BOSS01_AREA05_END_CAPTURE";
      local_88 = (long *)0xcdae325524c05f20;
    }
    else {
      pcStack_80 = "SET_STATE_BOSS01_AREA02_END_CAPTURE";
      local_88 = (long *)0xb686ca2ca190c5bd;
    }
  }
  else {
    pcStack_80 = "SET_STATE_BOSS01_AREA01_END_CAPTURE";
    local_88 = (long *)0x8ec783fc10f9cb0c;
  }
  local_78 = 0x23;
LAB_00919ea4:
  local_70 = (long *)0x0;
  FUN_0091a2cc(&local_68,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


