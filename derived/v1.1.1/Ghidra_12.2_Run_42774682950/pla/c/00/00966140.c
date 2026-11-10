/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00966140; name: FUN_00966140
 */


void FUN_00966140(long param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  long local_1a8 [3];
  long *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  uint local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
  lVar3 = FUN_00934074(*(undefined8 *)(param_3 + 0xd0),0);
  if (lVar3 == 0) {
    uVar10 = 0x1f;
  }
  else {
    uVar10 = *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0x7d);
  }
  uVar4 = FUN_00933eec(*(undefined8 *)(param_3 + 0xd0),uVar10);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  local_178 = 0;
  local_1a8[2] = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_188 = 0x1555555555555555;
  uStack_180 = 0;
  plStack_190 = param_4;
  FUN_00966560(local_1a8,param_3,uVar10);
  FUN_00966ac0(param_1 + 0x70,local_1a8,param_2 + 0x70,param_4);
  plVar2 = plStack_190;
  lVar3 = local_1a8[0];
  if (local_1a8[0] != 0) {
    local_1a8[1] = local_1a8[0];
    lVar11 = local_1a8[2] - local_1a8[0];
    uVar12 = (**(code **)(*plStack_190 + 0xc0))(plStack_190);
    if ((uVar12 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar3,lVar11,4);
        goto LAB_00966230;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,lVar11,4);
  }
LAB_00966230:
  local_a8 = 0x102000101;
  FUN_009346d8(local_1a8,*(undefined8 *)(param_3 + 0xd0),&local_a8);
  if (local_b0 != 0) {
    lVar7 = (ulong)local_b0 * 8;
    param_2 = param_2 + 0xb0;
    lVar3 = param_1 + 0xb0;
    lVar11 = tpidr_el0;
    uVar12 = 1;
    do {
      lVar7 = lVar7 + -8;
      lVar8 = local_1a8[uVar12];
      *(long *)(lVar3 + -8) = lVar8;
      local_90 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_70 = 0;
      local_80 = 0x1555555555555555;
      uStack_78 = 0;
      plStack_88 = param_4;
      FUN_00966560(&local_a0,param_3,*(undefined1 *)(*(long *)(lVar8 + 0x70) + 0x7d));
      FUN_00966ac0(lVar3,&local_a0,param_2,param_4);
      plVar2 = plStack_88;
      lVar8 = local_a0;
      if (local_a0 != 0) {
        local_98 = local_a0;
        lVar9 = local_90 - local_a0;
        uVar5 = (**(code **)(*plStack_88 + 0xc0))(plStack_88);
        if ((uVar5 & 1) != 0) {
          if (*(char *)(lVar11 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar11 + 0x38d488) = 1;
            *(undefined8 *)(lVar11 + 0x38d478) = 0;
            *(undefined8 *)(lVar11 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar11 + 0x38d480)) {
            FUN_02bcc824(plVar2,lVar8,lVar9,4);
            goto joined_r0x0096637c;
          }
        }
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar8,lVar9,4);
      }
joined_r0x0096637c:
      if (4 < uVar12) break;
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 0x40;
      lVar3 = lVar3 + 0x40;
    } while (lVar7 != 0);
  }
  bVar1 = **(byte **)(*(long *)(*(long *)(param_3 + 0x98) + 0x370) + 0x28);
  if ((bVar1 < 0xe) && ((0x3307U >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
    uVar6 = *(undefined4 *)(&DAT_03a75a7c + *(long *)(&DAT_03a75af0 + (long)(char)bVar1 * 8) * 8);
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x1e8) = uVar6;
  return;
}


