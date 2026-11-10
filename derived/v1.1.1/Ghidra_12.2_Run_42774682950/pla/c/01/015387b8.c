/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015387b8; name: FUN_015387b8
 */


void FUN_015387b8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != param_2) {
    lVar4 = tpidr_el0;
    do {
      *(long *)(param_1 + 0x10) = lVar7 + -0x20;
      lVar6 = *(long *)(lVar7 + -0x20);
      *(undefined8 *)(lVar7 + -0x20) = 0;
      if (lVar6 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_00d27480(lVar6);
        plVar1 = *(long **)(lVar7 + -0x18);
        uVar2 = *(undefined8 *)(lVar7 + -0x10);
        uVar8 = *(undefined8 *)(lVar7 + -8);
        uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar5 & 1) == 0) {
LAB_015388bc:
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,uVar2,uVar8);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_015388bc;
          FUN_02bcc824(plVar1,lVar6,uVar2,uVar8);
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
        *(int *)(lVar4 + 0x38d480) = iVar3;
        if (iVar3 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar4 + 0x38d484) = 0;
        }
      }
      lVar7 = *(long *)(param_1 + 0x10);
    } while (lVar7 != param_2);
  }
  return;
}


