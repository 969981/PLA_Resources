/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042ce50; name: FUN_0042ce50
 */


long * FUN_0042ce50(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    FUN_004014b0(0x10,0xb2,0x43,"external/openssl/crypto/ec/ec_key.c",0x4c);
  }
  else {
    if (*param_2 != *param_1) {
      pcVar5 = *(code **)(*param_1 + 0x18);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_1);
      }
      if (((long *)param_1[3] != (long *)0x0) &&
         (pcVar5 = *(code **)(*(long *)param_1[3] + 0x178), pcVar5 != (code *)0x0)) {
        (*pcVar5)(param_1);
      }
    }
    if (param_2[3] != 0) {
      uVar2 = FUN_0042e180();
      FUN_0042dac0(param_1[3]);
      lVar3 = FUN_0042d990(uVar2);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        return (long *)0x0;
      }
      iVar1 = FUN_0042dce0(lVar3,param_2[3]);
      if (iVar1 == 0) {
        return (long *)0x0;
      }
      if (param_2[4] != 0) {
        FUN_0042db80(param_1[4]);
        lVar3 = FUN_0042df90(param_2[3]);
        param_1[4] = lVar3;
        if (lVar3 == 0) {
          return (long *)0x0;
        }
        iVar1 = FUN_0042e090(lVar3,param_2[4]);
        if (iVar1 == 0) {
          return (long *)0x0;
        }
      }
      lVar3 = param_2[5];
      if (lVar3 != 0) {
        lVar4 = param_1[5];
        if (lVar4 == 0) {
          lVar4 = FUN_0040c260();
          param_1[5] = lVar4;
          if (lVar4 == 0) {
            return (long *)0x0;
          }
          lVar3 = param_2[5];
        }
        lVar3 = FUN_0040c5d0(lVar4,lVar3);
        if (lVar3 == 0) {
          return (long *)0x0;
        }
        if ((*(code **)(*(long *)param_2[3] + 0x170) != (code *)0x0) &&
           (iVar1 = (**(code **)(*(long *)param_2[3] + 0x170))(param_1,param_2), iVar1 == 0)) {
          return (long *)0x0;
        }
      }
    }
    param_1[6] = param_2[6];
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
    iVar1 = FUN_00400af0(8,param_1 + 8,param_2 + 8);
    if (iVar1 != 0) {
      lVar3 = *param_2;
      if (lVar3 != *param_1) {
        *param_1 = lVar3;
        lVar3 = *param_2;
      }
      if ((*(code **)(lVar3 + 0x20) == (code *)0x0) ||
         (iVar1 = (**(code **)(lVar3 + 0x20))(param_1,param_2), iVar1 != 0)) {
        return param_1;
      }
    }
  }
  return (long *)0x0;
}


