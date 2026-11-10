/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18094; name: FUN_02f18094
 */


void FUN_02f18094(long param_1,int param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  
  *(byte *)(param_1 + 0x34c) = *(byte *)(param_1 + 0x34c) | 1;
  if (*param_3 < param_2) {
    *param_3 = param_2;
  }
  if ((*(int *)(param_1 + 0x348) == 0x7fffffff) || (*(int *)(param_1 + 0x348) < param_2)) {
    *(int *)(param_1 + 0x348) = param_2;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x50);
    param_2 = param_2 + 1;
    if ((*(byte *)(lVar1 + 0x50) >> 2 & 1) == 0) {
      lVar2 = *(long *)(lVar2 + 0x40);
    }
    else {
      *(byte *)(lVar2 + 0x168) =
           *(byte *)(lVar2 + 0x168) & 0xf7 | (*(byte *)(lVar1 + 0x34c) & 1) << 3;
      if ((*(byte *)(lVar1 + 0x34c) & 1) == 0) {
        FUN_02f18094(lVar1,param_2,param_3);
        lVar2 = *(long *)(lVar2 + 0x40);
      }
      else {
        DAT_0440ae40 = 1;
        lVar2 = *(long *)(lVar2 + 0x40);
      }
    }
    if (lVar2 != 0) {
      lVar1 = *(long *)(lVar2 + 0x50);
      if ((*(byte *)(lVar1 + 0x50) >> 2 & 1) == 0) {
        lVar2 = *(long *)(lVar2 + 0x40);
      }
      else {
        *(byte *)(lVar2 + 0x168) =
             *(byte *)(lVar2 + 0x168) & 0xf7 | (*(byte *)(lVar1 + 0x34c) & 1) << 3;
        if ((*(byte *)(lVar1 + 0x34c) & 1) != 0) {
          DAT_0440ae40 = 1;
          lVar2 = *(long *)(lVar2 + 0x40);
          goto joined_r0x02f181bc;
        }
        FUN_02f18094(lVar1,param_2,param_3);
        lVar2 = *(long *)(lVar2 + 0x40);
      }
joined_r0x02f181a0:
      if (lVar2 != 0) {
        do {
          lVar1 = *(long *)(lVar2 + 0x50);
          if ((*(byte *)(lVar1 + 0x50) >> 2 & 1) == 0) {
            lVar2 = *(long *)(lVar2 + 0x40);
          }
          else {
            *(byte *)(lVar2 + 0x168) =
                 *(byte *)(lVar2 + 0x168) & 0xf7 | (*(byte *)(lVar1 + 0x34c) & 1) << 3;
            if ((*(byte *)(lVar1 + 0x34c) & 1) != 0) goto LAB_02f18204;
            FUN_02f18094(lVar1,param_2,param_3);
            lVar2 = *(long *)(lVar2 + 0x40);
          }
joined_r0x02f181bc:
          if (lVar2 == 0) break;
        } while( true );
      }
    }
  }
  *(byte *)(param_1 + 0x34c) = *(byte *)(param_1 + 0x34c) & 0xfe;
  return;
LAB_02f18204:
  DAT_0440ae40 = 1;
  lVar2 = *(long *)(lVar2 + 0x40);
  goto joined_r0x02f181a0;
}


