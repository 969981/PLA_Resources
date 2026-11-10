/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b320; name: FUN_0045b320
 */


undefined8 FUN_0045b320(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    if (param_4 == (int *)0x0) {
      iVar6 = 0;
      iVar1 = FUN_00407950(param_1);
      if (iVar1 < 1) goto LAB_0045b434;
    }
    else {
      iVar6 = *param_4;
      if (iVar6 < 0) {
        iVar6 = -1;
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_00407950(param_1);
      if (iVar1 <= iVar6) goto LAB_0045b434;
    }
    if (param_4 == (int *)0x0) {
      lVar3 = 0;
      do {
        lVar4 = FUN_00407970(param_1,iVar6);
        FUN_0045b5c0();
        iVar1 = FUN_00407f40();
        if (iVar1 == param_2) {
          if (lVar3 != 0) {
            if (param_3 == (undefined4 *)0x0) {
              return 0;
            }
            uVar2 = 0xfffffffe;
            goto LAB_0045b448;
          }
          lVar3 = lVar4;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_00407950(param_1);
      } while (iVar6 < iVar1);
LAB_0045b408:
      if (lVar3 != 0) {
        if (param_3 != (undefined4 *)0x0) {
          uVar2 = FUN_0045b5e0(lVar3);
          *param_3 = uVar2;
        }
        uVar5 = FUN_0045b220(lVar3);
        return uVar5;
      }
    }
    else {
      do {
        lVar3 = FUN_00407970(param_1,iVar6);
        FUN_0045b5c0();
        iVar1 = FUN_00407f40();
        if (iVar1 == param_2) {
          *param_4 = iVar6;
          goto LAB_0045b408;
        }
        iVar6 = iVar6 + 1;
        iVar1 = FUN_00407950(param_1);
      } while (iVar6 < iVar1);
    }
  }
LAB_0045b434:
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
LAB_0045b448:
    *param_3 = uVar2;
  }
  return 0;
}


