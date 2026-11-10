/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042f090; name: FUN_0042f090
 */


ulong FUN_0042f090(long *param_1,long *param_2,long param_3,long param_4,long *param_5,
                  undefined8 param_6,long param_7)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *param_1;
  if ((param_3 == 0) && (param_4 == 0)) {
    if (*(code **)(lVar7 + 0x70) == (code *)0x0) {
      uVar5 = 0x42;
      uVar6 = 0x292;
    }
    else {
      if (lVar7 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x0042f1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar7 + 0x70))(param_1,param_2);
        return uVar3;
      }
      uVar5 = 0x65;
      uVar6 = 0x296;
    }
    uVar4 = 0x7f;
  }
  else {
    if ((lVar7 == *param_2) &&
       (((iVar2 = (int)param_1[4], iVar2 == 0 || ((int)param_2[1] == 0)) ||
        (iVar2 == (int)param_2[1])))) {
      if (param_4 == 0) {
LAB_0042f1e8:
        if (param_7 != 0) {
          lVar11 = 0;
          pcVar8 = *(code **)(lVar7 + 0xf0);
joined_r0x0042f230:
          if (pcVar8 == (code *)0x0) {
            uVar3 = FUN_0042fba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          }
          else {
            uVar3 = (*pcVar8)(param_1,param_2,param_3,param_4,param_5,param_6);
          }
          FUN_0040def0(lVar11);
          return uVar3 & 0xffffffff;
        }
        lVar11 = FUN_0040de90();
        if (lVar11 != 0) {
          pcVar8 = *(code **)(*param_1 + 0xf0);
          param_7 = lVar11;
          goto joined_r0x0042f230;
        }
        uVar5 = 0x44;
        uVar6 = 0x3a9;
      }
      else {
        plVar9 = (long *)*param_5;
        lVar10 = *plVar9;
        plVar1 = param_5;
        lVar11 = param_4;
        while ((lVar7 == lVar10 &&
               ((iVar2 == 0 || ((int)plVar9[1] == 0 || iVar2 == (int)plVar9[1]))))) {
          lVar11 = lVar11 + -1;
          plVar1 = plVar1 + 1;
          if (lVar11 == 0) goto LAB_0042f1e8;
          plVar9 = (long *)*plVar1;
          lVar10 = *plVar9;
        }
        uVar5 = 0x65;
        uVar6 = 0x3a3;
      }
    }
    else {
      uVar5 = 0x65;
      uVar6 = 0x39e;
    }
    uVar4 = 0x122;
  }
  FUN_004014b0(0x10,uVar4,uVar5,"external/openssl/crypto/ec/ec_lib.c",uVar6);
  return 0;
}


