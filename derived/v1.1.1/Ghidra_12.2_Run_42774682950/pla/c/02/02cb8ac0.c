/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb8ac0; name: FUN_02cb8ac0
 */


undefined8 FUN_02cb8ac0(byte param_1,byte param_2)

{
  int *piVar1;
  ThreadType *pTVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  nn::nifm::Initialize();
  DAT_04408910 = '\x01';
  nn::nifm::SetLocalNetworkMode((bool)(param_1 & 1));
  if (((DAT_04408910 != '\x01') || (uVar7 = nn::nifm::IsNetworkAvailable(), (uVar7 & 1) == 0)) &&
     ((DAT_04408900 == (long *)0x0 || ((*(byte *)((long)DAT_04408900 + 0x302) & 1) != 0)))) {
    local_3c = 0x4000;
    plVar8 = (long *)FUN_02cb8ccc(auStack_38,DAT_04408908,&local_3c);
    if (plVar8 != (long *)0x0) {
      lVar11 = plVar8[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar6 = DAT_04408900;
    DAT_04408900 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar11 = plVar6[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    pcVar10 = (code *)plVar8[0x83];
    DAT_04408900 = plVar8;
    if (pcVar10 != (code *)0x0) {
      plVar8[0x84] = 0;
      plVar8[0x85] = 0;
      plVar8[0x82] = 0;
      plVar8[0x83] = 0;
      (*pcVar10)(plVar8 + 0x86);
    }
    plVar6 = DAT_04408900;
    plVar8[0x82] = (long)&LAB_02cb8e04;
    plVar8[0x84] = (long)&LAB_02cb8e48;
    plVar8[0x83] = (long)&LAB_02cb8e44;
    plVar8[0x85] = (long)&LAB_02cb8e54;
    *(byte *)(plVar8 + 0x86) = param_2 & 1;
    *(undefined1 *)(plVar6 + 0x60) = 0;
    pTVar2 = (ThreadType *)(plVar6 + 0x20);
    *(undefined1 *)((long)plVar6 + 0x301) = 0;
    *(undefined1 *)((long)plVar6 + 0x302) = 0;
    nn::os::CreateThread
              (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,plVar6,(void *)plVar6[0x58],plVar6[0x5f],
               0x10);
    nn::os::SetThreadCoreMask(pTVar2,-1,7);
    nn::os::SetThreadName(pTVar2,"SubmitNetworkUseRequest");
    nn::os::StartThread(pTVar2);
  }
  return 1;
}


