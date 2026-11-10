/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125b934; name: FUN_0125b934
 */


uint FUN_0125b934(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_38;
  
  uVar2 = FUN_02c5fb2c(param_2);
  bVar1 = false;
  local_38 = 0;
  uVar6 = 0;
LAB_0125b964:
  if (bVar1) goto LAB_0125b998;
LAB_0125b968:
  iVar3 = FUN_02c61edc(param_2,uVar2,(long)&local_38 + 4,&local_38,0);
  do {
    if (iVar3 == 3) {
      if (bVar1) {
LAB_0125b9e0:
        return uVar6 & 1;
      }
      local_38 = local_38 & 0xffffffff;
      bVar1 = true;
    }
    else {
      if (iVar3 == 1) {
        if ((uVar6 & 1) == 0) {
          uVar5 = FUN_02c61828(param_2,local_38 & 0xffffffff);
          uVar6 = 0;
          if ((uVar5 & 1) != 0) goto LAB_0125b964;
        }
        uVar6 = 1;
        goto LAB_0125b9e0;
      }
      if (iVar3 != 0) goto LAB_0125b964;
      uVar4 = FUN_02c61828(param_2,local_38 & 0xffffffff);
      uVar6 = uVar6 | uVar4 ^ 1;
      if (!bVar1) goto LAB_0125b968;
    }
LAB_0125b998:
    iVar3 = FUN_02c622ac(param_2,(long)&local_38 + 4,&local_38,0);
  } while( true );
}


