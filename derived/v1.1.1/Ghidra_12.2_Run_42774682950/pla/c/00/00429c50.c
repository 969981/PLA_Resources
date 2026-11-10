/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00429c50; name: FUN_00429c50
 */


undefined8 FUN_00429c50(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_2 = 0;
  lVar3 = FUN_0040de30();
  if (lVar3 != 0) {
    FUN_0040e090(lVar3);
    uVar4 = FUN_0040e240(lVar3);
    lVar5 = FUN_0040e240(lVar3);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      if (*(long *)(param_1 + 0x40) == 0) {
        iVar1 = FUN_0040d260(uVar7,2);
        if (iVar1 == 0) {
          iVar1 = FUN_0040d260(*(undefined8 *)(param_1 + 0x10),5);
          if (iVar1 == 0) {
            uVar2 = *param_2 | 4;
LAB_00429df0:
            *param_2 = uVar2;
            goto LAB_00429df4;
          }
          uVar2 = FUN_0040bbb0(*(undefined8 *)(param_1 + 8),10);
          if (uVar2 != 0xffffffff) {
            if ((uVar2 | 4) != 7) goto LAB_00429ddc;
            goto LAB_00429df4;
          }
        }
        else {
          iVar1 = FUN_0040bbb0(*(undefined8 *)(param_1 + 8),0x18);
          if (iVar1 != -1) {
            if (iVar1 != 0xb) {
LAB_00429ddc:
              uVar2 = *param_2 | 8;
              goto LAB_00429df0;
            }
LAB_00429df4:
            iVar1 = FUN_0042aec0(*(undefined8 *)(param_1 + 8),0x40,lVar3,0);
            if (-1 < iVar1) {
              if (iVar1 == 0) {
                uVar2 = *param_2 | 1;
LAB_00429e84:
                *param_2 = uVar2;
              }
              else if (*(long *)(param_1 + 0x40) == 0) {
                iVar1 = FUN_004104e0(uVar4,*(undefined8 *)(param_1 + 8));
                if ((iVar1 == 0) || (iVar1 = FUN_0042aec0(uVar4,0x40,lVar3,0), iVar1 < 0))
                goto LAB_00429e50;
                if (iVar1 == 0) {
                  uVar2 = *param_2 | 2;
                  goto LAB_00429e84;
                }
              }
              uVar4 = 1;
              goto LAB_00429e54;
            }
          }
        }
      }
      else {
        uVar6 = FUN_0040bfc0();
        iVar1 = FUN_0040cc60(uVar7,uVar6);
        if ((iVar1 < 1) ||
           (iVar1 = FUN_0040cc60(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
           -1 < iVar1)) {
LAB_00429ccc:
          *param_2 = *param_2 | 8;
        }
        else {
          iVar1 = FUN_00424be0(uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40)
                               ,*(undefined8 *)(param_1 + 8),lVar3);
          if (iVar1 == 0) goto LAB_00429e50;
          iVar1 = FUN_0040d220(uVar4);
          if (iVar1 == 0) goto LAB_00429ccc;
        }
        iVar1 = FUN_0042aec0(*(undefined8 *)(param_1 + 0x40),0x40,lVar3,0);
        if (-1 < iVar1) {
          if (iVar1 == 0) {
            *param_2 = *param_2 | 0x10;
          }
          iVar1 = FUN_0040e5a0(uVar4,lVar5,*(undefined8 *)(param_1 + 8),
                               *(undefined8 *)(param_1 + 0x40),lVar3);
          if (iVar1 != 0) {
            iVar1 = FUN_0040d220(lVar5);
            if (iVar1 == 0) {
              *param_2 = *param_2 | 0x20;
            }
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (iVar1 = FUN_0040cc60(*(long *)(param_1 + 0x48),uVar4), iVar1 != 0)) {
              uVar2 = *param_2 | 0x40;
              goto LAB_00429df0;
            }
            goto LAB_00429df4;
          }
        }
      }
    }
  }
LAB_00429e50:
  uVar4 = 0;
LAB_00429e54:
  FUN_0040e1b0(lVar3);
  FUN_0040def0(lVar3);
  return uVar4;
}


