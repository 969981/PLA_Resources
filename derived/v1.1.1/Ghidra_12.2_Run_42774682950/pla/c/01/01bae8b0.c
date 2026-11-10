/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bae8b0; name: FUN_01bae8b0
 */


void FUN_01bae8b0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  long *local_a0;
  undefined1 auStack_98 [8];
  undefined8 *local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  puVar11 = PTR_DAT_043794d0;
  puVar10 = PTR_DAT_043794c8;
  puVar9 = PTR_DAT_043794b8;
  puVar8 = PTR_DAT_043794b0;
  lVar18 = *(long *)(param_1 + 0x1a8);
  cVar2 = DAT_0000033c;
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0xc) != 0)) {
    piVar1 = (int *)(lVar18 + 0xc);
    iVar13 = *(int *)(lVar18 + 0xc);
    do {
      plVar21 = *(long **)(lVar18 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar14 != 0)) {
          if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar16;
            __cxa_guard_release(puVar11);
          }
          *(undefined **)puVar10 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar9 = puVar10;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        cVar2 = DAT_0000033c;
        if (plVar21 == (long *)0x0) goto joined_r0x01baebc8;
        if (plVar21 == (long *)puVar9) break;
        plVar21 = (long *)*plVar21;
      }
      iVar14 = *piVar1;
      if (iVar14 == iVar13) {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar18 = *(long *)(lVar18 + 0x18);
          cVar2 = DAT_0000033c;
          if (lVar18 != 0) {
            cVar2 = *(char *)(lVar18 + 0x2ec);
            lVar19 = *(long *)(lVar18 + 8);
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar13 = iVar14;
      cVar2 = DAT_0000033c;
    } while (iVar14 != 0);
  }
