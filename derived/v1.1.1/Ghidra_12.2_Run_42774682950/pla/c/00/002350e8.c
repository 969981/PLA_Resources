/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002350e8; name: FUN_002350e8
 */


void FUN_002350e8(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  if ((((*(long *)(param_1 + 0x18) != 0) &&
       (piVar6 = *(int **)(param_1 + 0x58), piVar6 != (int *)0x0)) &&
      (lVar5 = *(long *)(piVar6 + 2), lVar5 != 0)) &&
     (iVar1 = *piVar6, iVar2 = piVar6[1], 0 < iVar2 + iVar1)) {
    uVar7 = 0;
    while( true ) {
      lVar5 = (**(code **)(**(long **)(lVar5 + uVar7 * 8) + 0x30))();
      if ((lVar5 != 0) && (iVar3 = strcmp((char *)(lVar5 + 0xb0),param_2), iVar3 == 0)) {
        plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + (uVar7 & 0xffffffff) * 8);
        lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
        if ((lVar5 != 0) && (lVar5 = FUN_00244240(), lVar5 != 0)) {
          if (((*(long *)(lVar5 + 8) != 0) && ((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0)) &&
             ((*(byte *)(*(long *)(lVar5 + 8) + 4) >> 1 & 1) != 0)) {
            (**(code **)(*plVar4 + 0x38))(plVar4);
            if (((*(long *)(lVar5 + 8) != 0) && ((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0)) &&
               ((*(byte *)(*(long *)(lVar5 + 8) + 4) >> 1 & 1) != 0)) {
              *(undefined1 *)(lVar5 + 0x54) = 0;
            }
          }
          if (((*(long *)(lVar5 + 0x58) != 0) && ((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0)) &&
             ((*(byte *)(*(long *)(lVar5 + 0x58) + 8) >> 5 & 1) != 0)) {
            (**(code **)(*plVar4 + 0x38))(plVar4);
            if (((*(long *)(lVar5 + 0x58) != 0) && ((*(byte *)(lVar5 + 0x228) >> 2 & 1) == 0)) &&
               ((*(byte *)(*(long *)(lVar5 + 0x58) + 8) >> 5 & 1) != 0)) {
              *(undefined1 *)(lVar5 + 0x98) = 0;
            }
          }
        }
        return;
      }
      if ((ulong)(uint)(iVar2 + iVar1) - 1 == uVar7) break;
      uVar7 = uVar7 + 1;
      lVar5 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    }
  }
  return;
}


