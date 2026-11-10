/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc8af0; name: FUN_02bc8af0
 */


void FUN_02bc8af0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  nn::os::LockMutex((MutexType *)&DAT_043f1110);
  lVar6 = *(long *)(param_1 + 0x140);
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  lVar10 = lVar6 << 6;
  if (lVar10 != 0) {
    lVar6 = tpidr_el0;
    puVar7 = puVar1;
    do {
      nn::hid::VibrationNodeConnection::Disconnect();
      puVar8 = (undefined8 *)puVar7[4];
      puVar7[4] = 0;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar8)(puVar8);
        plVar2 = (long *)puVar7[5];
        uVar3 = puVar7[6];
        uVar9 = puVar7[7];
        uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar5 & 1) == 0) {
LAB_02bc8bf8:
          (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,uVar3,uVar9);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02bc8bf8;
          FUN_02bcc824(plVar2,puVar8,uVar3,uVar9);
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
        *(int *)(lVar6 + 0x38d480) = iVar4;
        if (iVar4 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar6 + 0x38d484) = 0;
        }
      }
      puVar8 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        (**(code **)*puVar8)(puVar8);
        plVar2 = (long *)puVar7[1];
        uVar3 = puVar7[2];
        uVar9 = puVar7[3];
        uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar5 & 1) == 0) {
LAB_02bc8d00:
          (**(code **)(*plVar2 + 0x18))(plVar2,puVar8,uVar3,uVar9);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02bc8d00;
          FUN_02bcc824(plVar2,puVar8,uVar3,uVar9);
        }
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar4 = *(int *)(lVar6 + 0x38d480) + -1;
        *(int *)(lVar6 + 0x38d480) = iVar4;
        if (iVar4 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar6 + 0x38d484) = 0;
        }
      }
      puVar7 = puVar7 + 8;
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
    lVar6 = *(long *)(param_1 + 0x140);
  }
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    FUN_02bca890(puVar1);
    puVar1 = puVar1 + 8;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::UnlockMutex((MutexType *)&DAT_043f1110);
  return;
}


