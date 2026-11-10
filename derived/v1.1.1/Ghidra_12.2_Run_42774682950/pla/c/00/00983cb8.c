/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00983cb8; name: FUN_00983cb8
 */


void FUN_00983cb8(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x28) * 0x20);
  plVar7 = param_3;
  if (param_3 + 4 != plVar1) {
    lVar4 = tpidr_el0;
    do {
      lVar6 = plVar7[4];
      plVar7[4] = 0;
      lVar8 = *plVar7;
      *plVar7 = lVar6;
      if (lVar8 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_009840e8(lVar8);
        plVar2 = (long *)plVar7[1];
        lVar6 = plVar7[2];
        lVar9 = plVar7[3];
        uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar5 & 1) == 0) {
LAB_00983da8:
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar6,lVar9);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00983da8;
          FUN_02bcc824(plVar2,lVar8,lVar6,lVar9);
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
      plVar7[1] = plVar7[5];
      plVar7[2] = plVar7[6];
      plVar7[3] = plVar7[7];
      plVar7 = plVar7 + 4;
    } while (plVar1 + -4 != plVar7);
  }
  FUN_00986394(param_2,plVar7 != param_3);
  *param_1 = (long)param_3;
  return;
}


