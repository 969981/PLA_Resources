/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b01868; name: FUN_02b01868
 */


void FUN_02b01868(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  long local_70 [2];
  
  local_80 = 1;
  FUN_02b5ab10(&DAT_043ef568,param_1 + 0x58,&local_80,10,10);
  FUN_02b5afe0(local_108,&DAT_043ef568,10,10);
  plVar14 = (long *)(param_1 + 0xa0);
  plVar8 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(undefined1 (*) [8])(param_1 + 0xa0) = local_108;
  *(undefined4 *)(param_1 + 0xa8) = 0x21c;
  lVar12 = DAT_043ef568;
  puVar5 = PTR_DAT_04379520;
  plVar8 = *(long **)(DAT_043ef568 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40a8,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_02bbfbb4(puVar10,lVar12);
    *puVar10 = &PTR_LAB_04283580;
    puVar10[1] = plVar8;
    puVar10[2] = puVar10;
    puVar10[3] = 0x40a8;
    puVar10[9] = &PTR_LAB_042835c0;
    puVar10[4] = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (puVar10 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      piVar2 = (int *)(puVar10 + 10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar11 = puVar10;
    }
    local_f8 = (ulong)local_f8._4_4_ << 0x20;
    local_108 = (undefined1  [8])0x4000;
    local_100 = (char *)0x100;
    FUN_02bbfe84(puVar11,local_108,2,0,0);
    plVar8 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar10;
    lVar12 = DAT_043ef568;
    plVar8 = *(long **)(DAT_043ef568 + 8);
    if (((*puVar5 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x40a8,8);
      if (puVar10 == (undefined8 *)0x0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_02bbfbb4(puVar10,lVar12);
      *puVar10 = &PTR_LAB_042835f0;
      puVar10[1] = plVar8;
      puVar10[2] = puVar10;
      puVar10[3] = 0x40a8;
      puVar10[9] = &PTR_LAB_04283630;
      puVar10[4] = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (puVar10 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        piVar2 = (int *)(puVar10 + 10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar11 = puVar10;
      }
      local_f8 = local_f8 & 0xffffffff00000000;
      local_108 = (undefined1  [8])0x4000;
      local_100 = (char *)0x100;
      FUN_02bbfe84(puVar11,local_108,2,0,0);
      plVar8 = *(long **)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(undefined8 **)(param_1 + 0xb8) = puVar10;
      local_108 = (undefined1  [8])0xc1df119e63c556a;
      local_100 = "LightPrepare";
      local_f8 = 0x1f;
      local_f0 = (long *)0x0;
      local_a0 = 0x339696b96823f8af;
      pcStack_98 = "[Point Light]";
      local_90 = 0xd;
      local_88 = (long *)0x0;
      local_70[0] = DAT_043ef598;
      lVar12 = FUN_02b5a848(auStack_78,*(undefined8 *)(DAT_043ef598 + 8),local_70,&local_a0);
      if (lVar12 != 0) {
        piVar2 = (int *)(lVar12 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*local_100 != '\0') {
        FUN_02bba5e0(local_70,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x58) + 0x58) + 0x78),
                     local_108);
        plVar8 = *(long **)(lVar12 + 0x68);
        *(undefined8 *)(lVar12 + 0x68) = 0;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar7 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        *(long *)(lVar12 + 0x68) = local_70[0];
      }
      plVar8 = *(long **)(param_1 + 0xc0);
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar7 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(long *)(param_1 + 0xc0) = lVar12;
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      lVar12 = *(long *)(param_1 + 0xc0);
      FUN_02bb7a60(*(undefined8 *)(lVar12 + 0x60),0,param_1 + 0x90);
      FUN_02b58d1c(lVar12,param_1 + 0x58,1);
      FUN_02ba5aac(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60),plVar14,0x10);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60);
      local_108 = *(undefined1 (*) [8])(param_1 + 0xb0);
      if (local_108 != (undefined1  [8])0x0) {
        plVar8 = (long *)((long)local_108 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = (int)*plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_02bb11cc(uVar13,1,10,local_108);
      if (local_108 != (undefined1  [8])0x0) {
        plVar8 = (long *)((long)local_108 + 0x50);
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*(long *)local_108 + 0x10))();
        }
      }
      local_108 = *(undefined1 (*) [8])(param_1 + 0xb8);
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60);
      if (local_108 != (undefined1  [8])0x0) {
        plVar8 = (long *)((long)local_108 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = (int)*plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_02bb11cc(uVar13,1,0xb,local_108);
      if (local_108 != (undefined1  [8])0x0) {
        plVar8 = (long *)((long)local_108 + 0x50);
        do {
          iVar7 = (int)*plVar8 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *(int *)plVar8 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*(long *)local_108 + 0x10))();
        }
      }
      local_c0 = 0xef2fed89a983fbd7;
      pcStack_b8 = "LightType";
      local_b0 = 0x1f;
      local_a8 = (long *)0x0;
      local_e0 = 0xff3b6436877936f1;
      pcStack_d8 = "Point";
      local_d0 = 5;
      local_c8 = (long *)0x0;
      FUN_02b62868(*param_2,&local_c0,&local_e0);
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      FUN_02b62410(*param_2);
      lVar12 = *param_2;
      lVar9 = *(long *)(param_1 + 0xc0);
      local_108 = (undefined1  [8])((ulong)local_108 & 0xffffffffffffff00);
      if (*(char *)(lVar12 + 0x118) != '\0') {
        local_100 = *(char **)(lVar12 + 0x120);
        local_f8 = *(undefined8 *)(lVar12 + 0x128);
        local_f0 = *(long **)(lVar12 + 0x130);
        local_e8 = *(long **)(lVar12 + 0x138);
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x18))();
        }
        local_108[0] = 1;
      }
      FUN_02ba7ba0(*(undefined8 *)(lVar9 + 0x60),0,local_108);
      if (local_108[0] != '\0') {
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x20))();
        }
        local_108 = (undefined1  [8])((ulong)local_108 & 0xffffffffffffff00);
      }
      FUN_02bb27d4(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60),1,1);
      FUN_02bb32fc(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60),1);
      FUN_02bb3e04(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60),4);
      FUN_02bb3880(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60),0);
      lVar12 = *(long *)(param_1 + 0xc0);
      FUN_02bb5928(*(undefined8 *)(lVar12 + 0x60),0,1);
      uVar13 = *(undefined8 *)(lVar12 + 0x60);
      lVar12 = *(long *)(*(long *)(lVar12 + 0x58) + 0x60);
      if (*(char *)(lVar12 + 0x148) == '\0') {
        _local_108 = FUN_02b5a9b8(lVar12,0,4,0);
        *(undefined1 (*) [16])(lVar12 + 0x148) = _local_108;
      }
      else {
        _local_108 = *(undefined1 (*) [16])(lVar12 + 0x148);
      }
      FUN_02bb66c0(uVar13,0,local_108);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


