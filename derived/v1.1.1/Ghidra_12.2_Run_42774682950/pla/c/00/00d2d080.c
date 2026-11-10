/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2d080; name: FUN_00d2d080
 */


void FUN_00d2d080(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long local_68;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar1 = PTR_DAT_04379528;
    if (iVar2 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  uVar9 = *param_3;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = 0xe38e38e38e38e3;
  puVar3[2] = 0;
  *puVar3 = uVar9;
  puVar3[5] = 0xe38e38e38e38e3;
  puVar3[6] = 0;
  puVar11 = puVar3 + 4;
  *puVar11 = uVar9;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[7] = puVar3[3];
  puVar3[8] = 0;
  lVar5 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,0x1200,0x10);
  lVar10 = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*(long *)*puVar11 + 0xb8))();
    lVar7 = puVar3[8];
    lVar14 = puVar3[9];
    if (lVar14 != 0) goto LAB_00d2d170;
  }
  else {
    lVar7 = puVar3[8];
    lVar14 = puVar3[9];
    if (lVar14 != 0) {
LAB_00d2d170:
      if (lVar7 != 0) {
        local_68 = lVar14 * 0x120;
        lVar12 = lVar7;
        do {
          FUN_00d34f80(puVar11,lVar10,lVar12);
          lVar12 = lVar12 + 0x120;
          lVar10 = lVar10 + 0x120;
          local_68 = local_68 + -0x120;
        } while (local_68 != 0);
      }
    }
  }
  if (lVar7 != 0) {
    local_68 = puVar3[9];
    if (local_68 != lVar14) {
      lVar12 = lVar7 + lVar14 * 0x120;
      lVar14 = lVar14 * -0x120 + local_68 * 0x120;
      do {
        FUN_00d34f80(puVar11,lVar10,lVar12);
        lVar12 = lVar12 + 0x120;
        lVar10 = lVar10 + 0x120;
        lVar14 = lVar14 + -0x120;
      } while (lVar14 != 0);
      local_68 = puVar3[9];
    }
    if (local_68 != 0) {
      lVar7 = lVar7 + 0xc0;
      do {
        pcVar8 = *(code **)(lVar7 + -0x18);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar7 + -0x10) = 0;
          *(undefined8 *)(lVar7 + -8) = 0;
          *(undefined8 *)(lVar7 + -0x20) = 0;
          *(undefined8 *)(lVar7 + -0x18) = 0;
          (*pcVar8)(lVar7);
        }
        pcVar8 = *(code **)(lVar7 + -0x98);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar7 + -0x90) = 0;
          *(undefined8 *)(lVar7 + -0x88) = 0;
          *(undefined8 *)(lVar7 + -0xa0) = 0;
          *(undefined8 *)(lVar7 + -0x98) = 0;
          (*pcVar8)(lVar7 + -0x80);
        }
        local_68 = local_68 + -1;
        if (*(long **)(lVar7 + -0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar7 + -0xa8) + 0x20))();
        }
        lVar7 = lVar7 + 0x120;
      } while (local_68 != 0);
    }
    lVar7 = puVar3[10];
    plVar13 = (long *)puVar3[4];
    uVar9 = puVar3[8];
    uVar6 = (**(code **)(*plVar13 + 0xc0))(plVar13);
    if ((uVar6 & 1) != 0) {
      lVar14 = tpidr_el0;
      if (*(char *)(lVar14 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar14 + 0x38d488) = 1;
        *(undefined8 *)(lVar14 + 0x38d478) = 0;
        *(undefined8 *)(lVar14 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar14 + 0x38d480)) {
        FUN_02bcc824(plVar13,uVar9,lVar7 * 0x120,0x10);
        goto LAB_00d2d1e4;
      }
    }
    (**(code **)(*plVar13 + 0x18))(plVar13,uVar9,lVar7 * 0x120,0x10);
  }
LAB_00d2d1e4:
  puVar3[8] = lVar5;
  puVar3[9] = (lVar10 - lVar5 >> 5) * -0x71c71c71c71c71c7;
  puVar3[10] = 0x10;
  *param_1 = (long)puVar3;
  param_1[1] = (long)param_2;
  param_1[2] = 0x58;
  param_1[3] = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


