/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145b0c8; name: FUN_0145b0c8
 */


void FUN_0145b0c8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  local_80 = &DAT_12f480e8b0aebe7d;
  pcStack_78 = "appli_hud";
  local_70 = 9;
  local_a0 = 0xc175331597abdb76;
  pcStack_98 = "guide_action_all";
  local_90 = 0x10;
  local_88 = (long *)0x0;
  bVar8 = FUN_00e9e50c(&local_80,&local_a0);
  *(byte *)(param_1 + 0x1f8) = bVar8 & 1;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145b31c:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145b31c;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b220;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145b31c;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b220;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145b31c;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
  goto LAB_0145b384;
LAB_0145b220:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) goto LAB_0145b31c;
  plVar1 = plVar14 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar10 = plVar14[0x14];
  if (uVar10 == 0) {
    uVar19 = 0;
  }
  else {
    uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
    uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar16 < 2) {
      uVar17 = uVar10 - 1 & 0x9cb12d6201438d02;
    }
    else if (uVar10 < 0x9cb12d6201438d03) {
      uVar17 = 0;
      if (uVar10 != 0) {
        uVar17 = 0x9cb12d6201438d02 / uVar10;
      }
      uVar17 = 0x9cb12d6201438d02 - uVar17 * uVar10;
    }
    else {
      uVar17 = 0x9cb12d6201438d02;
    }
    plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
    if (plVar18 == (long *)0x0) {
      uVar19 = 0;
    }
    else {
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else if (uVar16 < 2) {
        do {
          if (plVar18[1] == 0x9cb12d6201438d02) {
            if (plVar18[2] == -0x634ed29dfebc72fe) goto LAB_0145b36c;
          }
          else if ((plVar18[1] & uVar10 - 1) != uVar17) {
            uVar19 = 0;
            break;
          }
          plVar18 = (long *)*plVar18;
          uVar19 = 0;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar18[1];
          if (uVar16 == 0x9cb12d6201438d02) {
            if (plVar18[2] == -0x634ed29dfebc72fe) goto LAB_0145b36c;
          }
          else {
            if (uVar10 <= uVar16) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar16 / uVar10;
              }
              uVar16 = uVar16 - uVar4 * uVar10;
            }
            if (uVar16 != uVar17) {
              uVar19 = 0;
              goto LAB_0145b370;
            }
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
        uVar19 = 0;
      }
    }
  }
  goto LAB_0145b370;
LAB_0145b420:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0xa9df9653c3dd94af;
      }
      else if (uVar10 < 0xa9df9653c3dd94b0) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0xa9df9653c3dd94af / uVar10;
        }
        uVar17 = 0xa9df9653c3dd94af - uVar17 * uVar10;
      }
      else {
        uVar17 = 0xa9df9653c3dd94af;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0xa9df9653c3dd94af) {
              if (plVar18[2] == -0x562069ac3c226b51) goto LAB_0145b56c;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0xa9df9653c3dd94af) {
              if (plVar18[2] == -0x562069ac3c226b51) goto LAB_0145b56c;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145b570;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145b570;
  }
  goto LAB_0145b51c;
LAB_0145b56c:
  uVar19 = (undefined4)plVar18[6];
LAB_0145b570:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145b584;
LAB_0145b66c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0x550bc57254fdf9b6;
      }
      else if (uVar10 < 0x550bc57254fdf9b7) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0x550bc57254fdf9b6 / uVar10;
        }
        uVar17 = 0x550bc57254fdf9b6 - uVar17 * uVar10;
      }
      else {
        uVar17 = 0x550bc57254fdf9b6;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0x550bc57254fdf9b6) {
              if (plVar18[2] == 0x550bc57254fdf9b6) goto LAB_0145b7b8;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0x550bc57254fdf9b6) {
              if (plVar18[2] == 0x550bc57254fdf9b6) goto LAB_0145b7b8;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145b7bc;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145b7bc;
  }
  goto LAB_0145b768;
LAB_0145b7b8:
  uVar19 = (undefined4)plVar18[6];
LAB_0145b7bc:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145b7d0;
LAB_0145b880:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0x36285d7385e54da2;
      }
      else if (uVar10 < 0x36285d7385e54da3) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0x36285d7385e54da2 / uVar10;
        }
        uVar17 = 0x36285d7385e54da2 - uVar17 * uVar10;
      }
      else {
        uVar17 = 0x36285d7385e54da2;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0x36285d7385e54da2) {
              if (plVar18[2] == 0x36285d7385e54da2) goto LAB_0145b9cc;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0x36285d7385e54da2) {
              if (plVar18[2] == 0x36285d7385e54da2) goto LAB_0145b9cc;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145b9d0;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145b9d0;
  }
  goto LAB_0145b97c;
