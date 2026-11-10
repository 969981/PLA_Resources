/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f3ddd0; name: FUN_01f3ddd0
 */


void FUN_01f3ddd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  FUN_01f477b8();
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 == puVar2) {
LAB_01f3de00:
    FUN_01f47a7c(param_1);
    return;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar5 = *puVar1;
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  lVar3 = tpidr_el0;
  if ((uVar4 & 1) != 0) {
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar6,uVar5,0x1000,8);
      goto joined_r0x01f3dea4;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,8);
joined_r0x01f3dea4:
  do {
    puVar1 = puVar1 + 1;
    if (puVar1 == puVar2) goto LAB_01f3de00;
    plVar6 = *(long **)(param_1 + 0x50);
    uVar5 = *puVar1;
    uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar6,uVar5,0x1000,8);
        goto joined_r0x01f3dea4;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,8);
  } while( true );
}


