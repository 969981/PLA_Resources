/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00232a48; name: FUN_00232a48
 */


void FUN_00232a48(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar4 + 8);
  if (lVar4 != lVar8) {
    do {
      lVar9 = *(long *)(lVar8 + 8);
      if (0 < *(int *)(lVar8 + 0x48)) {
        lVar7 = *(long *)(lVar8 + 0x10);
        iVar10 = 0;
        lVar4 = lVar8 + 0x38;
        iVar11 = 1;
        lVar5 = *(long *)(lVar8 + 0x40);
        if (lVar4 != lVar5) goto LAB_00232ae4;
LAB_00232afc:
        plVar12 = (long *)0x0;
        do {
          lVar5 = (**(code **)(**(long **)(lVar7 + 0x18) + 0x78))
                            (*(long **)(lVar7 + 0x18),plVar12[3],1);
          lVar2 = *plVar12;
          if (*(long *)(lVar2 + 0x38) == 0) {
            if (plVar12[1] == 0) {
              if (plVar12[2] == 0) goto LAB_00232b30;
              FUN_00231b60(lVar2,param_2,lVar7,plVar12[2],lVar5);
              bVar1 = *(byte *)(lVar5 + 0x62);
            }
            else {
              FUN_00231944(lVar2,param_2,lVar7,plVar12[1],lVar5,*(undefined1 *)(lVar8 + 100));
              if (*(char *)(lVar8 + 0x65) == '\0') goto LAB_00232b30;
              *(ushort *)(*plVar12 + 0x60) = *(ushort *)(*plVar12 + 0x60) & 0xfffb;
              *(ushort *)(*plVar12 + 0x60) = *(ushort *)(*plVar12 + 0x60) & 0xfffd;
              bVar1 = *(byte *)(lVar5 + 0x62);
            }
          }
          else {
LAB_00232b30:
            bVar1 = *(byte *)(lVar5 + 0x62);
          }
          if ((bVar1 >> 1 & 1) != 0) {
            uVar13 = *(undefined4 *)(*plVar12 + 0x28);
            uVar3 = FUN_00244240(lVar5);
            FUN_002487b4(uVar13,uVar3,param_2,lVar7);
          }
          iVar10 = iVar10 + 1;
          iVar11 = iVar11 + 1;
          if (*(int *)(lVar8 + 0x48) <= iVar10) {
            lVar4 = *(long *)(param_1 + 0x10);
            break;
          }
          lVar5 = *(long *)(lVar8 + 0x40);
          if (lVar4 == lVar5) goto LAB_00232afc;
LAB_00232ae4:
          iVar6 = iVar11;
          while (iVar6 = iVar6 + -1, iVar6 != 0) {
            lVar5 = *(long *)(lVar5 + 8);
            if (lVar4 == lVar5) goto LAB_00232afc;
          }
          plVar12 = (long *)(lVar5 + -0x20);
        } while( true );
      }
      lVar8 = lVar9;
    } while (lVar4 != lVar9);
  }
  return;
}


