/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01991548; name: FUN_01991548
 */


/* WARNING: Removing unreachable block (ram,0x019919bc) */
/* WARNING: Removing unreachable block (ram,0x019919c4) */
/* WARNING: Removing unreachable block (ram,0x019919cc) */
/* WARNING: Removing unreachable block (ram,0x019919d4) */
/* WARNING: Removing unreachable block (ram,0x01991b84) */
/* WARNING: Removing unreachable block (ram,0x01991afc) */
/* WARNING: Removing unreachable block (ram,0x01991b14) */

void FUN_01991548(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 *puVar15;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long lVar16;
  undefined4 local_f0;
  undefined2 local_ec;
  code *local_d8;
  undefined1 auStack_c0 [96];
  undefined8 local_58;
  
  if (*(char *)(param_2 + 0x162) != '\0') goto LAB_01991b68;
  uVar10 = *(ulong *)(param_2 + 0x70);
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = (ulong)((uint)uVar10 - 1) & 7;
    }
    else {
      uVar13 = 7;
      if (uVar10 < 8) {
        uVar2 = (uint)uVar10 & 0xff;
        uVar5 = 0;
        if ((uVar10 & 0xff) != 0) {
          uVar5 = 7 / uVar2;
        }
        uVar13 = (ulong)(7 - uVar5 * uVar2);
      }
    }
    plVar14 = *(long **)(*(long *)(param_2 + 0x68) + uVar13 * 8);
    unaff_x20 = param_4;
    unaff_x23 = param_3;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == 7) {
            if ((int)plVar14[2] == 7) goto LAB_01991640;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == 7) {
            if ((int)plVar14[2] == 7) goto LAB_01991640;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar6 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_0198ef20();
  iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
  if (iVar8 != 0) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar11 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar11;
  local_58 = *unaff_x26;
  FUN_02a44274(lVar11 + 0xd8,&local_58);
  unaff_x21[0x14] = *(long *)(*unaff_x23 + 0xa8);
  lVar11 = *unaff_x23;
  if (lVar11 != 0) {
    lVar16 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01991c98;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)*unaff_x25;
  *unaff_x25 = lVar11;
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  FUN_009addb0(param_1);
  local_f0 = 7;
  local_ec = 0;
  local_d8 = (code *)0x0;
  lVar11 = unaff_x21[0xb];
  if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
      (**(code **)(unaff_x20 + 0x10))(unaff_x20 + 0x20,auStack_c0);
      local_d8 = *(code **)(unaff_x20 + 8);
    }
    lVar11 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_2 + 0x150);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01991a58;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01991a58:
    if (*(long *)(param_2 + 0x110) == *(long *)(param_2 + 0x118)) {
      FUN_0198f144(param_2 + 0x108,&local_f0);
    }
    else {
      FUN_009af634(param_2 + 0x120,*(long *)(param_2 + 0x110),&local_f0);
      *(long *)(param_2 + 0x110) = *(long *)(param_2 + 0x110) + 0x90;
    }
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    if (local_d8 != (code *)0x0) {
      (*local_d8)(auStack_c0);
    }
    if (unaff_x21 != (long *)0x0) {
      lVar11 = unaff_x21[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*unaff_x21 + 0x20))();
      }
    }
    lVar11 = unaff_x21[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*unaff_x21 + 0x20))();
      return;
    }
    return;
  }
LAB_01991c98:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01991640:
  lVar11 = plVar14[7];
  puVar15 = (undefined8 *)(lVar11 + 0x50);
  plVar14 = (long *)(**(code **)*puVar15)(puVar15);
  if (((*PTR_DAT_04382288 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04382288), iVar8 != 0))
  {
    uVar9 = FUN_01991cd0();
    *(undefined8 *)PTR_DAT_04382290 = uVar9;
    __cxa_guard_release(PTR_DAT_04382288);
  }
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    if (plVar14 == (long *)PTR_DAT_04382290) {
      plVar14 = *(long **)(lVar11 + 0x68);
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0x5c0,0x10);
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0xb8))(plVar14);
                    /* WARNING: Subroutine does not return */
        FUN_00bd32e0(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00bd32e0();
    }
  }
LAB_01991b68:
  *param_1 = 0;
  return;
}


