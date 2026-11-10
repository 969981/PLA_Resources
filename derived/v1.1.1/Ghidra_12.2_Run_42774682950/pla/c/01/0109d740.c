/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109d740; name: FUN_0109d740
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0109d740(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *local_88 [2];
  long *local_78;
  long local_70;
  long local_68;
  
  iVar7 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
  sVar6 = FUN_02c6f924(*(undefined8 *)(*param_1 + 0x98));
  if (iVar7 != 0x19c) {
    return 0;
  }
  FUN_00947cf8(&local_78,&DAT_03996322);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar11 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar11;
  plVar14 = *(long **)(lVar11 + 0xc0);
  if (plVar14 != (long *)0x0) {
    FUN_02a439f4(plVar14[0xb]);
  }
  local_68 = plVar14[0x18];
  local_70 = local_68 + plVar14[0x19] * 8;
  FUN_0109dce0(local_88,&local_68,&local_70);
  if (local_88[0] == (undefined8 *)(plVar14[0x18] + plVar14[0x19] * 8)) {
LAB_0109d874:
    if (local_78 != (long *)0x0) goto LAB_0109d87c;
LAB_0109da04:
    puVar12 = (ulong *)PTR_DAT_04379c88;
  }
  else {
    plVar17 = (long *)*local_88[0];
    puVar9 = (undefined8 *)(**(code **)plVar17[10])(plVar17 + 10);
    if (((*PTR_DAT_0437c678 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar7 != 0)) {
      uVar15 = FUN_009311a8();
      *(undefined8 *)PTR_DAT_0437c680 = uVar15;
      __cxa_guard_release(PTR_DAT_0437c678);
    }
    if (puVar9 == (undefined8 *)0x0) goto LAB_0109d874;
    do {
      if (puVar9 == (undefined8 *)PTR_DAT_0437c680) {
        FUN_02a439f4(plVar17[0xb]);
        plVar16 = plVar17;
        break;
      }
      puVar9 = (undefined8 *)*puVar9;
      plVar16 = (long *)0x0;
    } while (puVar9 != (undefined8 *)0x0);
    if (plVar16 == (long *)0x0) goto LAB_0109d874;
    FUN_01e564f8(local_88,plVar16);
    puVar9 = local_88[0];
    puVar5 = PTR_DAT_0437c670;
    puVar4 = PTR_DAT_0437c668;
    if (local_88[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_88[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_88[0] + 0xc);
        iVar7 = *(int *)((long)local_88[0] + 0xc);
        do {
          plVar17 = (long *)puVar9[2];
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar5 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar17 == (long *)0x0) goto LAB_0109dbc4;
            if (plVar17 == (long *)puVar5) break;
            plVar17 = (long *)*plVar17;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar7) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = puVar9[3];
              plVar17 = (long *)0x0;
              if (lVar11 != 0) {
                plVar17 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x0109db28;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar7 = iVar8;
        } while (iVar8 != 0);
      }
LAB_0109dbc4:
      plVar17 = (long *)0x0;
joined_r0x0109db28:
      if (local_88[0] != (undefined8 *)0x0) {
        FUN_02a43934();
      }
      if (plVar17 != (long *)0x0) {
        puVar9 = (undefined8 *)FUN_0196bd2c(plVar17);
        plVar18 = (long *)*puVar9;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x18))(plVar18);
        }
        if (local_78 != (long *)0x0) {
          lVar11 = *local_78;
          local_78 = plVar18;
          (**(code **)(lVar11 + 0x20))();
          plVar18 = local_78;
        }
        local_78 = plVar18;
        uVar10 = FUN_02a43a5c(plVar17[0xb]);
        if ((uVar10 & 1) != 0) {
          (**(code **)(*plVar17 + 0x20))(plVar17);
        }
      }
    }
    uVar10 = FUN_02a43a5c(plVar16[0xb]);
    if ((uVar10 & 1) == 0) goto LAB_0109d874;
    (**(code **)(*plVar16 + 0x20))(plVar16);
    if (local_78 == (long *)0x0) goto LAB_0109da04;
LAB_0109d87c:
    puVar12 = (ulong *)(local_78 + 0xb);
  }
  uVar10 = *puVar12;
  uVar15 = 0;
  if ((long)uVar10 < -0x1c4413fb859baafc) {
    if (uVar10 == 0xe3bbe8047a644e38) {
LAB_0109d990:
      if (sVar6 != 0) goto LAB_0109d9d0;
    }
    else {
      if (uVar10 == 0xe3bbea047a64519e) goto LAB_0109d9c4;
      uVar13 = 0xeb047a645351;
LAB_0109d944:
      if ((uVar10 == (uVar13 | 0xe3bb000000000000)) && (uVar15 = 2, sVar6 != 2)) goto LAB_0109d9d0;
    }
  }
  else {
    if ((long)uVar10 < -0x1c4411fb859ba796) {
      if (uVar10 != 0xe3bbec047a645504) {
        uVar13 = 0xed047a6456b7;
        goto LAB_0109d944;
      }
LAB_0109d9c4:
      uVar15 = 1;
      if (sVar6 == 1) goto LAB_0109d99c;
LAB_0109d9d0:
      FUN_02c62fcc(*param_1,uVar15,0);
      uVar15 = 1;
      goto joined_r0x0109d99c;
    }
    if ((uVar10 == 0xe3bbee047a64586a) || (uVar10 == 0xe3bbef047a645a1d)) goto LAB_0109d990;
  }
LAB_0109d99c:
  uVar15 = 0;
joined_r0x0109d99c:
  if ((plVar14 != (long *)0x0) && (uVar10 = FUN_02a43a5c(plVar14[0xb]), (uVar10 & 1) != 0)) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return uVar15;
}


