/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c71700; name: FUN_00c71700
 */


void FUN_00c71700(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  ulong local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  plVar13 = *(long **)(*(long *)(param_2 + 0xa0) + 0x98);
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)FUN_00babdb8(plVar13,param_3);
  local_a8 = 0;
  plVar2 = (long *)plVar9[3];
  local_88 = plVar9[4];
  lStack_80 = plVar9[5];
  local_78 = plVar9[6];
  local_98 = 0;
  lVar14 = plVar9[1] - *plVar9;
  local_90 = plVar2;
  if (lVar14 == 0) {
LAB_00c717a8:
    local_70 = (undefined4)plVar9[7];
    lVar15 = local_a8;
LAB_00c717b4:
    *param_1 = 0;
    lVar14 = local_a8;
joined_r0x00c718b8:
    if (local_a8 == 0) goto joined_r0x00c71b0c;
    puVar5 = PTR_LAB_04379590;
    plVar2 = (long *)PTR_DAT_043794a8;
    plVar9 = (long *)PTR_DAT_043794a0;
    pbVar6 = PTR_DAT_04379498;
    lVar11 = local_a8;
    if (lVar15 != local_a8) {
LAB_00c71a10:
      do {
        local_a8 = lVar14;
        puVar12 = (undefined8 *)(lVar15 + -0x240);
        lVar15 = lVar15 + -0x250;
        puVar12 = (undefined8 *)*puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar7 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar7 + -1 == 0) {
            puVar12[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar6), iVar7 != 0)) {
              FUN_00100250(puVar5,plVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar6);
            }
            lVar14 = *plVar9;
            *plVar2 = lVar14;
            local_68 = *puVar12;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
        lVar14 = local_a8;
      } while (lVar15 != lVar11);
    }
  }
  else {
    uVar10 = local_88;
    if (0x7ffffffffffffffe < local_88) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)((lVar14 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_a8 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar14,0x10);
    if (local_a8 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    local_98 = local_a8 + (lVar14 >> 4) * 0x10;
    lVar14 = *plVar9;
    lVar11 = plVar9[1];
    if (lVar14 == lVar11) goto LAB_00c717a8;
    lVar15 = local_a8;
    do {
      local_a0 = lVar15;
      FUN_00bac10c(&local_90,local_a0,lVar14);
      lVar14 = lVar14 + 0x250;
      lVar15 = local_a0 + 0x250;
    } while (lVar11 != lVar14);
    local_70 = (undefined4)plVar9[7];
    lVar14 = local_a8;
    if (local_a8 == lVar15) {
      *param_1 = 0;
      local_a8 = lVar15;
      goto joined_r0x00c718b8;
    }
    if (*(char *)(param_2 + 0xc0) != '\0') {
      lVar11 = local_a8;
      do {
        if ((*(int *)(lVar11 + 0x20) == *(int *)(param_2 + 0xc4)) &&
           ((((undefined1 *)*param_3 != &DAT_63529d2749b7525b || (*(char *)(param_2 + 200) == '\0'))
            || (*(int *)(lVar11 + 0x58) == *(int *)(param_2 + 0xcc))))) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar11 + 0x30);
          *param_1 = 1;
          goto joined_r0x00c718b8;
        }
        lVar11 = lVar11 + 0x250;
      } while (local_a0 + 0x250 != lVar11);
      goto LAB_00c717b4;
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(local_a8 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(local_a8 + 0x30);
    *param_1 = 1;
    puVar5 = PTR_LAB_04379590;
    plVar2 = (long *)PTR_DAT_043794a8;
    plVar9 = (long *)PTR_DAT_043794a0;
    pbVar6 = PTR_DAT_04379498;
    lVar11 = local_a8;
    if (lVar15 != local_a8) goto LAB_00c71a10;
  }
  plVar2 = local_90;
  uVar10 = (**(code **)(*local_90 + 0xc0))(local_90);
  if ((uVar10 & 1) != 0) {
    lVar14 = tpidr_el0;
    if (*(char *)(lVar14 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar14 + 0x38d488) = 1;
      *(undefined8 *)(lVar14 + 0x38d478) = 0;
      *(undefined8 *)(lVar14 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar14 + 0x38d480)) {
      FUN_02bcc824(plVar2,local_a8,local_98 - local_a8,0x10);
      goto joined_r0x00c71b0c;
    }
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,local_a8,local_98 - local_a8,0x10);
joined_r0x00c71b0c:
  if (plVar13 != (long *)0x0) {
    lVar14 = plVar13[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


