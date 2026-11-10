/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5b700; name: FUN_02a5b700
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02a5b700(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  size_t sVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar22 = (long *)(param_1 + 0xc0);
  do {
    if (*plVar22 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb4));
        while (*plVar22 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_02a5b770;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar7) {
      *plVar22 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_02a5b770:
  plVar22 = *(long **)(param_1 + 0x300);
  plVar11 = *(long **)(param_1 + 0x308);
  if ((plVar22 != plVar11) && (*plVar22 != param_2)) {
    do {
      if (plVar11 + -1 == plVar22) goto LAB_02a5b8c0;
      plVar2 = plVar22 + 1;
      plVar22 = plVar22 + 1;
    } while (*plVar2 != param_2);
  }
  if (plVar11 == plVar22) {
LAB_02a5b8c0:
    plVar22 = *(long **)(param_1 + 0x78);
    plVar11 = *(long **)(param_1 + 0x80);
    if ((plVar22 != plVar11) && (*plVar22 != param_2)) {
      do {
        if (plVar11 + -1 == plVar22) goto LAB_02a5ba60;
        plVar2 = plVar22 + 1;
        plVar22 = plVar22 + 1;
      } while (*plVar2 != param_2);
    }
    if (plVar11 == plVar22) goto LAB_02a5ba60;
    sVar8 = (long)plVar11 - (long)(plVar22 + 1);
    if (sVar8 != 0) {
      memmove(plVar22,plVar22 + 1,sVar8);
    }
    *(long **)(param_1 + 0x80) = plVar22 + ((long)sVar8 >> 3);
    lVar9 = *(long *)(param_2 + 0x220);
  }
  else {
    sVar8 = (long)plVar11 - (long)(plVar22 + 1);
    if (sVar8 != 0) {
      memmove(plVar22,plVar22 + 1,sVar8);
    }
    *(long **)(param_1 + 0x308) = plVar22 + ((long)sVar8 >> 3);
    uVar15 = *(long *)(param_1 + 0x1e8) + (long)*(int *)(param_2 + 0x328);
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0x1b0) + (uVar15 >> 2 & 0x3ffffffffffffff8)) +
                     (uVar15 & 0x1f) * 0x80 + 0x7c);
    if (-1 < iVar5) {
      plVar22 = *(long **)(param_1 + 0x68);
      if (plVar22 != (long *)0x0) {
        lVar9 = plVar22[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a5bf4c;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar10;
        }
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar9 = plVar22[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a5bf4c;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar10;
        }
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar9 = *(long *)(plVar22[0x84] + (long)iVar5 * 8);
      for (plVar11 = *(long **)(lVar9 + 0x3d8); plVar11 != *(long **)(lVar9 + 0x3e0);
          plVar11 = plVar11 + 2) {
        if (*plVar11 == param_2) {
          *(undefined1 *)(plVar11 + 1) = 0;
          break;
        }
      }
      if (plVar22 == (long *)0x0) {
LAB_02a5b970:
        plVar22 = *(long **)(param_1 + 0x70);
      }
      else {
        lVar9 = plVar22[0xb];
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          iVar4 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
        lVar9 = plVar22[0xb];
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          iVar4 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar4 + -1 != 0) goto LAB_02a5b970;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar22 + 0x20))(plVar22);
        plVar22 = *(long **)(param_1 + 0x70);
      }
      if (plVar22 != (long *)0x0) {
        lVar9 = plVar22[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_02a5bf4c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar10;
        }
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar9 = plVar22[0xb];
        if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02a5bf4c;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
          *(undefined8 *)(lVar9 + 0x10) = uVar10;
        }
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = *piVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar9 = *(long *)(plVar22[0x84] + (long)iVar5 * 8);
      for (plVar11 = *(long **)(lVar9 + 0x3d8); plVar11 != *(long **)(lVar9 + 0x3e0);
          plVar11 = plVar11 + 2) {
        if (*plVar11 == param_2) {
          *(undefined1 *)(plVar11 + 1) = 0;
          break;
        }
      }
      if (plVar22 != (long *)0x0) {
        lVar9 = plVar22[0xb];
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
        }
        lVar9 = plVar22[0xb];
        piVar16 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar16;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar7) {
            *piVar16 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar22 + 0x20))(plVar22);
          lVar9 = *(long *)(param_2 + 0x220);
          goto joined_r0x02a5bf3c;
        }
      }
    }
