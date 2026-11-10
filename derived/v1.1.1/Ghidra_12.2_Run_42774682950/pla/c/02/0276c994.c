/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276c994; name: FUN_0276c994
 */


void FUN_0276c994(undefined1 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined2 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined2 local_17c;
  undefined4 local_178;
  undefined2 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined2 local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined1 local_14f;
  undefined8 local_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  char local_118 [12];
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 auStack_c0 [26];
  undefined2 local_a6;
  undefined4 local_a4;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar8 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar8;
  if (lVar8 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar6 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar6;
    plVar7 = *(long **)(lVar6 + 0x268);
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_88 = *(undefined8 *)(param_2 + 8);
      local_70 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_80 = 0x1bacf914c1bacf9;
      local_78 = 0;
      local_90 = 0;
      iVar4 = FUN_02790ff4(lVar8);
      if (iVar4 == 0) {
        *param_1 = 0;
      }
      else {
        iVar9 = 0;
        do {
          FUN_02791128(local_118,lVar8,iVar9);
          if (local_118[0] != '\0') {
            local_17c = 0;
            local_18c = 0;
            uStack_184 = 0;
            local_194 = 0;
            local_158 = 0;
            local_170 = 0;
            local_168 = 0;
            uStack_160 = 0;
            local_14c = local_108;
            local_144 = uStack_100;
            uStack_13c = local_f8;
            local_134 = local_f0;
            local_12c = uStack_e8;
            uStack_124 = local_e0;
            local_1b0 = local_10c;
            local_1ac = local_c8;
            uStack_1a8 = uStack_c4;
            local_1a4 = local_d8;
            local_1a0 = local_d4;
            local_178 = local_a4;
            local_198 = local_cc;
            local_174 = local_a6;
            FUN_02c30490(&local_194,auStack_c0);
            local_14f = FUN_01123cf0(plVar7);
            local_150 = FUN_01123ce8(plVar7);
            local_154 = FUN_01123f68(plVar7);
            FUN_01123bb4(plVar7,&local_170);
            FUN_0276ccdc(&local_a0,&local_1b0);
            if (local_118[0] != '\0') {
              local_118[0] = '\0';
            }
          }
          uVar5 = local_90;
          lVar6 = local_98;
          iVar9 = iVar9 + 1;
        } while (iVar4 != iVar9);
        *param_1 = 0;
        if (local_a0 != local_98) {
          *(long *)(param_1 + 8) = local_a0;
          *(undefined8 *)(param_1 + 0x30) = local_78;
          *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_6c,local_70);
          local_a0 = 0;
          *(undefined8 *)(param_1 + 0x20) = local_88;
          *(undefined8 *)(param_1 + 0x28) = local_80;
          local_98 = 0;
          local_90 = 0;
          *(long *)(param_1 + 0x10) = lVar6;
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          *param_1 = 1;
        }
      }
      FUN_0276e148(&local_a0);
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


