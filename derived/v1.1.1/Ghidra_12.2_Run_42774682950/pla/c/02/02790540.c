/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02790540; name: FUN_02790540
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02790540(undefined1 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  char local_9f0 [4];
  undefined8 auStack_9ec [15];
  undefined1 local_974;
  undefined1 local_8f8;
  char local_87c;
  char local_800;
  char local_784;
  char local_708;
  char local_68c;
  char local_610;
  char local_594;
  char local_518;
  char local_49c;
  char local_420;
  char local_3a4;
  char local_328;
  char local_2ac;
  char local_230;
  char local_1b4;
  char local_138;
  char local_bc;
  
  uVar5 = FUN_02785978(param_3);
  if ((((uVar5 & 1) != 0) && ((param_3 - 1U & 0xff) < 5)) && (param_4 < 4)) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar7 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar7;
    plVar10 = *(long **)(lVar7 + 0x2a8);
    if (plVar10 != (long *)0x0) {
      lVar7 = plVar10[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_0110c3e4(local_9f0,plVar10 + 0x217f);
      uVar5 = (ulong)(param_3 - 1U) & 0xff;
      *param_1 = 0;
      if (local_9f0[(ulong)param_4 * 0x7c + uVar5 * 0x1f0] != '\0') {
        lVar7 = (ulong)param_4 * 0x7c + uVar5 * 0x1f0 + -0x9f0;
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa00);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0x9f8);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0x9f0);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa20);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa18);
        *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa10);
        *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa08);
        *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa40);
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa38);
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa30);
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa28);
        uVar6 = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa50);
        uVar8 = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa58);
        uVar9 = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa60);
        *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)((long)auStack_9ec + lVar7 + 0xa48);
        *(undefined8 *)(param_1 + 0x74) = uVar9;
        *(undefined8 *)(param_1 + 0x6c) = uVar8;
        *(undefined8 *)(param_1 + 100) = uVar6;
        *param_1 = 1;
      }
      local_bc = '\0';
      local_138 = '\0';
      local_1b4 = '\0';
      local_230 = '\0';
      local_2ac = '\0';
      local_328 = '\0';
      local_3a4 = '\0';
      local_420 = '\0';
      local_49c = '\0';
      local_518 = '\0';
      local_594 = '\0';
      local_610 = '\0';
      local_68c = '\0';
      local_708 = '\0';
      local_784 = '\0';
      local_800 = '\0';
      local_87c = '\0';
      local_8f8 = 0;
      local_974 = 0;
      if (local_9f0[0] != '\0') {
        local_9f0[0] = '\0';
      }
      lVar7 = plVar10[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  return;
}