LAB_0145b9cc:
  uVar19 = (undefined4)plVar18[6];
LAB_0145b9d0:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145b9e4;
LAB_0145baac:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0x2f0d60da912cd3b4;
      }
      else if (uVar10 < 0x2f0d60da912cd3b5) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0x2f0d60da912cd3b4 / uVar10;
        }
        uVar17 = 0x2f0d60da912cd3b4 - uVar17 * uVar10;
      }
      else {
        uVar17 = 0x2f0d60da912cd3b4;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0x2f0d60da912cd3b4) {
              if (plVar18[2] == 0x2f0d60da912cd3b4) goto LAB_0145bbf8;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0x2f0d60da912cd3b4) {
              if (plVar18[2] == 0x2f0d60da912cd3b4) goto LAB_0145bbf8;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145bbfc;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145bbfc;
  }
  goto LAB_0145bba8;
LAB_0145bbf8:
  uVar19 = (undefined4)plVar18[6];
LAB_0145bbfc:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145bc10;
LAB_0145bcec:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0xac6f459b0104656f;
      }
      else if (uVar10 < 0xac6f459b01046570) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0xac6f459b0104656f / uVar10;
        }
        uVar17 = 0xac6f459b0104656f - uVar17 * uVar10;
      }
      else {
        uVar17 = 0xac6f459b0104656f;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0xac6f459b0104656f) {
              if (plVar18[2] == -0x5390ba64fefb9a91) goto LAB_0145be38;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0xac6f459b0104656f) {
              if (plVar18[2] == -0x5390ba64fefb9a91) goto LAB_0145be38;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145be3c;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145be3c;
  }
  goto LAB_0145bde8;
LAB_0145be38:
  uVar19 = (undefined4)plVar18[6];
LAB_0145be3c:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145be50;
LAB_0145bf24:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar10 = plVar14[0x14];
    if (uVar10 == 0) {
      uVar19 = 0;
    }
    else {
      uVar16 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar16 < 2) {
        uVar17 = uVar10 - 1 & 0xad4e0cda4fcd161a;
      }
      else if (uVar10 < 0xad4e0cda4fcd161b) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = 0xad4e0cda4fcd161a / uVar10;
        }
        uVar17 = 0xad4e0cda4fcd161a - uVar17 * uVar10;
      }
      else {
        uVar17 = 0xad4e0cda4fcd161a;
      }
      plVar18 = *(long **)(plVar14[0x13] + uVar17 * 8);
      if (plVar18 == (long *)0x0) {
        uVar19 = 0;
      }
      else {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) {
          uVar19 = 0;
        }
        else if (uVar16 < 2) {
          do {
            if (plVar18[1] == 0xad4e0cda4fcd161a) {
              if (plVar18[2] == -0x52b1f325b032e9e6) goto LAB_0145c070;
            }
            else if ((plVar18[1] & uVar10 - 1) != uVar17) {
              uVar19 = 0;
              break;
            }
            plVar18 = (long *)*plVar18;
            uVar19 = 0;
          } while (plVar18 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar18[1];
            if (uVar16 == 0xad4e0cda4fcd161a) {
              if (plVar18[2] == -0x52b1f325b032e9e6) goto LAB_0145c070;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar4 = 0;
                if (uVar10 != 0) {
                  uVar4 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar4 * uVar10;
              }
              if (uVar16 != uVar17) {
                uVar19 = 0;
                goto LAB_0145c074;
              }
            }
            plVar18 = (long *)*plVar18;
          } while (plVar18 != (long *)0x0);
          uVar19 = 0;
        }
      }
    }
    goto LAB_0145c074;
  }
  goto LAB_0145c020;
LAB_0145c070:
  uVar19 = (undefined4)plVar18[6];
LAB_0145c074:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_0145c088;
LAB_0145b36c:
  uVar19 = (undefined4)plVar18[6];
