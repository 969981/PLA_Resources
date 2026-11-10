/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb8ed0; name: FUN_02cb8ed0
 */


undefined8 FUN_02cb8ed0(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  ThreadType *pTVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_34;
  
  pcVar9 = DAT_04408928;
  if ((DAT_044089c8 == 0) ||
     ((DAT_04408918 != (long *)0x0 && ((*(byte *)((long)DAT_04408918 + 0x302) & 1) == 0)))) {
    uVar7 = 0;
  }
  else {
    if (DAT_04408928 != (code *)0x0) {
      DAT_04408930 = 0;
      DAT_04408938 = 0;
      DAT_04408920 = 0;
      DAT_04408928 = (code *)0x0;
      (*pcVar9)(&DAT_04408940);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,&DAT_04408940);
      DAT_04408920 = *param_2;
      DAT_04408928 = (code *)param_2[1];
      DAT_04408930 = param_2[2];
      DAT_04408938 = param_2[3];
    }
    local_34 = 0x4000;
    plVar8 = (long *)FUN_02cb8ccc(&local_58,DAT_044089c8,&local_34);
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar6 = DAT_04408918;
    DAT_04408918 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar10 = plVar6[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    local_58 = *param_1;
    local_50 = param_1[1];
    local_48 = param_1[2];
    pcVar9 = (code *)plVar8[0x83];
    DAT_04408918 = plVar8;
    if (pcVar9 != (code *)0x0) {
      plVar8[0x84] = 0;
      plVar8[0x85] = 0;
      plVar8[0x82] = 0;
      plVar8[0x83] = 0;
      (*pcVar9)(plVar8 + 0x86);
    }
    plVar6 = DAT_04408918;
    plVar8[0x82] = (long)&LAB_02cb91ac;
    plVar8[0x83] = (long)&LAB_02cb9218;
    plVar8[0x86] = local_58;
    plVar8[0x84] = (long)&LAB_02cb921c;
    plVar8[0x88] = local_48;
    plVar8[0x87] = local_50;
    plVar8[0x85] = (long)&LAB_02cb9230;
    *(undefined1 *)(plVar6 + 0x60) = 0;
    pTVar2 = (ThreadType *)(plVar6 + 0x20);
    *(undefined1 *)((long)plVar6 + 0x301) = 0;
    *(undefined1 *)((long)plVar6 + 0x302) = 0;
    nn::os::CreateThread
              (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,plVar6,(void *)plVar6[0x58],plVar6[0x5f],
               0x10);
    nn::os::SetThreadCoreMask(pTVar2,-1,7);
    nn::os::SetThreadName(pTVar2,"NSOLicenseDialogThread");
    nn::os::StartThread(pTVar2);
    uVar7 = 1;
  }
  return uVar7;
}


