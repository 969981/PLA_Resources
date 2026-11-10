/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d0d64; name: FUN_028d0d64
 */


void FUN_028d0d64(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] != puVar1) {
    lVar5 = tpidr_el0;
    puVar9 = (undefined8 *)param_1[1];
    do {
      puVar7 = puVar9 + -4;
      puVar8 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar8)(puVar8);
        plVar2 = (long *)puVar9[-3];
        uVar3 = puVar9[-2];
        uVar10 = puVar9[-1];
        uVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar6 & 1) == 0) {
LAB_028d0e50:
          (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,uVar3,uVar10);
        }
        else {
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_028d0e50;
          FUN_02bcc824(plVar2,puVar8,uVar3,uVar10);
        }
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
        *(int *)(lVar5 + 0x38d480) = iVar4;
        if (iVar4 == 0) {
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
      puVar9 = puVar7;
    } while (puVar1 != puVar7);
  }
  param_1[1] = puVar1;
  return;
}


