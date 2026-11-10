/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192a0cc; name: FUN_0192a0cc
 */


void FUN_0192a0cc(long param_1,ulong param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  long *local_28;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar9 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar9;
  uVar7 = *(ulong *)(lVar9 + 0x60);
  fVar13 = 0.0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar11 = uVar7 - 1 & DAT_043d1cc8;
    }
    else if (DAT_043d1cc8 < uVar7) {
      uVar11 = DAT_043d1cc8;
    }
    else {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = DAT_043d1cc8 / uVar7;
      }
      uVar11 = DAT_043d1cc8 - uVar11 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 0x58) + uVar11 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == DAT_043d1cc8) {
            if (plVar10[2] == DAT_043d1cc8) goto LAB_0192a19c;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar11) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == DAT_043d1cc8) {
            if (plVar10[2] == DAT_043d1cc8) goto LAB_0192a19c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar5 * uVar7;
            }
            if (uVar8 != uVar11) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_0192a2fc:
  lVar9 = *(long *)(param_1 + 0xa8);
joined_r0x0192a328:
  if ((lVar9 != 0) && (FUN_0192af0c(&local_28), local_28 != (long *)0x0)) {
    if ((param_2 & 1) == 0) {
      FUN_01f1f340(fVar13 / 30.0,local_28,3);
    }
    else {
      FUN_01f1f0b4(local_28,3,0xc);
    }
    if (local_28 != (long *)0x0) {
      lVar9 = local_28[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
LAB_0192a19c:
  plVar10 = (long *)plVar10[3];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar7 = plVar10[0x14];
    fVar13 = 0.0;
    if (uVar7 != 0) {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar11 = uVar7 - 1 & 0xb934a991c5b921ec;
      }
      else if (uVar7 < 0xb934a991c5b921ed) {
        uVar11 = 0;
        if (uVar7 != 0) {
          uVar11 = 0xb934a991c5b921ec / uVar7;
        }
        uVar11 = 0xb934a991c5b921ec - uVar11 * uVar7;
      }
      else {
        uVar11 = 0xb934a991c5b921ec;
      }
      plVar12 = *(long **)(plVar10[0x13] + uVar11 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if (plVar12[1] == 0xb934a991c5b921ec) {
              if (plVar12[2] == -0x46cb566e3a46de14) goto LAB_0192a2e0;
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar11) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar12[1];
            if (uVar8 == 0xb934a991c5b921ec) {
              if (plVar12[2] == -0x46cb566e3a46de14) goto LAB_0192a2e0;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar5 = 0;
                if (uVar7 != 0) {
                  uVar5 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar5 * uVar7;
              }
              if (uVar8 != uVar11) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    goto LAB_0192a2e8;
  }
  goto LAB_0192a2fc;
LAB_0192a2e0:
  fVar13 = (float)(int)plVar12[6];
LAB_0192a2e8:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar10 + 0x10))();
    lVar9 = *(long *)(param_1 + 0xa8);
    goto joined_r0x0192a328;
  }
  goto LAB_0192a2fc;
}


