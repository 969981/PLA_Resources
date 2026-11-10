/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00232fb0; name: FUN_00232fb0
 */


void FUN_00232fb0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  
  piVar7 = (int *)param_1[0x26];
  iVar8 = *(int *)(param_1 + 0x25);
  iVar3 = *piVar7;
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar3 < 0x316c7874) {
    if (iVar3 < 0x31696c61) {
      if (iVar3 < 0x31646e77) {
        if ((iVar3 != 0x31636970) && (iVar3 != 0x31646e62)) goto LAB_00233240;
      }
      else if (iVar3 != 0x31646e77) {
        if (iVar3 == 0x31656170) {
          if (0 < *(int *)(param_1 + 0x24)) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          }
          lVar5 = param_1[0x1b];
          param_1[0x2a] = lVar5;
          uVar6 = 0;
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
          }
          param_1[0x1b] = uVar6;
        }
        else if (iVar3 == 0x31657267) {
          *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + -1;
        }
        goto LAB_00233240;
      }
    }
    else {
      if (0x316c6775 < iVar3) {
        if (iVar3 == 0x316c6776) {
          param_1[5] = piVar7;
        }
        else if (iVar3 == 0x316c6e66) {
          param_1[1] = piVar7;
        }
        else if (iVar3 == 0x316c7463) {
          param_1[4] = piVar7;
        }
        goto LAB_00233240;
      }
      if (iVar3 != 0x31696c61) {
        if (iVar3 == 0x31697073) {
          param_1[3] = piVar7;
        }
        goto LAB_00233240;
      }
    }
LAB_002331fc:
    if (iVar8 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
LAB_0023320c:
      piVar1 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
      if (*piVar1 == 0x31647375) {
        param_1[0x27] = piVar1;
        piVar7 = piVar1;
        iVar8 = iVar8 + 1;
        goto LAB_00233240;
      }
    }
  }
  else {
    if (iVar3 < 0x3174616d) {
      if (iVar3 < 0x31726373) {
        if (iVar3 == 0x316c7874) {
          *param_1 = piVar7;
          goto LAB_00233240;
        }
        if (iVar3 != 0x316e6170) goto LAB_00233240;
      }
      else if (iVar3 != 0x31726373) {
        if (iVar3 == 0x31736170) {
          plVar4 = (long *)param_1[0x2a];
          param_1[0x1b] = plVar4;
          if (((*PTR_DAT_04372ae0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04372ae0), puVar2 = PTR_DAT_043729f0, iVar3 != 0))
          {
            if (((*PTR_DAT_043729e8 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar3 != 0)) {
              *(undefined8 *)puVar2 = 0;
              __cxa_guard_release(PTR_DAT_043729e8);
            }
            *(undefined **)PTR_DAT_04372ae8 = puVar2;
            __cxa_guard_release(PTR_DAT_04372ae0);
          }
          if (plVar4 != (long *)0x0) {
            for (plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(); plVar4 != (long *)0x0;
                plVar4 = (long *)*plVar4) {
              if (plVar4 == (long *)PTR_DAT_04372ae8) {
                iVar3 = *(int *)(param_1 + 0x24);
                goto LAB_0023331c;
              }
            }
          }
          iVar3 = *(int *)(param_1 + 0x24);
          if (0 < iVar3) {
LAB_0023331c:
            *(int *)(param_1 + 0x24) = iVar3 + 1;
          }
        }
        else if (iVar3 == 0x31737267) {
          *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + 1;
        }
        goto LAB_00233240;
      }
      goto LAB_002331fc;
    }
    if (iVar3 < 0x31747270) {
      if (iVar3 == 0x3174616d) {
        param_1[2] = piVar7;
        goto LAB_00233240;
      }
      if ((iVar3 != 0x31746e63) && (iVar3 != 0x31747063)) goto LAB_00233240;
      goto LAB_002331fc;
    }
    if ((iVar3 == 0x31747270) || (iVar3 == 0x31747874)) goto LAB_002331fc;
    if (iVar3 != 0x3174796c) goto LAB_00233240;
    *(int *)(param_1 + 9) = piVar7[5];
    *(int *)((long)param_1 + 0x4c) = piVar7[6];
    if (iVar8 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) goto LAB_0023320c;
  }
  param_1[0x27] = 0;
LAB_00233240:
  *(int *)((long)param_1 + 0x144) = iVar8 + 1;
  if (iVar8 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
    lVar5 = (long)piVar7 + (ulong)(uint)piVar7[1];
  }
  else {
    lVar5 = 0;
  }
  param_1[0x29] = lVar5;
  return;
}


