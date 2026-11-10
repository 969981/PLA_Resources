/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71178; name: FUN_02e71178
 */


void FUN_02e71178(long param_1,long *param_2,uint param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  if ((*(byte *)((long)param_2 + 0x14) & 7) == 2) {
    plVar2 = *(long **)(param_1 + 0xd8);
    if (plVar2 != (long *)0x0) {
      plVar5 = (long *)*plVar2;
      if (plVar2 != param_2) {
        plVar4 = plVar2;
        do {
          plVar6 = plVar4;
          plVar4 = plVar5;
          if (plVar4 == (long *)0x0) {
            return;
          }
          plVar5 = (long *)*plVar4;
        } while (plVar4 != param_2);
        if (plVar2 != param_2) {
          *plVar6 = (long)plVar5;
          return;
        }
      }
      *(long **)(param_1 + 0xd8) = plVar5;
      return;
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0xd0);
    if ((param_3 & 1) == 0) {
      if (plVar2 == param_2) {
        lVar3 = *param_2;
        goto joined_r0x02e71238;
      }
      if (plVar2 != (long *)0x0) {
        plVar5 = (long *)*plVar2;
        do {
          plVar4 = plVar2;
          if (plVar5 == (long *)0x0) {
            return;
          }
          plVar6 = (long *)*plVar5;
          bVar1 = plVar5 != param_2;
          plVar2 = plVar5;
          plVar5 = plVar6;
        } while (bVar1);
        *plVar4 = (long)plVar6;
        if (*(long **)(param_1 + 200) == param_2) {
          *(long **)(param_1 + 200) = plVar4;
          return;
        }
      }
    }
    else if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
joined_r0x02e71238:
      if (lVar3 == 0) {
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        return;
      }
      *(long *)(param_1 + 0xd0) = lVar3;
      return;
    }
  }
  return;
}


