/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d6050; name: FUN_032d6050
 */


void FUN_032d6050(long *param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int local_24;
  
  lVar7 = param_1[2];
  lVar6 = *param_1;
  if (lVar7 - lVar6 != (long)param_2) {
    local_24 = param_2;
    if ((lVar6 != 0) && ((char)param_1[4] != '\0')) {
      lVar4 = tpidr_el0;
      lVar8 = *(long *)(lVar4 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar8;
      }
      FUN_032cf244(*(undefined8 *)(*(long *)(lVar8 + 8) + 0x60),lVar6,1,lVar7 - lVar6);
    }
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (0 < param_2) {
      *(undefined1 *)(param_1 + 4) = 1;
      lVar6 = tpidr_el0;
      lVar7 = *(long *)(lVar6 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar6 + 0x38d490) = lVar7;
      }
      lVar7 = FUN_032cf190(*(undefined8 *)(*(long *)(lVar7 + 8) + 0x60),1,&local_24);
      *param_1 = lVar7;
      param_1[1] = lVar7;
      param_1[2] = lVar7 + local_24;
      param_1[3] = lVar7 + local_24 + -0x20;
      do {
        iVar5 = DAT_0434a930;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x434a930,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          DAT_0434a930 = DAT_0434a930 + 1;
        }
      } while (cVar2 != '\0');
      *(int *)(param_1 + 5) = iVar5;
      if (iVar5 == 0) {
        do {
          iVar5 = DAT_0434a930;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x434a930,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            DAT_0434a930 = DAT_0434a930 + 1;
          }
        } while (cVar2 != '\0');
        *(int *)(param_1 + 5) = iVar5;
      }
      if (*(long *)(lVar6 + 0x38d490) == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar6 + 0x38d490) = lVar7;
        lVar6 = *(long *)(lVar7 + 0x10);
      }
      else {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38d490) + 0x10);
      }
      if (lVar6 != 0) {
        puVar1 = *(undefined8 **)(lVar6 + 8);
        uVar9 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= *(ulong *)(lVar6 + 0x10)) &&
           (*(ulong *)(lVar6 + 8) = uVar9, puVar1 != (undefined8 *)0x0)) {
          *puVar1 = "FiFrameId";
          *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar6 + 0x28);
        }
      }
    }
  }
  return;
}


