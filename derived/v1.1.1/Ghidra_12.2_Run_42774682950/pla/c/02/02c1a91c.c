/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1a91c; name: FUN_02c1a91c
 */


void FUN_02c1a91c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[1];
  lVar4 = tpidr_el0;
  if (plVar6 != plVar8) {
    lVar7 = plVar6[-7];
    plVar3 = plVar6 + -7;
    do {
      if (lVar7 != 0) {
        lVar1 = plVar6[-5];
        plVar2 = (long *)plVar6[-4];
        plVar6[-6] = lVar7;
        uVar5 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        if ((uVar5 & 1) != 0) {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar4 + 0x38d480)) {
            FUN_02bcc824(plVar2,lVar7,lVar1 - lVar7,8);
            goto LAB_02c1a998;
          }
        }
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7,lVar1 - lVar7,8);
      }
LAB_02c1a998:
      if (plVar8 == plVar3) goto LAB_02c1aa68;
      lVar7 = plVar3[-7];
      plVar6 = plVar3;
      plVar3 = plVar3 + -7;
    } while( true );
  }
  plVar6 = plVar8;
LAB_02c1aa90:
  lVar7 = param_1[2];
  plVar3 = (long *)param_1[3];
  param_1[1] = plVar8;
  uVar5 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar3,plVar6,lVar7 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02c1ab20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,plVar6,lVar7 - (long)plVar6,8);
  return;
LAB_02c1aa68:
  plVar6 = (long *)*param_1;
  goto LAB_02c1aa90;
}


