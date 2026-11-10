/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027c5288; name: FUN_027c5288
 */


void FUN_027c5288(undefined8 param_1,long *param_2)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined4 local_b4;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  ulong *local_90 [3];
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  ulong *local_50 [2];
  
  lVar12 = *param_2;
  FUN_02728988(local_50);
  if (local_50[0] == (ulong *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_0120ccf0();
    if (local_58 != 0) {
      FUN_027c55d0(&local_160,*(undefined8 *)(lVar12 + 0x58),(undefined8 *)(lVar12 + 0x58),&local_58
                  );
      plVar8 = *(long **)(lVar12 + 0x118);
      *(undefined8 *)(lVar12 + 0x118) = 0;
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      puVar5 = local_160;
      *(undefined1 **)(lVar12 + 0x118) = local_160;
      FUN_027c57b8(local_90,*(undefined8 *)(lVar12 + 0x68));
      uVar9 = FUN_027c564c(puVar5,lVar12 + 0x78,local_90);
      if (local_90[0] != (ulong *)0x0) {
        puVar2 = local_90[0] + 1;
        do {
          iVar7 = (int)*puVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *(int *)puVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_90[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_160 = (undefined1 *)*local_90[0];
          FUN_02a44274(lVar11 + 0xd8,&local_160);
        }
      }
      nn::os::GetSystemTick();
      uVar10 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(lVar12 + 0x120) = uVar10;
      if ((uVar9 & 1) == 0) {
        local_b4 = 0;
        local_b0 = &DAT_cbf29ce484222645;
        puStack_a8 = &DAT_03996322;
        local_a0 = 0;
        local_98 = (long *)0x0;
        FUN_02728d78(param_1,&local_b0,&local_b4);
        plVar8 = local_98;
      }
      else {
        local_c8 = 0x10;
        local_c0 = (long *)0x0;
        local_d8 = 0x68fffe1a9a824ecc;
        pcStack_d0 = "DataExchangeBody";
        local_138 = param_2[1];
        lStack_130 = param_2[2];
        local_128 = param_2[3];
        lStack_120 = param_2[4];
        local_160 = &LAB_027c6988;
        local_158 = FUN_027c6b6c;
        local_150 = &LAB_027c7090;
        puStack_148 = &LAB_027c70bc;
        local_140 = lVar12;
        FUN_0276d964(param_1,&local_d8,&local_160);
        pcVar6 = local_158;
        bVar4 = local_158 != (code *)0x0;
        local_158 = (code *)0x0;
        plVar8 = local_c0;
        if (bVar4) {
          local_150 = (undefined1 *)0x0;
          puStack_148 = (undefined1 *)0x0;
          local_160 = (undefined1 *)0x0;
          local_158 = (code *)0x0;
          (*pcVar6)(&local_140);
          plVar8 = local_c0;
        }
      }
      goto joined_r0x027c553c;
    }
  }
  local_160 = (undefined1 *)((ulong)local_160 & 0xffffffff00000000);
  local_78 = 0x81e95774e5863bfe;
  pcStack_70 = "NoSession";
  local_68 = 9;
  local_60 = (long *)0x0;
  FUN_02728d78(param_1,&local_78,&local_160);
  plVar8 = local_60;
joined_r0x027c553c:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if (local_50[0] != (ulong *)0x0) {
    puVar2 = local_50[0] + 1;
    do {
      iVar7 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_160 = (undefined1 *)*local_50[0];
      FUN_02a44274(lVar12 + 0xd8,&local_160);
    }
  }
  return;
}


