/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb1188; name: FUN_02cb1188
 */


void FUN_02cb1188(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    lVar5 = param_1[2];
    param_1[2] = lVar5 + -1;
    if (lVar5 != 0) {
      lVar5 = tpidr_el0;
      puVar8 = (undefined8 *)*param_1;
      do {
        puVar7 = (undefined8 *)*puVar8;
        *puVar8 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          FUN_02bcbe58(auStack_78,0);
          (**(code **)*puVar7)(puVar7);
          plVar1 = (long *)puVar8[1];
          uVar2 = puVar8[2];
          uVar9 = puVar8[3];
          uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
          if ((uVar4 & 1) == 0) {
LAB_02cb1290:
            (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,uVar2,uVar9);
          }
          else {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02cb1290;
            FUN_02bcc824(plVar1,puVar7,uVar2,uVar9);
          }
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar3 = *(int *)(lVar5 + 0x38d480) + -1;
          *(int *)(lVar5 + 0x38d480) = iVar3;
          if (iVar3 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar5 + 0x38d484) = 0;
          }
        }
        lVar6 = param_1[2];
        param_1[2] = lVar6 + -1;
        puVar8 = puVar8 + 4;
      } while (lVar6 != 0);
    }
  }
  return;
}