LAB_02a5ba60:
    lVar9 = *(long *)(param_2 + 0x220);
  }
joined_r0x02a5bf3c:
  if (lVar9 == 0) goto LAB_02a5bb54;
  piVar19 = *(int **)(param_1 + 0x218);
  piVar12 = *(int **)(param_1 + 0x220);
  piVar16 = piVar19;
  if (piVar19 != piVar12) {
    iVar5 = *piVar19;
    while (*(int *)(param_2 + 0x328) != iVar5) {
      piVar16 = (int *)((long)piVar16 + 8);
      if (piVar12 == piVar16) goto LAB_02a5bb54;
      iVar5 = *piVar16;
    }
  }
  if (piVar12 == piVar16) goto LAB_02a5bb54;
  piVar21 = piVar16 + 2;
  if (piVar21 == piVar12) {
LAB_02a5bb4c:
    piVar20 = piVar16;
  }
  else {
    lVar9 = (long)piVar16 - (long)piVar19 >> 3;
    piVar20 = piVar12 + (-2 - lVar9) * 2;
    uVar15 = (long)piVar20 - (long)piVar19;
    if (((uint)uVar15 >> 3 & 1) == 0) {
      piVar20 = piVar16 + 2;
      *piVar16 = *piVar20;
      piVar19[lVar9 * 2 + 1] = piVar16[3];
      piVar21 = piVar16 + 4;
      piVar16 = piVar20;
    }
    if (7 < uVar15) {
      do {
        *piVar16 = *piVar21;
        piVar16[1] = piVar21[1];
        piVar16[2] = piVar21[2];
        piVar19 = piVar21 + 3;
        piVar21 = piVar21 + 4;
        piVar16[3] = *piVar19;
        piVar16 = piVar16 + 4;
      } while (piVar21 != piVar12);
      goto LAB_02a5bb4c;
    }
  }
  *(int **)(param_1 + 0x220) = piVar20;
