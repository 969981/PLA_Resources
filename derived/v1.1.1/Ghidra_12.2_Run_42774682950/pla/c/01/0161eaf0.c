/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161eaf0; name: FUN_0161eaf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0161eaf0(long param_1)

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
  FUN_016217bc(lVar5,(long)(128.0 / *(float *)(param_1 + 0xb8)));
  local_68 = 0x8e77d62d1e38721e;
  puVar7 = (undefined8 *)(param_1 + 8);
  local_70 = (long *)FUN_01621b68(*puVar7);
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
  FUN_01621de0(lVar5,&local_68,&local_70);
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
  local_68 = 0x3ddd5feb4a68a149;
  local_70 = (long *)FUN_01622198(*puVar7);
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
  FUN_01622328(lVar5,&local_68,&local_70);
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
  local_68 = 0x4218eeea9bfe8019;
  local_70 = (long *)FUN_016226dc(*puVar7);
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
  FUN_0162286c(lVar5,&local_68,&local_70);
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
  local_68 = 0x56e50d419bfb3a2c;
  local_70 = (long *)FUN_01622c20(*puVar7);
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
  FUN_01622db0(lVar5,&local_68,&local_70);
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
  local_68 = 0x7aab4d6febac4c0e;
  local_70 = (long *)FUN_01623164(*puVar7);
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
  FUN_016232f4(lVar5,&local_68,&local_70);
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
  local_68 = 0x892e20d02629f1fa;
  local_70 = (long *)FUN_016236a8(*puVar7);
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
  FUN_01623838(lVar5,&local_68,&local_70);
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
  local_68 = 0x344570c1301a7584;
  local_70 = (long *)FUN_01623bec(*puVar7);
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
  FUN_01623d7c(lVar5,&local_68,&local_70);
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
  local_68 = 0x2557279b949c81d6;
  local_70 = (long *)FUN_01624130(*puVar7);
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
  FUN_016242c0(lVar5,&local_68,&local_70);
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
  local_68 = 0x5e53c6367a2d36bc;
  local_70 = (long *)FUN_01624674(*puVar7);
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
  FUN_01624804(lVar5,&local_68,&local_70);
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
  local_68 = 0x46ebe59f660b132b;
  local_70 = (long *)FUN_01624bb8(*puVar7);
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
  FUN_01624d48(lVar5,&local_68,&local_70);
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
  local_68 = 0x8e0f436d4e20e310;
  local_70 = (long *)FUN_016250fc(*puVar7);
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
  FUN_0162528c(lVar5,&local_68,&local_70);
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
  local_68 = 0xd95b681bfe1bb762;
  local_70 = (long *)FUN_01625640(*puVar7);
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
  FUN_016257d0(lVar5,&local_68,&local_70);
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
  local_68 = 0xb2ee750dbcd8ffd6;
  local_70 = (long *)FUN_01625b84(*puVar7);
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
  FUN_01625d14(lVar5,&local_68,&local_70);
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
  local_68 = 0xfa75906b85ae950f;
  local_70 = (long *)FUN_016260c4(*puVar7);
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
  FUN_01626254(lVar5,&local_68,&local_70);
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
  local_68 = 0x43c4820f12b5385c;
  local_70 = (long *)FUN_01626608(*puVar7);
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
  FUN_01626798(lVar5,&local_68,&local_70);
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
  local_68 = 0x409a7f367b037545;
  local_70 = (long *)FUN_01626b4c(*puVar7);
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
  FUN_01626cdc(lVar5,&local_68,&local_70);
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
  local_68 = 0x5b017a2b0c07cd1a;
  local_70 = (long *)FUN_01627090(*puVar7);
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
  FUN_01627220(lVar5,&local_68,&local_70);
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
  local_68 = 0x2041c674206fe0a7;
  local_70 = (long *)FUN_016275d4(*puVar7);
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
  FUN_01627764(lVar5,&local_68,&local_70);
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
  local_68 = 0x4bbf494c6ce53fea;
  local_70 = (long *)FUN_01627b18(*puVar7);
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
  FUN_01627ca8(lVar5,&local_68,&local_70);
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
  local_68 = 0xf8adf49e06e61c30;
  local_70 = (long *)FUN_0162805c(*puVar7);
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
  FUN_016281ec(lVar5,&local_68,&local_70);
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
  local_68 = 0xb1d54ca3acfd951c;
  local_70 = (long *)FUN_016285a0(*puVar7);
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
  FUN_01628730(lVar5,&local_68,&local_70);
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
  local_68 = 0x854b2b1fdb9ac9b4;
  local_70 = (long *)FUN_01628ae4(*puVar7);
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
  FUN_01628c74(lVar5,&local_68,&local_70);
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
  local_68 = 0x9a193e701c7f9a61;
  local_70 = (long *)FUN_01629028(*puVar7);
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
  FUN_016291b8(lVar5,&local_68,&local_70);
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
  local_68 = 0x1474c7c46a813955;
  local_70 = (long *)FUN_0162956c(*puVar7);
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
  FUN_016296fc(lVar5,&local_68,&local_70);
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
  local_68 = 0x99a60b9d95356789;
  local_70 = (long *)FUN_01629ab0(*puVar7);
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
  FUN_01629c40(lVar5,&local_68,&local_70);
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
  local_68 = 0x6e4ab6860240f386;
  local_70 = (long *)FUN_01629ff4(*puVar7);
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
  FUN_0162a184(lVar5,&local_68,&local_70);
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
  local_68 = 0xd0d514a85fc0b50f;
  local_70 = (long *)FUN_0162a538(*puVar7);
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
  FUN_0162a6c8(lVar5,&local_68,&local_70);
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
  local_68 = 0x1c5747049c3b1920;
  local_70 = (long *)FUN_0162aa78(*puVar7);
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
  FUN_0162ac08(lVar5,&local_68,&local_70);
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
  local_68 = 0x26d399d556ee1c2d;
  local_70 = (long *)FUN_0162afbc(*puVar7);
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
  FUN_0162b14c(lVar5,&local_68,&local_70);
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
  local_68 = 0xc4bb08f0e0bb1979;
  local_70 = (long *)FUN_0162b500(*puVar7);
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
  FUN_0162b690(lVar5,&local_68,&local_70);
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
  local_68 = 0xabe95bdc028692f3;
  local_70 = (long *)FUN_0162ba44(*puVar7);
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
  FUN_0162bbd4(lVar5,&local_68,&local_70);
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
  local_68 = 0xf27e3b012d8f762c;
  local_70 = (long *)FUN_0162bf88(*puVar7);
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
  FUN_0162c118(lVar5,&local_68,&local_70);
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
  local_68 = 0x769fc8c156b7cdbd;
  local_70 = (long *)FUN_0162c4c8(*puVar7);
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
  FUN_0162c658(lVar5,&local_68,&local_70);
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
  local_68 = 0xdd65c7864951449b;
  local_70 = (long *)FUN_0162ca0c(*puVar7);
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
  FUN_0162cb9c(lVar5,&local_68,&local_70);
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
  local_68 = 0xf26110f743861738;
  local_70 = (long *)FUN_0162cf50(*puVar7);
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
  FUN_0162d0e0(lVar5,&local_68,&local_70);
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
  local_68 = 0x4ced96920003025e;
  local_70 = (long *)FUN_0162d494(*puVar7);
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
  FUN_0162d624(lVar5,&local_68,&local_70);
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
  local_68 = 0xa6f824297967b404;
  local_70 = (long *)FUN_0162d9d8(*puVar7);
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
  FUN_0162db68(lVar5,&local_68,&local_70);
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
  local_68 = 0x313cb8e1debb01de;
  local_70 = (long *)FUN_0162df18(*puVar7);
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
  FUN_0162e0a8(lVar5,&local_68,&local_70);
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
  local_68 = 0xb830b240f28e61c;
  local_70 = (long *)FUN_0162e458(*puVar7);
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
  FUN_0162e5e8(lVar5,&local_68,&local_70);
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
  local_68 = 0x15c4db49a2d05975;
  local_70 = (long *)FUN_0162e998(*puVar7);
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
  FUN_0162eb28(lVar5,&local_68,&local_70);
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
  local_68 = 0x9c765a1aaac34605;
  local_70 = (long *)FUN_0162eedc(*puVar7);
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
  FUN_0162f06c(lVar5,&local_68,&local_70);
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
  local_68 = 0xce6fb5f32b6297c5;
  local_70 = (long *)FUN_0162f420(*puVar7);
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
  FUN_0162f5b0(lVar5,&local_68,&local_70);
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
    FUN_01621cf8();
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
  FUN_01621cf8();
}


