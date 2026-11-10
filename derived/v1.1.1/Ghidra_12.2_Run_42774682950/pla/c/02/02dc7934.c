/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc7934; name: FUN_02dc7934
 */


void FUN_02dc7934(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar7 = (long *)param_1[1];
    *(undefined8 *)(*plVar7 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar7;
    param_1[2] = 0;
    if (plVar7 != param_1) {
      lVar1 = tpidr_el0;
      do {
        plVar2 = (long *)plVar7[1];
        puVar3 = (undefined8 *)plVar7[2];
        plVar7[2] = 0;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_02bcbe58(auStack_78,0);
          (**(code **)*puVar3)(puVar3);
          plVar8 = (long *)plVar7[3];
          lVar4 = plVar7[4];
          lVar9 = plVar7[5];
          uVar6 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar6 & 1) == 0) {
LAB_02dc7a18:
            (**(code **)(*plVar8 + 0x18))(plVar8,puVar3,lVar4,lVar9);
          }
          else {
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02dc7a18;
            FUN_02bcc824(plVar8,puVar3,lVar4,lVar9);
          }
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar5 = *(int *)(lVar1 + 0x38d480) + -1;
          *(int *)(lVar1 + 0x38d480) = iVar5;
          if (iVar5 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar1 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar1 + 0x38d488) = 1;
              *(undefined8 *)(lVar1 + 0x38d478) = 0;
              *(undefined8 *)(lVar1 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar1 + 0x38d484) = 0;
          }
        }
        plVar8 = (long *)param_1[3];
        uVar6 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        if ((uVar6 & 1) == 0) {
LAB_02dc7af4:
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x30,8);
        }
        else {
          if (*(char *)(lVar1 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar1 + 0x38d488) = 1;
            *(undefined8 *)(lVar1 + 0x38d478) = 0;
            *(undefined8 *)(lVar1 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_02dc7af4;
          FUN_02bcc824(plVar8,plVar7,0x30,8);
        }
        plVar7 = plVar2;
      } while (plVar2 != param_1);
    }
  }
  return;
}


