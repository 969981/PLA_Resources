/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043dbd0; name: FUN_0043dbd0
 */


int FUN_0043dbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  
  FUN_0040e090(param_3);
  puVar3 = (undefined8 *)FUN_0040e240(param_3);
  puVar4 = (undefined8 *)FUN_0040e240(param_3);
  if (((puVar4 != (undefined8 *)0x0) && (lVar5 = FUN_0040c5d0(puVar3,param_1), lVar5 != 0)) &&
     (lVar5 = FUN_0040c5d0(puVar4,param_2), lVar5 != 0)) {
    iVar1 = FUN_0040c130(puVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_0040d1e0(puVar3,1);
      goto LAB_0043ddec;
    }
    iVar1 = FUN_0040d2b0(puVar3);
    if ((iVar1 == 0) && (iVar1 = FUN_0040d2b0(puVar4), iVar1 == 0)) {
      iVar1 = 0;
      goto LAB_0043ddec;
    }
    uVar7 = 0xffffffff;
    do {
      uVar7 = uVar7 + 1;
      iVar1 = FUN_0040cdc0(puVar4,uVar7);
    } while (iVar1 == 0);
    iVar1 = FUN_00410790(puVar4,puVar4,uVar7);
    if (iVar1 != 0) {
      if ((uVar7 & 1) == 0) {
        iVar2 = 1;
        iVar1 = *(int *)(puVar4 + 2);
      }
      else {
        if (*(int *)(puVar3 + 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(uint *)*puVar3 & 7;
        }
        iVar2 = (&DAT_03888620)[uVar6];
        iVar1 = *(int *)(puVar4 + 2);
      }
      iVar9 = iVar2;
      if (iVar1 != 0) {
        *(undefined4 *)(puVar4 + 2) = 0;
        iVar9 = -iVar2;
        if (*(int *)(puVar3 + 2) == 0) {
          iVar9 = iVar2;
        }
      }
      iVar1 = FUN_0040c130(puVar3);
      if (iVar1 == 0) {
        do {
          puVar8 = puVar3;
          uVar7 = 0xffffffff;
          do {
            uVar7 = uVar7 + 1;
            iVar1 = FUN_0040cdc0(puVar8,uVar7);
          } while (iVar1 == 0);
          iVar1 = FUN_00410790(puVar8,puVar8,uVar7);
          if (iVar1 == 0) goto LAB_0043dde8;
          iVar1 = iVar9;
          if ((uVar7 & 1) != 0) {
            uVar7 = 0;
            if (*(int *)(puVar4 + 1) != 0) {
              uVar7 = *(uint *)*puVar4;
            }
            iVar1 = (&DAT_03888620)[uVar7 & 7] * iVar9;
          }
          if (*(int *)(puVar8 + 2) == 0) {
            if (*(int *)(puVar8 + 1) == 0) {
              uVar7 = 0;
              iVar2 = *(int *)(puVar4 + 1);
              goto joined_r0x0043dde0;
            }
            uVar7 = *(uint *)*puVar8;
            if (*(int *)(puVar4 + 1) != 0) goto LAB_0043dd78;
LAB_0043dd98:
            uVar10 = 0;
          }
          else {
            uVar7 = 0;
            if (*(int *)(puVar8 + 1) != 0) {
              uVar7 = *(uint *)*puVar8;
            }
            uVar7 = ~uVar7;
            iVar2 = *(int *)(puVar4 + 1);
joined_r0x0043dde0:
            if (iVar2 == 0) goto LAB_0043dd98;
LAB_0043dd78:
            uVar10 = *(uint *)*puVar4;
          }
          iVar2 = FUN_00412c30(puVar4,puVar4,puVar8,param_3);
          if (iVar2 == 0) goto LAB_0043dde8;
          *(undefined4 *)(puVar8 + 2) = 0;
          iVar9 = -iVar1;
          if ((uVar7 & uVar10 & 2) == 0) {
            iVar9 = iVar1;
          }
          iVar1 = FUN_0040c130(puVar4);
          puVar3 = puVar4;
          puVar4 = puVar8;
        } while (iVar1 == 0);
      }
      else {
        puVar8 = puVar4;
      }
      iVar2 = FUN_0040d220(puVar8);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iVar9;
      }
      goto LAB_0043ddec;
    }
  }
LAB_0043dde8:
  iVar1 = -2;
LAB_0043ddec:
  FUN_0040e1b0(param_3);
  return iVar1;
}


