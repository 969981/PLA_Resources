/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0162fab0; name: FUN_0162fab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162fab0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *local_70;
  undefined8 local_68;
  
  lVar5 = param_1 + 0x58;
  FUN_01634dd0(lVar5,(long)(128.0 / *(float *)(param_1 + 0xb8)));
  local_68 = 0xfb3e07e0ffd1b25b;
  puVar7 = (undefined8 *)(param_1 + 8);
  local_70 = (long *)FUN_0163517c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016353e4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xa9ba3a52a69dd7a8;
  local_70 = (long *)FUN_016357a8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01635938(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xecc548b7b9448dd5;
  local_70 = (long *)FUN_01635cf8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01635e88(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x53d11252a6f42576;
  local_70 = (long *)FUN_01636248(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016363d8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xae39dfcb98b7358b;
  local_70 = (long *)FUN_01636798(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01636928(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xa4c6918f875b40fd;
  local_70 = (long *)FUN_01636ce8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01636e78(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xb54d19ca9f2b27a8;
  local_70 = (long *)FUN_01637238(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016373c8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x909ae490410b6058;
  local_70 = (long *)FUN_01637784(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01637914(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xc0a167ce4daefca8;
  local_70 = (long *)FUN_01637cd4(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01637e64(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xea08f03627ca535f;
  local_70 = (long *)FUN_01638220(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016383b0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x388689e19b68d6f9;
  local_70 = (long *)FUN_01638770(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01638900(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x512653c97af7f269;
  local_70 = (long *)FUN_01638cc0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01638e50(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1223758e1f82495e;
  local_70 = (long *)FUN_01639210(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016393a0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x4cc0659046f12ef7;
  local_70 = (long *)FUN_01639760(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016398f0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x5f5f59aa1a454253;
  local_70 = (long *)FUN_01639cb0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01639e40(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x836c7b20b1bc4a14;
  local_70 = (long *)FUN_0163a200(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163a390(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x3221105676a499b3;
  local_70 = (long *)FUN_0163a750(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163a8e0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x949ed0e99a38a7af;
  local_70 = (long *)FUN_0163aca0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163ae30(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf7911b293c7f980e;
  local_70 = (long *)FUN_0163b1f0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163b380(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x6a28cb95a4bbff62;
  local_70 = (long *)FUN_0163b740(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163b8d0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x48d69d8788b2fe61;
  local_70 = (long *)FUN_0163bc90(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163be20(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xc68c92a921029b81;
  local_70 = (long *)FUN_0163c1e0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163c370(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xb651089382810dea;
  local_70 = (long *)FUN_0163c730(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163c8c0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf8218adc727f3f92;
  local_70 = (long *)FUN_0163cc80(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163ce10(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x5195731ee2bca693;
  local_70 = (long *)FUN_0163d1d0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163d360(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd73d391e9d2276b2;
  local_70 = (long *)FUN_0163d720(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163d8b0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x8496771eff5a370c;
  local_70 = (long *)FUN_0163dc70(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163de00(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x2719cb6b0bcc8398;
  local_70 = (long *)FUN_0163e1c0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163e350(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x861ac906050fbc07;
  local_70 = (long *)FUN_0163e710(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163e8a0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x555fcea6d6c83adb;
  local_70 = (long *)FUN_0163ec60(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163edf0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xb956caa67e5eb58c;
  local_70 = (long *)FUN_0163f1ac(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163f33c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x633e78a0c793496e;
  local_70 = (long *)FUN_0163f6f8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163f888(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x91530ccb04ea81a2;
  local_70 = (long *)FUN_0163fc48(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0163fdd8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xe69aeb1cb355cfd4;
  local_70 = (long *)FUN_01640198(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01640328(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x79c506a26abe4c0c;
  local_70 = (long *)FUN_016406e8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01640878(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x9e3a5eb597d7f7a6;
  local_70 = (long *)FUN_01640c34(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01640dc4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x8212cbcb399c7f54;
  local_70 = (long *)FUN_01641184(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01641314(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x3d79d6d0058d4d92;
  local_70 = (long *)FUN_016416d0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164186c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x2d01c6b3ee7ec58d;
  local_70 = (long *)FUN_01641c28(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01641db8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1f24a4fcf859527b;
  local_70 = (long *)FUN_01642178(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01642308(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xda71107bf9807c04;
  local_70 = (long *)FUN_016426c8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01642858(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x35ae11b202b33fab;
  local_70 = (long *)FUN_01642c18(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01642da8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x8520f45674d19e44;
  local_70 = (long *)FUN_01643168(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016432f8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x8cf3d91b280b82c9;
  local_70 = (long *)FUN_016436b8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01643854(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x6d35e2eab45c0f6e;
  local_70 = (long *)FUN_01643c14(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01643da4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd20cf4ea5cb0beef;
  local_70 = (long *)FUN_01644160(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016442f0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x7f6616eabee84fb5;
  local_70 = (long *)FUN_016446b0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01644840(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xc59a0cc763d2a7a8;
  local_70 = (long *)FUN_01644c00(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01644d90(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x9f42d62f7dfbf4a4;
  local_70 = (long *)FUN_0164514c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016452dc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x466c5dfffa6047de;
  local_70 = (long *)FUN_0164569c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164582c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xacdcfb9b749a3d26;
  local_70 = (long *)FUN_01645be8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01645d78(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1f9c392cefbb1b58;
  local_70 = (long *)FUN_01646134(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016462c4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x3739aa4dfe7142d8;
  local_70 = (long *)FUN_01646680(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01646810(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x7f22b0cafa5dfd63;
  local_70 = (long *)FUN_01646bcc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01646d5c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xe716459f5ebe2e94;
  local_70 = (long *)FUN_0164711c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016472ac(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x81bf500d5709c9c;
  local_70 = (long *)FUN_01647668(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016477f8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf4f2be33d270d1f7;
  local_70 = (long *)FUN_01647bb8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01647d48(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xc2fc48f79d5f53ba;
  local_70 = (long *)FUN_01648104(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01648294(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd9bb98942d0bcf6;
  local_70 = (long *)FUN_01648654(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164878c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x4e3742139786576f;
  local_70 = (long *)FUN_01648b48(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01648cd8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xa7c532b0d5af6f59;
  local_70 = (long *)FUN_01649094(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016491cc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xcdcb1e4485bd64ac;
  local_70 = (long *)FUN_0164958c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164971c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x82e032de25ce78e0;
  local_70 = (long *)FUN_01649adc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01649c6c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd7000a2da20f2aeb;
  local_70 = (long *)FUN_0164a02c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164a1bc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xb590fb0e4757ece;
  local_70 = (long *)FUN_0164a57c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164a70c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1608695374913ba9;
  local_70 = (long *)FUN_0164aacc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164ac5c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x6c0a8d2940d8f34a;
  local_70 = (long *)FUN_0164b01c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164b1ac(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x8f4ecba903be3cd2;
  local_70 = (long *)FUN_0164b56c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164b6fc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x145d669ed9ccd14;
  local_70 = (long *)FUN_0164babc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164bc4c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xda1ece532b4484d3;
  local_70 = (long *)FUN_0164c008(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164c198(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf6d071052a9a65df;
  local_70 = (long *)FUN_0164c554(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164c68c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1ebc09e17e96f774;
  local_70 = (long *)FUN_0164ca48(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164cbd8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd5092edb9dafa972;
  local_70 = (long *)FUN_0164cf98(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164d128(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x672cf23b33ea0505;
  local_70 = (long *)FUN_0164d4e8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164d678(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf428a39ff598d116;
  local_70 = (long *)FUN_0164da38(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164dbc8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf688862e367cf429;
  local_70 = (long *)FUN_0164df88(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164e118(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xa93595533a427b98;
  local_70 = (long *)FUN_0164e4d4(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164e664(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xa6c73c7e028a667b;
  local_70 = (long *)FUN_0164ea20(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164ebb0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x6c9c2c4bf7ec3138;
  local_70 = (long *)FUN_0164ef6c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164f188(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x2d7a8bd9982c8840;
  local_70 = (long *)FUN_0164f548(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164f6d8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x28cf7a6f7273496a;
  local_70 = (long *)FUN_0164fa98(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0164fc28(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x908fc6969ab5250d;
  local_70 = (long *)FUN_0164ffe4(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01650174(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x81fe18c0b68bfc12;
  local_70 = (long *)FUN_01650530(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016506c0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xe75986350917856a;
  local_70 = (long *)FUN_01650a7c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01650c0c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x9cee05ce2a7df249;
  local_70 = (long *)FUN_01650fc8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01651158(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x82ebfdb54c8107a5;
  local_70 = (long *)FUN_01651514(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016516a4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xd458c18ce2a7e801;
  local_70 = (long *)FUN_01651a64(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01651bf4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x4393e4fd10599008;
  local_70 = (long *)FUN_01651fb0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01652140(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xdbef9bbf00919f52;
  local_70 = (long *)FUN_01652500(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01652690(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xeee8243bdf3948b0;
  local_70 = (long *)FUN_01652a4c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01652bdc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x2156f9e8ed44730d;
  local_70 = (long *)FUN_01652f9c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165312c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x6c50acc5a3018c28;
  local_70 = (long *)FUN_016534e8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01653678(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x39a6cb761a05967b;
  local_70 = (long *)FUN_01653a34(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01653bc4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x635b9bf9c7b6bea3;
  local_70 = (long *)FUN_01653f80(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165411c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x58d65502484672be;
  local_70 = (long *)FUN_016544dc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165466c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x2baed33b647a894f;
  local_70 = (long *)FUN_01654a2c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01654bbc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x36c4ea8e0c07226a;
  local_70 = (long *)FUN_01654f7c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01655130(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x1d29bc9a7ba7d242;
  local_70 = (long *)FUN_016554ec(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165567c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x5b3f92d4849ab3ae;
  local_70 = (long *)FUN_01655a3c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01655bcc(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xe4b9efcf8b1793d1;
  local_70 = (long *)FUN_01655f8c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165611c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xef0f31cce66e7cba;
  local_70 = (long *)FUN_016564dc(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0165666c(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x5b249f4c1c8a2800;
  local_70 = (long *)FUN_01656a28(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01656bb8(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x39a9db57ed643e63;
  local_70 = (long *)FUN_01656f78(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01657108(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x3f669c91af847b32;
  local_70 = (long *)FUN_016574c4(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01657654(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf6cc19eba86582d5;
  local_70 = (long *)FUN_01657a10(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01657ba0(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xb0f3255086108a01;
  local_70 = (long *)FUN_01657f5c(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016580ec(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xfa1dfcce926904e0;
  local_70 = (long *)FUN_016584a8(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01658638(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x9fbf53a8261403f;
  local_70 = (long *)FUN_016589f4(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01658b84(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x36bd72700fe8335a;
  local_70 = (long *)FUN_01658f44(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_016590d4(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0xf6bd3323d7ec7f2e;
  local_70 = (long *)FUN_01659494(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01659624(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_68 = 0x65852f23188ed61f;
  local_70 = (long *)FUN_016599e0(*puVar7);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_01659b70(lVar5,&local_68,&local_70);
  if (local_70 != (long *)0x0) {
    plVar6 = local_70 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  plVar6 = (long *)*puVar7;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar4 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x58,8);
  if (puVar7 == (undefined8 *)0x0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_0163530c();
  }
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[10] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_0163530c();
}


