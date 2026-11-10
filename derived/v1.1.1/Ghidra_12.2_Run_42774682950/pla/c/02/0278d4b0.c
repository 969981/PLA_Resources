/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278d4b0; name: FUN_0278d4b0
 */


void FUN_0278d4b0(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  void *__dest;
  byte bVar2;
  size_t __n;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  long *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_88 = *(long **)(param_2 + 8);
  bVar2 = *(byte *)((long)param_3 + 0x3c);
  local_70 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0xccccccccccccccc;
  uStack_78 = 0;
  lVar7 = *param_4;
  lVar5 = param_4[1];
  if (lVar5 == lVar7) {
    *param_1 = 0;
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    uVar10 = 0;
    do {
      plVar3 = local_88;
      pbVar1 = (byte *)(lVar7 + uVar10 * 0x10);
      if (*pbVar1 <= bVar2) {
        local_128 = *(undefined8 *)pbVar1;
        local_120 = *(undefined8 *)(pbVar1 + 8);
        local_118 = CONCAT44(local_118._4_4_,(int)uVar10);
        if (uVar4 < local_90) {
          FUN_0279535c(&local_88,uVar4,&local_128);
          uVar4 = local_98 + 0x14;
          local_98 = uVar4;
          uVar9 = local_90;
        }
        else {
          lVar7 = (long)(uVar4 - local_a0) >> 2;
          uVar4 = local_80;
          if (0x7ffffffffffffffe < local_80) {
            uVar4 = 0x7fffffffffffffff;
          }
          uVar9 = lVar7 * -0x3333333333333333 + 1;
          if (uVar4 < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar5 = (long)(local_90 - local_a0) >> 2;
          uVar8 = lVar5 * -0x6666666666666666;
          if (uVar9 <= uVar8) {
            uVar9 = uVar8;
          }
          if ((ulong)(lVar5 * -0x3333333333333333) < uVar4 >> 1) {
            uVar4 = uVar9;
          }
          if (uVar4 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (**(code **)(*local_88 + 0x10))(local_88,uVar4 * 0x14,4);
            if (lVar5 == 0) {
              (**(code **)(*plVar3 + 0xb8))(plVar3);
            }
          }
          uVar11 = lVar5 + lVar7 * 4;
          uVar9 = lVar5 + uVar4 * 0x14;
          FUN_0279535c(&local_88,uVar11,&local_128);
          uVar8 = local_a0;
          uVar4 = uVar11 + 0x14;
          uVar12 = local_98;
          if (local_98 != local_a0) {
            do {
              uVar11 = uVar11 - 0x14;
              uVar12 = uVar12 - 0x14;
              FUN_0279535c(&local_88,uVar11,uVar12);
            } while (uVar8 != uVar12);
            uVar8 = local_a0;
          }
          plVar3 = local_88;
          local_a0 = uVar11;
          local_98 = uVar4;
          if (uVar8 != 0) {
            lVar7 = local_90 - uVar8;
            local_90 = uVar9;
            uVar9 = (**(code **)(*local_88 + 0xc0))(local_88);
            if ((uVar9 & 1) != 0) {
              lVar5 = tpidr_el0;
              if (*(char *)(lVar5 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar5 + 0x38d488) = 1;
                *(undefined8 *)(lVar5 + 0x38d478) = 0;
                *(undefined8 *)(lVar5 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar5 + 0x38d480)) {
                FUN_02bcc824(plVar3,uVar8,lVar7,4);
                uVar9 = local_90;
                goto LAB_0278d548;
              }
            }
            (**(code **)(*plVar3 + 0x18))(plVar3,uVar8,lVar7,4);
            uVar9 = local_90;
          }
        }
LAB_0278d548:
        local_90 = uVar9;
        lVar7 = *param_4;
        lVar5 = param_4[1];
        uVar9 = uVar4;
      }
      uVar8 = local_a0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(lVar5 - lVar7 >> 4));
    if (local_a0 == uVar9) {
      *param_1 = 0;
      if (uVar9 == 0) {
        return;
      }
    }
    else {
      lVar7 = FUN_0278d150(((long)(uVar9 - local_a0) >> 2) * -0x3333333333333333 + -1);
      puVar6 = (undefined8 *)(uVar8 + lVar7 * 0x14);
      local_b0 = *puVar6;
      uStack_a8 = puVar6[1];
      __dest = (void *)(*param_4 + (long)*(int *)(puVar6 + 2) * 0x10);
      __n = param_4[1] - ((long)__dest + 0x10);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x10),__n);
      }
      param_4[1] = (long)((long)__dest + ((long)__n >> 4) * 0x10);
      local_118 = param_3[2];
      local_128 = *param_3;
      local_120 = param_3[1];
      local_110 = param_3[3];
      local_108 = param_3[4];
      local_100 = param_3[5];
      local_f8 = param_3[6];
      local_d8 = param_3[10];
      local_f0 = (undefined4)param_3[7];
      uStack_dc = (undefined4)((ulong)param_3[9] >> 0x20);
      uStack_c0 = param_3[0xd];
      local_d0 = param_3[0xb];
      local_c8 = param_3[0xc];
      local_b8 = *(undefined4 *)(param_3 + 0xe);
      uStack_e4 = (undefined4)uStack_a8;
      local_e0 = (undefined4)((ulong)uStack_a8 >> 0x20);
      *(undefined8 *)(param_1 + 4) = local_128;
      uStack_ec = (undefined4)local_b0;
      local_e8 = (undefined4)((ulong)local_b0 >> 0x20);
      *(undefined8 *)(param_1 + 0xc) = local_120;
      *(undefined8 *)(param_1 + 0x14) = local_118;
      *(undefined8 *)(param_1 + 0x24) = local_108;
      *(undefined8 *)(param_1 + 0x2c) = local_100;
      *(undefined8 *)(param_1 + 0x34) = local_f8;
      *(undefined8 *)(param_1 + 100) = local_c8;
      *(undefined8 *)(param_1 + 0x6c) = uStack_c0;
      *(undefined4 *)(param_1 + 0x74) = local_b8;
      *(undefined8 *)(param_1 + 0x5c) = local_d0;
      *(ulong *)(param_1 + 0x3c) = CONCAT44(uStack_ec,local_f0);
      *(undefined8 *)(param_1 + 0x54) = local_d8;
      *(undefined8 *)(param_1 + 0x1c) = local_110;
      *(ulong *)(param_1 + 0x44) = CONCAT44(uStack_e4,local_e8);
      *(ulong *)(param_1 + 0x4c) = CONCAT44(uStack_dc,local_e0);
      *param_1 = 1;
      uVar9 = uVar8;
    }
    plVar3 = local_88;
    lVar7 = local_90 - uVar9;
    local_98 = uVar9;
    uVar4 = (**(code **)(*local_88 + 0xc0))(local_88);
    if ((uVar4 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar3,uVar9,lVar7,4);
        return;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar9,lVar7,4);
  }
  return;
}


