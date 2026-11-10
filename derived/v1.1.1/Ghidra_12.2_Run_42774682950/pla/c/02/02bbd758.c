/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbd758; name: FUN_02bbd758
 */


void FUN_02bbd758(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint local_6c;
  long local_68;
  
  lVar5 = *(long *)(param_1 + 0x88);
  local_6c = 0;
  uVar2 = (int)((ulong)(*(long *)(param_1 + 0x90) - lVar5) >> 4) * -0x55555555;
  if (uVar2 == 0) {
LAB_02bbd9d0:
    if (*(int *)(param_1 + 0x198) != 0) {
      local_68 = param_1;
      FUN_02bbea00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),&local_68);
    }
    return;
  }
  uVar6 = 0;
  puVar1 = (undefined8 *)(param_1 + 0xf0);
  do {
    if (*(char *)(lVar5 + uVar6 * 0x30 + 0x28) != '\0') {
      lVar5 = *(long *)(param_1 + 0xe0);
      if (lVar5 == *(long *)(param_1 + 0xe8)) {
        uVar7 = *(ulong *)(param_1 + 0xf8);
        lVar5 = lVar5 - *(long *)(param_1 + 0xd8) >> 2;
        uVar6 = lVar5 + 1;
        if (0x7ffffffffffffffe < uVar7) {
          uVar7 = 0x7fffffffffffffff;
        }
        if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar3 = *(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xd8);
        uVar4 = lVar3 >> 1;
        if (uVar6 <= uVar4) {
          uVar6 = uVar4;
        }
        if ((ulong)(lVar3 >> 2) < uVar7 >> 1) {
          uVar7 = uVar6;
        }
        if (uVar7 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar7 << 2,4);
          if (lVar3 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar9 = lVar3 + lVar5 * 4;
        FUN_01665ff4(puVar1,lVar9,&local_6c);
        lVar8 = *(long *)(param_1 + 0xd8);
        lVar10 = *(long *)(param_1 + 0xe0);
        lVar5 = lVar9 + 4;
        if (lVar10 != lVar8) {
          do {
            lVar9 = lVar9 + -4;
            lVar10 = lVar10 + -4;
            FUN_01665cfc(puVar1,lVar9,lVar10);
          } while (lVar8 != lVar10);
          lVar8 = *(long *)(param_1 + 0xd8);
        }
        lVar10 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xd8) = lVar9;
        *(long *)(param_1 + 0xe0) = lVar5;
        *(ulong *)(param_1 + 0xe8) = lVar3 + uVar7 * 4;
        if (lVar8 != 0) {
          plVar11 = (long *)*puVar1;
          lVar10 = lVar10 - lVar8;
          uVar6 = (**(code **)(*plVar11 + 0xc0))(plVar11);
          if ((uVar6 & 1) != 0) {
            lVar5 = tpidr_el0;
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar5 + 0x38d480)) {
              FUN_02bcc824(plVar11,lVar8,lVar10,4);
              goto LAB_02bbd8ac;
            }
          }
          (**(code **)(*plVar11 + 0x18))(plVar11,lVar8,lVar10,4);
        }
      }
      else {
        FUN_01665ff4(puVar1,lVar5,&local_6c);
        *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + 4;
      }
    }
LAB_02bbd8ac:
    local_6c = local_6c + 1;
    uVar6 = (ulong)local_6c;
    if (uVar2 <= local_6c) goto LAB_02bbd9d0;
    lVar5 = *(long *)(param_1 + 0x88);
  } while( true );
}


