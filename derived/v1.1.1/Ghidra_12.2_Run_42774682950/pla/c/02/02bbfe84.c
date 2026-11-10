/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbfe84; name: FUN_02bbfe84
 */


void FUN_02bbfe84(long param_1,undefined8 param_2,uint param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [8];
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x98) + 0x58);
  if (param_3 < 2) {
    local_b0 = *(undefined1 (*) [8])(lVar6 + 8);
    if (param_5 == 0) {
      param_5 = *(long *)(lVar6 + 0x6098);
    }
    local_a0 = (undefined1 *)(lVar6 + 0x10);
    local_a8 = (undefined1 (*) [16])param_5;
    _local_b0 = FUN_02b940d4(*(undefined8 *)(lVar6 + 0x6140),local_b0,param_2,param_4,0);
    local_a0 = (undefined1 *)((ulong)local_a0 & 0xffffffffffffff00);
    FUN_02bc082c(param_1 + 0x58,local_b0);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    local_80 = 0;
    uVar7 = (ulong)param_3;
    local_90 = 0xaaaaaaaaaaaaaaa;
    uStack_88 = 0;
    local_b0 = (undefined1  [8])0x0;
    local_a8 = (undefined1 (*) [16])0x0;
    local_a0 = (undefined1 *)0x0;
    plStack_98 = plVar5;
    pauVar3 = (undefined1 (*) [16])
              (**(code **)(*plVar5 + 0x10))(plVar5,(uVar7 + (ulong)param_3 * 2) * 8,8);
    if (pauVar3 == (undefined1 (*) [16])0x0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    local_a0 = (undefined1 *)((long)pauVar3 + uVar7 * 0x18);
    local_b0 = (undefined1  [8])pauVar3;
    local_a8 = pauVar3;
    do {
      FUN_02bc097c(&plStack_98,local_a8);
      pauVar3 = local_a8;
      local_a8 = (undefined1 (*) [16])(local_a8[1] + 8);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (local_b0 != (undefined1  [8])local_a8) {
      auVar4 = local_b0;
      do {
        local_78 = *(undefined8 *)(lVar6 + 8);
        local_70 = param_5;
        if (param_5 == 0) {
          local_70 = *(long *)(lVar6 + 0x6098);
        }
        lStack_68 = lVar6 + 0x10;
        auVar8 = FUN_02b940d4(*(undefined8 *)(lVar6 + 0x6140),&local_78,param_2,param_4,0);
        *(undefined1 (*) [16])auVar4 = auVar8;
        bVar2 = auVar4 != (undefined1  [8])pauVar3;
        (*(undefined1 (*) [16])((long)auVar4 + 0x10))[0] = 0;
        auVar4 = (undefined1  [8])(*(undefined1 (*) [16])((long)auVar4 + 0x10) + 8);
      } while (bVar2);
    }
    FUN_02bc0a50(param_1 + 0x58,local_b0);
    plVar5 = plStack_98;
    auVar4 = local_b0;
    if (local_b0 != (undefined1  [8])0x0) {
      local_a8 = (undefined1 (*) [16])local_b0;
      lVar6 = (long)local_a0 - (long)local_b0;
      uVar7 = (**(code **)(*plStack_98 + 0xc0))(plStack_98);
      if ((uVar7 & 1) != 0) {
        lVar1 = tpidr_el0;
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar1 + 0x38d480)) {
          FUN_02bcc824(plVar5,auVar4,lVar6,8);
          goto LAB_02bc008c;
        }
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,auVar4,lVar6,8);
    }
  }
LAB_02bc008c:
  *(uint *)(param_1 + 0xa0) = param_3;
  return;
}


