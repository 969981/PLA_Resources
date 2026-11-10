/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af097c; name: FUN_00af097c
 */


void FUN_00af097c(long param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined8 local_48;
  
  plVar9 = *(long **)(param_1 + 0x270);
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x2d0) != 0) {
    uVar6 = plVar9[1];
    goto joined_r0x00af0aac;
  }
  local_48 = *(undefined8 *)(param_1 + 8);
  FUN_00aefab0(&local_88,local_48,&local_48);
  uVar11 = local_88;
  local_88 = 0;
  lVar10 = *(long *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = uVar11;
  if (lVar10 != 0) {
    FUN_02bcbe58(auStack_68,0);
    FUN_00af2598(lVar10);
    plVar9 = *(long **)(param_1 + 0x2d8);
    uVar11 = *(undefined8 *)(param_1 + 0x2e0);
    uVar12 = *(undefined8 *)(param_1 + 0x2e8);
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    lVar3 = tpidr_el0;
    if ((uVar6 & 1) == 0) {
LAB_00af0b7c:
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar11,uVar12);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_00af0b7c;
      FUN_02bcc824(plVar9,lVar10,uVar11,uVar12);
    }
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar1 = *(int *)(lVar3 + 0x38d480) + -1;
    *(int *)(lVar3 + 0x38d480) = iVar1;
    if (iVar1 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar3 + 0x38d484) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x2e8) = local_70;
  plVar9 = *(long **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x2e0) = uStack_78;
  *(undefined8 *)(param_1 + 0x2d8) = local_80;
  uVar6 = plVar9[1];
joined_r0x00af0aac:
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      uVar8 = uVar5 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*plVar9 + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_00af0a38;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) {
            return;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) {
LAB_00af0a38:
              plVar4 = (long *)FUN_00aefbe4(*(undefined8 *)(param_1 + 0x2d0),param_2);
              lVar10 = plVar9[7];
              *plVar4 = plVar9[6];
              plVar4[1] = lVar10;
              return;
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar2 * uVar6;
            }
            if (uVar7 != uVar8) {
              return;
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


