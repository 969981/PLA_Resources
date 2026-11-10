/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aef6cc; name: FUN_00aef6cc
 */


void FUN_00aef6cc(long param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  plVar3 = *(long **)(param_1 + 0x270);
  if (plVar3 == (long *)0x0) {
    local_90 = *(undefined8 *)(param_1 + 8);
    FUN_00aefab0(&local_88,local_90,&local_90);
    plVar3 = local_88;
    local_88 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 0x270);
    *(long **)(param_1 + 0x270) = plVar3;
    if (lVar9 == 0) {
      *(undefined8 *)(param_1 + 0x288) = local_70;
    }
    else {
      FUN_02bcbe58(auStack_68,0);
      FUN_00af2598(lVar9);
      plVar3 = *(long **)(param_1 + 0x278);
      uVar10 = *(undefined8 *)(param_1 + 0x280);
      uVar11 = *(undefined8 *)(param_1 + 0x288);
      uVar5 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      lVar12 = tpidr_el0;
      if ((uVar5 & 1) == 0) {
LAB_00aef8dc:
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar9,uVar10,uVar11);
      }
      else {
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar12 + 0x38d480) < 1) goto LAB_00aef8dc;
        FUN_02bcc824(plVar3,lVar9,uVar10,uVar11);
      }
      if (*(char *)(lVar12 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar12 + 0x38d488) = 1;
        *(undefined8 *)(lVar12 + 0x38d478) = 0;
        *(undefined8 *)(lVar12 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar1 = *(int *)(lVar12 + 0x38d480) + -1;
      *(int *)(lVar12 + 0x38d480) = iVar1;
      if (iVar1 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar12 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x288) = local_70;
      plVar3 = *(long **)(param_1 + 0x270);
    }
    *(undefined8 *)(param_1 + 0x280) = uStack_78;
    *(undefined8 *)(param_1 + 0x278) = local_80;
  }
  lVar12 = param_3[1];
  lVar9 = *param_3;
  uVar5 = plVar3[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*plVar3 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00aef788;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_00aef788;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  plVar8 = (long *)FUN_00aefbe4(plVar3,param_2);
LAB_00aef78c:
  plVar8[1] = lVar12;
  *plVar8 = lVar9;
  return;
LAB_00aef788:
  plVar8 = plVar8 + 6;
  goto LAB_00aef78c;
}


