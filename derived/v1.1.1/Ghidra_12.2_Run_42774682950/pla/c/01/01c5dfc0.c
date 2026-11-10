/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5dfc0; name: FUN_01c5dfc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c5dfc0(long param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  undefined1 local_118;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined4 local_84;
  long *local_80;
  undefined1 *puStack_78;
  byte local_70 [32];
  
  puVar12 = &DAT_cbf29ce484222645;
  snprintf((char *)local_70,0x20,"whitem_%d_%d_%d",(int)(float)*(undefined8 *)param_3,
           (int)(float)((ulong)*(undefined8 *)param_3 >> 0x20),
           (int)(float)*(undefined8 *)(param_3 + 2));
  if (local_70[0] != 0) {
    pbVar11 = (byte *)((ulong)local_70 | 1);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)local_70[0]) * 0x100000001b3);
      local_70[0] = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (local_70[0] != 0);
  }
  local_80 = (long *)0x0;
  fVar14 = (float)*param_2 - *param_3;
  fVar15 = (float)((ulong)*param_2 >> 0x20) - param_3[1];
  fVar16 = (float)param_2[1] - param_3[2];
  fVar17 = (float)((ulong)param_2[1] >> 0x20) - param_3[3];
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar16 = fVar16 * fVar16;
  fVar17 = fVar17 * fVar17;
  auVar18._4_4_ = fVar15;
  auVar18._0_4_ = fVar14;
  auVar18._8_4_ = fVar16;
  auVar18._12_4_ = fVar17;
  auVar4._4_4_ = fVar15;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = fVar17;
  auVar18 = NEON_ext(auVar18,auVar4,8,1);
  plVar13 = *(long **)(param_1 + 8);
  uStack_a8 = _UNK_03888fc8;
  local_b0 = _DAT_03888fc0;
  fVar14 = auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar15;
  local_84 = 1;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  puStack_78 = puVar12;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x100,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
  FUN_01ce79bc(plVar9,param_4,&local_84,param_3,&local_a0,&local_b0,&puStack_78,1,2,2500.0 <= fVar14
              );
  plVar9[1] = (long)plVar13;
  plVar9[2] = (long)plVar9;
  plVar9[3] = 0x100;
  plVar9[4] = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    plVar13 = local_80;
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_80 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      lVar8 = plVar13[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
  }
  local_80 = plVar9;
  if ((*(long *)(param_1 + 0x340) != 0) &&
     (FUN_018e4ba0(&local_a0), plVar13 = local_a0, local_a0 != (long *)0x0)) {
    local_140 = &LAB_01c651b0;
    local_138 = FUN_01c655bc;
    local_130 = &LAB_01c666d8;
    puStack_128 = &LAB_01c666e4;
    local_120 = param_1;
    local_118 = 2500.0 <= fVar14;
    FUN_01c61f24(&local_b8,local_a0,0xd,&local_80,&local_140,0);
    pcVar5 = local_138;
    if (local_b8 != (long *)0x0) {
      lVar8 = local_b8[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
        pcVar5 = local_138;
      }
    }
    local_138 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar5)(&local_120);
    }
    lVar8 = plVar13[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (local_80 != (long *)0x0) {
    lVar8 = local_80[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


