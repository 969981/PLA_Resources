/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00479760; name: FUN_00479760
 */


undefined8 FUN_00479760(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  
  lVar2 = FUN_0041cc20();
  pcVar4 = *(code **)(lVar2 + 0x180);
  if (pcVar4 == (code *)0x0) {
    if (param_4 >> 0x3e != 0) {
      uVar5 = param_4;
      do {
        uVar3 = FUN_0041cc40(param_1);
        uVar1 = FUN_0041cc10(param_1);
        FUN_0047c5b0(param_3,param_2,0x4000000000000000,lVar2,lVar2 + 0x80,lVar2 + 0x100,uVar3,uVar1
                    );
        uVar5 = uVar5 + 0xc000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        param_2 = param_2 + 0x4000000000000000;
      } while (uVar5 >> 0x3e != 0);
      param_4 = param_4 & 0x3fffffffffffffff;
    }
    if (param_4 != 0) {
      uVar3 = FUN_0041cc40(param_1);
      uVar1 = FUN_0041cc10(param_1);
      FUN_0047c5b0(param_3,param_2,param_4,lVar2,lVar2 + 0x80,lVar2 + 0x100,uVar3,uVar1);
    }
  }
  else {
    uVar3 = FUN_0041cc40(param_1);
    (*pcVar4)(param_3,param_2,param_4,lVar2,uVar3);
  }
  return 1;
}


