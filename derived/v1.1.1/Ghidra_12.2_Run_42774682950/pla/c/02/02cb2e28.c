/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb2e28; name: FUN_02cb2e28
 */


void FUN_02cb2e28(long param_1)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  void *__s;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  size_t __n;
  long lVar15;
  undefined8 uVar16;
  DirectoryName *pDVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  int local_22e0 [2];
  int local_22d8 [2];
  int local_22d0 [2];
  long *local_22c8 [700];
  DirectoryName aDStack_ce8 [3208];
  
  *(undefined4 *)(param_1 + 0x418) = 1;
  uVar9 = nn::bcat::MountDeliveryCacheStorage();
  if ((uVar9 & 0x3fffff) == 0x67a) {
    do {
      nn::os::SleepThread(500000000);
      uVar9 = nn::bcat::MountDeliveryCacheStorage();
    } while ((uVar9 & 0x3fffff) == 0x67a);
  }
  if (uVar9 != 0) goto LAB_02cb34d8;
  iVar10 = *(int *)(param_1 + 0x45c);
  *(undefined4 *)(param_1 + 0x480) = 0;
  if (iVar10 == 0) {
    iVar10 = 1;
LAB_02cb2fd4:
    plVar14 = *(long **)(param_1 + 8);
    __n = (long)iVar10 * 0x50;
    __s = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,__n,8);
    if (__s == (void *)0x0) {
      plVar14 = (long *)0x0;
      __n = 0;
      uVar19 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar7 = PTR_DAT_04379528;
        if (iVar10 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      memset(__s,0,__n);
      uVar19 = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar11 = *(long *)(param_1 + 0x460);
    *(void **)(param_1 + 0x460) = __s;
    if (lVar11 != 0) {
      FUN_02bcbe58(local_22c8,0);
      plVar18 = *(long **)(param_1 + 0x468);
      uVar13 = *(undefined8 *)(param_1 + 0x470);
      uVar16 = *(undefined8 *)(param_1 + 0x478);
      uVar12 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      lVar15 = tpidr_el0;
      if ((uVar12 & 1) == 0) {
LAB_02cb30ec:
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,uVar13,uVar16);
      }
      else {
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar15 + 0x38d480) < 1) goto LAB_02cb30ec;
        FUN_02bcc824(plVar18,lVar11,uVar13,uVar16);
      }
      if (*(char *)(lVar15 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar15 + 0x38d488) = 1;
        *(undefined8 *)(lVar15 + 0x38d478) = 0;
        *(undefined8 *)(lVar15 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar10 = *(int *)(lVar15 + 0x38d480) + -1;
      *(int *)(lVar15 + 0x38d480) = iVar10;
      if (iVar10 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar15 + 0x38d484) = 0;
      }
    }
    iVar10 = *(int *)(param_1 + 0x45c);
    piVar1 = (int *)(param_1 + 0x480);
    *(long **)(param_1 + 0x468) = plVar14;
    *(size_t *)(param_1 + 0x470) = __n;
    *(undefined8 *)(param_1 + 0x478) = uVar19;
    if (iVar10 == 2) {
      lVar11 = *(long *)(param_1 + 0x460);
      plVar14 = *(long **)(param_1 + 0x410);
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[0xb];
        if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_02cb3688:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar15 + 0x10) == 0) {
          uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
          *(undefined8 *)(lVar15 + 0x10) = uVar19;
        }
        piVar2 = (int *)(lVar15 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      memset(aDStack_ce8,0,0xc80);
      local_22d0[0] = 0;
      uVar9 = nn::bcat::EnumerateDeliveryCacheDirectory(local_22d0,aDStack_ce8,100);
      if (uVar9 == 0) {
        if (local_22d0[0] < 1) {
          uVar9 = 0;
          iVar10 = 0;
        }
        else {
          pcVar3 = (char *)(param_1 + 0x488);
          if (plVar14 == (long *)0x0) {
            lVar15 = 0;
            iVar10 = 0;
            pDVar17 = aDStack_ce8;
            do {
              if (*pcVar3 != '\0') break;
              local_22d8[0] = 0;
              local_22c8[0] = (long *)0x0;
              uVar9 = FUN_02cb2c30(lVar11 + (long)iVar10 * 0x50,local_22c8,pcVar3,pDVar17,local_22d8
                                  );
              iVar4 = 0;
              if (uVar9 == 0) {
                iVar4 = local_22d8[0];
              }
              iVar10 = iVar4 + iVar10;
              if (uVar9 != 0) goto LAB_02cb34b0;
              lVar15 = lVar15 + 1;
              pDVar17 = pDVar17 + 0x20;
            } while (lVar15 < local_22d0[0]);
          }
          else {
            lVar15 = 0;
            iVar10 = 0;
            do {
              if (*pcVar3 != '\0') break;
              local_22d8[0] = 0;
              lVar20 = plVar14[0xb];
              local_22c8[0] = plVar14;
              if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_02cb3688;
              if (*(long *)(lVar20 + 0x10) == 0) {
                uVar19 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
                *(undefined8 *)(lVar20 + 0x10) = uVar19;
              }
              piVar2 = (int *)(lVar20 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = *piVar2 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              uVar9 = FUN_02cb2c30(lVar11 + (long)iVar10 * 0x50,local_22c8,pcVar3,
                                   aDStack_ce8 + lVar15 * 0x20,local_22d8);
              lVar20 = plVar14[0xb];
              piVar2 = (int *)(lVar20 + 0xc);
              do {
                iVar4 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar4 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar4 + -1 == 0) {
                *(undefined8 *)(lVar20 + 0x18) = 0;
                (**(code **)(*plVar14 + 0x20))(plVar14);
              }
              iVar4 = 0;
              if (uVar9 == 0) {
                iVar4 = local_22d8[0];
              }
              iVar10 = iVar4 + iVar10;
              if (uVar9 != 0) goto LAB_02cb34b0;
              lVar15 = lVar15 + 1;
            } while (lVar15 < local_22d0[0]);
          }
          uVar9 = 0;
        }
LAB_02cb34b0:
        *piVar1 = iVar10;
      }
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          bVar8 = *piVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
LAB_02cb34d0:
        if (bVar8) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
    }
    else if (iVar10 == 1) {
      uVar19 = *(undefined8 *)(param_1 + 0x460);
      plVar14 = *(long **)(param_1 + 0x410);
      local_22c8[0] = plVar14;
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cb3688;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar13;
        }
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar9 = FUN_02cb2c30(uVar19,local_22c8,param_1 + 0x488,param_1 + 0x41c,piVar1);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          bVar8 = *piVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_02cb34d0;
      }
    }
    else if (iVar10 == 0) {
      uVar19 = *(undefined8 *)(param_1 + 0x460);
      plVar14 = *(long **)(param_1 + 0x410);
      local_22c8[0] = plVar14;
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_02cb3688;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar13;
        }
        piVar2 = (int *)(lVar11 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = *piVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        uVar9 = FUN_02cb2b40(uVar19,local_22c8,param_1 + 0x41c,piVar1);
        lVar11 = plVar14[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          bVar8 = *piVar1 + -1 == 0;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_02cb34d0;
      }
      uVar9 = FUN_02cb2b40(uVar19,local_22c8,param_1 + 0x41c,piVar1);
    }
    else {
      uVar9 = 0xc67a;
    }
  }
  else {
    memset(aDStack_ce8,0,0xc80);
    memset(local_22c8,0,0x15e0);
    nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory((DeliveryCacheDirectory *)local_22d0);
    nn::bcat::DeliveryCacheFile::DeliveryCacheFile((DeliveryCacheFile *)local_22d8);
    local_22e0[0] = 0;
    local_22e0[1] = 0;
    if (iVar10 == 2) {
      uVar9 = nn::bcat::EnumerateDeliveryCacheDirectory(local_22e0 + 1,aDStack_ce8,100);
      if (uVar9 == 0) goto LAB_02cb2f30;
      iVar10 = 0;
    }
    else {
      local_22e0[0] = 0;
      local_22e0[1] = 1;
      snprintf((char *)aDStack_ce8,0x1f,"%s",param_1 + 0x41c);
LAB_02cb2f30:
      if (local_22e0[1] < 1) {
        iVar10 = 0;
      }
      else {
        lVar11 = 0;
        iVar10 = 0;
        do {
          uVar9 = nn::bcat::DeliveryCacheDirectory::Open((DirectoryName *)local_22d0);
          if (uVar9 != 0) {
            nn::bcat::DeliveryCacheDirectory::Close();
            goto LAB_02cb2fbc;
          }
          uVar9 = nn::bcat::DeliveryCacheDirectory::Read
                            (local_22d0,(DeliveryCacheDirectoryEntry *)local_22e0,(int)local_22c8);
          nn::bcat::DeliveryCacheDirectory::Close();
          if (uVar9 != 0) goto LAB_02cb2fbc;
          iVar10 = local_22e0[0] + iVar10;
          lVar11 = lVar11 + 1;
        } while (lVar11 < local_22e0[1]);
      }
      uVar9 = 0;
    }
LAB_02cb2fbc:
    nn::bcat::DeliveryCacheFile::~DeliveryCacheFile((DeliveryCacheFile *)local_22d8);
    nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory((DeliveryCacheDirectory *)local_22d0);
    if (uVar9 == 0) {
      if (iVar10 != 0) goto LAB_02cb2fd4;
      uVar9 = 0x47a;
    }
  }
  nn::bcat::UnmountDeliveryCacheStorage();
LAB_02cb34d8:
  *(undefined4 *)(param_1 + 0x418) = 2;
  *(uint *)(param_1 + 0x484) = uVar9;
  *(undefined1 *)(param_1 + 0x300) = 1;
  return;
}


