/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042a830; name: FUN_0042a830
 */


undefined8
FUN_0042a830(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_0040e090(param_5);
  lVar3 = FUN_0040e240(param_5);
  if ((((lVar3 != 0) && (iVar1 = FUN_00426b40(param_1,param_2,0,1), iVar1 != 0)) &&
      (iVar1 = FUN_0040e5a0(0,lVar3,param_1,param_3,param_5), iVar1 != 0)) &&
     (iVar1 = FUN_00411b00(param_1,param_1,lVar3), iVar1 != 0)) {
    if (param_4 == 0) {
      iVar1 = FUN_0040bd20(param_1,1);
    }
    else {
      iVar1 = FUN_00411730(param_1,param_1,param_4);
    }
    if (iVar1 != 0) {
      lVar3 = 1;
      do {
        while( true ) {
          uVar2 = FUN_0040bbb0(param_1,*(undefined2 *)(&UNK_03a04998 + lVar3 * 2));
          if (uVar2 == 0xffffffff) goto LAB_0042a92c;
          if (1 < uVar2) break;
          iVar1 = FUN_00411730(param_1,param_1,param_3);
          lVar3 = 1;
          if (iVar1 == 0) goto LAB_0042a92c;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x800);
      uVar4 = 1;
      goto LAB_0042a930;
    }
  }
LAB_0042a92c:
  uVar4 = 0;
LAB_0042a930:
  FUN_0040e1b0(param_5);
  return uVar4;
}


