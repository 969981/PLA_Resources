/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7bf4; name: FUN_032a7bf4
 */


undefined4
FUN_032a7bf4(long *param_1,undefined8 *param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if (param_1 == (long *)0x0) {
    FUN_032a6254(param_3,param_2);
    uVar1 = 0;
  }
  else {
    local_60 = *param_2;
    local_58 = param_2[1];
    uStack_50 = param_2[2];
    uVar1 = *(undefined4 *)(param_2 + 3);
    local_48 = param_4;
    FUN_032a6078(param_3,&local_60);
    uVar2 = FUN_032b555c(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_032b555c(param_4);
      if ((uVar2 & 1) == 0) {
        lVar4 = *(long *)(param_3 + 0x138);
        uVar3 = FUN_032b5430(param_4);
        uVar2 = 0;
        if ((uVar3 & 0xffffffff) != 0) {
          uVar2 = (ulong)(lVar4 << 3) / (uVar3 & 0xffffffff);
        }
        uVar1 = (**(code **)(*param_1 + 0x20))
                          (param_1,param_2[0x26],param_2[0x27] + param_2[0x26],
                           *(long *)(param_3 + 0x130),
                           *(long *)(param_3 + 0x138) + *(long *)(param_3 + 0x130),uVar2,uVar1,
                           param_4);
      }
      else {
        uVar1 = FUN_032a7d0c(param_2,param_3,uVar1,param_4,param_1,param_5);
      }
    }
    else {
      uVar1 = FUN_032a82ac(param_2,param_3,uVar1,param_4,param_1);
    }
  }
  return uVar1;
}


