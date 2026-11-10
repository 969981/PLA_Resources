/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c90d40; name: FUN_02c90d40
 */


void FUN_02c90d40(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long local_70;
  long lStack_68;
  
  if (*(char *)(param_1 + 0x2f4) != '\0') {
    if (((*PTR_DAT_0437b6f0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0437b6f0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b6f0);
    }
    lVar4 = *(long *)PTR_DAT_0437b6f8;
    *(long *)PTR_DAT_0437b700 = lVar4;
    local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_1 + 0x2f8));
    FUN_02c96060(lVar4 + 0x538,&local_70);
  }
  plVar7 = *(long **)(param_1 + 0x330);
  if (plVar7 != (long *)0x0) {
    do {
      local_70 = plVar7[2];
      lStack_68 = plVar7[3];
      FUN_02b21424(DAT_043ef5b0,&lStack_68);
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if (*(long *)(param_1 + 0x358) != 0) {
    if (*(long **)(param_1 + 0x330) != (long *)0x0) {
      lVar4 = tpidr_el0;
      plVar7 = *(long **)(param_1 + 0x330);
      do {
        while( true ) {
          plVar8 = *(long **)(param_1 + 0x338);
          plVar9 = (long *)*plVar7;
          uVar2 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar2 & 1) != 0) break;
LAB_02c90e64:
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,8);
          plVar7 = plVar9;
          if (plVar9 == (long *)0x0) goto LAB_02c90eec;
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02c90e64;
        FUN_02bcc824(plVar8,plVar7,0x20,8);
        plVar7 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
LAB_02c90eec:
    uVar2 = *(ulong *)(param_1 + 0x308);
    *(undefined8 *)(param_1 + 0x330) = 0;
    if (uVar2 != 0) {
      uVar5 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar6 = lVar4 * 8;
          lVar4 = lVar4 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0x300) + lVar6) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x300) + lVar6 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x300) + lVar6 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0x300) + lVar6 + 0x18) = 0;
        } while (uVar2 - uVar5 != lVar4);
      }
      if (uVar5 != 0) {
        lVar4 = lVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x300) + lVar4) = 0;
          uVar5 = uVar5 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar5 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x2e8);
  if ((*(long *)(lVar4 + 0xe8) != 0) &&
     (*(int *)(lVar4 + 0xf0) == *(int *)(*(long *)(lVar4 + 0xe8) + 0x2c))) {
    uVar3 = FUN_002669c8(lVar4 + 0xe8);
    FUN_00266930(uVar3,1);
    lVar4 = *(long *)(param_1 + 0x2e8);
    if ((*(long *)(lVar4 + 0xe8) != 0) &&
       (*(int *)(lVar4 + 0xf0) == *(int *)(*(long *)(lVar4 + 0xe8) + 0x2c))) {
      *(undefined8 *)(lVar4 + 0xe8) = 0;
      *(undefined4 *)(lVar4 + 0xf0) = 0xffffffff;
    }
  }
  *(undefined1 *)(param_1 + 0x36a) = 1;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  return;
}


