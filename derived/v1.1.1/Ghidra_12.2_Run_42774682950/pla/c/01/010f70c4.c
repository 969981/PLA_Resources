/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f70c4; name: FUN_010f70c4
 */


void FUN_010f70c4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_78 [24];
  
  FUN_02bcbe58(auStack_78,0);
  lVar3 = tpidr_el0;
  plVar7 = (long *)param_2[6];
joined_r0x010f7100:
  if (plVar7 != (long *)0x0) {
    do {
      plVar8 = (long *)param_2[7];
      plVar9 = (long *)*plVar7;
      uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar4 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) goto LAB_010f71a0;
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,8);
      plVar7 = plVar9;
      if (plVar9 == (long *)0x0) break;
    } while( true );
  }
  lVar5 = *param_2;
  *param_2 = 0;
  if (lVar5 != 0) {
    FUN_010f7444(param_2 + 1);
  }
  plVar7 = (long *)*param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar1,uVar6);
      goto LAB_010f7248;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar1,uVar6);
LAB_010f7248:
  if (*(char *)(lVar3 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar3 + 0x38d488) = 1;
    *(undefined8 *)(lVar3 + 0x38d478) = 0;
    *(undefined8 *)(lVar3 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
  *(int *)(lVar3 + 0x38d480) = iVar2;
  if (iVar2 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar3 + 0x38d484) = 0;
  }
  return;
LAB_010f71a0:
  FUN_02bcc824(plVar8,plVar7,0x20,8);
  plVar7 = plVar9;
  goto joined_r0x010f7100;
}


