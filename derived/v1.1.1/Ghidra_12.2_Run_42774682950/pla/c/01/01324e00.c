/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01324e00; name: FUN_01324e00
 */


void FUN_01324e00(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *plVar15;
  long lVar16;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  if (lVar9 != 0) {
    plVar15 = *(long **)(lVar9 + 0x228);
    if (plVar15 != (long *)0x0) {
      lVar9 = plVar15[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar10 = (undefined1 *)((long *)plVar15[0x37])[1];
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
        uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar11 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0x2a9b2ac3454aecc1);
        }
        else if (&DAT_2a9b2ac3454aecc1 < puVar10) {
          puVar12 = &DAT_2a9b2ac3454aecc1;
        }
        else {
          uVar5 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar5 = 0x2a9b2ac3454aecc1 / (ulong)puVar10;
          }
          puVar12 = &DAT_2a9b2ac3454aecc1 + -(uVar5 * (long)puVar10);
        }
        plVar13 = *(long **)(*(long *)plVar15[0x37] + (long)puVar12 * 8);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          if (uVar11 < 2) {
            do {
              if ((undefined1 *)plVar13[1] == &DAT_2a9b2ac3454aecc1) {
                if ((undefined1 *)plVar13[2] == &DAT_2a9b2ac3454aecc1) goto LAB_01324f90;
              }
              else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar10 + -1)) != puVar12) break;
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
          else {
            do {
              puVar14 = (undefined1 *)plVar13[1];
              if (puVar14 == &DAT_2a9b2ac3454aecc1) {
                if ((undefined1 *)plVar13[2] == &DAT_2a9b2ac3454aecc1) goto LAB_01324f90;
              }
              else {
                if (puVar10 <= puVar14) {
                  uVar11 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar11 = (ulong)puVar14 / (ulong)puVar10;
                  }
                  puVar14 = puVar14 + -(uVar11 * (long)puVar10);
                }
                if (puVar14 != puVar12) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
      }
    }
    goto LAB_01324f98;
  }
LAB_01324ffc:
  *(long *)(param_2 + 0x138) = *(long *)(param_2 + 0x130);
  if (*(long *)(param_2 + 0x140) != *(long *)(param_2 + 0x130)) {
    local_58 = param_2 + 0x148;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_013298fc(param_2 + 0x130,&local_78);
    FUN_013299a4(&local_78);
  }
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  uVar8 = *(undefined8 *)PTR_DAT_0437b4d8;
  *(undefined8 *)PTR_DAT_0437b4e0 = uVar8;
  FUN_02790a7c(&local_78,uVar8,param_1);
  lVar9 = *(long *)(param_2 + 0x130);
  if (lVar9 == 0) goto LAB_0132504c;
  plVar15 = *(long **)(param_2 + 0x148);
  *(long *)(param_2 + 0x138) = lVar9;
  lVar16 = *(long *)(param_2 + 0x140) - lVar9;
  uVar11 = (**(code **)(*plVar15 + 0xc0))(plVar15);
  if ((uVar11 & 1) == 0) {
LAB_0132512c:
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar9,lVar16,4);
  }
  else {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_0132512c;
    FUN_02bcc824(plVar15,lVar9,lVar16,4);
  }
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
LAB_0132504c:
  *(undefined4 *)(param_2 + 0x160) = local_48;
  *(long *)(param_2 + 0x150) = local_58;
  *(undefined8 *)(param_2 + 0x158) = local_50;
  *(undefined8 *)(param_2 + 0x148) = local_60;
  *(long *)(param_2 + 0x130) = local_78;
  *(long *)(param_2 + 0x138) = lStack_70;
  *(undefined8 *)(param_2 + 0x140) = local_68;
  uVar11 = 0;
  do {
    bVar3 = uVar11 < (ulong)((lStack_70 - local_78 >> 3) * -0x1111111111111111);
    uVar11 = (ulong)((int)uVar11 + 1);
  } while (bVar3);
  return;
LAB_01324f90:
  if ((char)plVar13[3] == '\0') {
LAB_01324f98:
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (plVar15 != (long *)0x0) {
    lVar9 = plVar15[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  if (bVar3) {
    return;
  }
  goto LAB_01324ffc;
}


