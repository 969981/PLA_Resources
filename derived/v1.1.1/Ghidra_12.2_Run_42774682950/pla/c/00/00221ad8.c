/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00221ad8; name: FUN_00221ad8
 */


byte FUN_00221ad8(long param_1,int param_2,undefined4 param_3,undefined2 param_4,uint param_5,
                 byte param_6)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 local_54;
  
  iVar1 = 0x2d;
  if ((param_2 == 0x2011 & param_6) == 0) {
    iVar1 = param_2;
  }
  uVar4 = FUN_00221cb4(param_1,&local_54,param_4,iVar1);
  if ((uVar4 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    lVar7 = param_1 + 0x30;
    lVar5 = FUN_00223480(lVar7,iVar1,param_3,local_54);
    if (lVar5 == 0) {
      plVar6 = (long *)FUN_002234d0(lVar7,iVar1,param_3,local_54);
      if (plVar6 == (long *)0x0) {
        plVar8 = *(long **)(param_1 + 0x78);
        plVar6 = (long *)(param_1 + 0x70);
        if (plVar6 != plVar8) {
          iVar9 = 0;
          bVar3 = *(byte *)(plVar8 + 7);
          plVar2 = (long *)plVar8[1];
          while( true ) {
            if ((bVar3 & 0x11) == 0) {
              if (plVar6 != plVar8) {
                lVar5 = *plVar2;
                *(long **)(*plVar8 + 8) = plVar2;
                *plVar2 = *plVar8;
                *(long **)(lVar5 + 8) = plVar8;
                *plVar8 = lVar5;
              }
              FUN_00223714(lVar7,(int)plVar8[6],*(undefined2 *)((long)plVar8 + 0x36),
                           *(undefined2 *)((long)plVar8 + 0x34));
              iVar9 = iVar9 + 1;
            }
            if (plVar6 == plVar2) break;
            bVar3 = *(byte *)(plVar2 + 7);
            plVar8 = plVar2;
            plVar2 = (long *)plVar2[1];
          }
          if (iVar9 != 0) {
            bVar3 = FUN_00221ad8(param_1,iVar1,param_3,local_54,param_5,0);
            goto LAB_00221b7c;
          }
        }
        bVar3 = 0;
        *(undefined4 *)(param_1 + 0x1bcc) = 1;
      }
      else {
        *(byte *)(plVar6 + 7) = *(byte *)(plVar6 + 7) | 3;
        if (-1 < (int)param_5) {
          *(uint *)((long)plVar6 + 0x3c) =
               *(uint *)((long)plVar6 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
        }
        lVar7 = *plVar6;
        plVar8 = (long *)(param_1 + 0x50);
        *plVar6 = *plVar8;
        *(long **)(lVar7 + 8) = plVar8;
        *(long **)(*plVar8 + 8) = plVar6;
        *plVar8 = lVar7;
        bVar3 = 1;
      }
    }
    else {
      bVar3 = *(byte *)(lVar5 + 0x38);
      *(byte *)(lVar5 + 0x38) = bVar3 | 1;
      if (-1 < (int)param_5) {
        *(uint *)(lVar5 + 0x3c) = *(uint *)(lVar5 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      }
      bVar3 = bVar3 >> 1 & 1;
    }
  }
LAB_00221b7c:
  return bVar3 & 1;
}


