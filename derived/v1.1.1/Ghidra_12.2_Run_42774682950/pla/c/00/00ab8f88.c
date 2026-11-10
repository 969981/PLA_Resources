/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab8f88; name: FUN_00ab8f88
 */


undefined4 FUN_00ab8f88(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined4 unaff_s8;
  undefined4 uVar20;
  undefined4 uVar21;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_68;
  
  local_88 = (long *)*param_1;
  if (local_88 != (long *)0x0) {
    lVar18 = local_88[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00aade28(local_80,&local_88);
  puVar5 = local_80[0];
  if (local_88 != (long *)0x0) {
    lVar18 = local_88[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
      puVar5 = local_80[0];
    }
  }
  local_80[0] = puVar5;
  if ((puVar5 == (undefined8 *)0x0) || (*(int *)((long)puVar5 + 0xc) == 0)) {
LAB_00ab9028:
    uVar20 = unaff_s8;
  }
  else {
    uVar21 = 0x3f000000;
    uVar20 = 0x3f000000;
    piVar1 = (int *)((long)puVar5 + 0xc);
    iVar12 = *(int *)((long)puVar5 + 0xc);
    do {
      plVar19 = (long *)puVar5[2];
      plVar15 = (long *)FUN_00a3edb8();
      unaff_s8 = 0x3f000000;
      if (plVar19 == (long *)0x0) goto LAB_00ab9028;
      while (plVar19 != plVar15) {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_00ab902c;
      }
      iVar13 = *piVar1;
      if (iVar13 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar10 = PTR_DAT_043794d0;
        puVar9 = PTR_DAT_043794c8;
        puVar8 = PTR_DAT_043794c0;
        puVar7 = PTR_DAT_043794b8;
        puVar6 = PTR_DAT_043794b0;
        if (cVar2 == '\0') {
          lVar18 = puVar5[3];
          if (lVar18 == 0) goto LAB_00ab9028;
          lVar16 = *(long *)(lVar18 + 0x158);
          if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
            piVar1 = (int *)(lVar16 + 0xc);
            iVar12 = *(int *)(lVar16 + 0xc);
            goto LAB_00ab9228;
          }
          bVar3 = false;
          uVar20 = 0x3f000000;
          goto joined_r0x00ab91d4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar13;
    } while (iVar13 != 0);
  }
LAB_00ab902c:
  bVar3 = false;
LAB_00ab9050:
  uVar21 = 0x3f000000;
  if (bVar3) {
    uVar21 = uVar20;
  }
  if (local_80[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80[0] + 1);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_68 = *local_80[0];
      FUN_02a44274(lVar18 + 0xd8,&local_68);
    }
  }
  return uVar21;
LAB_00ab9228:
  plVar15 = *(long **)(lVar16 + 0x10);
  if (((*puVar6 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar6), iVar13 != 0)) {
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar14;
        __cxa_guard_release(puVar10);
      }
      *(undefined **)puVar9 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar8);
    }
    *(undefined **)puVar7 = puVar9;
    __cxa_guard_release(puVar6);
  }
  while( true ) {
    if (plVar15 == (long *)0x0) goto LAB_00ab937c;
    if (plVar15 == (long *)puVar7) break;
    plVar15 = (long *)*plVar15;
  }
  iVar13 = *piVar1;
  if (iVar13 == iVar12) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 == 0) goto LAB_00ab937c;
      plVar15 = (long *)FUN_00ab974c(lVar16 + 0xa0,&local_68);
      if (plVar15 == (long *)0x0) {
        bVar3 = false;
        uVar20 = 0x3f000000;
      }
      else {
        bVar11 = (**(code **)(*plVar15 + 0xf0))();
        if (bVar11 < 4) {
          uVar21 = *(undefined4 *)(&DAT_03889ae0 + (long)(char)bVar11 * 4);
        }
        bVar3 = true;
        uVar20 = uVar21;
      }
      lVar17 = *(long *)(lVar16 + 8);
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*(long *)(lVar16 + -0x50) + 0x20))((long *)(lVar16 + -0x50));
      }
      if (bVar3) {
        bVar3 = true;
      }
      else {
LAB_00ab937c:
        bVar3 = false;
      }
joined_r0x00ab91d4:
      if ((long *)(lVar18 + -0x50) != (long *)0x0) {
        lVar16 = *(long *)(lVar18 + 8);
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*(long *)(lVar18 + -0x50) + 0x20))();
        }
      }
      goto LAB_00ab9050;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar13;
  if (iVar13 == 0) goto LAB_00ab937c;
  goto LAB_00ab9228;
}


