/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cafe44; name: FUN_02cafe44
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_02cafe44(long param_1,long *param_2,long param_3,long param_4,int param_5)

{
  int *piVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar17 = *(long *)(param_1 + 0x50);
  if (lVar17 == 0) {
    return 0xffffffffffffffff;
  }
  if (9 < *(ulong *)(*(long *)(lVar17 + 0x20) + 0x28)) {
    return 0xffffffffffffffff;
  }
  plVar16 = *(long **)(param_1 + 8);
  puVar8 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x38,8);
  puVar4 = PTR_DAT_04379520;
  if (puVar8 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    local_88 = 0;
    local_80 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    puVar5 = PTR_DAT_04379528;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_02cb0604:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar16;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    DAT_04407c6c = DAT_04407c6c + 1;
    uVar14 = (ulong)DAT_04407c6c;
    *puVar8 = &PTR_FUN_04295bb0;
    puVar8[1] = uVar14;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 2) = 1;
    plVar15 = puVar8 + 3;
    *plVar15 = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02cb0604;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x490,0x10);
    if (puVar11 == (undefined8 *)0x0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
      FUN_02a48e80(0,0x6000);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_02a48e80(puVar11,0x6000);
    puVar11[0x82] = 0;
    *puVar11 = &PTR_LAB_04295be0;
    puVar11[1] = plVar16;
    *(undefined4 *)(puVar11 + 0x83) = 0;
    *(undefined1 *)((long)puVar11 + 0x41c) = 0;
    puVar11[9] = &PTR_LAB_04295c50;
    puVar11[10] = &PTR_LAB_04295c98;
    *(undefined8 *)((long)puVar11 + 0x47c) = 0;
    *(undefined8 *)((long)puVar11 + 0x481) = 0;
    *(undefined8 *)((long)puVar11 + 0x45c) = 0;
    *(undefined8 *)((long)puVar11 + 0x464) = 0;
    *(undefined8 *)((long)puVar11 + 0x46c) = 0;
    *(undefined8 *)((long)puVar11 + 0x474) = 0;
    puVar11[4] = 0x10;
    puVar11[2] = puVar11;
    puVar11[3] = 0x490;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = puVar11[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02cb05ec;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar13 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar13 != (long *)0x0) {
      lVar10 = plVar13[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    puVar8[3] = puVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    local_80 = 8;
    local_88 = 0x38;
  }
  local_98 = puVar8;
  local_90 = plVar16;
  FUN_02cb1430(*(undefined8 *)(lVar17 + 0x20),&local_98);
  puVar11 = local_98;
  local_98 = (undefined8 *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_02bcbe58(auStack_78,0);
    (**(code **)*puVar11)(puVar11);
    uVar6 = local_80;
    uVar12 = local_88;
    plVar16 = local_90;
    uVar14 = (**(code **)(*local_90 + 0xc0))(local_90);
    lVar17 = tpidr_el0;
    if ((uVar14 & 1) == 0) {
LAB_02cb00f4:
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar11,uVar12,uVar6);
    }
    else {
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02cb00f4;
      FUN_02bcc824(plVar16,puVar11,uVar12,uVar6);
    }
    if (*(char *)(lVar17 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar17 + 0x38d488) = 1;
      *(undefined8 *)(lVar17 + 0x38d478) = 0;
      *(undefined8 *)(lVar17 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar17 + 0x38d480) + -1;
    *(int *)(lVar17 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar17 + 0x38d484) = 0;
    }
  }
  if (puVar8 == (undefined8 *)0x0) {
    return 0xffffffffffffffff;
  }
  __s = (char *)(puVar8[3] + 0x41c);
  *(int *)(puVar8[3] + 0x45c) = param_5;
  if ((param_4 == 0) || (param_5 == 2)) {
    *__s = '\0';
    param_2 = (long *)*param_2;
  }
  else {
    snprintf(__s,0x3f,"%s",param_4);
    param_2 = (long *)*param_2;
  }
  if (param_2 != (long *)0x0) {
    lVar17 = param_2[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02cb05ec;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_008802f0(&local_b0,param_3);
  local_a0 = *(undefined8 *)(param_3 + 0x10);
  lVar17 = puVar8[3];
  if (param_2 != (long *)0x0) {
    lVar9 = param_2[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = param_2[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_02cb0268;
      }
    }
LAB_02cb05ec:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_02cb0268:
  plVar16 = *(long **)(lVar17 + 0x410);
  *(long **)(lVar17 + 0x410) = param_2;
  if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  if (param_2 != (long *)0x0) {
    lVar17 = param_2[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  FUN_008802f0(puVar8 + 4,&local_b0);
  puVar11 = local_b0;
  puVar8[6] = local_a0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_b0 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_98 = (undefined8 *)*puVar11;
      FUN_02a44274(lVar17 + 0xd8,&local_98);
    }
  }
  if (param_2 != (long *)0x0) {
    lVar17 = param_2[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*param_2 + 0x20))(param_2);
    }
  }
  return puVar8[1];
}


