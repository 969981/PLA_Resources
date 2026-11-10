/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00982eb0; name: FUN_00982eb0
 */


void FUN_00982eb0(long param_1,long *param_2,long *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60 [3];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar10 = *(long **)(param_1 + 0xa8);
    plVar13 = (long *)PTR_DAT_04379c88;
    if (*param_2 != 0) {
      plVar13 = (long *)(*param_2 + 0x58);
    }
    lVar11 = *(long *)(param_1 + 0xb0) << 5;
    do {
      lVar12 = *(long *)*plVar10;
      plVar7 = (long *)PTR_DAT_04379c88;
      if (lVar12 != 0) {
        plVar7 = (long *)(lVar12 + 0x58);
      }
      if (*plVar7 == *plVar13) {
        if ((long *)*plVar10 != (long *)0x0) {
          return;
        }
        break;
      }
      plVar10 = plVar10 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar10 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x1a8,8);
  if (plVar10 == (long *)0x0) {
    local_70 = 0;
    local_68 = 0;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    if (param_4 != 2) goto LAB_00983300;
LAB_00983074:
    plVar13 = (long *)*param_2;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar7 = (long *)*plVar10;
    *plVar10 = (long)plVar13;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar10[1] = param_2[1];
    plVar10[2] = param_2[2];
    plVar10[3] = param_2[3];
    plVar13 = (long *)param_2[4];
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar7 = (long *)plVar10[4];
    plVar10[4] = (long)plVar13;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    *(int *)(plVar10 + 5) = (int)param_2[5];
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    plVar10[2] = (long)&DAT_03996322;
    plVar10[3] = 0;
    plVar10[0xc] = 0;
    plVar10[0xd] = 0;
    plVar10[4] = 0;
    *(undefined4 *)(plVar10 + 5) = 0;
    plVar10[6] = 0;
    *(undefined1 *)(plVar10 + 7) = 0;
    plVar10[0x32] = 0;
    *plVar10 = 0;
    plVar10[1] = (long)&DAT_cbf29ce484222645;
    plVar10[8] = (long)&PTR_LAB_041c3c78;
    plVar10[9] = 0;
    plVar10[0xe] = (long)&PTR_LAB_041c3cb8;
    plVar10[0xf] = 0;
    plVar10[0x14] = (long)&PTR_LAB_041c3cf8;
    plVar10[0x15] = 0;
    plVar10[0x1a] = (long)&PTR_LAB_041c3d38;
    plVar10[0x1b] = 0;
    plVar10[0x20] = (long)&PTR_LAB_041c3d58;
    plVar10[0x21] = 0;
    plVar10[0x26] = (long)&PTR_LAB_041c3d98;
    plVar10[0x27] = 0;
    plVar10[0x2c] = (long)&PTR_LAB_041c3dd8;
    plVar10[0x2d] = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    plVar10[0x1c] = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    plVar10[0x22] = 0;
    plVar10[0x23] = 0;
    plVar10[0x24] = 0;
    plVar10[0x25] = 0;
    plVar10[0x2a] = 0;
    plVar10[0x2b] = 0;
    plVar10[0x28] = 0;
    plVar10[0x29] = 0;
    plVar10[0x30] = 0;
    plVar10[0x31] = 0;
    plVar10[0x2e] = 0;
    plVar10[0x2f] = 0;
    plVar10[0x33] = 0;
    plVar10[0x34] = 0;
    local_70 = 0x1a8;
    local_68 = 8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    local_80 = plVar10;
    local_78 = param_3;
    if (param_4 == 2) goto LAB_00983074;
LAB_00983300:
    switch(param_4) {
    case 0:
      plVar13 = (long *)*param_2;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      plVar7 = (long *)*plVar10;
      *plVar10 = (long)plVar13;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar10[1] = param_2[1];
      plVar10[2] = param_2[2];
      plVar10[3] = param_2[3];
      plVar13 = (long *)param_2[4];
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      plVar7 = (long *)plVar10[4];
      plVar10[4] = (long)plVar13;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      *(int *)(plVar10 + 5) = (int)param_2[5];
      uVar8 = FUN_009882cc(plVar10 + 8,1,param_2,0,param_3,0);
      if (((uVar8 & 1) != 0) && (plVar10 = (long *)plVar10[0xd], plVar10 != (long *)0x0)) {
        lVar11 = plVar10[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar11 = plVar10[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
      break;
    case 1:
      FUN_009835ac(plVar10,param_2,param_3);
      break;
    case 3:
      FUN_009836bc(plVar10,param_2);
      break;
    case 4:
      FUN_0098376c(plVar10,param_2,param_3);
      break;
    case 5:
      FUN_009838d4(plVar10,param_2,param_3);
      break;
    case 6:
      FUN_00983a3c(plVar10,param_2,param_3);
    }
  }
  uVar8 = *(ulong *)(param_1 + 0xb0);
  if (uVar8 < *(ulong *)(param_1 + 0xb8)) {
    FUN_00985d60(param_1 + 0x88,*(long *)(param_1 + 0xa8) + uVar8 * 0x20,&local_80);
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
  }
  else {
    local_60[0] = *(long *)(param_1 + 0xa8) + uVar8 * 0x20;
    FUN_00985e44(auStack_48,param_1 + 0x88,local_60,&local_80);
  }
  plVar10 = local_80;
  local_80 = (long *)0x0;
  if (plVar10 == (long *)0x0) {
    return;
  }
  FUN_02bcbe58(local_60,0);
  FUN_009840e8(plVar10);
  uVar5 = local_68;
  uVar9 = local_70;
  plVar13 = local_78;
  uVar8 = (**(code **)(*local_78 + 0xc0))(local_78);
  lVar11 = tpidr_el0;
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar13,plVar10,uVar9,uVar5);
      goto LAB_0098319c;
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,plVar10,uVar9,uVar5);
LAB_0098319c:
  if (*(char *)(lVar11 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar11 + 0x38d488) = 1;
    *(undefined8 *)(lVar11 + 0x38d478) = 0;
    *(undefined8 *)(lVar11 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar11 + 0x38d480) + -1;
  *(int *)(lVar11 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar11 + 0x38d484) = 0;
  }
  return;
}


