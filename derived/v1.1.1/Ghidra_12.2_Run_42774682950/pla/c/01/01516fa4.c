/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01516fa4; name: FUN_01516fa4
 */


undefined8 FUN_01516fa4(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_48;
  
  lVar7 = FUN_01515284();
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
LAB_01516fdc:
    plVar9 = plVar11 + 1;
    uVar8 = FUN_0151a318(*plVar11 + 0x50);
    if ((uVar8 & 1) == 0) goto code_r0x01516fec;
    plVar11 = (long *)*plVar11;
    uVar8 = FUN_0151a318(plVar11 + 10);
    if ((uVar8 & 1) != 0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        cVar3 = *(char *)((long)plVar11 + 0xb4);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          bVar6 = true;
          if (cVar3 == '\0') goto LAB_01517380;
LAB_0151744c:
          if (bVar6) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_01517004;
        }
        bVar6 = false;
        if (cVar3 != '\0') goto LAB_0151744c;
        goto LAB_01517380;
      }
      goto LAB_0151769c;
    }
  }
LAB_01517004:
  lVar7 = FUN_01515284(param_1,param_2);
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
LAB_01517024:
    plVar9 = plVar11 + 1;
    uVar8 = FUN_0151a438(*plVar11 + 0x50);
    if ((uVar8 & 1) == 0) goto code_r0x01517034;
    plVar11 = (long *)*plVar11;
    uVar8 = FUN_0151a438(plVar11 + 10);
    if ((uVar8 & 1) != 0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        cVar3 = *(char *)((long)plVar11 + 0xb4);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          bVar6 = true;
          if (cVar3 == '\0') goto LAB_01517380;
LAB_01517684:
          if (bVar6) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_0151704c;
        }
        bVar6 = false;
        if (cVar3 != '\0') goto LAB_01517684;
        goto LAB_01517380;
      }
      goto LAB_0151769c;
    }
  }
LAB_0151704c:
  lVar7 = FUN_01515284(param_1,param_2);
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
LAB_0151706c:
    plVar9 = plVar11 + 1;
    uVar8 = FUN_0151a558(*plVar11 + 0x50);
    if ((uVar8 & 1) == 0) goto code_r0x0151707c;
    plVar11 = (long *)*plVar11;
    uVar8 = FUN_0151a558(plVar11 + 10);
    if ((uVar8 & 1) != 0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        cVar3 = *(char *)((long)plVar11 + 0xb4);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          bVar6 = true;
          if (cVar3 == '\0') goto LAB_01517380;
LAB_0151742c:
          if (bVar6) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_01517094;
        }
        bVar6 = false;
        if (cVar3 != '\0') goto LAB_0151742c;
        goto LAB_01517380;
      }
      goto LAB_0151769c;
    }
  }
LAB_01517094:
  lVar7 = FUN_01515284(param_1,param_2);
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
LAB_015170b4:
    plVar9 = plVar11 + 1;
    uVar8 = FUN_0151a678(*plVar11 + 0x50);
    if ((uVar8 & 1) == 0) goto code_r0x015170c4;
    plVar11 = (long *)*plVar11;
    uVar8 = FUN_0151a678(plVar11 + 10);
    if ((uVar8 & 1) != 0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        cVar3 = *(char *)((long)plVar11 + 0xb4);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          bVar6 = true;
          if (cVar3 == '\0') goto LAB_01517380;
LAB_0151764c:
          if (bVar6) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_015170dc;
        }
        bVar6 = false;
        if (cVar3 != '\0') goto LAB_0151764c;
        goto LAB_01517380;
      }
      goto LAB_0151769c;
    }
  }
