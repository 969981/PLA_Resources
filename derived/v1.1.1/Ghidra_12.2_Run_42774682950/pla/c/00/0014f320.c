/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0014f320; name: FUN_0014f320
 */


void * FUN_0014f320(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  long lVar6;
  size_t __n;
  void *pvVar7;
  uint uVar8;
  
  if (param_2 == (void *)0x0) {
    pvVar7 = (void *)FUN_0014de90(param_1,param_3);
    return pvVar7;
  }
  if (param_3 < 0xffffffffffffff80) {
    uVar1 = 0x20;
    if (0x16 < param_3) {
      uVar1 = param_3 + 0x17 & 0xfffffffffffffff0;
    }
    if ((*(byte *)(param_1 + 0x370) >> 1 & 1) != 0) {
      piVar5 = (int *)(param_1 + 0x374);
      do {
        iVar2 = *piVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar4) {
          *piVar5 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 != 0) {
        uVar8 = 0;
LAB_0014f3cc:
        if (*piVar5 == 0) {
          do {
            iVar2 = *piVar5;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar4) {
              *piVar5 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 == 0) goto LAB_0014f3f4;
        }
        uVar8 = uVar8 + 1;
        if ((uVar8 & 0x3f) == 0) {
          sched_yield();
        }
        goto LAB_0014f3cc;
      }
    }
LAB_0014f3f4:
    lVar6 = FUN_0014d9f0(param_1,(long)param_2 + -0x10,uVar1);
    if ((*(byte *)(param_1 + 0x370) >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
    if (lVar6 == 0) {
      pvVar7 = (void *)FUN_0014de90(param_1,param_3);
      if (pvVar7 != (void *)0x0) {
        lVar6 = 0x10;
        if ((*(ulong *)((long)param_2 + -8) & 3) != 0) {
          lVar6 = 8;
        }
        __n = (*(ulong *)((long)param_2 + -8) & 0xfffffffffffffff8) - lVar6;
        if (param_3 <= __n) {
          __n = param_3;
        }
        memcpy(pvVar7,param_2,__n);
        FUN_0014e3b0(param_1,param_2);
      }
    }
    else {
      FUN_0014d190(param_1,lVar6);
      pvVar7 = (void *)(lVar6 + 0x10);
    }
  }
  else {
    piVar5 = __errno_location();
    pvVar7 = (void *)0x0;
    *piVar5 = 0xc;
  }
  return pvVar7;
}