joined_r0x01baebc8:
  if (cVar2 != '\0') {
    return;
  }
  FUN_01a4e8cc(param_1,param_2);
  if (*(int *)(param_1 + 0xbf0) != 0) {
    *(int *)(param_1 + 0xbf0) = *(int *)(param_1 + 0xbf0) + -1;
  }
  local_90 = (undefined8 *)0x0;
  pcStack_88 = (char *)0x0;
  FUN_00af7e30(&local_90,param_1 + 0x8a8);
  puVar20 = local_90;
  puVar9 = PTR_DAT_0437a558;
  puVar8 = PTR_DAT_0437a550;
  if (local_90 == (undefined8 *)0x0) {
LAB_01bae91c:
    bVar6 = 0;
  }
  else {
    if (*(int *)((long)local_90 + 0xc) != 0) {
      piVar1 = (int *)((long)local_90 + 0xc);
      iVar13 = *(int *)((long)local_90 + 0xc);
      do {
        plVar21 = (long *)puVar20[2];
        if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
          uVar16 = FUN_00aa0310();
          *(undefined8 *)puVar9 = uVar16;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar21 == (long *)0x0) goto LAB_01baed6c;
          if (plVar21 == (long *)puVar9) break;
          plVar21 = (long *)*plVar21;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar13) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_a0 = (long *)0x0;
            puVar7 = local_90;
            if (puVar20[3] != 0) {
              local_a0 = (long *)(puVar20[3] + -0x50);
            }
            goto joined_r0x01baecb8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_01baed6c:
    local_a0 = (long *)0x0;
    puVar7 = local_90;
joined_r0x01baecb8:
    local_90 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar7 + 1);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        puVar7[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_68 = (long *)*puVar7;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    if (local_a0 == (long *)0x0) goto LAB_01bae91c;
    FUN_00a9ecd4(&local_90,local_a0);
    puVar7 = local_90;
    puVar12 = PTR_DAT_0437a130;
    puVar11 = PTR_DAT_0437a128;
    puVar10 = PTR_DAT_043795e0;
    puVar9 = PTR_DAT_043795d8;
    puVar8 = PTR_DAT_043794d0;
    if (local_90 == (undefined8 *)0x0) {
LAB_01baed30:
      bVar6 = 0;
    }
    else {
      if (*(int *)((long)local_90 + 0xc) != 0) {
        piVar1 = (int *)((long)local_90 + 0xc);
        iVar13 = *(int *)((long)local_90 + 0xc);
        do {
          plVar21 = (long *)puVar7[2];
          if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
              if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
                uVar16 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar16;
                __cxa_guard_release(puVar8);
              }
              *(undefined **)puVar10 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar12 = puVar10;
            __cxa_guard_release(puVar11);
          }
          while( true ) {
            if (plVar21 == (long *)0x0) goto LAB_01baf054;
            if (plVar21 == (long *)puVar12) break;
            plVar21 = (long *)*plVar21;
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar13) {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar18 = puVar7[3];
              plVar21 = (long *)0x0;
              puVar20 = local_90;
              if (lVar18 != 0) {
                plVar21 = (long *)(lVar18 + -0x50);
              }
              goto joined_r0x01baee50;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar13 = iVar14;
        } while (iVar14 != 0);
      }
LAB_01baf054:
      plVar21 = (long *)0x0;
      puVar20 = local_90;
joined_r0x01baee50:
      local_90 = puVar20;
      if (puVar20 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar20 + 1);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          puVar20[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar18 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar18;
          local_68 = (long *)*puVar20;
          FUN_02a44274(lVar18 + 0xd8,&local_68);
        }
      }
      if (plVar21 == (long *)0x0) goto LAB_01baed30;
      local_90 = (undefined8 *)&DAT_afc4d6c05abef19e;
      pcStack_88 = "default";
      local_80 = 7;
      local_78 = (long *)0x0;
      lVar18 = FUN_0289e9f4(plVar21,&local_90);
      if (lVar18 == 0) {
        local_68 = (long *)0x0;
      }
      else {
        FUN_009cda48(&local_68,lVar18,auStack_98);
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_68 == (long *)0x0) {
        bVar4 = false;
      }
      else {
        local_90 = (undefined8 *)0x48c03aea0c45a719;
        pcStack_88 = "face_control_disable";
        local_80 = 0x14;
        local_78 = (long *)0x0;
        uVar15 = FUN_017f1ff0(local_68,&local_90);
        puVar20 = (undefined8 *)(uVar15 & 0xffffffff);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          lVar18 = local_68[0xb];
          piVar1 = (int *)(lVar18 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 == 1) {
            *(undefined8 *)(lVar18 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        bVar4 = true;
      }
      lVar18 = plVar21[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      if (!bVar4) goto LAB_01baed30;
      bVar6 = 1;
    }
    if (local_a0 != (long *)0x0) {
      lVar18 = local_a0[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
  uVar15 = *(ulong *)(param_1 + 0xb50) | 1;
  if (((uint)puVar20 & (uint)bVar6) == 0) {
    uVar15 = *(ulong *)(param_1 + 0xb50) & 0xfffffffffffffffe;
  }
  *(ulong *)(param_1 + 0xb50) = uVar15;
  if ((uVar15 & 1) == 0) {
    FUN_01a51334(param_1,&DAT_03a7ca60,*(undefined4 *)(param_1 + 0xb80));
    FUN_01a51334(param_1,&DAT_03a7ca68,*(undefined4 *)(param_1 + 0xb88));
    if (*(char *)(param_1 + 0xbfc) != '\0') {
      FUN_01a5bd74(param_1,&DAT_03a7ca70,1);
      fVar24 = *(float *)(param_1 + 0xc00);
      fVar23 = *(float *)(param_1 + 0xc04);
      fVar22 = -1.0;
      if ((-1.0 <= fVar24) && (fVar22 = fVar24, 1.0 < fVar24)) {
        fVar22 = 1.0;
      }
      fVar24 = -1.0;
      if ((-1.0 <= fVar23) && (fVar24 = fVar23, 1.0 < fVar23)) {
        fVar24 = 1.0;
      }
      goto LAB_01bae9b4;
    }
  }
  else {
    FUN_01a51334(param_1,&DAT_03a7ca60,0);
    FUN_01a51334(param_1,&DAT_03a7ca68,0);
  }
  FUN_01a5bd74(param_1,&DAT_03a7ca70,0);
  fVar22 = 0.0;
  fVar24 = 0.0;
LAB_01bae9b4:
  FUN_01a50188(fVar22,param_1,&DAT_03a7cac0);
  FUN_01a50188(fVar24,param_1,&DAT_03a7cac8);
  if ((((*(byte *)(param_1 + 0xb50) & 1) == 0) && ((*(byte *)(param_1 + 0xb58) & 1) == 0)) &&
     ((*(char *)(param_1 + 0xbf4) != '\0' || (*(int *)(param_1 + 0xbf0) != 0)))) {
    uVar17 = *(undefined4 *)(param_1 + 0xbf8);
  }
  else {
    uVar17 = 0;
  }
  FUN_01a51334(param_1,&DAT_03a7ca78,uVar17);
  return;
}


