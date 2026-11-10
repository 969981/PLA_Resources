/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061dd8c; name: FUN_0061dd8c
 */


/* WARNING: Removing unreachable block (ram,0x0061e1b0) */

void FUN_0061dd8c(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  long **local_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  long **local_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long **local_f0;
  long *plStack_e8;
  undefined8 ****local_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined8 local_98;
  long **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_3[1] == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)std::__shared_weak_count::lock();
    if ((plVar6 != (long *)0x0) && (*param_3 != 0)) {
      *(undefined1 *)(*param_3 + 0xf0) = 1;
      plVar1 = plVar6 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
      pplVar9 = (long **)*param_3;
      lVar11 = *param_2;
      plVar6 = (long *)param_3[1];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_230 = 0;
      local_238 = 0;
      uStack_288 = 0;
      local_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      local_270 = 0;
      local_250 = 0;
      uStack_248 = 0;
      uStack_220 = 0;
      local_228 = 0;
      FUN_0061f57c(&local_290,param_4 + 2);
      plVar14 = *(long **)(lVar11 + 0x198);
      puVar10 = *(undefined8 **)(lVar11 + 0x348);
      plVar7 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
      plVar7[2] = 0;
      plVar12 = plVar7 + 1;
      *plVar12 = 0;
      puVar4 = PTR_DAT_043753e0;
      plVar7[3] = (long)plVar14;
      plVar1 = plVar7 + 4;
      *plVar7 = (long)(puVar4 + 0x10);
      FUN_00782ef8(plVar1);
      plVar7[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar7 + 6,0,0);
      plVar7[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
      if (plVar7 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1d0,8);
      plVar8[2] = 0;
      plVar13 = plVar8 + 1;
      *plVar13 = 0;
      *plVar8 = (long)&PTR_LAB_04191fe0;
      plVar8[3] = (long)plVar14;
      FUN_007840dc();
      plVar8[4] = (long)&PTR_LAB_04192030;
      lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
      if (lVar11 == 0) {
        local_f0 = (long **)CONCAT44(local_f0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_f0,"");
      }
      FUN_00782cfc(plVar8 + 10,plVar1,0,lVar11,0x10000,1);
      *(undefined1 *)((long)plVar8 + 0x1c9) = 1;
      plVar8[0x35] = (long)plVar14;
      plVar8[0x36] = 0x10000;
      plVar8[10] = (long)&PTR_LAB_04192078;
      plVar8[0x37] = (long)plVar1;
      plVar8[0x38] = (long)plVar7;
      local_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1a0 = 0;
      local_1a8 = 0;
      uStack_190 = 0;
      local_198 = 0;
      local_210 = pplVar9;
      plStack_208 = plVar6;
      FUN_0061f57c(&uStack_200,&local_290);
      plStack_178 = plStack_208;
      local_180 = local_210;
      local_130 = 0;
      uStack_128 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      local_210 = (long **)0x0;
      plStack_208 = (long *)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_110 = 0;
      local_118 = 0;
      uStack_100 = 0;
      local_108 = 0;
      FUN_0061f57c(&uStack_170,&uStack_200);
      plStack_e8 = plStack_178;
      local_f0 = local_180;
      ppppuStack_d8 = (undefined8 ****)0x0;
      local_e0 = (undefined8 ****)0x0;
      local_98 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      local_a0 = 0;
      uStack_80 = 0;
      local_88 = (long **)0x0;
      local_180 = (long **)0x0;
      plStack_178 = (long *)0x0;
      uStack_70 = 0;
      local_78 = 0;
      FUN_0061f57c(&local_e0,&uStack_170);
      plVar8[0x24] = (long)plStack_e8;
      plVar8[0x23] = (long)local_f0;
      local_f0 = (long **)0x0;
      plStack_e8 = (long *)0x0;
      plVar8[0x2d] = 0;
      plVar8[0x2e] = 0;
      plVar8[0x26] = 0;
      plVar8[0x25] = 0;
      plVar8[0x28] = 0;
      plVar8[0x27] = 0;
      plVar8[0x2a] = 0;
      plVar8[0x29] = 0;
      plVar8[0x31] = 0;
      plVar8[0x30] = 0;
      plVar8[0x33] = 0;
      plVar8[0x32] = 0;
      FUN_0061f57c(plVar8 + 0x25,&local_e0);
      FUN_0061f3dc(&local_e0);
      if (plStack_e8 != (long *)0x0) {
        std::__shared_weak_count::__release_weak();
      }
      FUN_0061f3dc(&uStack_170);
      if (plStack_178 != (long *)0x0) {
        std::__shared_weak_count::__release_weak();
      }
      FUN_0061f3dc(&uStack_200);
      if (plStack_208 != (long *)0x0) {
        std::__shared_weak_count::__release_weak();
      }
      local_180 = (long **)0x0;
      plStack_178 = (long *)0x0;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_f0 = (long **)(plVar8 + 4);
      plStack_e8 = plVar8;
      (**(code **)*puVar10)(puVar10,&local_f0,&local_180);
      if (plStack_e8 != (long *)0x0) {
        plVar6 = plStack_e8 + 1;
        do {
          lVar11 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_178 != (long *)0x0) {
        plVar6 = plStack_178 + 1;
        do {
          lVar11 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      do {
        lVar11 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
      FUN_0061f3dc(&local_290);
      puVar5 = PTR_DAT_04373170;
      puVar4 = PTR_DAT_04373168;
      uStack_80 = 0;
      local_88 = (long **)0x0;
      pplVar9 = (long **)(PTR_DAT_04373168 + 0x10);
      plStack_e8 = (long *)(PTR_DAT_04373170 + 0x10);
      local_e0 = &local_e0;
      local_f0 = pplVar9;
      ppppuStack_d8 = local_e0;
      (**(code **)(*plVar1 + 0x10))(plVar1,&uStack_c8);
      local_88 = &plStack_e8;
      thunk_FUN_00783af0(&local_f0);
      local_f0 = pplVar9;
      FUN_00782f18(&plStack_e8);
      if (param_3[1] == 0) {
        plVar6 = (long *)0x0;
LAB_0061e3ac:
        plStack_e8 = (long *)0x0;
        local_e0 = (undefined8 ****)FUN_00612290();
        ppppuStack_d8 = (undefined8 ****)0x0;
        local_f0 = &plStack_e8;
        FUN_002a3b60(param_1,0,&DAT_03996322,&local_f0);
        FUN_02767254(&local_f0,plStack_e8);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            goto LAB_0061e410;
          }
        }
      }
      else {
        plVar6 = (long *)std::__shared_weak_count::lock();
        if ((plVar6 == (long *)0x0) || (*param_3 == 0)) goto LAB_0061e3ac;
        *(undefined1 *)(*param_3 + 0xf0) = 0;
        plVar1 = plVar6 + 1;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
        plStack_e8 = (long *)(puVar5 + 0x10);
        uStack_80 = 0;
        local_e0 = &local_e0;
        local_88 = (long **)0x0;
        local_f0 = (long **)(puVar4 + 0x10);
        ppppuStack_d8 = local_e0;
        (**(code **)(*(long *)*param_4 + 0x10))((long *)*param_4,&uStack_c8);
        local_88 = &plStack_e8;
        thunk_FUN_00783af0(&local_f0);
        local_f0 = (long **)(puVar4 + 0x10);
        FUN_00782f18(&plStack_e8);
        plVar6 = (long *)*param_4;
        plVar1 = (long *)param_4[1];
        *param_4 = 0;
        param_4[1] = 0;
        (**(code **)(*plVar6 + 0x30))(param_1);
        if (plVar1 != (long *)0x0) {
          plVar6 = plVar1 + 1;
          do {
            lVar11 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 != 0) goto LAB_0061e414;
          (**(code **)(*plVar1 + 0x10))(plVar1);
LAB_0061e410:
          std::__shared_weak_count::__release_weak();
        }
      }
LAB_0061e414:
      do {
        lVar11 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 != 0) {
        return;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
      goto LAB_0061e43c;
    }
  }
  if (*(char *)(param_4 + 0xc) == '\0') {
    *(undefined1 *)(param_4 + 0xc) = 1;
                    /* try { // try from 0061e32c to 0061e333 has its CatchHandler @ 0061e484 */
    (**(code **)(**(long **)(param_4[8] + 0x20) + 0x38))(*(long **)(param_4[8] + 0x20),0);
  }
  plStack_e8 = (long *)0x0;
  local_e0 = (undefined8 ****)FUN_00612290();
  ppppuStack_d8 = (undefined8 ****)0x0;
  local_f0 = &plStack_e8;
  FUN_002a3b60(param_1,0,&DAT_03996322,&local_f0);
  FUN_02767254(&local_f0,plStack_e8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar1 = plVar6 + 1;
  do {
    lVar11 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
LAB_0061e43c:
  std::__shared_weak_count::__release_weak();
  return;
}


