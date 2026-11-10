/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e50d6c; name: FUN_02e50d6c
 */


void FUN_02e50d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,uint param_6,uint param_7,long param_8,long param_9)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_78;
  
  FUN_02e50f04();
  *(long *)(param_9 + (ulong)param_7 * 8) = param_4;
  *(undefined4 *)(param_4 + 0x70) =
       *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_5 + 8) + 0x38) + 0x28) + 0xf4);
  if ((param_7 < param_6) &&
     (uVar1 = (ulong)*(uint *)(param_4 + 0x30), *(uint *)(param_4 + 0x30) != 0)) {
    plVar2 = *(long **)(param_4 + 0x28);
    if (param_7 == 0) {
      plVar4 = plVar2;
      do {
        if (*(char *)(*plVar4 + 0x690) != '\0') {
          FUN_02e53ec8(param_1,param_2,param_3,*plVar4,param_5,param_6,0,param_8,param_9);
          plVar2 = *(long **)(param_4 + 0x28);
          uVar1 = (ulong)*(uint *)(param_4 + 0x30);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2 + uVar1);
    }
    else {
      plVar4 = plVar2;
      do {
        lVar5 = *plVar4;
        if (*(char *)(lVar5 + 0x690) != '\0') {
          lVar3 = 0;
          do {
            if (*(long *)(param_8 + lVar3) == lVar5) goto LAB_02e50e04;
            lVar3 = lVar3 + 8;
          } while ((ulong)param_7 * 8 != lVar3);
          local_78 = 0;
          uVar1 = FUN_02e50f80(param_4,lVar5,*(undefined8 *)(param_8 + (ulong)(param_7 - 1) * 8),
                               (long)&local_78 + 4,&local_78);
          if ((uVar1 & 1) != 0) {
            FUN_02e53ec8(local_78._4_4_ + (float)param_1,param_2,(float)local_78 + (float)param_3,
                         lVar5,param_5,param_6,param_7,param_8,param_9);
          }
          plVar2 = *(long **)(param_4 + 0x28);
          uVar1 = (ulong)*(uint *)(param_4 + 0x30);
        }
LAB_02e50e04:
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2 + uVar1);
    }
  }
  return;
}


