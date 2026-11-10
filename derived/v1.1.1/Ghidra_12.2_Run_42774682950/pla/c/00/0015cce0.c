/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cce0; name: FUN_0015cce0
 */


void FUN_0015cce0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if (((param_3 != 0) && ((*(byte *)((long)param_2 + 9) >> 3 & 1) == 0)) &&
     ((*(byte *)(param_3 + 10) >> 2 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar1 = FUN_001738a0(param_3,2,*(undefined8 *)(lVar4 + 0xf0));
    if (lVar1 != 0) {
      if (*(byte *)(lVar4 + 0x55) - 2 < 4) {
        *(byte *)((long)param_2 + 9) =
             *(byte *)((long)param_2 + 9) & 0xf8 | *(byte *)(lVar4 + 0x54) & 3;
        plVar3 = *(long **)(lVar4 + 0x60);
        if (plVar3 == param_2) {
          do {
            plVar2 = (long *)FUN_0015ce80(param_1,plVar3,1);
          } while (plVar2 == plVar3);
          *(long **)(lVar4 + 0x60) = plVar2;
        }
      }
      plVar3 = (long *)(lVar4 + 0x58);
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while (plVar3 != param_2);
      *plVar2 = *param_2;
      *param_2 = *(long *)(lVar4 + 0x68);
      *(long **)(lVar4 + 0x68) = param_2;
      *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) | 8;
    }
  }
  return;
}


