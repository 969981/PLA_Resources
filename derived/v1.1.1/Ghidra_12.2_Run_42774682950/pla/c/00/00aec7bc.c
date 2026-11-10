/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aec7bc; name: FUN_00aec7bc
 */


void FUN_00aec7bc(long param_1)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_04379e80;
  puVar5 = PTR_DAT_04379e78;
  lVar12 = *(long *)(param_1 + 0x1f0);
  if (lVar12 == 0) {
    return;
  }
  if (*(int *)(lVar12 + 0xc) == 0) {
    return;
  }
  piVar2 = (int *)(lVar12 + 0xc);
  iVar8 = *(int *)(lVar12 + 0xc);
  do {
    plVar15 = *(long **)(lVar12 + 0x10);
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_0095a420();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    while( true ) {
      if (plVar15 == (long *)0x0) {
        return;
      }
      if (plVar15 == (long *)puVar6) break;
      plVar15 = (long *)*plVar15;
    }
    iVar7 = *piVar2;
    if (iVar7 == iVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x18);
        plVar15 = (long *)(lVar12 + -0x50);
        if (lVar12 == 0) {
          return;
        }
        FUN_00aae1c0(&local_80,plVar15);
        puVar11 = local_80;
        if (local_80 == (undefined8 *)0x0) goto LAB_00aec8a0;
        if (*(int *)((long)local_80 + 0xc) == 0) goto LAB_00aec968;
        piVar2 = (int *)((long)local_80 + 0xc);
        iVar8 = *(int *)((long)local_80 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
LAB_00aec914:
  plVar14 = (long *)puVar11[2];
  lVar10 = FUN_00a3edb8();
  while( true ) {
    if (plVar14 == (long *)0x0) goto LAB_00aec968;
    if (plVar14 == (long *)lVar10) break;
    plVar14 = (long *)*plVar14;
  }
  iVar7 = *piVar2;
  if (iVar7 == iVar8) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      lVar10 = puVar11[3];
      plVar14 = (long *)0x0;
      puVar11 = local_80;
      if (lVar10 != 0) {
        plVar14 = (long *)(lVar10 + -0x50);
      }
      goto joined_r0x00aec960;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar7;
  if (iVar7 == 0) {
LAB_00aec968:
    plVar14 = (long *)0x0;
    puVar11 = local_80;
joined_r0x00aec960:
    local_80 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar11 + 1);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        puVar11[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_90 = *puVar11;
        FUN_02a44274(lVar10 + 0xd8,&local_90);
      }
    }
    if (plVar14 != (long *)0x0) {
      FUN_02a4754c(&local_80,PTR_DAT_0437a770);
      puVar11 = (undefined8 *)FUN_02a9b144(plVar14,&local_80);
      plVar13 = (long *)*puVar11;
      if (plVar13 != (long *)0x0) {
        plVar16 = plVar13 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (plVar13 != (long *)0x0) {
        if ((*(long *)(param_1 + 0x270) != 0) &&
           (plVar16 = *(long **)(*(long *)(param_1 + 0x270) + 0x30), plVar16 != (long *)0x0)) {
          pauVar1 = (undefined1 (*) [16])(plVar16 + 6);
          local_90 = *(undefined8 *)*pauVar1;
          local_70 = 0;
          local_68 = (long *)0x0;
          auVar17 = NEON_ext(*pauVar1,*pauVar1,8,1);
          local_80 = (undefined8 *)&DAT_cbf29ce484222645;
          puStack_78 = &DAT_03996322;
          uStack_88 = auVar17._0_8_;
          FUN_02b39cb4(plVar13,plVar16 + 2,&local_90,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            pauVar1 = (undefined1 (*) [16])(plVar16 + 6);
            local_90 = *(undefined8 *)*pauVar1;
            local_80 = (undefined8 *)&DAT_cbf29ce484222645;
            puStack_78 = &DAT_03996322;
            auVar17 = NEON_ext(*pauVar1,*pauVar1,8,1);
            uStack_88 = auVar17._0_8_;
            local_70 = 0;
            local_68 = (long *)0x0;
            FUN_02b39cb4(plVar13,plVar16 + 2,&local_90,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
          }
        }
        if ((*(long *)(param_1 + 0x250) != 0) &&
           (plVar16 = *(long **)(*(long *)(param_1 + 0x250) + 0x30), plVar16 != (long *)0x0)) {
          if ((undefined1 *)plVar16[2] != &DAT_cfb6c0f3820db5c2) {
            local_80 = (undefined8 *)&DAT_cbf29ce484222645;
            puStack_78 = &DAT_03996322;
            local_70 = 0;
            local_68 = (long *)0x0;
            FUN_02b3a038(plVar13,plVar16 + 2,plVar16 + 6,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
          }
          for (plVar16 = (long *)*plVar16; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
            if ((undefined1 *)plVar16[2] != &DAT_cfb6c0f3820db5c2) {
              local_80 = (undefined8 *)&DAT_cbf29ce484222645;
              puStack_78 = &DAT_03996322;
              local_70 = 0;
              local_68 = (long *)0x0;
              FUN_02b3a038(plVar13,plVar16 + 2,plVar16 + 6,&local_80);
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
        }
        if (*(long *)(param_1 + 0x230) != 0) {
          for (plVar16 = *(long **)(*(long *)(param_1 + 0x230) + 0x30); plVar16 != (long *)0x0;
              plVar16 = (long *)*plVar16) {
          }
        }
        plVar16 = plVar13 + 10;
        do {
          iVar8 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      lVar10 = plVar14[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
LAB_00aec8a0:
    lVar12 = *(long *)(lVar12 + 8);
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    return;
  }
  goto LAB_00aec914;
}


