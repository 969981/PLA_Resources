/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02882c98; name: FUN_02882c98
 */


void FUN_02882c98(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)param_1[1];
  lVar2 = param_1[2];
  lVar6 = param_1[3];
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar5,lVar2,lVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02882d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar2,lVar6);
  return;
}


