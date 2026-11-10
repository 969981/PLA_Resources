/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a4270; name: FUN_013a4270
 */


void FUN_013a4270(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = (param_3 - param_2 >> 3) * -0x50295fad40a57eb5;
  if ((ulong)((param_1[2] - *param_1 >> 3) * -0x50295fad40a57eb5) < uVar4) {
    FUN_013a4614(param_1);
    uVar1 = FUN_013a4768(param_1,uVar4);
    FUN_013a3f80(param_1,uVar1);
    if (param_2 != param_3) {
      lVar2 = param_1[1];
      do {
        FUN_013a400c(param_1 + 3,lVar2,param_2);
        param_2 = param_2 + 0x318;
        lVar2 = param_1[1] + 0x318;
        param_1[1] = lVar2;
      } while (param_3 != param_2);
    }
  }
  else {
    lVar2 = param_1[1] - *param_1 >> 3;
    if ((ulong)(lVar2 * -0x50295fad40a57eb5) < uVar4) {
      lVar2 = param_2 + lVar2 * 8;
      FUN_013a4550(param_2,lVar2);
      if (lVar2 != param_3) {
        lVar3 = param_1[1];
        do {
          FUN_013a400c(param_1 + 3,lVar3,lVar2);
          lVar2 = lVar2 + 0x318;
          lVar3 = param_1[1] + 0x318;
          param_1[1] = lVar3;
        } while (param_3 != lVar2);
      }
    }
    else {
      lVar3 = FUN_013a4550(param_2,param_3);
      lVar2 = param_1[1];
      while (lVar2 != lVar3) {
        lVar2 = lVar2 + -0x318;
        FUN_01395560(lVar2);
      }
      param_1[1] = lVar3;
    }
  }
  return;
}


