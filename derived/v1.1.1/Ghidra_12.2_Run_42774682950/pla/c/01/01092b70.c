/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01092b70; name: FUN_01092b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01092b70(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_38;
  
  lVar5 = FUN_0095934c(*param_3 + 0xf0,&local_50);
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_01b39678(&local_38);
    uVar7 = *(undefined8 *)(*param_3 + 0xd8);
    uVar6 = *(undefined8 *)(*param_3 + 0xd0);
    local_50 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)_DAT_03889de0 >> 0x20),
                        (float)uVar6 + (float)_DAT_03889de0);
    uStack_48 = CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)_UNK_03889de8 >> 0x20),
                         (float)uVar7 + (float)_UNK_03889de8);
    uStack_58 = _UNK_03888fc8;
    local_60 = _DAT_03888fc0;
    FUN_01092c60(param_1,param_2,&local_38,&local_50,PTR_DAT_0437a330,&local_60,param_4,param_5 & 1)
    ;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 10;
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
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  return;
}