LAB_0145b370:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_0145b384:
  *(undefined4 *)(param_1 + 0x208) = uVar19;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145b51c:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145b51c;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b420;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145b51c;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b420;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145b51c;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_0145b584:
  *(undefined4 *)(param_1 + 0xb0) = uVar19;
  *(undefined4 *)(param_1 + 0x78) = uVar19;
  *(undefined4 *)(param_1 + 0x7c) = uVar19;
  *(undefined1 **)(param_1 + 0xa0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0xa8) = &DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x88) = 0x103;
  *(undefined8 *)(param_1 + 0x90) = 0x74b8f9d4207b7ac9;
  *(undefined8 *)(param_1 + 0x98) = 0x5f3e59a42f8f0de9;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145b768:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145b768;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b66c;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145b768;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b66c;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145b768;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_0145b7d0:
  *(undefined4 *)(param_1 + 0xf0) = uVar19;
  *(undefined4 *)(param_1 + 200) = 3;
  *(undefined1 **)(param_1 + 0xd0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0xd8) = &DAT_cbf29ce484222645;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
  *(undefined1 **)(param_1 + 0xe0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0xe8) = &DAT_cbf29ce484222645;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145b97c:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145b97c;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b880;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145b97c;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145b880;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145b97c;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_0145b9e4:
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x130) = uVar19;
  *(undefined4 *)(param_1 + 0xf8) = uVar19;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x110) = 0x67681d9019260776;
  *(undefined1 **)(param_1 + 0x118) = &DAT_cbf29ce484222645;
  *(undefined8 *)(param_1 + 0x100) = 0xffffffffffffffff;
  *(undefined1 **)(param_1 + 0x120) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x128) = &DAT_cbf29ce484222645;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145bba8:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145bba8;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145baac;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145bba8;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145baac;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145bba8;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_0145bc10:
  *(undefined4 *)(param_1 + 0x170) = uVar19;
  *(undefined4 *)(param_1 + 0x13c) = uVar19;
  *(undefined4 *)(param_1 + 0x138) = uVar19;
  *(undefined8 *)(param_1 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x150) = 0xf800e06fcda4e0cb;
  *(undefined8 *)(param_1 + 0x158) = 0xfabe609f23a65593;
  *(undefined4 *)(param_1 + 0x148) = 0x8090103;
  *(undefined1 **)(param_1 + 0x160) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x168) = &DAT_cbf29ce484222645;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 == (undefined1 *)0x0) {
LAB_0145bde8:
    uVar19 = 0;
  }
  else {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
    goto LAB_0145bde8;
    if (1 < uVar10) {
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145bcec;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto LAB_0145bde8;
    }
    do {
      if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
        if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145bcec;
      }
      else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
      goto LAB_0145bde8;
      plVar14 = (long *)*plVar14;
      uVar19 = 0;
    } while (plVar14 != (long *)0x0);
  }
LAB_0145be50:
  *(undefined4 *)(param_1 + 0x1b0) = uVar19;
  *(undefined4 *)(param_1 + 0x178) = uVar19;
  *(undefined4 *)(param_1 + 0x188) = 0x103;
  *(undefined4 *)(param_1 + 0x17c) = uVar19;
  *(undefined8 *)(param_1 + 400) = 0x720a006cfbd8713a;
  *(undefined8 *)(param_1 + 0x198) = 0x58e0ef8766da89d2;
  *(undefined8 *)(param_1 + 0x180) = 0xffffffffffffffff;
  *(undefined1 **)(param_1 + 0x1a0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1a8) = &DAT_cbf29ce484222645;
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  puVar12 = *(undefined1 **)(lVar13 + 0x60);
  if (puVar12 != (undefined1 *)0x0) {
    uVar10 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar12 + -1) & 0x12f480e8b0aebe7d);
    }
    else {
      puVar11 = &DAT_12f480e8b0aebe7d;
      if (puVar12 < (undefined1 *)0x12f480e8b0aebe7e) {
        uVar16 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar16 = 0x12f480e8b0aebe7d / (ulong)puVar12;
        }
        puVar11 = &DAT_12f480e8b0aebe7d + -(uVar16 * (long)puVar12);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == &DAT_12f480e8b0aebe7d) {
            if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145bf24;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar12 + -1)) != puVar11)
          goto LAB_0145c020;
          plVar14 = (long *)*plVar14;
          uVar19 = 0;
        } while (plVar14 != (long *)0x0);
        goto LAB_0145c088;
      }
      do {
        puVar15 = (undefined1 *)plVar14[1];
        if (puVar15 == &DAT_12f480e8b0aebe7d) {
          if ((undefined1 *)plVar14[2] == &DAT_12f480e8b0aebe7d) goto LAB_0145bf24;
        }
        else {
          if (puVar12 <= puVar15) {
            uVar10 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar12;
            }
            puVar15 = puVar15 + -(uVar10 * (long)puVar12);
          }
          if (puVar15 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_0145c020:
  uVar19 = 0;
LAB_0145c088:
  *(undefined4 *)(param_1 + 0x1f0) = uVar19;
  *(undefined4 *)(param_1 + 0x1c8) = 0x103;
  *(undefined1 **)(param_1 + 0x1d0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1d8) = &DAT_cbf29ce484222645;
  *(undefined8 *)(param_1 + 0x1b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c0) = 0xffffffffffffffff;
  *(undefined1 **)(param_1 + 0x1e0) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x1e8) = &DAT_cbf29ce484222645;
  return;
}


