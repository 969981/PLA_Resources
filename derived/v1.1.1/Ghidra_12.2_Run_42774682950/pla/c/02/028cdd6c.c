/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cdd6c; name: FUN_028cdd6c
 */


void FUN_028cdd6c(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ulong *local_b8;
  ulong local_b0;
  long local_a8;
  long *local_a0;
  ulong local_98;
  long lStack_90;
  undefined4 local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  uVar3 = param_1[1];
  if (param_2 <= uVar3) {
    param_1[1] = param_2;
    return;
  }
  uVar5 = param_1[2] * 0x40;
  uVar8 = param_2 - uVar3;
  if (uVar5 < uVar8 || uVar5 - uVar8 < uVar3) {
    plVar10 = param_1 + 3;
    local_a0 = (long *)*plVar10;
    local_98 = param_1[4];
    local_a8 = 0;
    local_88 = 0;
    local_b8 = (ulong *)0x0;
    local_b0 = 0;
    lStack_90 = 0;
    if (local_98 < 0x1ffffffffffffff) {
      uVar3 = local_98 << 6;
      if (uVar3 < param_2) goto LAB_028ce0bc;
    }
    else {
      uVar3 = 0x7fffffffffffffff;
      if (0x7fffffffffffffff < param_2) {
LAB_028ce0bc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    if (uVar5 < uVar3 >> 1) {
      uVar5 = param_1[2] << 7;
      uVar3 = param_2 + 0x3f & 0xffffffffffffffc0;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
    }
    FUN_00bb993c(&local_b8,uVar3);
    puVar6 = local_b8;
    puVar7 = (ulong *)*param_1;
    uVar5 = param_1[1];
    local_b0 = uVar5 + uVar8;
    if ((long)uVar5 < 1) {
      uVar3 = 0;
    }
    else {
      uVar11 = uVar5 >> 6;
      memmove(local_b8,puVar7,uVar11 * 8);
      uVar3 = uVar5 & 0x3f;
      puVar6 = puVar6 + uVar11;
      if (uVar3 != 0) {
        uVar5 = 0xffffffffffffffff >> (-uVar3 & 0x3f);
        *puVar6 = *puVar6 & (uVar5 ^ 0xffffffffffffffff) | puVar7[uVar11] & uVar5;
      }
      puVar7 = (ulong *)*param_1;
      uVar5 = param_1[1];
    }
    *param_1 = (long)local_b8;
    param_1[1] = local_b0;
    lVar4 = param_1[2];
    param_1[2] = local_a8;
    plVar1 = (long *)*plVar10;
    lStack_78 = param_1[4];
    local_70 = param_1[5];
    local_68 = param_1[6];
    *(undefined4 *)(param_1 + 6) = local_88;
    param_1[4] = local_98;
    param_1[5] = lStack_90;
    *plVar10 = (long)local_a0;
    local_88 = (undefined4)local_68;
    local_b8 = puVar7;
    local_b0 = uVar5;
    local_a8 = lVar4;
    local_a0 = plVar1;
    local_98 = lStack_78;
    lStack_90 = local_70;
    local_80 = plVar1;
    if (puVar7 != (ulong *)0x0) {
      uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
      if ((uVar5 & 1) != 0) {
        lVar2 = tpidr_el0;
        if (*(char *)(lVar2 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar2 + 0x38d488) = 1;
          *(undefined8 *)(lVar2 + 0x38d478) = 0;
          *(undefined8 *)(lVar2 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar2 + 0x38d480)) {
          FUN_02bcc824(plVar1,puVar7,lVar4 << 3,1);
          goto joined_r0x028ce0a8;
        }
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar7,lVar4 << 3,1);
    }
  }
  else {
    puVar6 = (ulong *)(*param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8));
    uVar3 = (ulong)((uint)uVar3 & 0x3f);
    param_1[1] = param_2;
  }
joined_r0x028ce0a8:
  if (uVar8 != 0) {
    iVar9 = (int)uVar3;
    if ((param_3 & 1) == 0) {
      puVar7 = puVar6;
      if (iVar9 != 0) {
        uVar11 = (ulong)(0x40 - iVar9);
        uVar5 = uVar8;
        if (uVar11 <= uVar8) {
          uVar5 = uVar11;
        }
        uVar8 = uVar8 - uVar5;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (uVar11 - uVar5 & 0x3f) & -1L << uVar3 ^
                            0xffffffffffffffff);
      }
      uVar3 = uVar8 >> 6;
      memset(puVar7,0,uVar3 * 8);
      if ((uVar8 & 0x3f) != 0) {
        puVar7[uVar3] =
             puVar7[uVar3] & (0xffffffffffffffffU >> (-(uVar8 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
      }
    }
    else {
      puVar7 = puVar6;
      if (iVar9 != 0) {
        uVar11 = (ulong)(0x40 - iVar9);
        uVar5 = uVar8;
        if (uVar11 <= uVar8) {
          uVar5 = uVar11;
        }
        uVar8 = uVar8 - uVar5;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar6 | 0xffffffffffffffffU >> (uVar11 - uVar5 & 0x3f) & -1L << uVar3;
      }
      uVar3 = uVar8 >> 6;
      memset(puVar7,0xff,uVar3 * 8);
      if ((uVar8 & 0x3f) != 0) {
        puVar7[uVar3] = puVar7[uVar3] | 0xffffffffffffffffU >> (-(uVar8 & 0x3f) & 0x3f);
      }
    }
  }
  return;
}


