/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b24acc; name: FUN_02b24acc
 */


void FUN_02b24acc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  uVar4 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
  FUN_02b22c04(*(long *)(*(long *)(param_1 + 8) + (uVar4 / 0x12) * 8) + (uVar4 % 0x12) * 0xd8);
  lVar1 = *(long *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar1 + -1;
  lVar2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = (lVar2 >> 3) * 0x12 + -1;
  }
  if ((lVar3 - (lVar1 + *(long *)(param_1 + 0x40))) + 1U < 0x24) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar6,uVar5,0xf30,8);
      goto LAB_02b24bd4;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0xf30,8);
LAB_02b24bd4:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


