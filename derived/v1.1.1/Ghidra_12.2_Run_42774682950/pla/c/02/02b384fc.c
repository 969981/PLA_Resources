/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b384fc; name: FUN_02b384fc
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_02b384fc(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *local_58;
  
  if ((param_3 >> 4 & 1) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x120);
    if (lVar6 == 0) {
      local_58 = (long *)0x0;
    }
    else {
      (**(code **)(*(long *)(lVar6 + 0x58) + 0x20))(&local_58);
      if (local_58 != (long *)0x0) {
        uVar8 = *(undefined8 *)(*param_2 + 0x60);
        lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x120);
        if (lVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*(long *)(lVar6 + 0x58) + 0x28))();
        }
        FUN_02bb11cc(uVar8,3,uVar5,&local_58);
        if (local_58 != (long *)0x0) {
          plVar1 = local_58 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_58 + 0x10))();
            param_3 = param_3 ^ 0x10;
            goto joined_r0x02b38578;
          }
        }
        param_3 = param_3 ^ 0x10;
      }
    }
  }
joined_r0x02b38578:
  if ((param_3 >> 3 & 1) != 0) {
    FUN_02ba6340(*(undefined8 *)(*param_2 + 0x60),*(undefined4 *)(*(long *)(param_1 + 0x60) + 0x174)
                );
    param_3 = param_3 ^ 8;
  }
  if ((param_3 & 1) == 0) {
    uVar7 = param_3;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x128);
    uVar10 = (*(long *)(*(long *)(param_1 + 0x60) + 0x130) - lVar6 >> 3) * 0x38e38e39;
    lVar9 = *param_2;
    if ((int)uVar10 != 0) {
      uVar11 = 0;
      lVar12 = lVar6 + 0x38;
      do {
        FUN_02bb7a60(*(undefined8 *)(lVar9 + 0x60),uVar11 & 0xffffffff,lVar12);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x48;
      } while ((uVar10 & 0xffffffff) != uVar11);
    }
    if ((param_3 >> 1 & 1) != 0) {
      FUN_02b58d1c(lVar9,lVar6,uVar10 & 0xffffffff);
    }
    uVar7 = param_3 & 0xfffffffd ^ 1;
  }
  if (((param_3 >> 2 & 1) != 0) &&
     (lVar6 = *(long *)(param_1 + 0x60), *(long *)(lVar6 + 0x168) != 0)) {
    FUN_02ba5aac(*(undefined8 *)(*param_2 + 0x60),lVar6 + 0x168,*(undefined4 *)(lVar6 + 0x170));
    uVar7 = uVar7 ^ 4;
  }
  return uVar7;
}


