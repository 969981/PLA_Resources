/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02934bd4; name: FUN_02934bd4
 */


bool FUN_02934bd4(long param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long *local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04379528;
  puVar3 = PTR_DAT_04379520;
  local_68 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = DAT_043ecd98;
  local_78 = 0x71c71c71c71c71c;
  uStack_70 = 0;
  puVar13 = (undefined8 *)*param_3;
  puVar1 = (undefined8 *)param_3[1];
  lVar2 = tpidr_el0;
  if (puVar13 == puVar1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      plVar5 = local_80;
      local_a8 = *puVar13;
      local_a0 = (undefined4)puVar13[1];
      local_c0 = 0;
      uStack_b8 = 0x3f800000;
      local_b0 = 0x3f800000;
      if (uVar17 < local_88) {
        FUN_02937c90(&local_80,uVar17,&local_c0);
        uVar17 = local_90 + 0x24;
        local_90 = uVar17;
      }
      else {
        lVar15 = (long)(uVar17 - local_98) >> 2;
        uVar10 = local_78;
        if (0x7ffffffffffffffe < local_78) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar17 = lVar15 * -0x71c71c71c71c71c7 + 1;
        if (uVar10 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)(local_88 - local_98) >> 2;
        uVar12 = lVar7 * 0x1c71c71c71c71c72;
        if (uVar17 <= uVar12) {
          uVar17 = uVar12;
        }
        if ((ulong)(lVar7 * -0x71c71c71c71c71c7) < uVar10 >> 1) {
          uVar10 = uVar17;
        }
        if (uVar10 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(*local_80 + 0x10))(local_80,uVar10 * 0x24,4);
          if (lVar7 == 0) {
            (**(code **)(*plVar5 + 0xb8))(plVar5);
          }
        }
        uVar17 = lVar7 + lVar15 * 4;
        FUN_02937c90(&local_80,uVar17,&local_c0);
        uVar12 = local_98;
        uVar14 = local_90;
        uVar16 = uVar17;
        if (local_90 != local_98) {
          do {
            plVar5 = local_80;
            if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
              FUN_008a62a4(puVar4);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar3);
            }
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
            if (lVar15 == 0) {
              *(undefined8 *)(uVar16 - 0x24) = *(undefined8 *)(uVar14 - 0x24);
              uVar8 = *(undefined8 *)(uVar14 - 0x1c);
              uVar9 = *(undefined8 *)(uVar14 - 0x14);
              uVar11 = *(undefined8 *)(uVar14 - 0xc);
              *(undefined4 *)(uVar16 - 4) = *(undefined4 *)(uVar14 - 4);
              *(undefined8 *)(uVar16 - 0xc) = uVar11;
              *(undefined8 *)(uVar16 - 0x14) = uVar9;
              *(undefined8 *)(uVar16 - 0x1c) = uVar8;
            }
            else {
              if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar5;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              *(undefined8 *)(uVar16 - 0x24) = *(undefined8 *)(uVar14 - 0x24);
              uVar8 = *(undefined8 *)(uVar14 - 0x1c);
              uVar9 = *(undefined8 *)(uVar14 - 0x14);
              uVar11 = *(undefined8 *)(uVar14 - 0xc);
              *(undefined4 *)(uVar16 - 4) = *(undefined4 *)(uVar14 - 4);
              *(undefined8 *)(uVar16 - 0xc) = uVar11;
              *(undefined8 *)(uVar16 - 0x14) = uVar9;
              *(undefined8 *)(uVar16 - 0x1c) = uVar8;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            uVar14 = uVar14 - 0x24;
            uVar16 = uVar16 - 0x24;
          } while (uVar12 != uVar14);
          uVar12 = local_98;
        }
        plVar5 = local_80;
        uVar10 = lVar7 + uVar10 * 0x24;
        uVar17 = uVar17 + 0x24;
        local_98 = uVar16;
        local_90 = uVar17;
        if (uVar12 != 0) {
          lVar15 = local_88 - uVar12;
          local_88 = uVar10;
          uVar10 = (**(code **)(*local_80 + 0xc0))(local_80);
          if ((uVar10 & 1) != 0) {
            if (*(char *)(lVar2 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar2 + 0x38d488) = 1;
              *(undefined8 *)(lVar2 + 0x38d478) = 0;
              *(undefined8 *)(lVar2 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar2 + 0x38d480)) {
              FUN_02bcc824(plVar5,uVar12,lVar15,4);
              uVar10 = local_88;
              goto LAB_02934ef4;
            }
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar12,lVar15,4);
          uVar10 = local_88;
        }
LAB_02934ef4:
        local_88 = uVar10;
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar1);
  }
  uVar10 = local_98;
  iVar6 = (**(code **)(**(long **)(param_1 + 0x60) + 0x68))
                    (*(long **)(param_1 + 0x60),param_2,local_98,
                     (int)(uVar17 - local_98 >> 2) * 0x38e38e39,param_4);
  plVar5 = local_80;
  if (uVar10 != 0) {
    lVar15 = local_88 - uVar10;
    local_90 = uVar10;
    uVar17 = (**(code **)(*local_80 + 0xc0))(local_80);
    if ((uVar17 & 1) != 0) {
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,uVar10,lVar15,4);
        goto LAB_02935058;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar10,lVar15,4);
  }
LAB_02935058:
  return iVar6 == 1;
}


