/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00174860; name: FUN_00174860
 */


long FUN_00174860(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_50 [40];
  ulong local_28;
  
  lVar1 = FUN_00179140(param_1[1],local_50,1);
  if ((lVar1 != 0) ||
     ((local_28 = (ulong)local_50[0], local_28 == 0xff &&
      (lVar1 = FUN_00179140(param_1[1],&local_28,8), lVar1 != 0)))) goto LAB_00174930;
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    local_28 = local_28 - 1;
    if (local_28 < 0x29) {
      lVar1 = FUN_00179140(param_1[1],local_50);
      if (lVar1 != 0) {
LAB_00174930:
        uVar3 = FUN_00174820(param_1,"truncated");
        FUN_00155f00(0x407f700000000000,uVar3,0x88);
        FUN_00151fe0(uVar3,0,6);
        FUN_00155a20(uVar3,&DAT_0411ae98,0);
        FUN_001514f0(uVar3,&DAT_039c632e,0xe);
        FUN_00152550(uVar3,0xfffffffe,"charpattern");
        return 1;
      }
      lVar1 = FUN_0016d720(*param_1,local_50,local_28);
    }
    else {
      lVar1 = FUN_0016d8f0(*param_1,local_28);
      lVar2 = FUN_00179140(param_1[1],lVar1 + 0x18,local_28);
      if (lVar2 != 0) goto LAB_00174930;
    }
  }
  return lVar1;
}