LAB_02a5bb54:
  piVar16 = (int *)(param_2 + 0x328);
  lVar9 = *(long *)(param_1 + 0x1e8);
  uVar15 = lVar9 + *(int *)(param_2 + 0x328);
  lVar17 = *(long *)(param_1 + 0x1b0);
  puVar3 = (undefined8 *)
           (*(long *)(lVar17 + (uVar15 >> 2 & 0x3ffffffffffffff8)) + (uVar15 & 0x1f) * 0x80);
  puVar24 = puVar3 + 7;
  puVar25 = puVar3 + 8;
  piVar19 = (int *)*puVar25;
  piVar12 = (int *)*puVar24;
  if ((int *)*puVar24 != piVar19) {
    do {
      lVar13 = (lVar9 + *piVar12 & 0x1fU) * 0x80;
      lVar9 = *(long *)(lVar17 + ((ulong)(lVar9 + *piVar12) >> 2 & 0x3ffffffffffffff8));
      piVar21 = *(int **)(lVar9 + lVar13);
      plVar22 = (long *)(lVar9 + lVar13 + 8);
      piVar14 = (int *)*plVar22;
      piVar20 = piVar21;
      if ((piVar21 != piVar14) && (*piVar21 != *piVar16)) {
        do {
          piVar20 = piVar14;
          if (piVar14 + -1 == piVar21) break;
          piVar1 = piVar21 + 1;
          piVar21 = piVar21 + 1;
          piVar20 = piVar21;
        } while (*piVar1 != *piVar16);
      }
      if (piVar14 == piVar20) goto LAB_02a5bf4c;
      sVar8 = (long)piVar14 - (long)(piVar20 + 1);
      if (sVar8 != 0) {
        memmove(piVar20,piVar20 + 1,sVar8);
      }
      *plVar22 = (long)(piVar20 + ((long)sVar8 >> 2));
      FUN_02a5bf68(param_1,*piVar12);
      if (piVar12 + 1 == piVar19) break;
      lVar9 = *(long *)(param_1 + 0x1e8);
      lVar17 = *(long *)(param_1 + 0x1b0);
      piVar12 = piVar12 + 1;
    } while( true );
  }
  piVar12 = (int *)*puVar3;
  piVar19 = (int *)puVar3[1];
  if (piVar12 != piVar19) {
    do {
      uVar15 = *(long *)(param_1 + 0x1e8) + (long)*piVar12;
      lVar9 = *(long *)(*(long *)(param_1 + 0x1b0) + (uVar15 >> 2 & 0x3ffffffffffffff8)) +
              (uVar15 & 0x1f) * 0x80;
      puVar23 = (undefined8 *)(lVar9 + 0x38);
      piVar21 = (int *)*puVar23;
      plVar22 = (long *)(lVar9 + 0x40);
      piVar14 = (int *)*plVar22;
      piVar20 = piVar21;
      if ((piVar21 != piVar14) && (*piVar21 != *piVar16)) {
        do {
          piVar20 = piVar14;
          if (piVar14 + -1 == piVar21) break;
          piVar1 = piVar21 + 1;
          piVar21 = piVar21 + 1;
          piVar20 = piVar21;
        } while (*piVar1 != *piVar16);
      }
      if (piVar14 == piVar20) goto LAB_02a5bf4c;
      sVar8 = (long)piVar14 - (long)(piVar20 + 1);
      if (sVar8 != 0) {
        memmove(piVar20,piVar20 + 1,sVar8);
      }
      *plVar22 = (long)(piVar20 + ((long)sVar8 >> 2));
      piVar21 = (int *)*puVar25;
      if ((int *)*puVar24 != piVar21) {
        piVar20 = (int *)*puVar24;
        do {
          piVar14 = piVar20 + 1;
          uVar15 = *(long *)(param_1 + 0x1e8) + (long)*piVar20;
          FUN_02a5c420(*(long *)(*(long *)(param_1 + 0x1b0) + (uVar15 >> 2 & 0x3ffffffffffffff8)) +
                       (uVar15 & 0x1f) * 0x80,piVar12);
          FUN_02a5c420(puVar23,piVar20);
          piVar20 = piVar14;
        } while (piVar21 != piVar14);
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar19);
    piVar12 = (int *)*puVar3;
  }
  puVar3[1] = piVar12;
  *puVar25 = *puVar24;
  puVar3[0xe] = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0xffffffff;
  if (*(int *)(param_1 + 200) <= *piVar16) {
    lVar9 = nn::os::GetCurrentThread();
    plVar22 = (long *)(param_1 + 0x1a0);
    do {
      if (*plVar22 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x194));
          while (*plVar22 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar7) {
              *plVar22 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_02a5bdfc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar7) {
        *plVar22 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_02a5bdfc:
    uVar15 = (long)*piVar16 - (long)*(int *)(param_1 + 200);
    if ((1L << (uVar15 & 0x3f) &
        *(ulong *)(*(long *)(param_1 + 0x150) + (uVar15 >> 3 & 0x1ffffffffffffff8))) != 0) {
      FUN_01f4f778(param_1 + 0xd8,piVar16);
      uVar15 = (long)*piVar16 - (long)*(int *)(param_1 + 200);
      uVar18 = uVar15 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(*(long *)(param_1 + 0x150) + uVar18) =
           *(ulong *)(*(long *)(param_1 + 0x150) + uVar18) &
           (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x194));
  }
  *(undefined1 *)(param_1 + 0x2f4) = 1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb4));
  return;
}