LAB_015170dc:
  lVar7 = FUN_01515284(param_1,param_2);
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
LAB_015170fc:
    plVar9 = plVar11 + 1;
    uVar8 = FUN_0151a798(*plVar11 + 0x50);
    if ((uVar8 & 1) == 0) goto code_r0x0151710c;
    plVar11 = (long *)*plVar11;
    uVar8 = FUN_0151a798(plVar11 + 10);
    if ((uVar8 & 1) != 0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        cVar3 = *(char *)((long)plVar11 + 0xb4);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          bVar6 = true;
          if (cVar3 == '\0') goto LAB_01517380;
LAB_0151746c:
          if (bVar6) {
            (**(code **)(*plVar11 + 0x20))(plVar11);
          }
          goto LAB_01517124;
        }
        bVar6 = false;
        if (cVar3 != '\0') goto LAB_0151746c;
        goto LAB_01517380;
      }
      goto LAB_0151769c;
    }
  }
LAB_01517124:
  lVar7 = FUN_01515284(param_1,param_2);
  puVar5 = PTR_DAT_0437f8b8;
  if (*(long *)(lVar7 + 0x238) != 0) {
    plVar11 = *(long **)(lVar7 + 0x230);
    do {
      plVar9 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 0x50))();
      FUN_0151a8b8();
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)puVar5) {
          plVar11 = (long *)*plVar11;
          plVar9 = (long *)(**(code **)plVar11[10])(plVar11 + 10);
          FUN_0151a8b8();
          goto joined_r0x015171ac;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8));
  }
LAB_015171c0:
  FUN_01515284(param_1,param_2);
  FUN_015176b4(&local_48);
  if (local_48 == (long *)0x0) {
LAB_015171dc:
    FUN_01515284(param_1,param_2);
    FUN_0151785c(&local_48);
    if (local_48 != (long *)0x0) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      cVar3 = *(char *)((long)local_48 + 0xb4);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
      if (cVar3 == '\0') goto LAB_01517384;
    }
    uVar10 = 1;
  }
  else {
    lVar7 = local_48[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    cVar3 = *(char *)((long)local_48 + 0xb4);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = iVar2 == 1;
    if (bVar6) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
    }
    if (cVar3 != '\0') {
      if (bVar6) {
        (**(code **)(*local_48 + 0x20))();
      }
      goto LAB_015171dc;
    }
    if (bVar6) {
      (**(code **)(*local_48 + 0x20))();
    }
LAB_01517384:
    uVar10 = 0;
  }
  return uVar10;
code_r0x01516fec:
  plVar11 = plVar9;
  if (plVar9 == (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8))
  goto LAB_01517004;
  goto LAB_01516fdc;
code_r0x01517034:
  plVar11 = plVar9;
  if (plVar9 == (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8))
  goto LAB_0151704c;
  goto LAB_01517024;
code_r0x0151707c:
  plVar11 = plVar9;
  if (plVar9 == (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8))
  goto LAB_01517094;
  goto LAB_0151706c;
code_r0x015170c4:
  plVar11 = plVar9;
  if (plVar9 == (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8))
  goto LAB_015170dc;
  goto LAB_015170b4;
code_r0x0151710c:
  plVar11 = plVar9;
  if (plVar9 == (long *)(*(long *)(lVar7 + 0x230) + *(long *)(lVar7 + 0x238) * 8))
  goto LAB_01517124;
  goto LAB_015170fc;
joined_r0x015171ac:
  if (plVar9 != (long *)0x0) {
    if (plVar9 != (long *)puVar5) goto code_r0x015171b8;
    lVar7 = plVar11[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_0151769c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar7 = plVar11[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    cVar3 = *(char *)((long)plVar11 + 0xb4);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 != 1) {
      bVar6 = false;
      if (cVar3 == '\0') goto LAB_01517380;
LAB_015174c8:
      if (bVar6) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      goto LAB_015171c0;
    }
    *(undefined8 *)(lVar7 + 0x18) = 0;
    bVar6 = true;
    if (cVar3 != '\0') goto LAB_015174c8;
LAB_01517380:
    if (bVar6) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return 0;
    }
    goto LAB_01517384;
  }
  goto LAB_015171c0;
code_r0x015171b8:
  plVar9 = (long *)*plVar9;
  goto joined_r0x015171ac;
}


