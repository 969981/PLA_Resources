/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4772c; name: FUN_02c4772c
 */


void FUN_02c4772c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar3 = FUN_0087dfac(param_2);
  plVar6 = *(long **)(param_1 + 8);
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar3,8);
  lVar7 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  if (lVar7 != 0) {
    plVar1 = *(long **)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
    if ((uVar5 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar1,lVar7,uVar4,uVar8);
        goto LAB_02c47800;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,uVar4,uVar8);
  }
LAB_02c47800:
  *(long **)(param_1 + 0x68) = plVar6;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = 8;
  FUN_0087dfcc(param_1 + 0x80,*(undefined8 *)(param_1 + 0x60),uVar3);
  FUN_0087dfe0(param_1 + 0x80,*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x3010,param_2);
  return;
}


