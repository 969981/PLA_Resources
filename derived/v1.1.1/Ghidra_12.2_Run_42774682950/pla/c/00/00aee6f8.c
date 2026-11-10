/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aee6f8; name: FUN_00aee6f8
 */


void FUN_00aee6f8(long param_1,ulong *param_2,byte param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  plVar4 = *(long **)(param_1 + 0x230);
  if (plVar4 != (long *)0x0) {
    uVar7 = plVar4[1];
    goto joined_r0x00aee810;
  }
  local_90 = *(undefined8 *)(param_1 + 8);
  FUN_00aeeae0(&local_88,local_90,&local_90);
  plVar4 = local_88;
  local_88 = (long *)0x0;
  lVar11 = *(long *)(param_1 + 0x230);
  *(long **)(param_1 + 0x230) = plVar4;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x248) = local_70;
  }
  else {
    FUN_02bcbe58(auStack_68,0);
    FUN_00af1fa0(lVar11);
    plVar4 = *(long **)(param_1 + 0x238);
    uVar12 = *(undefined8 *)(param_1 + 0x240);
    uVar13 = *(undefined8 *)(param_1 + 0x248);
    uVar7 = (**(code **)(*plVar4 + 0xc0))(plVar4);
    lVar3 = tpidr_el0;
    if ((uVar7 & 1) == 0) {
LAB_00aee8c8:
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar11,uVar12,uVar13);
    }
    else {
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_00aee8c8;
      FUN_02bcc824(plVar4,lVar11,uVar12,uVar13);
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
    *(undefined8 *)(param_1 + 0x248) = local_70;
    plVar4 = *(long **)(param_1 + 0x230);
  }
  *(undefined8 *)(param_1 + 0x240) = uStack_78;
  *(undefined8 *)(param_1 + 0x238) = local_80;
  uVar7 = plVar4[1];
joined_r0x00aee810:
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*plVar4 + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_00aee7b0;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) {
LAB_00aee7b0:
              *(byte *)(plVar10 + 6) = param_3 & 1;
              return;
            }
          }
          else {
            if (uVar7 <= uVar8) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar2 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  pbVar5 = (byte *)FUN_00aeec14(plVar4,param_2);
  *pbVar5 = param_3 & 1;
  return;
}


