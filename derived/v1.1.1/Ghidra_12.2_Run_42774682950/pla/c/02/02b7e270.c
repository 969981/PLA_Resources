/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7e270; name: FUN_02b7e270
 */


void FUN_02b7e270(long param_1,char *param_2,long param_3,uint param_4)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  long *local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0 [8];
  
  if (*param_2 != '\0') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x6030) + (ulong)*(uint *)(param_2 + 4) * 0x20);
    local_c0 = *(long **)(param_1 + 8);
    local_c8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_b8 = 0x1fffffffffffffff;
    uStack_b0 = 0;
    lVar3 = tpidr_el0;
    local_a8 = 0;
    if (param_4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar9 = 0;
      uVar10 = (ulong)param_4;
      do {
        plVar4 = local_c0;
        pcVar1 = (char *)(param_3 + uVar9 * 0x10);
        lVar11 = 0;
        if (*pcVar1 != '\0') {
          lVar11 = *(long *)(pcVar1 + 8);
        }
        local_a0[0] = *(undefined8 *)(lVar11 + 0x48);
        if (local_d0 < local_c8) {
          FUN_02b8b010(&local_c0,local_d0,local_a0);
          uVar7 = local_d8;
          local_d0 = local_d0 + 8;
          uVar2 = local_c8;
        }
        else {
          lVar11 = (long)(local_d0 - local_d8) >> 3;
          uVar6 = lVar11 + 1;
          uVar2 = local_b8;
          if (0x7ffffffffffffffe < local_b8) {
            uVar2 = 0x7fffffffffffffff;
          }
          if (uVar2 < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar7 = (long)(local_c8 - local_d8) >> 2;
          if (uVar6 <= uVar7) {
            uVar6 = uVar7;
          }
          if ((ulong)((long)(local_c8 - local_d8) >> 3) < uVar2 >> 1) {
            uVar2 = uVar6;
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (**(code **)(*local_c0 + 0x10))(local_c0,uVar2 << 3,8);
            if (lVar5 == 0) {
              (**(code **)(*plVar4 + 0xb8))(plVar4);
            }
          }
          uVar7 = lVar5 + lVar11 * 8;
          uVar2 = lVar5 + uVar2 * 8;
          FUN_02b8b010(&local_c0,uVar7,local_a0);
          uVar6 = uVar7 + 8;
          if (local_d0 != local_d8) {
            do {
              uVar7 = uVar7 - 8;
              local_d0 = local_d0 - 8;
              FUN_02b8b010(&local_c0,uVar7,local_d0);
            } while (local_d8 != local_d0);
          }
          plVar4 = local_c0;
          local_d0 = uVar6;
          if (local_d8 != 0) {
            uVar6 = (**(code **)(*local_c0 + 0xc0))(local_c0);
            if ((uVar6 & 1) != 0) {
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar3 + 0x38d480)) {
                FUN_02bcc824(plVar4,local_d8,local_c8 - local_d8,8);
                goto LAB_02b7e490;
              }
            }
            (**(code **)(*plVar4 + 0x18))(plVar4,local_d8,local_c8 - local_d8,8);
          }
        }
LAB_02b7e490:
        local_c8 = uVar2;
        local_d8 = uVar7;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
    (*DAT_043f0228)(local_a0);
    (*DAT_043f0220)(local_a0,param_1 + 0x10);
    (*DAT_043f0230)(local_a0,*(undefined8 *)(lVar8 + 0x1d0));
    (*DAT_043f0238)(local_a0,param_4,local_d8);
    (*DAT_043f0280)(lVar8,local_a0);
    FUN_02b91400(lVar8 + 0x198,param_3,param_3 + uVar10 * 0x10);
    plVar4 = local_c0;
    if (local_d8 != 0) {
      uVar9 = (**(code **)(*local_c0 + 0xc0))(local_c0);
      if ((uVar9 & 1) != 0) {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar3 + 0x38d480)) {
          FUN_02bcc824(plVar4,local_d8,local_c8 - local_d8,8);
          return;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,local_d8,local_c8 - local_d8,8);
    }
  }
  return;
}


