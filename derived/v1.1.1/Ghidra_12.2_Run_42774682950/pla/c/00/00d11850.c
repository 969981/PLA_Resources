/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d11850; name: FUN_00d11850
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00d11850(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_0437a140;
  puVar4 = PTR_DAT_0437a138;
  if (param_1 != param_2) {
    do {
      lVar9 = *param_1;
      if (lVar9 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar8 = FUN_009b19b4();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(puVar4);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar5) {
            plVar7 = (long *)FUN_02aac0f0(lVar9 + -0x48);
            plVar7 = (long *)*plVar7;
            if (plVar7 != (long *)0x0) {
              plVar1 = plVar7 + 10;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              do {
                iVar6 = (int)*plVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = iVar6;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar7 + 0x10))();
                return param_1;
              }
              return param_1;
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


