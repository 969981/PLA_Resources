/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc0a50; name: FUN_02bc0a50
 */


void FUN_02bc0a50(uint *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  
  puVar10 = param_1 + 2;
  switch(*param_1 ^ (int)*param_1 >> 0x1f) {
  case 0:
    local_88 = param_2[3];
    uStack_80 = param_2[4];
    local_78 = param_2[5];
    local_70 = param_2[6];
    uVar2 = *param_2;
    uVar4 = param_2[1];
    uVar9 = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar5 = *param_1;
    local_a0 = uVar2;
    local_98 = uVar4;
    local_90 = uVar9;
    if (uVar5 != 1) {
      FUN_02bc06b0(uVar5,uVar5 ^ (int)uVar5 >> 0x1f,auStack_68,puVar10,param_5,param_6,0,0);
      *(undefined8 *)(param_1 + 0xc) = local_78;
      *(undefined8 *)(param_1 + 0xe) = local_70;
      *(undefined8 *)(param_1 + 8) = local_88;
      *(undefined8 *)(param_1 + 10) = uStack_80;
      *(undefined8 *)(param_1 + 2) = local_a0;
      *(undefined8 *)(param_1 + 4) = local_98;
      *(undefined8 *)(param_1 + 6) = local_90;
      *param_1 = 1;
      goto LAB_02bc0ccc;
    }
    lVar11 = *(long *)puVar10;
    if (lVar11 != 0) {
      lVar1 = *(long *)(param_1 + 6);
      plVar3 = *(long **)(param_1 + 8);
      *(long *)(param_1 + 4) = lVar11;
      uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
      if ((uVar8 & 1) == 0) {
LAB_02bc0b60:
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar1 - lVar11,8);
      }
      else {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02bc0b60;
        FUN_02bcc824(plVar3,lVar11,lVar1 - lVar11,8);
      }
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      puVar10[0] = 0;
      puVar10[1] = 0;
    }
    param_1[0xe] = (uint)local_70;
    *(undefined8 *)(param_1 + 10) = uStack_80;
    *(undefined8 *)(param_1 + 0xc) = local_78;
    *(undefined8 *)(param_1 + 6) = uVar9;
    *(undefined8 *)(param_1 + 8) = local_88;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_1 + 4) = uVar4;
LAB_02bc0ccc:
    local_90 = 0;
    local_98 = 0;
    local_a0 = 0;
    FUN_02bc06b0(1,1,auStack_68,&local_a0,param_5,param_6,0,0);
    return;
  case 1:
    break;
  default:
    FUN_02bc0970();
    FUN_02bc0810();
                    /* WARNING: Does not return */
    pcVar6 = (code *)UndefinedInstructionException(0,0x2bc0dec);
    (*pcVar6)();
  }
  lVar11 = *(long *)puVar10;
  if (lVar11 == 0) goto LAB_02bc0c40;
  lVar1 = *(long *)(param_1 + 6);
  plVar3 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 4) = lVar11;
  uVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  if ((uVar8 & 1) == 0) {
LAB_02bc0c1c:
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar11,lVar1 - lVar11,8);
  }
  else {
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02bc0c1c;
    FUN_02bcc824(plVar3,lVar11,lVar1 - lVar11,8);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar10[0] = 0;
  puVar10[1] = 0;
LAB_02bc0c40:
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  uVar9 = param_2[5];
  param_1[0xe] = *(uint *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar9;
  *(undefined8 *)(param_1 + 2) = *param_2;
  *(undefined8 *)(param_1 + 4) = param_2[1];
  *(undefined8 *)(param_1 + 6) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


