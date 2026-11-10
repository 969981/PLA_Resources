/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01479e24; name: FUN_01479e24
 */


void FUN_01479e24(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int param4;
  long *local_1a0;
  long *local_198;
  long lStack_190;
  long local_188;
  long *local_180;
  long *local_178;
  long lStack_170;
  long local_168;
  long *local_160;
  long *local_158;
  long lStack_150;
  long local_148;
  long *local_140;
  long *local_138;
  long lStack_130;
  long local_128;
  long *local_120;
  long *local_118;
  long lStack_110;
  long local_108;
  long *local_100;
  long *local_f8;
  long lStack_f0;
  long local_e8;
  long *local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long *local_c0;
  long local_b8 [9];
  long *local_68;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar2 = *(int *)(param_2 + 4);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_L_gauge_exp_00_gauge_scale",iVar2);
  local_118 = local_b8;
  FUN_009313e8(&local_f8,&local_118);
  plVar1 = local_f8;
  if (local_f8 == (long *)0x0) {
    local_d8 = *(long *)PTR_DAT_04379c88;
LAB_0147a818:
    lStack_d0 = *(long *)PTR_PTR_04379d00;
    if (local_f8 != (long *)0x0) goto LAB_01479eb4;
LAB_0147a828:
    local_c8 = 0;
  }
  else {
    local_d8 = local_f8[0xb];
    if (local_f8 == (long *)0x0) goto LAB_0147a818;
    lStack_d0 = local_f8[0xc];
    if (local_f8 == (long *)0x0) goto LAB_0147a828;
LAB_01479eb4:
    local_c8 = local_f8[0xd];
  }
  local_c0 = (long *)0x0;
  if (local_f8 == (long *)0x0) {
    local_c0 = local_f8;
  }
  else {
    (**(code **)(*local_f8 + 0x18))(local_f8);
    local_c0 = plVar1;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_d8);
  FUN_0283b748(0x42c80000,plVar11,&local_d8);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_lvup_reset",iVar2);
  local_138 = local_b8;
  FUN_009313e8(&local_118,&local_138);
  plVar9 = local_118;
  if (local_118 == (long *)0x0) {
    local_f8 = *(long **)PTR_DAT_04379c88;
LAB_0147a840:
    lStack_f0 = *(long *)PTR_PTR_04379d00;
    if (local_118 != (long *)0x0) goto LAB_01479f38;
LAB_0147a850:
    local_e8 = 0;
  }
  else {
    local_f8 = (long *)local_118[0xb];
    if (local_118 == (long *)0x0) goto LAB_0147a840;
    lStack_f0 = local_118[0xc];
    if (local_118 == (long *)0x0) goto LAB_0147a850;
LAB_01479f38:
    local_e8 = local_118[0xd];
  }
  local_e0 = (long *)0x0;
  if (local_118 == (long *)0x0) {
    local_e0 = local_118;
  }
  else {
    (**(code **)(*local_118 + 0x18))(local_118);
    local_e0 = plVar9;
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_f8);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_L_lvup_00_keep",iVar2);
  local_158 = local_b8;
  FUN_009313e8(&local_138,&local_158);
  plVar8 = local_138;
  if (local_138 == (long *)0x0) {
    local_118 = *(long **)PTR_DAT_04379c88;
LAB_0147a868:
    lStack_110 = *(long *)PTR_PTR_04379d00;
    if (local_138 != (long *)0x0) goto LAB_01479fa4;
LAB_0147a878:
    local_108 = 0;
  }
  else {
    local_118 = (long *)local_138[0xb];
    if (local_138 == (long *)0x0) goto LAB_0147a868;
    lStack_110 = local_138[0xc];
    if (local_138 == (long *)0x0) goto LAB_0147a878;
LAB_01479fa4:
    local_108 = local_138[0xd];
  }
  local_100 = (long *)0x0;
  if (local_138 == (long *)0x0) {
    local_100 = local_138;
  }
  else {
    (**(code **)(*local_138 + 0x18))(local_138);
    local_100 = plVar8;
    if (local_138 != (long *)0x0) {
      (**(code **)(*local_138 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_118);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_lv_exp_out_reset",iVar2);
  local_178 = local_b8;
  FUN_009313e8(&local_158,&local_178);
  plVar7 = local_158;
  if (local_158 == (long *)0x0) {
    local_138 = *(long **)PTR_DAT_04379c88;
LAB_0147a890:
    lStack_130 = *(long *)PTR_PTR_04379d00;
    if (local_158 != (long *)0x0) goto LAB_0147a010;
LAB_0147a8a0:
    local_128 = 0;
  }
  else {
    local_138 = (long *)local_158[0xb];
    if (local_158 == (long *)0x0) goto LAB_0147a890;
    lStack_130 = local_158[0xc];
    if (local_158 == (long *)0x0) goto LAB_0147a8a0;
LAB_0147a010:
    local_128 = local_158[0xd];
  }
  local_120 = (long *)0x0;
  if (local_158 == (long *)0x0) {
    local_120 = local_158;
  }
  else {
    (**(code **)(*local_158 + 0x18))(local_158);
    local_120 = plVar7;
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_138);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_info_add_in_reset",iVar2);
  local_198 = local_b8;
  FUN_009313e8(&local_178,&local_198);
  plVar6 = local_178;
  if (local_178 == (long *)0x0) {
    local_158 = *(long **)PTR_DAT_04379c88;
LAB_0147a8b8:
    lStack_150 = *(long *)PTR_PTR_04379d00;
    if (local_178 != (long *)0x0) goto LAB_0147a07c;
LAB_0147a8c8:
    local_148 = 0;
  }
  else {
    local_158 = (long *)local_178[0xb];
    if (local_178 == (long *)0x0) goto LAB_0147a8b8;
    lStack_150 = local_178[0xc];
    if (local_178 == (long *)0x0) goto LAB_0147a8c8;
LAB_0147a07c:
    local_148 = local_178[0xd];
  }
  local_140 = (long *)0x0;
  if (local_178 == (long *)0x0) {
    local_140 = local_178;
  }
  else {
    (**(code **)(*local_178 + 0x18))(local_178);
    local_140 = plVar6;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_158);
  snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_exp_in_reset",iVar2);
  local_68 = local_b8;
  FUN_009313e8(&local_198,&local_68);
  plVar5 = local_198;
  if (local_198 == (long *)0x0) {
    local_178 = *(long **)PTR_DAT_04379c88;
  }
  else {
    local_178 = (long *)local_198[0xb];
    if (local_198 != (long *)0x0) {
      lStack_170 = local_198[0xc];
      goto joined_r0x0147a0e4;
    }
  }
  lStack_170 = *(long *)PTR_PTR_04379d00;
joined_r0x0147a0e4:
  if (local_198 == (long *)0x0) {
    local_168 = 0;
  }
  else {
    local_168 = local_198[0xd];
  }
  local_160 = (long *)0x0;
  if (local_198 == (long *)0x0) {
    local_160 = local_198;
  }
  else {
    (**(code **)(*local_198 + 0x18))(local_198);
    local_160 = plVar5;
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x20))();
    }
  }
  FUN_0283b1e8(plVar11,&local_178);
  param4 = 0;
  do {
    snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_L_info_%02d_wake",iVar2,param4);
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a674:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a16c;
LAB_0147a684:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b1e8(plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a674;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a684;
LAB_0147a16c:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b1e8(plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a6b8:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a1ec;
LAB_0147a6c8:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b748(0,plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a6b8;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a6c8;
LAB_0147a1ec:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b748(0,plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_L_info_%02d_keep",iVar2,param4);
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a700:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a28c;
LAB_0147a710:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b1e8(plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a700;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a710;
LAB_0147a28c:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b1e8(plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a744:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a30c;
LAB_0147a754:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b748(0,plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a744;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a754;
LAB_0147a30c:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b748(0,plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    snprintf((char *)local_b8,0x40,"anime_L_result_plate_%02d_L_info_%02d_close",iVar2,param4);
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a78c:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a3ac;
LAB_0147a79c:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b1e8(plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a78c;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a79c;
LAB_0147a3ac:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b1e8(plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_1a0 = local_b8;
    FUN_009313e8(&local_68,&local_1a0);
    plVar10 = local_68;
    if (local_68 == (long *)0x0) {
      local_198 = *(long **)PTR_DAT_04379c88;
LAB_0147a7d0:
      lStack_190 = *(long *)PTR_PTR_04379d00;
      if (local_68 != (long *)0x0) goto LAB_0147a42c;
LAB_0147a7e0:
      local_188 = 0;
      local_180 = (long *)0x0;
      FUN_0283b748(0,plVar11,&local_198);
    }
    else {
      local_198 = (long *)local_68[0xb];
      if (local_68 == (long *)0x0) goto LAB_0147a7d0;
      lStack_190 = local_68[0xc];
      if (local_68 == (long *)0x0) goto LAB_0147a7e0;
LAB_0147a42c:
      local_188 = local_68[0xd];
      (**(code **)(*local_68 + 0x18))(local_68);
      local_180 = plVar10;
      FUN_0283b748(0,plVar11,&local_198);
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    param4 = param4 + 1;
    if (param4 == 3) {
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 10;
        do {
          iVar2 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar2;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      return;
    }
  } while( true );
}


