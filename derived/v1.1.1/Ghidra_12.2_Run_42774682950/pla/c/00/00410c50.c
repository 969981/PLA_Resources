/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00410c50; name: FUN_00410c50
 */


bool FUN_00410c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  FUN_0040e090(param_4);
  lVar5 = FUN_0040e240(param_4);
  lVar6 = FUN_0040e240(param_4);
  if (((lVar6 == 0) || (lVar7 = FUN_0040c5d0(lVar5,param_2), lVar7 == 0)) ||
     (lVar7 = FUN_0040c5d0(lVar6,param_3), lVar7 == 0)) {
LAB_00410de4:
    bVar1 = false;
  }
  else {
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x10) = 0;
    iVar2 = FUN_0040cc60(lVar5,lVar6);
    lVar7 = lVar5;
    if (-1 < iVar2) {
      lVar7 = lVar6;
      lVar6 = lVar5;
    }
    iVar2 = FUN_0040c130(lVar7);
    if (iVar2 == 0) {
      iVar2 = 0;
      do {
        while( true ) {
          iVar3 = FUN_0040d2b0(lVar6);
          iVar4 = FUN_0040d2b0(lVar7);
          if (iVar3 == 0) break;
          if (iVar4 == 0) {
            iVar3 = FUN_004104e0(lVar7,lVar7);
          }
          else {
            iVar3 = FUN_00411b00(lVar6,lVar6,lVar7);
            if (iVar3 == 0) goto LAB_00410de4;
            iVar3 = FUN_004104e0(lVar6,lVar6);
          }
          if (iVar3 == 0) goto LAB_00410de4;
LAB_00410d6c:
          iVar3 = FUN_0040cc60(lVar6,lVar7);
          lVar5 = lVar6;
          if (-1 < iVar3) {
            lVar5 = lVar7;
            lVar7 = lVar6;
          }
          lVar6 = lVar7;
          iVar3 = FUN_0040c130(lVar5);
          lVar7 = lVar5;
          if (iVar3 != 0) goto LAB_00410dbc;
        }
        iVar3 = FUN_004104e0(lVar6,lVar6);
        if (iVar4 != 0) {
          if (iVar3 != 0) goto LAB_00410d6c;
          goto LAB_00410de4;
        }
        if ((iVar3 == 0) || (iVar3 = FUN_004104e0(lVar7,lVar7), iVar3 == 0)) goto LAB_00410de4;
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0040c130(lVar7);
      } while (iVar3 == 0);
LAB_00410dbc:
      if (iVar2 == 0) {
        if (lVar6 == 0) goto LAB_00410de4;
      }
      else {
        iVar2 = FUN_00410600(lVar6,lVar6,iVar2);
        bVar1 = false;
        if ((lVar6 == 0) || (iVar2 == 0)) goto LAB_00410de8;
      }
    }
    lVar6 = FUN_0040c5d0(param_1,lVar6);
    bVar1 = lVar6 != 0;
  }
LAB_00410de8:
  FUN_0040e1b0(param_4);
  return bVar1;
}


