/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02551a84; name: FUN_02551a84
 */


void FUN_02551a84(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined8 *unaff_x23;
  byte *pbVar22;
  byte *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  byte *local_70 [2];
  long *local_58;
  
  FUN_0199c220(local_70,*param_1);
  pbVar22 = local_70[0];
  if (local_70[0] == (byte *)0x0) {
    return;
  }
  iVar11 = *(int *)(local_70[0] + 0xc);
  if (iVar11 == 0) goto LAB_02551d3c;
  unaff_x24 = local_70[0] + 0xc;
  pbVar20 = PTR_DAT_0437a0e8;
  pbVar21 = PTR_DAT_043794d0;
  unaff_x23 = (undefined8 *)PTR_DAT_043794d8;
  unaff_x26 = (undefined8 *)PTR_DAT_0437a0f0;
LAB_02551b18:
  unaff_x27 = *(long **)(pbVar22 + 0x10);
  iVar12 = iVar11;
  if (((*pbVar20 & 1) == 0) && (iVar10 = __cxa_guard_acquire(pbVar20), iVar10 != 0)) {
    if ((*pbVar21 & 1) == 0) goto LAB_02551e20;
    goto LAB_02551d2c;
  }
joined_r0x02551b24:
  do {
    iVar11 = iVar12;
    if (unaff_x27 == (long *)0x0) {
LAB_02551d3c:
      pbVar20 = (byte *)0x0;
      pbVar21 = local_70[0];
    }
    else {
      if (unaff_x27 != unaff_x26) {
        unaff_x27 = (long *)*unaff_x27;
        goto joined_r0x02551b24;
      }
      iVar11 = *(int *)unaff_x24;
      if (iVar11 != iVar12) {
        ClearExclusiveLocal();
LAB_02551b10:
        if (iVar11 == 0) goto LAB_02551d3c;
        goto LAB_02551b18;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
      if (bVar5) {
        *(int *)unaff_x24 = iVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02551b10;
      lVar15 = *(long *)(pbVar22 + 0x18);
      pbVar20 = (byte *)0x0;
      iVar11 = iVar12;
      pbVar21 = local_70[0];
      if (lVar15 != 0) {
        pbVar20 = (byte *)(lVar15 + -0x50);
      }
    }
    local_70[0] = pbVar21;
    if (pbVar21 != (byte *)0x0) {
      pbVar1 = pbVar21 + 8;
      do {
        iVar12 = *(int *)pbVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar5) {
          *(int *)pbVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        pbVar21[0x10] = 0;
        pbVar21[0x11] = 0;
        pbVar21[0x12] = 0;
        pbVar21[0x13] = 0;
        pbVar21[0x14] = 0;
        pbVar21[0x15] = 0;
        pbVar21[0x16] = 0;
        pbVar21[0x17] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_58 = *(long **)pbVar21;
        FUN_02a44274(lVar15 + 0xd8,&local_58);
      }
    }
    if (pbVar20 == (byte *)0x0) {
      return;
    }
    FUN_01847290(&local_58,pbVar20);
    uVar16 = local_58[0x28];
    if (uVar16 != 0) {
      uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = (ulong)((uint)uVar16 - 1) & 0x12;
      }
      else {
        uVar18 = 0x12;
        if (uVar16 < 0x13) {
          uVar3 = (uint)uVar16 & 0xff;
          uVar6 = 0;
          if ((uVar16 & 0xff) != 0) {
            uVar6 = 0x12 / uVar3;
          }
          uVar18 = (ulong)(0x12 - uVar6 * uVar3);
        }
      }
      plVar19 = *(long **)(local_58[0x27] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x12) {
              if ((int)plVar19[2] == 0x12) goto LAB_02551c88;
            }
            else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x12) {
              if ((int)plVar19[2] == 0x12) goto LAB_02551c88;
            }
            else {
              if (uVar16 <= uVar17) {
                uVar7 = 0;
                if (uVar16 != 0) {
                  uVar7 = uVar17 / uVar16;
                }
                uVar17 = uVar17 - uVar7 * uVar16;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    FUN_02552c00();
LAB_02551e20:
    iVar12 = __cxa_guard_acquire(pbVar21);
    if (iVar12 != 0) {
      uVar14 = FUN_0087f8f0();
      *unaff_x23 = uVar14;
      __cxa_guard_release(pbVar21);
    }
LAB_02551d2c:
    *unaff_x26 = unaff_x23;
    __cxa_guard_release(pbVar20);
    iVar12 = iVar11;
  } while( true );
LAB_02551c88:
  plVar19 = (long *)plVar19[3];
  if (plVar19 == (long *)0x0) goto LAB_02551cc8;
  lVar15 = plVar19[0xb];
  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0255213c;
  if (*(long *)(lVar15 + 0x10) == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
    *(undefined8 *)(lVar15 + 0x10) = uVar14;
  }
  piVar2 = (int *)(lVar15 + 0xc);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02551cc8:
  plVar13 = (long *)(**(code **)plVar19[10])(plVar19 + 10);
  puVar9 = PTR_DAT_04381c00;
  if (((*PTR_DAT_04381bf8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04381bf8), puVar8 = PTR_DAT_0437ef00, iVar11 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437eef8), iVar11 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar11 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar14;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)puVar9 = puVar8;
    __cxa_guard_release(PTR_DAT_04381bf8);
  }
  for (; plVar13 != (long *)puVar9; plVar13 = (long *)*plVar13) {
  }
  plVar13 = (long *)plVar19[0x13];
  if (plVar13 == (long *)0x0) {
LAB_02552040:
    if (plVar19 != (long *)0x0) {
      lVar15 = plVar19[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    if (local_58 != (long *)0x0) {
      lVar15 = local_58[0xb];
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    lVar15 = *(long *)(pbVar20 + 0x58);
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*(long *)pbVar20 + 0x20))(pbVar20);
    }
    return;
  }
  pbVar22 = (byte *)plVar13[3];
  if (pbVar22 != (byte *)0x0) goto LAB_02551eb8;
  do {
    local_70[0] = (byte *)0x0;
    while( true ) {
      (*(code *)*param_2)(param_2 + 4,local_70);
      if (local_70[0] != (byte *)0x0) {
        lVar15 = *(long *)(local_70[0] + 0x58);
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*(long *)local_70[0] + 0x20))();
        }
      }
      if (pbVar22 != (byte *)0x0) {
        lVar15 = *(long *)(pbVar22 + 0x58);
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*(long *)pbVar22 + 0x20))(pbVar22);
        }
        lVar15 = *(long *)(pbVar22 + 0x58);
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*(long *)pbVar22 + 0x20))(pbVar22);
        }
        lVar15 = *(long *)(pbVar22 + 0x58);
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*(long *)pbVar22 + 0x20))(pbVar22);
        }
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_02552040;
      pbVar22 = (byte *)plVar13[3];
      if (pbVar22 == (byte *)0x0) break;
LAB_02551eb8:
      lVar15 = *(long *)(pbVar22 + 0x58);
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_0255213c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar15 = *(long *)(pbVar22 + 0x58);
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0255213c;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar15 = *(long *)(pbVar22 + 0x58);
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0255213c;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar15 = *(long *)(pbVar22 + 0x58);
      local_70[0] = pbVar22;
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_0255213c;
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar2 = (int *)(lVar15 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  } while( true );
}


