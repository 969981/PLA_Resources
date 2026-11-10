/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042a960; name: FUN_0042a960
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0042a960(undefined8 param_1,int param_2,long param_3,int param_4,int *param_5)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int local_64;
  
  iVar3 = FUN_0040d260(param_1,2);
  if ((iVar3 != 0) || (iVar3 = FUN_0040d260(param_1,3), iVar3 != 0)) {
    return 1;
  }
  iVar3 = FUN_0040d2b0(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  uVar7 = FUN_0040bfc0();
  iVar3 = FUN_0040cc60(param_1,uVar7);
  if (iVar3 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    iVar3 = FUN_0040c070(param_1);
    if (0xea2 < iVar3) {
      param_2 = 3;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    if (0x540 < iVar3) {
      param_2 = 4;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    if (0x1db < iVar3) {
      param_2 = 5;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    if (399 < iVar3) {
      param_2 = 6;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    if (0x15a < iVar3) {
      param_2 = 7;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    if (0x133 < iVar3) {
      param_2 = 8;
      goto joined_r0x0042ac6c;
    }
    iVar3 = FUN_0040c070(param_1);
    param_2 = 0x1b;
    if (iVar3 < 0x37) {
      param_2 = 0x22;
    }
    if (param_4 != 0) goto LAB_0042aa00;
joined_r0x0042aa6c:
    lVar8 = param_3;
    if ((param_3 != 0) || (lVar8 = FUN_0040de30(), lVar8 != 0)) {
      FUN_0040e090(lVar8);
      uVar7 = FUN_0040e240(lVar8);
      uVar9 = FUN_0040e240(lVar8);
      uVar10 = FUN_0040e240(lVar8);
      lVar11 = FUN_0040e240(lVar8);
      if (((lVar11 == 0) ||
          (((lVar12 = FUN_0040c5d0(uVar7,param_1), lVar12 == 0 ||
            (iVar3 = FUN_0040be30(uVar7,1), iVar3 == 0)) ||
           (lVar12 = FUN_0040c5d0(uVar9,param_1), lVar12 == 0)))) ||
         (iVar3 = FUN_0040be30(uVar9,3), iVar3 == 0)) {
        lVar12 = 0;
        uVar13 = 0xffffffff;
      }
      else {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          iVar5 = FUN_0040cdc0(uVar7,iVar3);
        } while (iVar5 == 0);
        iVar5 = FUN_00410790(uVar10,uVar7,iVar3);
        if (iVar5 == 0) {
          lVar12 = 0;
LAB_0042ac94:
          uVar13 = 0xffffffff;
        }
        else {
          lVar12 = FUN_0040d8e0();
          if ((lVar12 == 0) || (iVar5 = FUN_0040d9b0(lVar12,param_1,lVar8), iVar5 == 0))
          goto LAB_0042ac94;
          if (param_2 < 1) {
            uVar13 = 1;
          }
          else {
            iVar5 = 0;
            if (param_5 != (int *)0x0) {
              local_64 = 0;
              iVar5 = FUN_00426fa0(lVar11,uVar9);
              while (((iVar5 != 0 && (iVar5 = FUN_0040bd20(lVar11,2), iVar5 != 0)) &&
                     (iVar5 = FUN_004250f0(lVar11,lVar11,uVar10,param_1,lVar8,lVar12), iVar5 != 0)))
              {
                iVar5 = FUN_0040d220(lVar11);
                if ((iVar5 == 0) && (iVar5 = FUN_0040cc60(lVar11,uVar7), iVar5 != 0)) {
                  uVar4 = -iVar3;
                  do {
                    bVar2 = 0xfffffffe < uVar4;
                    uVar4 = uVar4 + 1;
                    if (bVar2) goto LAB_0042aea8;
                    iVar5 = FUN_00413180(lVar11,lVar11,lVar11,param_1,lVar8);
                    if (iVar5 == 0) goto LAB_0042ac94;
                    iVar5 = FUN_0040d220(lVar11);
                    if (iVar5 != 0) goto LAB_0042aea8;
                    iVar5 = FUN_0040cc60(lVar11,uVar7);
                  } while (iVar5 != 0);
                }
                if (*param_5 == 2) {
                  iVar5 = (**(code **)(param_5 + 4))(1,local_64,param_5);
                  if (iVar5 == 0) break;
                }
                else {
                  if (*param_5 != 1) break;
                  if (*(code **)(param_5 + 4) != (code *)0x0) {
                    (**(code **)(param_5 + 4))(1,local_64,*(undefined8 *)(param_5 + 2));
                  }
                }
                local_64 = local_64 + 1;
                uVar13 = 1;
                if (local_64 == param_2) goto joined_r0x0042aeac;
                iVar5 = FUN_00426fa0(lVar11,uVar9);
              }
              goto LAB_0042ac94;
            }
            do {
              iVar6 = FUN_00426fa0(lVar11,uVar9);
              if (((iVar6 == 0) || (iVar6 = FUN_0040bd20(lVar11,2), iVar6 == 0)) ||
                 (iVar6 = FUN_004250f0(lVar11,lVar11,uVar10,param_1,lVar8,lVar12), iVar6 == 0))
              goto LAB_0042ac94;
              iVar6 = FUN_0040d220(lVar11);
              if ((iVar6 == 0) && (iVar6 = FUN_0040cc60(lVar11,uVar7), iVar6 != 0)) {
                uVar4 = -iVar3;
                do {
                  bVar2 = 0xfffffffe < uVar4;
                  uVar4 = uVar4 + 1;
                  if (bVar2) goto LAB_0042aea8;
                  iVar6 = FUN_00413180(lVar11,lVar11,lVar11,param_1,lVar8);
                  if (iVar6 == 0) goto LAB_0042ac94;
                  iVar6 = FUN_0040d220(lVar11);
                  if (iVar6 != 0) goto LAB_0042aea8;
                  iVar6 = FUN_0040cc60(lVar11,uVar7);
                } while (iVar6 != 0);
              }
              iVar5 = iVar5 + 1;
              uVar13 = 1;
            } while (iVar5 != param_2);
          }
        }
joined_r0x0042aeac:
        if (lVar8 == 0) goto LAB_0042ac4c;
      }
      FUN_0040e1b0(lVar8);
      if (param_3 == 0) {
        FUN_0040def0(lVar8);
      }
      goto LAB_0042ac4c;
    }
  }
  else {
joined_r0x0042ac6c:
    if (param_4 == 0) goto joined_r0x0042aa6c;
LAB_0042aa00:
    lVar12 = 2;
    do {
      uVar1 = *(undefined2 *)(&UNK_03a04998 + lVar12);
      uVar4 = FUN_0040bbb0(param_1,uVar1);
      uVar13 = (ulong)uVar4;
      if (uVar4 == 0xffffffff) goto LAB_0042ac3c;
      if (uVar4 == 0) {
        uVar13 = FUN_0040d260(param_1,uVar1);
        return uVar13;
      }
      lVar12 = lVar12 + 2;
    } while (lVar12 != 0x1000);
    if (param_5 == (int *)0x0) goto joined_r0x0042aa6c;
    if (*param_5 == 2) {
      uVar13 = 0xffffffff;
      iVar3 = (**(code **)(param_5 + 4))(1,0xffffffff,param_5);
      if (iVar3 == 0) {
LAB_0042ac3c:
        lVar12 = 0;
        goto LAB_0042ac4c;
      }
      goto joined_r0x0042aa6c;
    }
    if (*param_5 == 1) {
      if (*(code **)(param_5 + 4) != (code *)0x0) {
        (**(code **)(param_5 + 4))(1,0xffffffff,*(undefined8 *)(param_5 + 2));
      }
      goto joined_r0x0042aa6c;
    }
  }
  lVar12 = 0;
  uVar13 = 0xffffffff;
LAB_0042ac4c:
  FUN_0040d960(lVar12);
  return uVar13;
LAB_0042aea8:
  uVar13 = 0;
  goto joined_r0x0042aeac;
}


