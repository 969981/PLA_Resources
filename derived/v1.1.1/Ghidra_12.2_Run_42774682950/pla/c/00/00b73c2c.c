/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b73c2c; name: FUN_00b73c2c
 */


void FUN_00b73c2c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar9 + 0x378);
  if (plVar10 != (long *)0x0) {
    lVar4 = tpidr_el0;
    lVar2 = plVar10[0xe];
    do {
      if (lVar2 != 0) {
        plVar7 = (long *)plVar10[9];
        if (plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar10[10];
          plVar6 = (long *)*plVar7;
          uVar1 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar1 & 1) != 0) {
            if (*(char *)(lVar4 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar4 + 0x38d488) = 1;
              *(undefined8 *)(lVar4 + 0x38d478) = 0;
              *(undefined8 *)(lVar4 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar4 + 0x38d480)) {
              FUN_02bcc824(plVar8,plVar7,0x20,8);
              goto joined_r0x00b73d10;
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,8);
joined_r0x00b73d10:
          plVar7 = plVar6;
          if (plVar6 != (long *)0x0) {
            do {
              plVar8 = (long *)plVar10[10];
              plVar6 = (long *)*plVar7;
              uVar1 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar1 & 1) != 0) {
                if (*(char *)(lVar4 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar4 + 0x38d488) = 1;
                  *(undefined8 *)(lVar4 + 0x38d478) = 0;
                  *(undefined8 *)(lVar4 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar4 + 0x38d480)) goto LAB_00b73f94;
              }
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,8);
              plVar7 = plVar6;
              if (plVar6 == (long *)0x0) break;
            } while( true );
          }
        }
        lVar2 = plVar10[4];
        plVar10[9] = 0;
        if ((((lVar2 != 0) && (*(undefined8 *)plVar10[3] = 0, lVar2 != 1)) &&
            (*(undefined8 *)(plVar10[3] + 8) = 0, lVar2 != 2)) &&
           (((*(undefined8 *)(plVar10[3] + 0x10) = 0, lVar2 != 3 &&
             (*(undefined8 *)(plVar10[3] + 0x18) = 0, lVar2 != 4)) &&
            ((*(undefined8 *)(plVar10[3] + 0x20) = 0, lVar2 != 5 &&
             (*(undefined8 *)(plVar10[3] + 0x28) = 0, lVar2 != 6)))))) {
          lVar5 = 6;
          do {
            *(undefined8 *)(plVar10[3] + lVar5 * 8) = 0;
            lVar5 = lVar5 + 1;
          } while (lVar2 != lVar5);
        }
        plVar10[0xe] = 0;
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) break;
      lVar2 = plVar10[0xe];
    } while( true );
  }
  if (*(long *)(lVar9 + 0x3a0) != 0) {
    if (*(long **)(lVar9 + 0x378) != (long *)0x0) {
      lVar4 = tpidr_el0;
      plVar10 = *(long **)(lVar9 + 0x378);
      do {
        while( true ) {
          plVar6 = (long *)*plVar10;
          FUN_00b74894(plVar10 + 3);
          plVar7 = *(long **)(lVar9 + 0x380);
          uVar1 = (**(code **)(*plVar7 + 0xc0))(plVar7);
          if ((uVar1 & 1) != 0) break;
LAB_00b73ea8:
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,0x80,8);
          plVar10 = plVar6;
          if (plVar6 == (long *)0x0) goto LAB_00b73eec;
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_00b73ea8;
        FUN_02bcc824(plVar7,plVar10,0x80,8);
        plVar10 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
LAB_00b73eec:
    uVar1 = *(ulong *)(lVar9 + 0x350);
    *(undefined8 *)(lVar9 + 0x378) = 0;
    if (uVar1 != 0) {
      uVar3 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        do {
          lVar2 = lVar4 * 8;
          lVar4 = lVar4 + 4;
          *(undefined8 *)(*(long *)(lVar9 + 0x348) + lVar2) = 0;
          *(undefined8 *)(*(long *)(lVar9 + 0x348) + lVar2 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar9 + 0x348) + lVar2 + 0x10) = 0;
          *(undefined8 *)(*(long *)(lVar9 + 0x348) + lVar2 + 0x18) = 0;
        } while (uVar1 - uVar3 != lVar4);
      }
      if (uVar3 != 0) {
        lVar4 = lVar4 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar9 + 0x348) + lVar4) = 0;
          uVar3 = uVar3 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar3 != 0);
      }
    }
    *(undefined8 *)(lVar9 + 0x3a0) = 0;
  }
  return;
LAB_00b73f94:
  FUN_02bcc824(plVar8,plVar7,0x20,8);
  goto joined_r0x00b73d10;
}


