/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280fcd0; name: FUN_0280fcd0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0280fcd0(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long local_18;
  
  FUN_028137c8(&local_18,param_2);
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *param_1 = local_18;
  *(long *)(local_18 + 0x68) = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != 0) {
    plVar5 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
    if (((*PTR_DAT_0437f840 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437f840), iVar4 != 0)) {
      uVar6 = FUN_0281249c();
      *(undefined8 *)PTR_DAT_0437f848 = uVar6;
      __cxa_guard_release(PTR_DAT_0437f840);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_0437f848) {
        return lVar7;
      }
    }
  }
  return 0;
}


