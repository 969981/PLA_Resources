/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc3818; name: FUN_02cc3818
 */


undefined8 FUN_02cc3818(long *param_1,char *param_2,char *param_3,size_t param_4)

{
  int *piVar1;
  ThreadType *pTVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  char *__dest;
  long *plVar8;
  Context *pCVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  bool bVar13;
  code *pcVar14;
  long lVar15;
  Context *this;
  long lVar16;
  long local_68 [3];
  
  if (*param_1 != 0) {
    return 0;
  }
  lVar7 = FUN_001dbaac();
  *param_1 = lVar7;
  if (lVar7 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  iVar6 = FUN_001f4498(lVar7,0x2712,param_2);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0x34,1);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0xb5,2);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0x4e,0xf);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0xd,0x1e);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0x4e2b,&LAB_02cc2920);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0x54,1);
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = FUN_001f4498(*param_1,0x2711,param_1 + 0xb);
  if (iVar6 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = param_1[3];
  param_1[0x17] = 0;
  memset((void *)param_1[3],0,0x100000);
  if (param_3 != (char *)0x0) {
    __dest = (char *)param_1[7];
    param_1[0xe] = (long)__dest;
    if (param_4 == 0) {
      strncpy(__dest,param_3,0x7fff);
      param_4 = strnlen((char *)param_1[0xe],0x7fff);
    }
    else {
      memcpy(__dest,param_3,param_4);
    }
    *(int *)(param_1 + 0xd) = (int)param_4;
    *(int *)(param_1 + 0xf) = (int)param_4;
    param_1[0x10] = param_1[0xe];
    iVar6 = FUN_001f4498(*param_1,0x2f,1);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_001f4498(*param_1,0x4e2c,&LAB_02cc2990);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_001f4498(*param_1,0x2719,param_1 + 0xd);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_001f4498(*param_1,0x3c,(int)param_1[0xd]);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_001f4498(*param_1,0x4ec7,&LAB_02cc2a00);
    if (iVar6 != 0) {
      return 0;
    }
    iVar6 = FUN_001f4498(*param_1,0x27b8,param_1 + 0xd);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if ((param_2 == (char *)0x0) || (iVar6 = strncmp(param_2,"https",5), iVar6 != 0))
  goto LAB_02cc3a28;
  plVar8 = (long *)param_1[0x11];
  pCVar9 = (Context *)(**(code **)(*plVar8 + 0x10))(plVar8,8,8);
  if (pCVar9 == (Context *)0x0) {
    plVar8 = (long *)0x0;
    lVar7 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    nn::ssl::Context::Context(pCVar9);
    lVar7 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  this = (Context *)param_1[0x12];
  param_1[0x12] = (long)pCVar9;
  lVar10 = tpidr_el0;
  if (this != (Context *)0x0) {
    FUN_02bcbe58(local_68,0);
    nn::ssl::Context::~Context(this);
    plVar3 = (long *)param_1[0x13];
    lVar15 = param_1[0x14];
    lVar16 = param_1[0x15];
    uVar11 = (**(code **)(*plVar3 + 0xc0))(plVar3);
    if ((uVar11 & 1) == 0) {
LAB_02cc3c30:
      (**(code **)(*plVar3 + 0x18))(plVar3,this,lVar15,lVar16);
    }
    else {
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02cc3c30;
      FUN_02bcc824(plVar3,this,lVar15,lVar16);
    }
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
    *(int *)(lVar10 + 0x38d480) = iVar6;
    if (iVar6 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar10 + 0x38d484) = 0;
    }
    pCVar9 = (Context *)param_1[0x12];
  }
  param_1[0x13] = (long)plVar8;
  param_1[0x14] = lVar7;
  param_1[0x15] = lVar7;
  if (pCVar9 == (Context *)0x0) {
LAB_02cc3cf4:
    bVar13 = false;
    pCVar9 = (Context *)param_1[0x12];
  }
  else {
    iVar6 = nn::ssl::Context::Create(pCVar9,0x1000001);
    *(int *)(param_1 + 0x16) = iVar6;
    if (iVar6 != 0) goto LAB_02cc3cf4;
    iVar6 = FUN_001f4498(*param_1,0x2906,param_1[0x12]);
    if (iVar6 == 0) {
LAB_02cc3a28:
      FUN_00d73c18(local_68,param_1[0x11],&DAT_03a853b8);
      plVar8 = (long *)param_1[2];
      param_1[2] = 0;
      if (plVar8 != (long *)0x0) {
        lVar7 = plVar8[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar13) {
            *piVar1 = iVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      param_1[2] = local_68[0];
      pcVar14 = *(code **)(local_68[0] + 0x418);
      if (pcVar14 != (code *)0x0) {
        *(undefined8 *)(local_68[0] + 0x420) = 0;
        *(undefined8 *)(local_68[0] + 0x428) = 0;
        *(undefined8 *)(local_68[0] + 0x410) = 0;
        *(undefined8 *)(local_68[0] + 0x418) = 0;
        (*pcVar14)(local_68[0] + 0x430);
      }
      *(code **)(local_68[0] + 0x410) = FUN_02cc4194;
      *(undefined1 **)(local_68[0] + 0x418) = &LAB_02cc44a8;
      *(long **)(local_68[0] + 0x430) = param_1;
      *(undefined1 **)(local_68[0] + 0x420) = &LAB_02cc44ac;
      *(undefined1 **)(local_68[0] + 0x428) = &LAB_02cc44b8;
      pvVar12 = (void *)param_1[2];
      *(undefined1 *)((long)pvVar12 + 0x300) = 0;
      *(undefined1 *)((long)pvVar12 + 0x301) = 0;
      *(undefined1 *)((long)pvVar12 + 0x302) = 0;
      pTVar2 = (ThreadType *)((long)pvVar12 + 0x100);
      nn::os::CreateThread
                (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,pvVar12,
                 *(void **)((long)pvVar12 + 0x2c0),*(ulong *)((long)pvVar12 + 0x2f8),0x10);
      nn::os::SetThreadCoreMask(pTVar2,-1,7);
      nn::os::SetThreadName(pTVar2,"HttpThread");
      nn::os::StartThread(pTVar2);
      return 1;
    }
    bVar13 = true;
    pCVar9 = (Context *)param_1[0x12];
  }
  if (pCVar9 == (Context *)0x0) {
    return 0;
  }
  if (bVar13) {
    nn::ssl::Context::Destroy();
    pCVar9 = (Context *)param_1[0x12];
    param_1[0x12] = 0;
    if (pCVar9 == (Context *)0x0) {
      return 0;
    }
  }
  else {
    param_1[0x12] = 0;
  }
  FUN_02bcbe58(local_68,0);
  nn::ssl::Context::~Context(pCVar9);
  plVar8 = (long *)param_1[0x13];
  lVar7 = param_1[0x14];
  lVar15 = param_1[0x15];
  uVar11 = (**(code **)(*plVar8 + 0xc0))(plVar8);
  if ((uVar11 & 1) != 0) {
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar8,pCVar9,lVar7,lVar15);
      goto LAB_02cc3dac;
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,pCVar9,lVar7,lVar15);
LAB_02cc3dac:
  if (*(char *)(lVar10 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar10 + 0x38d488) = 1;
    *(undefined8 *)(lVar10 + 0x38d478) = 0;
    *(undefined8 *)(lVar10 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar6 = *(int *)(lVar10 + 0x38d480) + -1;
  *(int *)(lVar10 + 0x38d480) = iVar6;
  if (iVar6 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar10 + 0x38d484) = 0;
  }
  return 0;
}


