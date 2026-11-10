/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ccc43c; name: FUN_02ccc43c
 */


void FUN_02ccc43c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_168;
  in_addr aiStack_160 [8];
  in_addr aiStack_158 [8];
  in_addr aiStack_150 [8];
  in_addr aiStack_148 [8];
  undefined4 local_140;
  undefined8 local_13c;
  char local_134 [12];
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  long local_100;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70 [4];
  
  local_168 = (long *)*param_2;
  if (local_168 != (long *)0x0) {
    lVar11 = local_168[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02ccab28(param_1,&local_168,param_3);
  if (local_168 != (long *)0x0) {
    lVar11 = local_168[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_168 + 0x20))();
    }
  }
  *param_1 = &PTR_LAB_04297310;
  param_1[0xd] = &PTR_LAB_04297490;
  param_1[9] = &PTR_LAB_04297420;
  param_1[10] = &PTR_FUN_04297468;
  param_1[0x43] = &PTR_LAB_04297560;
  FUN_007e3120(param_1 + 0x44);
  puVar2 = param_1 + 0x48;
  param_1[0x47] = 0;
  FUN_007e8190(puVar2);
  FUN_007e8434(puVar2);
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  FUN_007e8190(param_1 + 0x5b);
  FUN_007e8434(param_1 + 0x5b);
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  FUN_007e8190(param_1 + 0x6e);
  FUN_007e8434(param_1 + 0x6e);
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  FUN_007e8190(param_1 + 0x81);
  FUN_007e8434(param_1 + 0x81);
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0x3e800002710;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x43] = &PTR_LAB_04297530;
  FUN_007e3400(param_1 + 0x96);
  FUN_007e3400(param_1 + 0x9a);
  param_1[0x43] = &PTR_LAB_04297500;
  param_1[0x9f] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0xffff;
  param_1[0xa0] = 0;
  FUN_007e8190(&local_108);
  FUN_007e8434(&local_108);
  local_80 = *param_3;
  local_78 = param_3[1];
  FUN_007ec5c4(&local_128,&DAT_038bdc00);
  FUN_007e81fc(&local_140,&local_108,&local_128);
  FUN_007e3120(&local_140);
  local_140 = 1;
  local_13c = DAT_03a85308;
  local_134[0] = s_eCZWFv0X_03a85310[0];
  local_134[1] = s_eCZWFv0X_03a85310[1];
  local_134[2] = s_eCZWFv0X_03a85310[2];
  local_134[3] = s_eCZWFv0X_03a85310[3];
  local_134[4] = s_eCZWFv0X_03a85310[4];
  local_134[5] = s_eCZWFv0X_03a85310[5];
  local_134[6] = s_eCZWFv0X_03a85310[6];
  local_134[7] = s_eCZWFv0X_03a85310[7];
  FUN_007e8410(puVar2,&local_108);
  *(undefined1 *)(param_1 + 0x94) = 1;
  param_1[0x5a] = local_78;
  param_1[0x59] = local_80;
  FUN_007e3130(param_1 + 0x44,&local_140);
  *(undefined2 *)(param_1 + 0x9e) = 2;
  *(undefined8 *)((long)param_1 + 0x4a4) = 0x3e800002710;
  param_1[0x47] = 0;
  iVar7 = nn::nifm::GetCurrentIpConfigInfo
                    ((in_addr *)local_70,aiStack_148,aiStack_150,aiStack_158,aiStack_160);
  if (iVar7 == 0) {
    FUN_007e3400(&local_128);
    uVar3 = (local_70[0] & 0xff00ff00) >> 8 | (local_70[0] & 0xff00ff) << 8;
    FUN_007e34ac(&local_128,uVar3 >> 0x10 | uVar3 << 0x10);
    FUN_007e346c(param_1 + 0x96,&local_128);
    FUN_007e34a4(&local_128);
  }
  FUN_007e81d4(&local_108);
  plVar9 = (long *)FUN_027812ec();
  lVar11 = *plVar9;
  *(long *)PTR_DAT_0437b478 = lVar11;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x98) != 0) {
      plVar9 = *(long **)(lVar11 + 0x70);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar9;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9,0xf8,8);
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      local_108 = *(undefined8 *)(lVar11 + 0x98);
      local_100 = *(long *)(lVar11 + 0xa0);
      if (local_100 != 0) {
        plVar9 = (long *)(local_100 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(lVar10);
    }
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    FUN_02cd600c(param_1 + 0x9f,&local_128);
    puVar2 = local_128;
    if (local_128 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_128 + 1);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        local_128[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_108 = *puVar2;
        FUN_02a44274(lVar11 + 0xd8,&local_108);
      }
    }
  }
  return;
}


