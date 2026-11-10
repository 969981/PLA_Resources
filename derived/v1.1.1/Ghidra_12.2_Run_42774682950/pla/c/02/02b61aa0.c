/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b61aa0; name: FUN_02b61aa0
 */


void FUN_02b61aa0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = (long)&PTR_FUN_04285568;
  param_1[9] = (long)&PTR_LAB_042855a8;
  lVar7 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (0 < *(int *)(lVar7 + 0x1c)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_0087d828(*(undefined8 *)
                    (*(long *)(*(long *)(lVar7 + 0x20) + (&DAT_04285538)[*(byte *)(lVar7 + 0x14)] +
                              lVar10) + 0x68),*(long *)(param_1[0xf] + 0x58) + 0x3010);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x40;
    } while (lVar11 < *(int *)(lVar7 + 0x1c));
  }
  FUN_0087cb1c(lVar7,*(long *)(param_1[0xf] + 0x58) + 0x3010);
  lVar7 = param_1[0x10];
  if (lVar7 == 0) {
LAB_02b61c84:
    plVar8 = (long *)param_1[0xf];
  }
  else {
    lVar11 = param_1[0x11];
    if (lVar11 == lVar7) {
      lVar11 = lVar7;
    }
    else {
      do {
        lVar10 = lVar11 + -0x20;
        plVar8 = *(long **)(lVar11 + -0x18);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,lVar10);
          plVar8 = *(long **)(lVar11 + -0x18);
          *(undefined8 *)(lVar11 + -0x20) = 0;
          *(undefined8 *)(lVar11 + -0x18) = 0;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          plVar8 = *(long **)(lVar11 + -0x18);
          *(undefined8 *)(lVar11 + -0x10) = 0xffffffffffffffff;
          *(undefined8 *)(lVar11 + -8) = 0;
          if (plVar8 != (long *)0x0) {
            plVar1 = plVar8 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        lVar11 = lVar10;
      } while (lVar10 != lVar7);
      lVar11 = param_1[0x10];
    }
    lVar10 = param_1[0x12];
    plVar8 = (long *)param_1[0x13];
    param_1[0x11] = lVar7;
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) == 0) {
LAB_02b61c68:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,lVar10 - lVar11,8);
      goto LAB_02b61c84;
    }
    lVar7 = tpidr_el0;
    if (*(char *)(lVar7 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar7 + 0x38d488) = 1;
      *(undefined8 *)(lVar7 + 0x38d478) = 0;
      *(undefined8 *)(lVar7 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b61c68;
    FUN_02bcc824(plVar8,lVar11,lVar10 - lVar11,8);
    plVar8 = (long *)param_1[0xf];
  }
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  puVar2 = PTR_DAT_04388188;
  lVar7 = param_1[0xb];
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x50);
  if (lVar7 != 0) {
    plVar8 = (long *)param_1[0xc];
    lVar11 = param_1[0xd];
    lVar10 = param_1[0xe];
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar7,lVar11,lVar10);
        goto LAB_02b61d44;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar11,lVar10);
  }
LAB_02b61d44:
  puVar2 = PTR_DAT_04388070 + 0x50;
  *param_1 = (long)(PTR_DAT_04388070 + 0x10);
  param_1[9] = (long)puVar2;
                    /* WARNING: Could not recover jumptable at 0x02b61d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0xa8))();
  return;
}


