/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01864d18; name: FUN_01864d18
 */


void FUN_01864d18(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x27;
  float fVar17;
  uint local_78 [2];
  long *local_70;
  long *local_68;
  
  local_68 = (long *)FUN_0186ecf8(&local_70,*(undefined8 *)(param_1 + 8));
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01865234;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = (long *)FUN_0186ecf8(local_78,*(undefined8 *)(param_1 + 8));
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01865234;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)FUN_0186f9a0(local_78,*(undefined8 *)(param_1 + 8));
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_01865234;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_78[0] = param_2;
  FUN_0186e984(param_1 + 0x68,local_78,&local_68);
  local_78[0] = param_2;
  FUN_0186e984(param_1 + 0xd0,local_78,&local_70);
  uVar15 = *(ulong *)(param_1 + 0x140);
  plVar2 = (long *)(param_1 + 0x138);
  uVar16 = (ulong)param_2;
  if (uVar15 != 0) {
    uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      unaff_x27 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else {
      unaff_x27 = uVar16;
      if (uVar15 <= uVar16) {
        uVar5 = 0;
        if (uVar15 != 0) {
          uVar5 = uVar16 / uVar15;
        }
        unaff_x27 = uVar16 - uVar5 * uVar15;
      }
    }
    plVar10 = *(long **)(*plVar2 + unaff_x27 * 8);
    if (plVar10 != (long *)0x0) {
      if (uVar12 < 2) {
        do {
          plVar10 = (long *)*plVar10;
          if ((plVar10 == (long *)0x0) ||
             (plVar10[1] != uVar16 && (plVar10[1] & uVar15 - 1) != unaff_x27)) goto LAB_01864eb8;
        } while (*(uint *)(plVar10 + 2) != param_2);
      }
      else {
        do {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_01864eb8;
          uVar12 = plVar10[1];
          if (uVar12 != uVar16) {
            if (uVar15 <= uVar12) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar12 / uVar15;
              }
              uVar12 = uVar12 - uVar5 * uVar15;
            }
            if (uVar12 != unaff_x27) goto LAB_01864eb8;
          }
        } while (*(uint *)(plVar10 + 2) != param_2);
      }
      goto LAB_01865000;
    }
  }
LAB_01864eb8:
  plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x170) + 0x10))
                              (*(long **)(param_1 + 0x170),0x20,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0xb8))();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x170);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar13 != 0) {
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  }
  *(uint *)(plVar10 + 2) = param_2;
  plVar10[3] = (long)plVar9;
  if (plVar9 != (long *)0x0) {
    lVar14 = plVar9[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01865234:
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
  if (lVar13 != 0) {
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  }
  *plVar10 = 0;
  plVar10[1] = uVar16;
  fVar17 = (float)(*(long *)(param_1 + 400) + 1);
  if ((uVar15 == 0) || (*(float *)(param_1 + 0x198) * (float)uVar15 < fVar17)) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar12 = (ulong)(fVar17 / *(float *)(param_1 + 0x198));
    if (uVar12 <= uVar15) {
      uVar12 = uVar15;
    }
    FUN_01870bb4(plVar2,uVar12);
    uVar15 = *(ulong *)(param_1 + 0x140);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar15 - 1U & param_2);
    }
    else if (uVar16 < uVar15) {
      unaff_x27 = uVar16;
    }
    else {
      uVar12 = 0;
      if (uVar15 != 0) {
        uVar12 = uVar16 / uVar15;
      }
      unaff_x27 = uVar16 - uVar12 * uVar15;
    }
  }
  plVar11 = *(long **)(*plVar2 + unaff_x27 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar10 = *(long *)(param_1 + 0x168);
    *(long **)(param_1 + 0x168) = plVar10;
    *(long *)(*(long *)(param_1 + 0x138) + unaff_x27 * 8) = param_1 + 0x168;
    if (*plVar10 != 0) {
      uVar16 = *(ulong *)(*plVar10 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar16 = uVar16 & uVar15 - 1;
      }
      else if (uVar15 <= uVar16) {
        uVar12 = 0;
        if (uVar15 != 0) {
          uVar12 = uVar16 / uVar15;
        }
        uVar16 = uVar16 - uVar12 * uVar15;
      }
      plVar11 = (long *)(*plVar2 + uVar16 * 8);
      goto LAB_01864ff0;
    }
  }
  else {
    *plVar10 = *plVar11;
LAB_01864ff0:
    *plVar11 = (long)plVar10;
  }
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
LAB_01865000:
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


