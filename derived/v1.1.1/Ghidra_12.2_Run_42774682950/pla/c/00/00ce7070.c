/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce7070; name: FUN_00ce7070
 */


void FUN_00ce7070(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  uVar4 = *(ulong *)(param_1 + 0xb0);
  if (uVar4 < 0x20) {
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    uVar5 = *(ulong *)(param_1 + 0xa8);
  }
  else {
    uVar5 = *(long *)(param_1 + 0xa8) + 1;
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    uVar4 = uVar4 - 1;
    *(ulong *)(param_1 + 0xa8) = uVar5;
    *(ulong *)(param_1 + 0xb0) = uVar4;
    if (0xff < uVar5) {
      plVar7 = *(long **)(param_1 + 0xb8);
      uVar6 = *puVar3;
      uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar4 & 1) == 0) {
LAB_00ce71b0:
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0x1000,8);
      }
      else {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar2 + 0x38d480) < 1) goto LAB_00ce71b0;
        FUN_02bcc824(plVar7,uVar6,0x1000,8);
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
      *(undefined8 **)(param_1 + 0x70) = puVar3;
      uVar4 = *(ulong *)(param_1 + 0xb0);
      uVar5 = *(long *)(param_1 + 0xa8) - 0x80;
      *(ulong *)(param_1 + 0xa8) = uVar5;
    }
  }
  lVar2 = (long)*(undefined8 **)(param_1 + 0x78) - (long)puVar3;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = lVar2 * 0x10 - 1;
  }
  uVar5 = uVar5 + uVar4;
  if (uVar1 == uVar5) {
    FUN_00ce92dc(param_1 + 0x68);
    uVar5 = *(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xb0);
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    if (*(undefined8 **)(param_1 + 0x78) == puVar3) goto LAB_00ce7148;
  }
  else if (*(undefined8 **)(param_1 + 0x78) == puVar3) {
LAB_00ce7148:
    lVar2 = 0;
    goto LAB_00ce70f4;
  }
  lVar2 = *(long *)((long)puVar3 + (uVar5 >> 4 & 0xffffffffffffff8)) + (uVar5 & 0x7f) * 0x20;
LAB_00ce70f4:
  FUN_00ce40ec(param_1 + 0xb8,lVar2,param_2);
  *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  return;
}


