/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0182ff34; name: FUN_0182ff34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0182ff34(ulong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char local_120 [16];
  undefined1 auStack_110 [48];
  ulong local_e0;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  
  fVar10 = (float)*param_2;
  fVar11 = (float)((ulong)*param_2 >> 0x20);
  local_40 = (long *)CONCAT44(fVar11 + (float)((ulong)_DAT_03889a40 >> 0x20),
                              fVar10 + (float)_DAT_03889a40);
  fVar12 = (float)param_2[1];
  fVar13 = (float)((ulong)param_2[1] >> 0x20);
  uStack_38 = CONCAT44(fVar13 + (float)((ulong)_UNK_03889a48 >> 0x20),fVar12 + (float)_UNK_03889a48)
  ;
  local_50 = CONCAT44(fVar11 + (float)((ulong)_DAT_0388a4d0 >> 0x20),fVar10 + (float)_DAT_0388a4d0);
  uStack_48 = CONCAT44(fVar13 + (float)((ulong)_UNK_0388a4d8 >> 0x20),fVar12 + (float)_UNK_0388a4d8)
  ;
  FUN_01830bb8(local_120,param_1,param_2,&local_40,&local_50,0x1001000);
  if (local_120[0] == '\0') {
    bVar5 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x250) == 0) {
      bVar5 = 0;
      local_40 = (long *)0x0;
      uVar6 = local_e0;
    }
    else {
      FUN_00b91400(&local_40);
      if (local_40 == (long *)0x0) {
        bVar5 = 0;
        uVar6 = local_e0;
      }
      else {
        param_1 = FUN_01c3c17c(local_40,auStack_110);
        param_1 = param_1 & 0xffffffff;
        if (local_40 != (long *)0x0) {
          lVar8 = local_40[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 == 1) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_40 + 0x20))();
          }
        }
        bVar5 = 1;
        uVar6 = local_e0;
      }
    }
    if ((local_120[0] != '\0') && ((uVar6 & 1) != 0)) {
      lVar8 = tpidr_el0;
      lVar9 = *(long *)(lVar8 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar8 + 0x38d490) = lVar9;
      }
      plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
      *(undefined8 *)(uVar6 - 0x11) = 0;
      (**(code **)(*plVar7 + 0x18))
                (plVar7,(undefined8 *)(uVar6 - 0x11),(long)*(int *)(uVar6 - 9) + 0x10);
    }
  }
  return (uint)param_1 & (uint)bVar5;
}


