/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f25fc8; name: FUN_01f25fc8
 */


void FUN_01f25fc8(long *param_1,long param_2,undefined1 *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  long lVar19;
  
  if ((param_3 == &DAT_cbf29ce484222645) || (param_3 == (undefined1 *)0xae652fb65c121b9b)) {
    *param_1 = 0;
    return;
  }
  uVar12 = *(ulong *)(param_2 + 0x70);
  if (uVar12 != 0) {
    uVar14 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = (ulong)((uint)uVar12 - 1) & 0x1b;
    }
    else {
      uVar15 = 0x1b;
      if (uVar12 < 0x1c) {
        uVar2 = (uint)uVar12 & 0xff;
        uVar5 = 0;
        if ((uVar12 & 0xff) != 0) {
          uVar5 = 0x1b / uVar2;
        }
        uVar15 = (ulong)(0x1b - uVar5 * uVar2);
      }
    }
    plVar17 = *(long **)(*(long *)(param_2 + 0x68) + uVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar17[1] == 0x1b) {
            if ((int)plVar17[2] == 0x1b) goto LAB_01f260c0;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar17[1];
          if (uVar14 == 0x1b) {
            if ((int)plVar17[2] == 0x1b) goto LAB_01f260c0;
          }
          else {
            if (uVar12 <= uVar14) {
              uVar6 = 0;
              if (uVar12 != 0) {
                uVar6 = uVar14 / uVar12;
              }
              uVar14 = uVar14 - uVar6 * uVar12;
            }
            if (uVar14 != uVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  FUN_01f28040();
LAB_01f263a4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01f260c0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    lVar19 = plVar17[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f263a4;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar11 = (long *)(**(code **)plVar17[10])(plVar17 + 10);
  puVar7 = PTR_DAT_04381cb0;
  if (((*PTR_DAT_04381ca8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04381ca8), puVar8 = PTR_DAT_0437b018,
     puVar7 = PTR_DAT_04381cb0, iVar9 != 0)) {
    if (((*PTR_DAT_0437b010 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b010), puVar7 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar10 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar10;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = puVar7;
      __cxa_guard_release(PTR_DAT_0437b010);
    }
    puVar7 = PTR_DAT_04381cb0;
    *(undefined **)PTR_DAT_04381cb0 = puVar8;
    __cxa_guard_release(PTR_DAT_04381ca8);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    if (plVar11 == (long *)puVar7) {
      iVar9 = (**(code **)(*plVar17 + 0x48))();
      if ((0 < iVar9) && (puVar13 = (undefined1 *)plVar17[0xe], puVar13 != (undefined1 *)0x0)) {
        uVar12 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          puVar16 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)param_3);
        }
        else {
          puVar16 = param_3;
          if (puVar13 <= param_3) {
            uVar14 = 0;
            if (puVar13 != (undefined1 *)0x0) {
              uVar14 = (ulong)param_3 / (ulong)puVar13;
            }
            puVar16 = param_3 + -(uVar14 * (long)puVar13);
          }
        }
        plVar11 = *(long **)(plVar17[0xd] + (long)puVar16 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if (1 < uVar12) goto LAB_01f261c0;
          goto LAB_01f26248;
        }
      }
      break;
    }
  }
  goto LAB_01f261fc;
LAB_01f261c0:
  do {
    puVar18 = (undefined1 *)plVar11[1];
    if (puVar18 == param_3) {
      if ((undefined1 *)plVar11[2] == param_3) goto LAB_01f2627c;
    }
    else {
      if (puVar13 <= puVar18) {
        uVar12 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar12 = (ulong)puVar18 / (ulong)puVar13;
        }
        puVar18 = puVar18 + -(uVar12 * (long)puVar13);
      }
      if (puVar18 != puVar16) break;
    }
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
  goto LAB_01f261fc;
LAB_01f2627c:
  lVar19 = plVar11[3];
  *param_1 = lVar19;
  if (lVar19 != 0) {
    lVar19 = *(long *)(lVar19 + 0x58);
    if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_01f263a4;
    if (*(long *)(lVar19 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
      *(undefined8 *)(lVar19 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar17 == (long *)0x0) {
    return;
  }
  goto LAB_01f262c4;
  while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
LAB_01f26248:
    if ((undefined1 *)plVar11[1] == param_3) {
      if ((undefined1 *)plVar11[2] == param_3) goto LAB_01f2627c;
    }
    else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar13 + -1)) != puVar16) break;
  }
LAB_01f261fc:
  *param_1 = 0;
  if (plVar17 != (long *)0x0) {
LAB_01f262c4:
    lVar19 = plVar17[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f26304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar17 + 0x20))(plVar17);
      return;
    }
  }
  return;
}


