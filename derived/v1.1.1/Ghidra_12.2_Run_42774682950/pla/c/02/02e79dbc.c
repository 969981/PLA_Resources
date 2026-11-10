/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79dbc; name: FUN_02e79dbc
 */


void FUN_02e79dbc(long param_1,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_0440a320 != 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) {
    if (param_2 == 0) {
      if (param_3 != -1) {
        lVar3 = *(long *)(lVar2 + 8);
        lVar1 = *(long *)(lVar2 + 0x10);
        if (lVar1 != 0) goto LAB_02e79e90;
LAB_02e79ea0:
        if (param_3 != -1) goto LAB_02e79e80;
        do {
          FUN_02e7c858(lVar2);
LAB_02e79e80:
          do {
            lVar2 = lVar3;
            if (lVar2 == 0) {
              return;
            }
            lVar3 = *(long *)(lVar2 + 8);
            lVar1 = *(long *)(lVar2 + 0x10);
            if (lVar1 == 0) goto LAB_02e79ea0;
LAB_02e79e90:
          } while (*(long *)(lVar1 + 0x48) != param_3);
        } while( true );
      }
      do {
        lVar3 = *(long *)(lVar2 + 8);
        FUN_02e7c858(lVar2);
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
    else if (param_3 == -1) {
      do {
        lVar3 = *(long *)(lVar2 + 8);
        if (*(int *)(lVar2 + 0x3c) == param_2) {
          FUN_02e7c858(lVar2);
        }
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
    else {
      do {
        lVar3 = *(long *)(lVar2 + 8);
        if (*(int *)(lVar2 + 0x3c) == param_2) {
          if (*(long *)(lVar2 + 0x10) == 0) {
            if (param_3 == -1) goto LAB_02e79e40;
          }
          else if (*(long *)(*(long *)(lVar2 + 0x10) + 0x48) == param_3) {
LAB_02e79e40:
            FUN_02e7c858(lVar2);
          }
        }
        lVar2 = lVar3;
      } while (lVar3 != 0);
    }
  }
  return;
}


