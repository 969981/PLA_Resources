/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ac70; name: FUN_0333ac70
 */


void FUN_0333ac70(undefined8 param_1,long *param_2,uint param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (0 < (int)param_3) {
    lVar1 = tpidr_el0;
    uVar5 = (ulong)param_3;
    do {
      lVar4 = *param_2;
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar4 + 0x24)) && (*(long *)(lVar4 + 0x18) != 0)) {
          (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                    (PTR_PTR_0434a080,*(long *)(lVar4 + 0x18),
                     ((ulong)*(uint *)(lVar4 + 0x24) & 0x3fffffff) << 3);
        }
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined4 *)(lVar4 + 0x24) = 0x80000000;
        lVar3 = *(long *)(lVar1 + 0x38d490);
        if (lVar3 == 0) {
          lVar3 = FUN_0333d16c(0,1);
          *(long *)(lVar1 + 0x38d490) = lVar3;
        }
        plVar2 = *(long **)(*(long *)(lVar3 + 8) + 0x58);
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,0x38);
      }
      *param_2 = 0;
      param_2 = (long *)((long)param_2 + (long)param_4);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}


