/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4ef20; name: FUN_01c4ef20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4ef20(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [100];
  undefined1 local_14c [4];
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  long *local_140;
  char *pcStack_138;
  char *local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  char *apcStack_e0 [4];
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  long *local_58;
  
  *param_1 = 0;
  FUN_00956dac(&local_58,param_3);
  if (local_58 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_2 + 600) == 0) goto joined_r0x01c4ef6c;
  FUN_018e4ba0(&local_a0);
  plVar7 = local_a0;
  bVar4 = local_a0 == (long *)0x0;
  local_a0 = (long *)0x0;
  if (bVar4) goto joined_r0x01c4ef6c;
  local_a0 = (long *)0x7bad9a07cf9720b2;
  local_98 = "bin/effect/field/particle/warp_area/poke_obj/ef_warp_area_s_poke01_st.ptcl";
  uStack_90 = 0x4a;
  local_88 = 0xcbede65a22c380d8;
  pcStack_80 = "bin/effect/field/particle/warp_area/poke_obj/ef_warp_area_m_poke01_st.ptcl";
  local_78 = 0x4a;
  uStack_70 = 0x9a4abecf96cc4b65;
  local_68 = "bin/effect/field/particle/warp_area/poke_obj/ef_warp_area_l_poke01_st.ptcl";
  uStack_60 = 0x4a;
  local_e8 = (long *)0x3b005ee805d71f9;
  apcStack_e0[0] = "PLAY_STDISTORTION_CONTENTS_POP_S";
  apcStack_e0[1] = (char *)0x20;
  apcStack_e0[2] = (char *)0x3b01fee805d9e27;
  apcStack_e0[3] = "PLAY_STDISTORTION_CONTENTS_POP_M";
  uStack_c0 = 0x20;
  local_b8 = 0x3b01eee805d9c74;
  local_b0 = "PLAY_STDISTORTION_CONTENTS_POP_L";
  uStack_a8 = 0x20;
  lVar10 = FUN_00ab346c(local_58 + 0x1e,&local_140);
  if (lVar10 == 0) {
LAB_01c4f0bc:
    lVar10 = 0;
  }
  else {
    local_140 = (long *)0x0;
    pcStack_138 = (char *)0x0;
    FUN_00b182e0(&local_140,lVar10 + 0x4d0);
    plVar5 = local_140;
    if (local_140 == (long *)0x0) goto LAB_01c4f0bc;
    if (*(int *)((long)local_140 + 0xc) != 0) {
      piVar1 = (int *)((long)local_140 + 0xc);
      iVar9 = *(int *)((long)local_140 + 0xc);
      do {
        plVar12 = (long *)plVar5[2];
        lVar10 = FUN_00ab5048();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01c4f290;
          if (plVar12 == (long *)lVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar3 = *piVar1;
        if (iVar3 == iVar9) {
          cVar8 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') {
            lVar10 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar12 = local_140;
            if (lVar10 != 0) {
              plVar5 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01c4f288;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
      } while (iVar3 != 0);
    }
LAB_01c4f290:
    plVar5 = (long *)0x0;
    plVar12 = local_140;
joined_r0x01c4f288:
    local_140 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar2 = plVar12 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar8 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar9 == 0) {
        plVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_110 = *plVar12;
        FUN_02a44274(lVar10 + 0xd8,&local_110);
      }
    }
    if (plVar5 == (long *)0x0) goto LAB_01c4f0bc;
    cVar8 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    if ((byte)(cVar8 - 1U) < 3) {
      lVar10 = *(long *)(&DAT_03a7cd60 + (long)(char)(cVar8 - 1U) * 8);
    }
    else {
      lVar10 = 0;
    }
    lVar11 = plVar5[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  local_140 = (&local_e8)[lVar10 * 3];
  pcStack_138 = apcStack_e0[lVar10 * 3];
  local_130 = apcStack_e0[lVar10 * 3 + 1];
  local_110 = 0;
  uStack_108 = 0;
  local_128 = (long *)0x0;
  local_144[0] = 1;
  local_148[0] = 1;
  local_14c[0] = 1;
  uStack_118 = _UNK_03888fc8;
  local_120 = _DAT_03888fc0;
  FUN_01c4f3a0(&local_f8,*(undefined8 *)(param_2 + 8),param_4,&local_110,&local_120,
               &local_a0 + lVar10 * 3,&local_140,local_144,local_148,local_14c);
  local_f0 = local_f8;
  local_f8 = (long *)0x0;
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  FUN_00bdc73c(&local_140,plVar7,0xc,&local_f0,&local_1d0,0);
  plVar5 = local_140;
  pcVar6 = local_1c8;
  local_140 = (long *)0x0;
  *param_1 = plVar5;
  if (local_1c8 == (code *)0x0) {
    local_1c8 = (code *)0x0;
  }
  else {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar6)(auStack_1b0);
  }
  if (local_f0 != (long *)0x0) {
    lVar10 = local_f0[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_f0 + 0x20))();
    }
  }
  lVar10 = plVar7[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar8 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
joined_r0x01c4ef6c:
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar8 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


